unsigned int GO_strlen(const UCHAR *s)
{
	const UCHAR *t = s;
	while (*s)
		s++;
	return s - t;
}
