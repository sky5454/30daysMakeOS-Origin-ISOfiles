/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <stdarg.h>
#include <limits.h>
#include <string.h>

unsigned long GO_strtoul0(const char **ps, int base, char *errflag);

static UCHAR *setdec(UCHAR *s, UINT ui)
{
	do {
		*--s = (ui % 10) + '0';
	} while (ui /= 10);
	return s;
}

int GO_vsprintf(char *s, const char *format, va_list arg)
{
	UCHAR c, *t = s, *p, flag_left, flag_zero /* , flag_sign, flag_space */;
	UCHAR temp[32] /* êîéöóp */, *q;
	temp[31] = '\0';
	int field_min, field_max, i;
	long l;
	static char hextable_X[16] = "0123456789ABCDEF";
	static char hextable_x[16] = "0123456789abcdef";
	for (;;) {
		c = *format++;
		if (c != '%') {
put1char:
			*t++ = c;
			if (c)
				continue;
			return t - (UCHAR *) s - 1;
		}
		flag_left = flag_zero = /* flag_sign = flag_space = flag_another = */ 0;
		c = *format++;
		for (;;) {
			if (c == '-')
				flag_left = 1;
			else if (c == '0')
				flag_zero = 1;
			else
				break;
			c = *format++;
		}
		field_min = 0;
		if ('1' <= c && c <= '9') {
			format--;
			field_min = (int) GO_strtoul0(&format, 10, &c);
			c = *format++;
		} else if (c == '*') {
			field_min = va_arg(arg, int);
			c = *format++;
		}
		field_max = INT_MAX;
		if (c == '.') {
			c = *format++;
			if ('1' <= c && c <= '9') {
				format--;
				field_min = (int) GO_strtoul0(&format, 10, &c);
				c = *format++;
			} else if (c == '*') {
				field_max = va_arg(arg, int);
				c = *format++;
			}
		}
		if (c == 's') {
			if (field_max != INT_MAX) {
				fputs("GO_vsprintf:mikan-trap!\n", stderr);
				fputs("string-field_max error!\n", stderr);
				goto sysabort;
			}
			p = va_arg(arg, char *);
			l = strlen(p);
			if (*p) {
				c = ' ';
copy_p2t:
				if (flag_left == 0) {
					while (l < field_min) {
						*t++ = c;
						field_min--;
					}
				}
				do {
					*t++ = *p++;
				} while (*p);
			}
			while (l < field_min) {
				*t++ = ' ';
				field_min--;
			}
			continue;
		}
		if (c == 'l') {
			c = *format++;
			if (c != 'd' && c != 'x' && c != 'u') {
				format--;
				goto mikan;
			}
		}
		if (c == 'u') {
			l = va_arg(arg, UINT);
			goto printf_u;
		}
		if (c == 'd') {
printf_d:
			l = va_arg(arg, long);
			if (l < 0) {
				*t++ = '-';
				l = - l;
				field_min--;
			}
printf_u:
			if (field_max != INT_MAX) {
				fputs("GO_vsprintf:mikan-trap!\n", stderr);
				fputs("int-field_max error!\n", stderr);
				goto sysabort;
			}
			if (field_min <= 0)
				field_min = 1;
			p = setdec(&temp[31], l);
printf_x2:
			c = ' ';
			l = &temp[31] - p;
			if (flag_zero)
				c = '0';
			goto copy_p2t;
		}
		if (c == 'i')
			goto printf_d;
		if (c == '%')
			goto put1char;
		if (c == 'x') {
			q = hextable_x;
printf_x:
			l = va_arg(arg, UINT);
			p = &temp[31];
			do {
				*--p = q[l & 0x0f];
			} while ((*(UINT *) &l) >>= 4);
			goto printf_x2;
		}
		if (c == 'X') {
			q = hextable_X;
			goto printf_x;
		}
		if (c == 'p') {
			i = (int) va_arg(arg, void *);
			p = &temp[31];
			for (l = 0; l < 8; l++) {
				*--p = hextable_X[i & 0x0f];
				i >>= 4;
			}
			goto copy_p2t;
		}
		if (c == 'o') {
			l = va_arg(arg, UINT);
			p = &temp[31];
			do {
				*--p = hextable_x[l & 0x07];
			} while ((*(UINT *) &l) >>= 3);
			goto printf_x2;
		}
		if (c == 'f') {
			if (field_max == INT_MAX)
				field_max = 6;
			/* for ese */
			if (field_min < field_max + 2)
				field_min = field_max + 2;
			do {
				*t++ = '#';
			} while (--field_min);
			continue;
		}
mikan:
		fputs("GO_vsprintf:mikan-trap!\n", stderr);
		fprintf(stderr, "\"%s\"\n", format - 1);
sysabort:
		GOL_sysabort(GO_TERM_BUGTRAP);
	}
}
