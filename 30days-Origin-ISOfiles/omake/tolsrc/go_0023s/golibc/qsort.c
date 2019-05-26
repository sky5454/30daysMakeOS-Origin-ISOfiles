/* K&R‚©‚ç‚Ù‚Ú‚»‚Ì‚Ü‚Üˆø—p */

#include <stddef.h>
#include <stdio.h>

#define pV(i) (((char *) base) + (i) * size)

static void swap(size_t size, char *p, char *q)
{
	char t;
	do {
		t = *p;
		*p++ = *q;
		*q++ = t;
	} while (--size);
	return;
}

void qsort(void *base, size_t n, size_t size,
	int (*cmp)(const void *, const void *))
{
	size_t i, last;
	if (size == 0)
		return;
	if (n <= 1)
		return;
	swap(size, pV(0), pV(n / 2));
	last = 0;
	for (i = 1; i < n; i++)
		if ((*cmp)(pV(i), pV(0)) < 0)
			swap(size, pV(++last), pV(i));
	swap(size, pV(0), pV(last));
	qsort(pV(0), last, size, cmp);
	qsort(pV(last + 1), n - last - 1, size, cmp);
	return;
}
