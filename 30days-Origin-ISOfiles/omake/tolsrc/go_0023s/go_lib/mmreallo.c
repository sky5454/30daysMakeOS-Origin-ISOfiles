/* copyright(C) 2002 H.Kawai (under KL-01). */

#include <stdio.h>
#include <string.h>

void *GOL_memmanrealloc(struct GOL_STR_MEMMAN *man, void *p0, size_t size)
{
	struct GOL_STR_MEMMAN *p = ((struct GOL_STR_MEMMAN *) p0) - 1, *q;
	size += sizeof (struct GOL_STR_MEMMAN) + sizeof (struct GOL_STR_MEMMAN) - 1;
	size &= ~(sizeof (struct GOL_STR_MEMMAN) - 1);
	if (p->u.s.bytes >= size) {
		if (p->u.s.bytes > size) {
			q = p + size / sizeof (struct GOL_STR_MEMMAN);
			q->u.s.bytes = p->u.s.bytes - size;
			p->u.s.bytes = size;
			GOL_memmanfree(man, q + 1);
		}
		return p0;
	}
	q = GOL_memmanalloc(man, size - sizeof (struct GOL_STR_MEMMAN));
	if (q)
		memcpy(q, p0, p->u.s.bytes - sizeof (struct GOL_STR_MEMMAN));
	GOL_memmanfree(man, p0);
	return q;
}
