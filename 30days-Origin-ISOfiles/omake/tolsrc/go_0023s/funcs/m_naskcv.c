char *wordsrch(char *s, const char *t);
char *cwordsrch(char *s, const char *t);
void cnv_lea(char *p);

static char leaopt = 0;

UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags)
{
	UCHAR *p, *q;
	int obj = 0, i, c;
	UCHAR farproc = 0;
	static char *ERASELIST[] = {
		"ENDP", "ENDS", "END", "ASSUME", NULL
	};
	static UCHAR linebuf0[1000];
	UCHAR *linebuf = linebuf0;

	leaopt = flags.opt[FLAG_L];
	dest0_ = dest0;
	dest1_ = dest1;

	output(16 + LEN_NL, (flags.opt[FLAG_W]) ? "[FORMAT \"WCOFF\"]" NL : "[FORMAT \"BIN\"  ]" NL);
	output(18 + LEN_NL + 12 + LEN_NL + 10 + LEN_NL + 9 + LEN_NL,
		"[INSTRSET \"i486p\"]" NL
		"[OPTIMIZE 1]" NL
		"[OPTION 1]" NL
		"[BITS 32]" NL
	);

	for (;;) {
		p = src0;
		for (;;) {
			if (p >= src1)
				break;
			if (*p++ == '\n')
				break;
		}
		if (p == src0)
			break;
		if (p - src0 > (int) (sizeof linebuf0) - 1) {
			/* 長すぎる...処理に困るのでとりあえず素通りする */
			output(p - src0, src0);
			src0 = p;
			continue;
		}
		q = linebuf;
		do {
			*q++ = *src0++;
		} while (src0 < p);
		*q = '\0';
		if (strchr(linebuf, '\"'))
			goto output; // 変換しない

		// 文中に「"」が無かったので、遠慮なく変換

		// segment文検出
		if (cwordsrch(linebuf, "SEGMENT")) {
			output(15 + LEN_NL, cwordsrch(linebuf, "CODE")
				? "[SECTION .text]" NL : "[SECTION .data]" NL);
			continue;
		}

		// proc文検出
		if (p = cwordsrch(linebuf, "PROC")) {
			farproc = (cwordsrch(p, "FAR") != NULL);
			for (p = linebuf; *p <= ' '; p++);
			while (*p > ' ')
				p++;
			p[0] = ':';
			#if (LEN_NL == 1)
				p[1] = '\n';
				p[2] = '\0';
			#else
				p[1] = '\r';
				p[2] = '\n';
				p[3] = '\0';
			#endif
		//	goto output; // 他の変換はもうしない
		}

		for (i = 0; ERASELIST[i]; i++) {
			if (cwordsrch(linebuf, ERASELIST[i]))
				goto noout; // 一切出力しない
		}

		// ret文検出
		if (p = cwordsrch(linebuf, "RET")) {
			p += 3;
			for (q = p; *q; q++);
			while (p <= q) {
				*(q + 1) = *q;
				q--;
			}
			p[-3] = 'R';
			p[-2] = 'E';
			p[-1] = 'T';
			p[ 0] = farproc ? 'F' : 'N';
		}

		// ローカルラベル変換
		while (p = strchr(linebuf, '#')) {
			*p = '.';
		}

		// LEA文検出
		if (p = cwordsrch(linebuf, "LEA"))
			cnv_lea(p);

		/* 簡易判定方法でパラメータを検出 */
		/* ・最後に":"が付いているニーモニックはラベル宣言と解釈 */
		p = linebuf;
		do {
			while (*p != '\0' && *p <= ' ')
				p++;
			while (*p > ' ')
				p++;
			if (*p == '\0')
				break;
		} while (p[-1] == ':');
		if (*p != '\0') {
			while (q = cwordsrch(p, "OR")) {
				q[0] = '|';
				q[1] = ' ';
			}
			while (q = cwordsrch(p, "AND")) {
				q[0] = '&';
				q[1] = ' ';
				q[2] = ' ';
			}
			while (q = cwordsrch(p, "XOR")) {
				q[0] = '^';
				q[1] = ' ';
				q[2] = ' ';
			}
			while (q = cwordsrch(p, "NOT")) {
				q[0] = '~';
				q[1] = ' ';
				q[2] = ' ';
			}
		}

		// ptr消去
		while (p = cwordsrch(linebuf, "PTR")) {
			p[0] = p[1] = p[2] = ' ';
		}

		// offset消去
		while (p = cwordsrch(linebuf, "OFFSET")) {
			p[0] = p[1] = p[2] = p[3] = p[4] = p[5] = ' ';
		}

		// dword, word, byte消去 (大文字は残す)
		if (flags.opt[FLAG_S] != 0 && strchr(linebuf, '[') == NULL) {
			while (p = wordsrch(linebuf, "dword")) {
				p[0] = ' ';
			}
			while (p = wordsrch(linebuf, "word")) {
				p[0] = p[1] = p[2] = p[3] = ' ';
			}
			while (p = wordsrch(linebuf, "byte")) {
				p[0] = p[1] = p[2] = p[3] = ' ';
			}
		}

output:
		output(strlen(linebuf), linebuf);
noout:
		;
	}
	output(LEN_NL, NL);
	return dest0_;
}

void cnv_lea(char *p)
// LEA文検出
{
	char *q;

	// LEA文からセグメントオーバーライドプリフィクスを取り除く
	if ((q = strstr(p + 3, "S:[")) || (q = strstr(p + 3, "s:["))) {
		q[-1] = ' '; // 'E', 'C', 'S', 'D', 'F', or 'G'
		q[ 0] = ' '; // 'S'
		q[ 1] = ' '; // ':'
	}

	// LEA文で、定数MOVに変換可能なら変換する
	if (leaopt && (q = strchr(p + 3, '['))) {
		char *q0 = q++;
		do {
			while ((*q == '+' || *q == '-' || *q == '*'
				|| *q == '/' || *q == '(' || *q == ')'
				|| *q <= ' ') && *p != '\0')
				q++;
			if ('0' <= *q && *q <= '9') {
				while (*q > ' ' && *q != '+' && *q != '-'
					&& *q != '*' && *q != '/' && *q != ']')
					q++;
			} else
				break;
		} while (*q != ']' && *q != '\0');
		if (*q == ']') {
			p[0] = 'M';
			p[1] = 'O';
			p[2] = 'V';
			*q0 = ' ';
			*q = ' ';
		}
	}

	// LEA文中の「dword」、「word」、「byte」の消去
	if (q = cwordsrch(p, "DWORD")) {
		q[4] = ' ';
		goto LEA_space4;
	}
	if (q = cwordsrch(p, "WORD"))
		goto LEA_space4;
	if (q = cwordsrch(p, "BYTE")) {
LEA_space4:
		q[0] = ' ';
		q[1] = ' ';
		q[2] = ' ';
		q[3] = ' ';
	}
	return;
}

char *wordsrch(char *s, const char *t)
// sの中にtがあるかどうかを調べる
// strstrとの違いは、wordsrchが単語単位で検索することである
{
	char *p = s, c;
	int l = strlen(t);

	for (p = s; p = strstr(p, t); p += l) {

		// 単語の左は語の切れ目か？
		if (p > s) {
			c = p[-1];
			if (c > ' ' && c != ',')
				continue;
		}

		// 単語の右は語の切れ目か？
		c = p[l];
		if (c <= ' ' || c == ',')
			return p;
	}

	return NULL;
}

unsigned char tolower(unsigned char c)
{
	return ('A' <= c && c <= 'Z') ? c + ('a' - 'A') : c;
}

char *cwordsrch(char *s, const char *c)
// 大文字を指定すれば小文字でも探す
{
	char *r, *p, l[100];

	if ((r = wordsrch(s, c)) == NULL) {
		for (p = l; *p++ = tolower(*c++); );
		r = wordsrch(s, l);
	}
	return r;
}
