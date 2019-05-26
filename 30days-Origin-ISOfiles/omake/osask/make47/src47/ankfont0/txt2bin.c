#include <stdio.h>

const int main(int argc, char **argv)
{
	FILE *fp0, *fp1;
	if (argc != 3) {
		fputs("\"txt2bin\"  copyright (C) 2001 H.Kawai\n"
			"usage : >txt2bin source.txt font.bin\n", stdout
		);
		return 1;
	}

	fp0 = fopen(argv[1], "r");
	fp1 = fopen(argv[2], "wb");
	if (fp0 == NULL) {
		fputs("can't open input file.\n", stderr);
		return 2;
	}
	if (fp1 == NULL) {
		fputs("can't open output file.\n", stderr);
		return 3;
	}
	do {
		char s[12];
		int i;
		if (fgets(s, 12, fp0) != NULL && (s[0] == ' ' || s[0] == '*' || s[0] == '.')) {
			i  = (s[0] == '*') << 7;
			i |= (s[1] == '*') << 6;
			i |= (s[2] == '*') << 5;
			i |= (s[3] == '*') << 4;
			i |= (s[4] == '*') << 3;
			i |= (s[5] == '*') << 2;
			i |= (s[6] == '*') << 1;
			i |= (s[7] == '*')     ;
			fputc(i, fp1);
		}
	} while (!feof(fp0));
	fclose(fp0);
	fclose(fp1);
	return 0;
}
