static void cmdline(UCHAR *s0, UCHAR *s1, struct str_works *work);
static UCHAR *copystr(UCHAR *s0, UCHAR *s1, struct str_works *work);
static void registlabel(struct str_obj *obj, struct str_works *work);
static int getdec(const UCHAR *p);
static int get32l(const UCHAR *p);
static int get32b(const UCHAR *p);

static UCHAR *copystr(UCHAR *s0, UCHAR *s1, struct str_works *work)
{
	UCHAR *r = work->filebuf, *p = r;
	if (r + (s1 - s0) + 1 > work->filebuf1)
		errout("filebuf over!" NL);
	while (s0 < s1)
		*p++ = *s0++;
	*p++ = '\0';
	work->filebuf = p;
	return r;
}

static void cmdline0(UCHAR *s0, UCHAR *s1, struct str_works *work)
{
	UCHAR *t, *p, *q, *r, *s;
	int len = s1 - s0;
	int i, j;
	struct str_obj *obj, *obj0;
	if (len <= 0)
		return;
	if (len > 1 && s0[0] == '@' && (s0 <= work->iobuf0 || work->iobuf1 <= s0)) {
		s1 = readfile(copystr(&s0[1], s1, work), work->iobuf0, work->iobuf1);
		cmdline(work->iobuf0, s1, work);
		return;
	}
	if (len > 4 && s0[0] == 'o' && s0[1] == 'u' && s0[2] == 't' && s0[3] == ':'
		&& work->libname == NULL) {
		work->libname = copystr(&s0[4], s1, work);
		return;
	}
	if (len > 4 && s0[0] == 'e' && s0[1] == 'x' && s0[2] == 't' && s0[3] == ':'
		&& work->extname == NULL) {
		work->extname = copystr(&s0[4], s1, work);
		return;
	}
	if (len == 4 && s0[0] == 'l' && s0[1] == 's' && s0[2] == 't' && s0[3] == ':') {
		work->flags |= 1;
		return;
	}
	obj = work->objs;
	if (obj >= work->objs1) {
too_many_object:
		errout("too many object file!" NL);
	}
	obj->name = copystr(s0, s1, work);
	obj->file0 = work->filebuf;
	work->filebuf = obj->file1 = readfile(obj->name, obj->file0, work->filebuf1);
	t = obj->name + GO_strlen(obj->name);
	while (obj->name < t) {
		if (t[-1] == '/')
			break;
		if (t[-1] == '\\')
			break;
		t--;
	}
	obj->name = t;
	if (*obj->file0 == 'L') {
		/* COFF */
		registlabel(obj, work);
		work->objs++;
		return;
	}
	if (*obj->file0 != '!')
		errout_s_NL("unknown file type: ", obj->name);
	/* ライブラリのロード */
	p = obj->file0;
	s = obj->file1;
	t = &p[0x44];
	obj0 = obj;
	for (j = get32b(t); j > 0; j--) {
		t += 4;
		r = p + get32b(t);
		q = r + 0x3c;
		for (obj = obj0; obj < work->objs; obj++) {
			if (q == obj->file0)
				goto skip;
		}
		while (r < q + 15 && *r != '/')
			r++;
		obj->name = copystr(q - 0x3c, r, work);
		if (*q != 'L')
			errout("Internal error : unknown library format (2)" NL);
		obj->file0 = q;
		obj->file1 = obj->file0 + getdec(&q[-0x0c]);
		if (obj->file1 > s)
			errout("Internal error : unknown library format (3)" NL);
		registlabel(obj, work);
		work->objs = ++obj;
skip:
		if (obj >= work->objs1)
			goto too_many_object;
	}
	return;
}

static void cmdline(UCHAR *s0, UCHAR *s1, struct str_works *work)
{
	UCHAR *t;
	for (;;) {
		while (s0 < s1 && *s0 <= ' ')
			s0++;
		if (s1 <= s0)
			break;
		t = s0;
		while (t < s1 && *t > ' ')
			t++;
		cmdline0(s0, t, work);
		s0 = t;
	}
	return;
}

static int get32l(const UCHAR *p)
{
	return p[0] | (p[1] << 8) | (p[2] << 16) | (p[3] << 24);
}

static int get32b(const UCHAR *p)
{
	return (p[0] << 24) | (p[1] << 16) | (p[2] << 8) | p[3];
}

static void registlabel(struct str_obj *obj, struct str_works *work)
{
	UCHAR *q = obj->file0 + get32l(&obj->file0[0x08]), *s;
	UCHAR *s0 = obj->file0 + get32l(&obj->file0[0x08])
				+ get32l(&obj->file0[0x0c]) * 0x12;
	UCHAR c;
	int i, j, sec, k, m;
	struct str_label *l;
	for (i = get32l(&obj->file0[0x0c]); i > 0; i -= j, q += j * 0x12) {
		j = q[0x11] /* numaux */ + 1;
		sec = q[0x0c];
		if (sec == 0)
			continue;
		if (sec > 0x80)
			continue;
		if (q[0x10] != 0x02 /* && q[0x10] != 0x06 */)
			continue;
		s = s0 + get32l(&q[0x04]);
		if (q[0x00] | q[0x01] | q[0x02] | q[0x03]) {
			s = q;
			if (q[7])
				s = copystr(&q[0], &q[8], work);
		}
		for (k = 0; s[k]; k++);
		for (l = work->label0; l < work->label; l++) {
			if (l->s1 - l->s0 == k) {
				c = 0;
				for (m = 0; m < k; m++)
					c |= s[m] ^ l->s0[m];
				if (c == 0)
					errout_s_NL("redefine symbol: ", s);
			}
		}
		if (l >= work->label1)
			errout("too many symbols!" NL);
		work->label++;
		l->s0 = s;
		l->s1 = s + k;
		l->obj = obj;
	}
}

UCHAR *iobuf_p;
UCHAR *iobuf_p1;

static void putbuf(int len, const UCHAR *data)
{
	if (iobuf_p + len > iobuf_p1)
		errout("iobuf over!" NL);
	while (len--)
		*iobuf_p++ = *data++;
	return;
}

static UCHAR *puttag()
{
	UCHAR *p = iobuf_p;
	static UCHAR tag[60] =
		"/               " "0               "
		"        0       " "0         `\n";
	putbuf(60, tag);
	return p;
}

static void putdec(UCHAR *p, int i)
{
	UCHAR dec[10], *q = dec + 10;
	do {
		*--q = (i % 10) + '0';
	} while (i /= 10);
	do {
		*p++ = *q++;
	} while (q < dec + 10);
	return;
}

static void put32b(int i)
{
	UCHAR tmp[4];
	tmp[0] = (i >> 24) & 0xff;
	tmp[1] = (i >> 16) & 0xff;
	tmp[2] = (i >>  8) & 0xff;
	tmp[3] =  i        & 0xff;
	putbuf(4, tmp);
}

static void put32l(int i)
{
	UCHAR tmp[4];
	tmp[0] =  i        & 0xff;
	tmp[1] = (i >>  8) & 0xff;
	tmp[2] = (i >> 16) & 0xff;
	tmp[3] = (i >> 24) & 0xff;
	putbuf(4, tmp);
}

static void put16l(int i)
{
	UCHAR tmp[2];
	tmp[0] =  i        & 0xff;
	tmp[1] = (i >>  8) & 0xff;
	putbuf(2, tmp);
}

static void libout(struct str_works *work)
{
	int len, pass, i, j;
	UCHAR *p;
	iobuf_p1 = work->iobuf1;
	if (work->objs0 == work->objs) {
		errout("usage : >golib00 [obj/lib-files] [commnad]" NL
			   "   command = out:lib-file   ext:obj-file" NL
			   "             lst:           ext:*  (all-obj)" NL
		);
	}
	if (work->libname) {
		for (pass = 0; pass < 2; pass++) {
			iobuf_p = work->iobuf0;
			putbuf(0x08, "!<arch>\n");

			p = puttag();
			put32b(len = work->label - work->label0);
			for (i = 0; i < len; i++)
				put32b(work->label0[i].obj->ofs);
			for (i = 0; i < len; i++)
				putbuf(work->label0[i].s1 - work->label0[i].s0 + 1, work->label0[i].s0);
			if ((iobuf_p - work->iobuf0) & 1)
				putbuf(1, "\0");
			putdec(p + 48, iobuf_p - p - 60);

			p = puttag();
			put32l(len = work->objs - work->objs0);
			for (i = 0; i < len; i++)
				put32l(work->objs0[i].ofs);
			put32l(len = work->label - work->label0);
			/* 本来はソートして出力するのだが、手抜きでソートしていない */
			for (i = 0; i < len; i++)
				put16l(work->label0[i].obj - work->objs0 + 1);
			for (i = 0; i < len; i++)
				putbuf(work->label0[i].s1 - work->label0[i].s0 + 1, work->label0[i].s0);
			if ((iobuf_p - work->iobuf0) & 1)
				putbuf(1, "\0");
			putdec(p + 48, iobuf_p - p - 60);

			p = puttag();
			p[1] = '/';
			len = work->objs - work->objs0;
			for (i = 0; i < len; i++) {
				work->objs0[i].ofs = iobuf_p - work->iobuf0;
				p = iobuf_p;
				putbuf(j = GO_strlen(work->objs0[i].name), work->objs0[i].name);
				if (j > 15) {
					iobuf_p = p + 15;
					j = 15;
				}
				putbuf(16 - j, "/               ");
				putbuf(44, "0                       0       0         `\n");
				putbuf(work->objs0[i].file1 - work->objs0[i].file0, work->objs0[i].file0);
				if ((iobuf_p - work->iobuf0) & 1)
					putbuf(1, "\0");
				putdec(p + 48, iobuf_p - p - 60);
			}
		}
		if (GOLD_write_b(work->libname, iobuf_p - work->iobuf0, work->iobuf0))
			errout_s_NL("can't write file: ", work->libname);
	}
	if (work->flags & 1) {
		len = work->objs - work->objs0;
		pass = work->label - work->label0;
		for (i = 0; i < len; i++) {
			msgout(work->objs0[i].name);
			msgout(NL);
			for (j = 0; j < pass; j++) {
				if (work->label0[j].obj == &work->objs0[i]) {
					msgout("\t");
					msgout(work->label0[j].s0);
					msgout(NL);
				}
			}
			msgout(NL);
		}
	}
	if (work->extname) {
		len = work->objs - work->objs0;
		if (work->extname[0] == '*' && work->extname[1] == '\0') {
			for (i = 0; i < len; i++) {
				if (GOLD_write_b(work->objs0[i].name, work->objs0[i].file1 - work->objs0[i].file0, work->objs0[i].file0))
					errout_s_NL("can't write file: ", work->objs0[i].name);
			}
			goto fin;
		}
		for (i = 0; i < len; i++) {
			for (j = 0; work->extname[j] == work->objs0[i].name[j]; j++) {
				if (work->extname[j] == 0) {
					if (GOLD_write_b(work->extname, work->objs0[i].file1 - work->objs0[i].file0, work->objs0[i].file0))
						errout_s_NL("can't write file: ", work->extname);
					goto fin;
				}
			}
		}
	}
fin:
	return;
}

static int getdec(const UCHAR *p)
{
	int i = 0;
	while (*p == ' ')
		p++;
	while ('0' <= *p && *p <= '9')
		i = i * 10 + (*p++ - '0');
	return i;
}
