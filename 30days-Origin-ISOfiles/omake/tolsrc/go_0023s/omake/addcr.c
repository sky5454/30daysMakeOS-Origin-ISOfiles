#include <stdio.h>
#include <stdlib.h>

#define MAXLISTSIZ		(64 * 1024)
#define	MAXBUFSIZ		(32 * 1024 * 1024)
#define MAXNAMELEN		1024

int addcr(unsigned char *p0, unsigned char **pname)
{
	static char namebuf0[MAXNAMELEN];
	unsigned char *s, *t = namebuf0, *p1, *name = *pname, c, flag;
	FILE *fp;
	while ((*t++ = *name++) > ' ');
	t[-1] = '\0';
	fp = fopen(namebuf0, "rb");
	if (fp == NULL)
		goto error;
	p1 = p0 + fread(p0, 1, MAXBUFSIZ / 2, fp);
	fclose(fp);
	if (p1 - p0 == MAXBUFSIZ / 2)
		goto error;
	flag = 0;
	s = p0;
	t = p0 + MAXBUFSIZ / 2;
	while (s < p1) {
		c = *s++;
		if (c >= ' ' || c == '\t') {
			*t++ = c;
			continue;
		}
		if (c == '\r') {
			*t++ = c;
			*t++ = '\n';
			if (s < p1 && *s == '\n') {
				s++;
				continue;
			}
			flag = 1;
			continue;
		}
		if (c == '\n') {
			*t++ = '\r';
			*t++ = '\n';
			flag = 1;
			continue;
		}
	}
	if (flag == 0)
		fprintf(stdout, "addcr:skip -- \"%s\".\n", namebuf0);
	else {
		fp = fopen(namebuf0, "wb");
		if (fp == NULL)
			goto error;
		if (fwrite(p0 + MAXBUFSIZ / 2, 1, t - (p0 + MAXBUFSIZ / 2), fp) != t - (p0 + MAXBUFSIZ / 2))
			goto error2;
		fclose(fp);
		fprintf(stdout, "addcr:add %6d[bytes] -- \"%s\".\n", t - s - MAXBUFSIZ / 2, namebuf0);
	}
	*pname = name;
	return 0;

error2:
	fclose(fp);
error:
	fprintf(stderr, "addcr:error -- \"%s\".\n", namebuf0);
	return 1;
}

const int main(const int argc, char **argv)
{
	FILE *fp;
	unsigned char *list0 = malloc(MAXLISTSIZ), *list1;
	unsigned char *p0 = malloc(MAXBUFSIZ), *name, *lname;
	unsigned int i;
	if (argc < 2)
		goto error;
	if (p0 == NULL)
		goto error;
	for (i = 1; i < argc; i++) {
		name = argv[i];
		if (*name != '@') {
			if (addcr(p0, &name))
				goto error;
		} else {
			fp = fopen(lname = name + 1, "rb");
			list1 = list0 + fread(list0, 1, MAXLISTSIZ, fp);
			fclose(fp);
			if (list1 - list0 >= MAXLISTSIZ - 1)
				goto error1;
			*list1 = '\0';
			name = list0;
			for (;;) {
				while (name < list1 && *name <= ' ')
					name++;
				if (name >= list1)
					break;
				if (addcr(p0, &name))
					goto error;
			}
		}
	}
	return 0;
error1:
	fprintf(stderr, "addcr:error -- \"%s\".\n", lname);
error:
	return 1;
}
