/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(STDIO_H))

#define STDIO_H	1

#if (defined(__cplusplus))
	extern "C" {
#endif

#include "go_lib.h"
#include "stdarg.h"

typedef struct GO_STR_FILE {
	UCHAR *p0, *p1, *p;
	int dummy;
} GO_FILE;

extern GO_FILE GO_stdin, GO_stdout, GO_stderr;

int GO_fprintf(GO_FILE *stream, const char *format, ...);
int GO_sprintf(char *s, const char *format, ...);
int GO_sscanf(char *s, const char *format, ...);
int GO_fputs(const char *s, GO_FILE *stream);
size_t GO_fread(void *ptr, size_t size, size_t nobj, GO_FILE *stream);
int GO_ferror(GO_FILE *stream);
int GO_fputc(int c, GO_FILE *stream);
int GO_vsprintf(char *s, const char *format, va_list arg); 
size_t GO_fwrite(const void *ptr, size_t size, size_t nobj, GO_FILE *stream);
int GO_fgetc(GO_FILE *stream);
int GO_ungetc(int c, GO_FILE *stream);
int GO_fclose(GO_FILE *strem);
int GO_fseek(GO_FILE *stream, long offset, int origin);
long GO_ftell(GO_FILE *stream);
GO_FILE *GO_fopen(const char *filename, const char *mode);
int GO_vfprintf(GO_FILE *stream, const char *format, va_list arg); 
int GO_feof(GO_FILE *stream);
char *GO_fgets(char *s, int n, GO_FILE *stream);
int GO_fscanf(GO_FILE *stream, const char *format, ...);
int GO_printf(const char *format, ...);

#define	stdin						&GO_stdin
#define	stdout						&GO_stdout
#define stderr						&GO_stderr

#define	fprintf						GO_fprintf
#define	sprintf						GO_sprintf
#define	sscanf						GO_sscanf
#define	FILE						GO_FILE
#define fputs(s, stream)			GO_fputs(s, stream)
#define	EOF							(-1)
#define fread(ptr, size, nobj, stream)	GO_fread(ptr, size, nobj, stream)
#define ferror(stream)				0	/* GO_ferror(stream) */
#define fputc(c, stream)			GO_fputc(c, stream)
#define vsprintf(s, format, arg)	GO_vsprintf(s, format, arg)
#define putc(c, stream)				GO_fputc(c, stream)
#define fwrite(ptr, size, nobj, stream)	GO_fwrite(ptr, size, nobj, stream)
#define getc(stream)				GO_fgetc(stream)
#define	ungetc(c, stream)			GO_ungetc(c, stream)
#define fclose(stream)				GO_fclose(stream)
#define fseek(stream, offset, origin)	GO_fseek(stream, offset, origin)
#define ftell(stream)				GO_ftell(stream)
#define fopen(filename, mode)		GO_fopen(filename, mode)
#define vfprintf(stream, format, arg)	GO_vfprintf(stream, format, arg)
#define feof(stream)				GO_feof(stream)
#define fgets(s, n, stream)			GO_fgets(s, n, stream)
#define fscanf						GO_fscanf
#define printf						GO_printf
#define fflush(fp)

#define SEEK_SET	0
#define SEEK_CUR	1
#define SEEK_END	2
#define BUFSIZ		512

#if (defined(__cplusplus))
	}
#endif

#endif
