static void escape(UCHAR *s, UCHAR c)
{
	s[0] = '\\';
	s[3] = '0' + (c & 0x07);
	c >>= 3;
	s[2] = '0' + (c & 0x07);
	s[1] = '0' + (c >> 3);
	return;
}

static UCHAR *convmain(UCHAR *src0, UCHAR *src1, UCHAR *dest0, UCHAR *dest1, struct STR_FLAGS flags)
{
	UCHAR c;
	if (flags.opt[FLAG_S]) {
		while (src0 < src1) {
			c = *src0++;
			if (dest0 + 8 > dest1)
				return NULL;
			if (c <= 0x7f) {
				*dest0++ = c;
				continue;
			}
			if (0xa0 <= c && c <= 0xdf) { /* ”¼Šp‚©‚È */
escape1:
				escape(dest0, c);
				dest0 += 4;
				continue;
			}
			if (src0 >= src1)
				goto escape1;
			escape(dest0, c);
			dest0 += 4;
			c = *src0++;
			goto escape1;
		}
		return dest0;
	}
	if (flags.opt[FLAG_E]) {
		while (src0 < src1) {
			c = *src0++;
			if (dest0 + 8 > dest1)
				return NULL;
			if (c <= 0x7f) {
				*dest0++ = c;
				continue;
			}
			escape(dest0, c);
			dest0 += 4;
		}
		return dest0;
	}
	return NULL;
}
