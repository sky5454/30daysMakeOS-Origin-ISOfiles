/* コンパクトだが遅い版 */
/* バッファリングなし */

#include "windows.h"
#include <stdio.h>	/* NULL */

unsigned int fwrite(const void *ptr, unsigned int size, unsigned int nmemb, FILE *stream)
{
	unsigned int l = 0, ll, bytes = size * nmemb;
	unsigned char *p, *p1;
	if (bytes == 0)
		return 0;
	if (stream->flags & 0x01) {
		WriteFile(stream->handle, ptr, bytes, &l, NULL);
	} else {
		p1 = ((char *) ptr) + bytes;
		p = (char *) ptr;
		do {
			do {
				if (*p == '\n')
					break;
				p++;
			} while (p < p1);
			if (p > (unsigned char *) ptr) {
				if (WriteFile(stream->handle, ptr, p - (unsigned char *) ptr, &ll, NULL) == 0) {
					l += ll;
					goto err;
				}
				l += ll;
			}
			if (p >= p1)
				break;
			if (*p == '\n') {
				static char crlf[2] = "\r\n";
				if (WriteFile(stream->handle, crlf, 2, &ll, NULL) == 0) {
					l += ll;
					goto err;
				}
				l++;
				p++;
			}
			ptr = p;
		} while (p < p1);
	}
err:
	return l / size; /* sizeが1以外の時、これだと本当はまずい */
}
