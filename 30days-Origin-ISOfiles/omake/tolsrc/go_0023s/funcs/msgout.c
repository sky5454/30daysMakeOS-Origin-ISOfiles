void msgout(UCHAR *s)
{
	GOLD_write_t(NULL, GO_strlen(s), s);
	return;
}

void errout(UCHAR *s)
{
	msgout(s);
	GOLD_exit(1);
}

void errout_s_NL(UCHAR *s, UCHAR *t)
{
	msgout(s);
	msgout(t);
	msgout(NL);
	GOLD_exit(1);
}

UCHAR *readfile(UCHAR *name, UCHAR *b0, UCHAR *b1)
{
	int bytes = GOLD_getsize(name);
	if (bytes == -1)
		errout_s_NL("can't open file: ", name);
	if (b0 + bytes >= b1)
		errout("input filebuf over!" NL);
	if (GOLD_read(name, bytes, b0))
		errout_s_NL("can't read file: ", name);
	return b0 + bytes;
}
