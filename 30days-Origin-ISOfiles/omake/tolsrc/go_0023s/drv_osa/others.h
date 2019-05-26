void GOLD_exit(int status);

extern UCHAR *DRVOSA_dest0_, *DRVOSA_dest1_, *DRVOSA_msgptr, *DRVOSA_msgptr1;
extern int DRVOSA_errcode;
void DRVOSA_msgout0(int l, UCHAR *s);
void DRVOSA_msgout(UCHAR *s);
void DRVOSA_errout(UCHAR *s);
void DRVOSA_errout_s_NL(UCHAR *s, UCHAR *t);
void DRVOSA_output(UINT l, UCHAR *s);

#define dest0_		DRVOSA_dest0_
#define dest1_		DRVOSA_dest1_
#define msgptr		DRVOSA_msgptr
#define msgptr1		DRVOSA_msgptr1
#define msgout0		DRVOSA_msgout0
#define msgout		DRVOSA_msgout
#define errout		DRVOSA_errout
#define errout_s_NL	DRVOSA_errout_s_NL
#define output		DRVOSA_output
