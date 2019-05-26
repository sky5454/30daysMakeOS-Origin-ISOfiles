/* copyright(C) 2002 H.Kawai (under KL-01). */

#if (!defined(GO_LIB_H))

#define GO_LIB_H	1
#if (defined(__cplusplus))
	extern "C" {
#endif

typedef unsigned char UCHAR;
typedef unsigned int UINT;
typedef UINT size_t;

#define GO_TERM_NORMAL		0
#define GO_TERM_WORKOVER	1
#define GO_TERM_OUTOVER		2
#define GO_TERM_ERROVER		3
#define GO_TERM_BUGTRAP		4
#define GO_TERM_SYSRESOVER	5
#define GO_TERM_ABORT		6

#define	GO_LANG_C			0
#define GO_LANG_C89			1
#define GO_LANG_CPP			2

#define	NULL			((void *) 0)

typedef struct GOL_STR_FILE {
	UINT size;
	UCHAR *p0;
	UINT linkcount;
	void *p_sys;
} GOL_FILE;

struct GOL_STR_DIR;

struct GO_STR_CPP0_INTERFACE {
	UCHAR *work0,   *work1; /* for work area (ex:malloc) */
	UCHAR *inbuf0,  *inbuf1; /* input file (readonly) */
	UCHAR *outbuf0, *outbuf1; /* output file */
	UCHAR *errbuf0, *errbuf1; /* error out */
	struct GOL_STR_DIR **incdir0, **incdir1; /* include dir (readonly) */
	GOL_FILE **preinc0, **preinc1; /* pre-include file (readonly) */
	UCHAR **define0, **define1; /* defines (readonly) */
	UCHAR **undef0, **undef1; /* undefines (readonly) */
	UCHAR **assert0, **assert1; /* asserts (readonly) */
	UCHAR **disable0, **disable1; /* disables (readonly) */
	UCHAR **msgs; /* messages (read only, for ENG, JPN, KOR,...) */
	UCHAR termcode, lang, tabstop;
	struct GO_STR_CPP0_FLAGS { /* other flags (read only) */
		UINT pedantic : 1;
		UINT pedantic_errors : 1;
		UINT trigraphs : 1;
		UINT plus : 1;
		UINT w : 1;
		UINT Wtrigraphs : 1;
		UINT Wcomment : 1;
		UINT Wtraditional : 1;
		UINT Wundef : 1;
		UINT Wimport : 1;
		UINT Werror : 1;
		UINT Wall : 1;
		UINT H : 1;
		UINT C : 1;
		UINT dM : 1;
		UINT dD : 1;
		UINT dN : 1;
		UINT dI : 1;
		UINT P : 1;
		UINT dollar : 1;
		UINT remap : 1;
	} flgas;
};

#define	_ATTRIB_NORETURN	__attribute__ ((noreturn))

struct GO_STR_CC1_INTERFACE;
struct GO_STR_CC1PLUS_INTERFACE;
struct GOL_STR_MEMMAN {
	union {
		double align;
		struct {
			size_t bytes; /* STR_MALLOC‚Ì•ª‚ðŠÜ‚Þ */
			struct GOL_STR_MEMMAN *next;
		} s;
	} u;
};

void cpp0(struct GO_STR_CPP0_INTERFACE *interface);
void cc1(struct GO_STR_CC1_INTERFACE *interface);
void cc1plus(struct GO_STR_CC1PLUS_INTERFACE *interface);

void GOL_init();
GOL_FILE *GOL_open(struct GOL_STR_DIR *dir, const UCHAR *name);
void GOL_close(GOL_FILE *gfp);
UCHAR *GOL_stepdir(struct GOL_STR_DIR **dir, const UCHAR *path);
int GOL_isequdir(struct GOL_STR_DIR *dir0, struct GOL_STR_DIR *dir1);
void GOL_debuglog(int bytes, char *p);

/*  */
void *GOL_memmanalloc(struct GOL_STR_MEMMAN *man, size_t size);
void *GOL_memmanrealloc(struct GOL_STR_MEMMAN *man, void *p, size_t size);
void GOL_memmanfree(struct GOL_STR_MEMMAN *man, void *p);
void *GOL_memmaninit(struct GOL_STR_MEMMAN *man, size_t size, void *p);
void GOL_sysabort(UCHAR status) _ATTRIB_NORETURN;
extern struct GOL_STR_MEMMAN GOL_memman;

/* for driver only */
void *GOL_sysmalloc(size_t size);
void GOL_sysfree(void *p);
extern struct GOL_STR_MEMMAN GOL_sysman;
#define GOL_syslinkstr(s)	++*(UINT *) (((UCHAR *) (s)) - sizeof (UINT))
void GOL_sysunlinkstr(UCHAR *s);
void GOL_syscreatestr(UCHAR *s);

#undef	_ATTRIB_NORETURN

#if (defined(__cplusplus))
	}
#endif

#endif
