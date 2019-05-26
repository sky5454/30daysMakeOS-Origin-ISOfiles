UCHAR *nask(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1);
UCHAR *LL(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1);
UCHAR *output(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, UCHAR *list0, UCHAR *list1);
void *GO_memcpy(void *s, const void *ct, unsigned int n);

void errmsgout(const UCHAR *s)
{
	int l =	GO_strlen(s);
	char flag = 0;
	GO_FILE *stream = &GO_stderr;
	if (l >= stream->p1 - stream->p) {
		l = stream->p1 - stream->p;
		flag++;
	}
	if (l > 0) {
		GO_memcpy(stream->p, s, l);
		stream->p += l;
	}
	if (flag)
		GOL_sysabort(3 /* GO_TERM_ERROVER */);
	return;
}

void errmsgout_s_NL(const UCHAR *msg, const UCHAR *s)
{
	errmsgout(msg);
	errmsgout(s);
	errmsgout(NL);
	return;
}

int nask_errors = 0;

int main1(int argc, UCHAR **argv, UCHAR *src0)
{
	UCHAR *src1, *dest0, *dest1;
	UCHAR *tmp0, *tmp1, *list0, *list1;
	int len;

	tmp0 = src0 + MAX_SRCSIZ;
	dest0 = tmp0 + MAX_TMPSIZ;
	list0 = dest0 + MAX_BINSIZ;
	if (argc < 2 || argc > 4) {
		errmsgout("usage : >nask source [object/binary] [list]" NL);
		return 16;
	}
	len = GOLD_getsize(argv[1]);
	if (len == -1) {
		errmsgout_s_NL("NASK : can't open ", argv[1]);
		return 17;
	}
	if (len > MAX_SRCSIZ) {
		errmsgout_s_NL("NASK : too large ", argv[1]);
		return 17;
	}
	if (GOLD_read(argv[1], len, src0)) {
		errmsgout_s_NL("NASK : can't read ", argv[1]);
		return 17;
	}
	src1 = src0 + len;

	list1 = nask(src0, src1, list0, list0 + MAX_LSTSIZ);
	if (list1 == NULL) {
over_listbuf:
		errmsgout("NASK : LSTBUF is not enough" NL);
		return 19;
	}

	tmp1 = LL(list0, list1, tmp0, tmp0 + MAX_TMPSIZ);
	if (tmp1 == NULL) {
over_tmpbuf:
		errmsgout("NASK : TMPBUF is not enough" NL);
		return 19;
	}

	dest1 = output(tmp0, tmp1, dest0, dest0 + MAX_BINSIZ, list0, list0 + MAX_LSTSIZ - 2);
	if (dest1 == NULL) {
		errmsgout("NASK : BINBUF is not enough" NL);
		return 19;
	}
	if (argc == 4) {
		tmp1 = list0;
		if (list0[MAX_LSTSIZ - 1])
			goto over_listbuf;
		while (*tmp1 != '\0' && tmp1 < list0 + MAX_LSTSIZ)
			tmp1++;
		if (GOLD_write_t(argv[3], tmp1 - list0, list0)) {
			errmsgout("NASK : list output error" NL);
			return 20;
		}
	}
	if (argc >= 3) {
		if (dest1 < dest0)
			dest1 = dest0;
		if (GOLD_write_b(argv[2], dest1 - dest0, dest0)) {
			errmsgout("NASK : object/binary output error" NL);
			return 21;
		}
	}

	if (nask_errors) {
//		GO_spritf(src0, "NASK : %d errors." NL, nask_errors);
//		errmsgout(src0);
		UCHAR strbuf[16];
		len = nask_errors;
		errmsgout("NASK : ");
		src1 = &strbuf[15];
		*src1 = '\0';
		do {
			*--src1 = (len % 10) + '0';
		} while (len /= 10);
		errmsgout(src1);
		errmsgout(" errors." NL);
		return 1;
	}

	return 0;
}

void GOL_sysabort(unsigned char termcode)
{
	static char *termmsg[] = {
		"",
		"[TERM_WORKOVER]\n",
		"[TERM_OUTOVER]\n",
		"[TERM_ERROVER]\n",
		"[TERM_BUGTRAP]\n",
		"[TERM_SYSRESOVER]\n",
		"[TERM_ABORT]\n"
	};

	GO_stderr.p1 += 128; /* 予備に取っておいた分を復活 */
	/* バッファを出力 */
	if (termcode <= 6)
		errmsgout(termmsg[termcode]);
	if (GO_stderr.p - GO_stderr.p0)
		GOLD_write_t(NULL, GO_stderr.p - GO_stderr.p0, GO_stderr.p0);
	GOLD_exit((termcode == 0) ? GOL_retcode : 1);
}
