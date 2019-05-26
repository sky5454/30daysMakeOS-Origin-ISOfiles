#ifndef __GUIGUI00_H
#define __GUIGUI00_H

/* gg00lib+ ver.0.8 */
/* gg00lib9をベースにしている */

struct LIB_WORK {
	int data[256 / 4];
};

struct LIB_WINDOW {
	int data[128 / 4];
};

struct LIB_TEXTBOX {
	int data[64 / 4];
};

struct LIB_SIGHNDLREG {
	int ES, DS, FS, GS;
	int EDI, ESI, EBP, ESP;
	int EBX, EDX, ECX, EAX;
	int EIP, CS, EFLAGS;
};

struct LIB_GRAPHBOX {
	int reserve[64 / 4];
};

struct LIB_LINES1 {
	int x0, y0, dx, dy, length, color;
};

struct LIB_LINES0 {
	int x0, y0, x1, y1, dummy, color;
};

struct LIB_POINTS {
	int x, y, color;
};

void lib_execcmd(void *EBX);
void lib_execcmd0(int cmd, ...);
int lib_execcmd1(int ret, int cmd, ...);

void *malloc(const unsigned int nbytes);

#if 0
	/* 以下の関数はマクロで実現されている(高速化とコンパクト化のため) */
	/* 引数の型などが分かりやすいように、関数型宣言を註釈として残してある */

struct LIB_WORK *lib_init(struct LIB_WORK *work);
void lib_init_nm(struct LIB_WORK *work);
struct LIB_WORK *lib_init_am(struct LIB_WORK *work);
void lib_waitsignal(int opt, int signaldw, int nest);
struct LIB_WINDOW *lib_openwindow(struct LIB_WINDOW *window, int slot, int x_size, int y_size);
void lib_openwindow_nm(struct LIB_WINDOW *window, int slot, int x_size, int y_size);
void lib_openwindow_am(struct LIB_WINDOW *window, int slot, int x_size, int y_size);
struct LIB_TEXTBOX *lib_opentextbox(int opt, struct LIB_TEXTBOX *textbox, int backcolor,
	int x_size, int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window, int charset,
	int init_char);
void lib_opentextbox_nm(int opt, struct LIB_TEXTBOX *textbox, int backcolor, int x_size,
	int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window, int charset, int init_char);
void lib_opentextbox_am(int opt, struct LIB_TEXTBOX *textbox, int backcolor, int x_size,
	int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window, int charset, int init_char);
void lib_waitsignaltime(int opt, int signaldw, int nest, unsigned int time0, unsigned int time1,
	unsigned int time2);
int *lib_opensignalbox(int bytes, int *signalbox, int eos, int rewind);
void lib_opensignalbox_nm(int bytes, int *signalbox, int eos, int rewind);
int *lib_opensignalbox_am(int bytes, int *signalbox, int eos, int rewind);
void lib_definesignal0p0(int opt, int default_assign0, int default_assign1, int default_assign2);
void lib_definesignal1p0(int opt, int default_assign0, int default_assign1,
	struct LIB_WINDOW *default_assign2, int signal);
void lib_opentimer(int slot);
void lib_closetimer(int slot);
void lib_settimertime(int opt, int slot, unsigned int time0, unsigned int time1,
	unsigned int time2);
void lib_settimer(int opt, int slot);
void lib_opensoundtrack(int slot);
void lib_controlfreq(int slot, int freq);
struct LIB_WINDOW *lib_openwindow1(struct LIB_WINDOW *window, int slot, int x_size, int y_size,
	int flags, int base);
void lib_openwindow1_nm(struct LIB_WINDOW *window, int slot, int x_size, int y_size, int flags,
	int base);
void lib_openwindow1_am(struct LIB_WINDOW *window, int slot, int x_size, int y_size, int flags,
	int base);
void lib_closewindow(int opt, struct LIB_WINDOW *window);
void lib_controlwindow(int opt, struct LIB_WINDOW *window);
void lib_close(int opt);
void lib_loadfontset(int opt, int slot, int len, void *font);
void lib_loadfontset0(int opt, int slot);
void lib_makecharset(int opt, int charset, int fontset, int len, int from, int base);
void lib_drawline(int opt, struct LIB_WINDOW *window, int color, int x0, int y0, int x1, int y1);
void lib_closetextbox(int opt, struct LIB_TEXTBOX *textbox);
void lib_mapmodule(int opt, int slot, int attr, int size, void *addr, int ofs);
void lib_unmapmodule(int opt, int size, void *addr);
void lib_initmodulehandle(int opt, int slot);
void lib_putblock1(struct LIB_WINDOW *win, int x, int y, int sx, int sy, int skip, void *p);
struct LIB_GRAPHBOX *lib_opengraphbox(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_size, int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window);
void lib_opengraphbox_nm(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_size, int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window);
struct LIB_GRAPHBOX *lib_opengraphbox_am(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_size, int y_size, int x_pos, int y_pos, struct LIB_WINDOW *window);
void lib_flushgraphbox(int opt, struct LIB_WINDOW *win, int x, int y, int sx, int sy, int skip,
	void *p);
void lib_drawline0(int opt, struct LIB_GRAPHBOX *gbox, int color, int x0, int y0, int x1, int y1);
void lib_drawlines0(int opt, struct LIB_GRAPHBOX *gbox, int x0, int y0, int xsize, int ysize,
	int lines, const struct LIB_LINES1 *ofs);
void lib_convlines(int opt, int lines, struct LIB_LINES0 *src, struct LIB_LINES1 *dest);
void lib_initmodulehandle0(int opt, int slot);
void lib_putblock02001(struct LIB_GRAPHBOX *gbox, void *buf, int vx0, int vy0);
struct LIB_GRAPHBOX *lib_opengraphbox2(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_bsize, int y_bsize, int x_vsize, int y_vsize, int x_pos, int y_pos,
	struct LIB_WINDOW *window);
void lib_opengraphbox2_nm(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_bsize, int y_bsize, int x_vsize, int y_vsize, int x_pos, int y_pos,
	struct LIB_WINDOW *window);
struct LIB_GRAPHBOX *lib_opengraphbox2_am(int opt, struct LIB_GRAPHBOX *gbox, int mode, int mode_opt,
	int x_bsize, int y_bsize, int x_vsize, int y_vsize, int x_pos, int y_pos,
	struct LIB_WINDOW *window);
void lib_putblock03001(struct LIB_GRAPHBOX *gbox, void *buf, int vx0, int vy0, void *tbuf,
	int tbuf_skip, int tcol0);
void lib_drawpoints0(int opt, struct LIB_GRAPHBOX *gbox, int x0, int y0, int xsize, int ysize,
	int points, const struct LIB_POINTS *ofs);
void lib_wsjis2gg00jpn0(int len, const char *sjis, int *gg00jpn, int ankbase, int jpnbase);
void lib_loadfontset1(int opt, int slot, int sig);
void lib_drawlines1(int opt, struct LIB_WINDOW *win, int x0, int y0, int xsize, int ysize,
	int lines, const struct LIB_LINES1 *ofs);
void lib_drawpoints1(int opt, struct LIB_WINDOW *win, int x0, int y0, int xsize, int ysize,
	int points, const struct LIB_POINTS *ofs);
void lib_seuc2gg00(int len, const char *seuc, int *gg00, int ankbase, int rightbase);
void lib_resizemodule(int opt, int slot, int newsize, int sig);
void lib_drawpoint0(int opt, struct LIB_GRAPHBOX *gbox, int color, int x, int y);
const int lib_getrandseed();
void lib_putstring0(int opt, int x_pos, int y_pos, struct LIB_TEXTBOX *textbox,
	int color, int bcolor, int len, const int *str);
void lib_putstring1(int opt, int x_pos, int y_pos, struct LIB_TEXTBOX *tbox,
	int col, int bcol, int base, int len, const int *str);

#endif

void lib_putstring_ASCII(int opt, int x_pos, int y_pos, struct LIB_TEXTBOX *textbox, int color,
	int backcolor, const char *str);
void lib_definesignalhandler(void (*lib_signalhandler)(struct LIB_SIGHNDLREG *));
int lib_readCSb(int offset);
int lib_readCSd(int offset);
int lib_readmodulesize(int slot);
void lib_initmodulehandle1(int slot, int num, int sig);
void lib_steppath0(int opt, int slot, const char *name, int sig);
int lib_decodel2d3(int size, int src_ofs, int src_sel, int dest_ofs, int dest_sel);
void lib_putstring_SJIS0(int opt, int x_pos, int y_pos, struct LIB_TEXTBOX *textbox,
	int color, int backcolor, const char *str);
int lib_decodetek0(int size, int src_ofs, int src_sel, int dest_ofs, int dest_sel);
void lib_settimertime2(int opt, int slot0, int slot1, unsigned int *time);

#define	lib_init(work) \
	(struct LIB_WORK *) lib_execcmd1(1 * 4 + 12, 0x0004, \
	(work) ? (void *) (work) : malloc(sizeof (struct LIB_WORK)), 0x0000)

#define	lib_init_nm(work) \
	lib_execcmd0(0x0004, (void *) (work), 0x0000)

#define	lib_init_am(work) \
	(struct LIB_WORK *) lib_execcmd1(1 * 4 + 12, 0x0004, \
	malloc(sizeof (struct LIB_WORK)), 0x0000)

#define	lib_waitsignal(opt, signaldw, nest) \
	lib_execcmd0(0x0018, (int) (opt), (int) (signaldw), (int) (nest), 0x0000)

#define	lib_openwindow(window, slot, x_size, y_size) \
	(struct LIB_WINDOW *) lib_execcmd1(1 * 4 + 12, 0x0020, \
	(window) ? (void *) (window) : malloc(sizeof (struct LIB_WINDOW)), \
	(int) (slot), (int) (x_size), (int) (y_size), 0x0000)

#define	lib_openwindow_nm(window, slot, x_size, y_size) \
	lib_execcmd0(0x0020, (void *) (window), (int) (slot), (int) (x_size), \
	(int) (y_size), 0x0000)

#define	lib_openwindow_am(window, slot, x_size, y_size) \
	(struct LIB_WINDOW *) lib_execcmd1(1 * 4 + 12, 0x0020, \
	malloc(sizeof (struct LIB_WINDOW)), \
	(int) (slot), (int) (x_size), (int) (y_size), 0x0000)

#define	lib_opentextbox(opt, textbox, backcolor, x_size, y_size, x_pos, y_pos, window, charset, init_char) \
	(struct LIB_TEXTBOX *) lib_execcmd1(2 * 4 + 12, 0x0028, (int) (opt), \
	(textbox) ? (void *) (textbox) : malloc(sizeof (struct LIB_TEXTBOX) + 8 * (x_size) * (y_size)), \
	(int) (backcolor), (int) (x_size), (int) (y_size), (int) (x_pos), \
	(int) (y_pos), (void *) (window), (int) (charset), (int) (init_char), \
	0x0000)

#define	lib_opentextbox_nm(opt, textbox, backcolor, x_size, y_size, x_pos, y_pos, window, charset, init_char) \
	lib_execcmd0(0x0028, (int) (opt), (void *) (textbox), (int) (backcolor), \
	(int) (x_size), (int) (y_size), (int) (x_pos), (int) (y_pos), \
	(void *) (window), (int) (charset), (int) (init_char), 0x0000)

#define	lib_opentextbox_am(opt, textbox, backcolor, x_size, y_size, x_pos, y_pos, window, charset, init_char) \
	(struct LIB_TEXTBOX *) lib_execcmd1(2 * 4 + 12, 0x0028, (int) (opt), \
	malloc(sizeof (struct LIB_TEXTBOX) + 8 * (x_size) * (y_size)), \
	(int) (backcolor), (int) (x_size), (int) (y_size), (int) (x_pos), \
	(int) (y_pos), (void *) (window), (int) (charset), (int) (init_char), \
	0x0000)

#define	lib_waitsignaltime(opt, signaldw, nest, time0, time1, time2) \
	lib_execcmd0(0x0018, (int) (opt), (int) (signaldw), (int) (nest), \
	(int) (time0), (int) (time1), (int) (time2), 0x0000)

#define	lib_opensignalbox(bytes, signalbox, eos, rewind) \
	(int *) lib_execcmd1(2 * 4 + 12, 0x0060, (int) (bytes), \
	(signalbox) ? (void *) (signalbox) : malloc(bytes), (int) (eos), \
	(int) (rewind), 0x0000)


#define	lib_opensignalbox_nm(bytes, signalbox, eos, rewind) \
	lib_execcmd0(0x0060, (int) (bytes), (void *) (signalbox), (int) (eos), \
	(int) (rewind), 0x0000)

#define	lib_opensignalbox_am(bytes, signalbox, eos, rewind) \
	(int *) lib_execcmd1(2 * 4 + 12, 0x0060, (int) (bytes), \
	malloc(bytes), (int) (eos), (int) (rewind), 0x0000)

#define	lib_definesignal0p0(opt, default_assign0, default_assign1, default_assign2) \
	lib_execcmd0(0x0068, (int) (opt), (int) (default_assign0), \
	(int) (default_assign1), (int) (default_assign2), 0, 0, 0x0000)

#define	lib_definesignal1p0(opt, default_assign0, default_assign1, default_assign2, signal) \
	lib_execcmd0(0x0068, (int) (opt), (int) (default_assign0), \
	(int) (default_assign1), (int) (default_assign2), 1, (int) (signal), \
	0, 0x0000)

#define	lib_opentimer(slot) \
	lib_execcmd0(0x0070, (int) (slot), 0x0000)

#define	lib_closetimer(slot) \
	lib_execcmd0(0x0074, (int) (slot), 0x0000)

#define	lib_settimertime(opt, slot, time0, time1, time2) \
	lib_execcmd0(0x0078, (int) (opt), (int) (slot), (int) (time0), \
	(int) (time1), (int) (time2), 0x0000)

#define	lib_settimer(opt, slot) \
	lib_execcmd0(0x0078, (int) (opt), (int) (slot), 0x0000)

#define	lib_opensoundtrack(slot) \
	lib_execcmd0(0x0080, (int) (slot), 0, 0x0000)

#define	lib_controlfreq(slot, freq) \
	lib_execcmd0(0x008c, (int) (slot), (int) (freq), 0x0000)

#define	lib_openwindow1(window, slot, x_size, y_size, flags, base) \
	(struct LIB_WINDOW *) lib_execcmd1(1 * 4 + 12, 0x0020, \
	(window) ? (void *) (window) : malloc(sizeof (struct LIB_WINDOW)), \
	(int) (slot) | 0x01, (int) (x_size), (int) (y_size), \
	0x01 | (int) (flags) << 8, (int) (base), 0x0000)

#define	lib_openwindow1_nm(window, slot, x_size, y_size, flags, base) \
	lib_execcmd0(0x0020, (void *) (window), (int) (slot) | 0x01, \
	(int) (x_size), (int) (y_size), 0x01 | (int) (flags) << 8, (int) (base), \
	0x0000)

#define	lib_openwindow1_am(window, slot, x_size, y_size, flags, base) \
	(struct LIB_WINDOW *) lib_execcmd1(1 * 4 + 12, 0x0020, \
	malloc(sizeof (struct LIB_WINDOW)), \
	(int) (slot) | 0x01, (int) (x_size), (int) (y_size), \
	0x01 | (int) (flags) << 8, (int) (base), 0x0000)

#define	lib_closewindow(opt, window) \
	lib_execcmd0(0x0024, (int) (opt), (void *) (window), 0x0000)

#define	lib_controlwindow(opt, window) \
	lib_execcmd0(0x003c, (int) (opt), (void *) (window), 0x0000)

#define	lib_close(opt) \
	lib_execcmd0(0x0008, (int) (opt), 0x0000)

#define	lib_loadfontset(opt, slot, len, font) \
	lib_execcmd0(0x00e0, (int) (opt), (int) (slot), (int) (len), (int) (font), \
	0x000c, 0x0000)

#define	lib_loadfontset0(opt, slot) \
	lib_execcmd0(0x00e0, (int) (opt), (int) (slot), 0x0000)

#define	lib_loadfontset1(opt, slot, sig) \
	lib_execcmd0(0x00e0, (int) (opt), (int) (slot), 1, (int) (sig), 0x0000)

#define	lib_makecharset(opt, charset, fontset, len, from, base) \
	lib_execcmd0(0x00e8, (int) (opt), (int) (charset), (int) (fontset), \
	(int) (len), (int) (from), (int) (base), 0x0000)

#define	lib_drawline(opt, window, color, x0, y0, x1, y1) \
	lib_execcmd0(0x0044, (int) (opt), (void *) (window), (int) (color), \
	(int) (x0), (int) (y0), (int) (x1), (int) (y1), 0x0000)

#define	lib_closetextbox(opt, textbox) \
	lib_execcmd0(0x002c, (int) (opt), (int) (textbox), 0x0000)

#define	lib_mapmodule(opt, slot, attr, size, addr, ofs) \
	lib_execcmd0(0x00c0, (int) (opt), (int) (slot), (int) (size), \
	(void *) (addr), 0x000c, (int) ((ofs) | (attr)), 0x0000)

#define	lib_unmapmodule(opt, size, addr) \
	lib_execcmd0(0x00c4, (int) (opt), (int) (size), (void *) (addr), 0x000c, \
	0x0000)

#define	lib_initmodulehandle(opt, slot) \
	lib_execcmd0(0x00a0, (int) (opt), (int) (slot), 0x0000)

#define	lib_putblock1(win, x, y, sx, sy, skip, p) \
	lib_execcmd0(0x004c, 1, (void *) (win), (int) (x), (int) (y), (int) (sx), \
	(int) (sy), (int) (skip), (void *) (p), 0x000c, 0x0000)

#define	lib_opengraphbox(opt, graphbox, mode, mode_opt, x_size, y_size, x_pos, y_pos, window) \
	(struct LIB_GRAPHBOX *) lib_execcmd1(2 * 4 + 12, 0x0030, (int) (opt), \
	(graphbox) ? (void *) (graphbox) : malloc(sizeof (struct LIB_GRAPHBOX) + (x_size) * (y_size) * ((mode) & 0xf)), \
	(int) (mode), (int) (mode_opt), (int) (x_size), (int) (y_size), \
	(int) (x_pos), (int) (y_pos), (void *) (window), 0x0000)

#define	lib_opengraphbox_nm(opt, graphbox, mode, mode_opt, x_size, y_size, x_pos, y_pos, window) \
	lib_execcmd0(0x0030, (int) (opt), (void *) (graphbox), \
	(int) (mode), (int) (mode_opt), (int) (x_size), (int) (y_size), \
	(int) (x_pos), (int) (y_pos), (void *) (window), 0x0000)

#define	lib_opengraphbox_am(opt, graphbox, mode, mode_opt, x_size, y_size, x_pos, y_pos, window) \
	(struct LIB_GRAPHBOX *) lib_execcmd1(2 * 4 + 12, 0x0030, (int) (opt), \
	malloc(sizeof (struct LIB_GRAPHBOX) + (x_size) * (y_size) * ((mode) & 0xf)), \
	(int) (mode), (int) (mode_opt), (int) (x_size), (int) (y_size), \
	(int) (x_pos), (int) (y_pos), (void *) (window), 0x0000)

#define	lib_flushgraphbox(opt, win, x, y, sx, sy, skip, p) \
	lib_execcmd0(0x004c, opt, (void *) (win), (int) (x), (int) (y), (int) (sx), \
	(int) (sy), (int) (skip), (void *) (p), 0x000c, 0x0000)

#define	lib_drawline0(opt, gbox, color, x0, y0, x1, y1) \
	lib_execcmd0(0x0054, (int) (opt), (void *) (gbox), (int) (color), \
	(int) (x0), (int) (y0), (int) (x1), (int) (y1), 0x0000)

#define lib_drawlines0(opt, gbox, x0, y0, xsize, ysize, lines, ofs) \
	lib_execcmd0(0x0108, (int) (opt), (void *) (gbox), (int) (x0), \
	(int) (y0), (int) (xsize), (int) (ysize), (int) (lines), (void *) (ofs), \
	0x000c, 0x0000)

#define	lib_convlines(opt, lines, src, dest) \
	lib_execcmd0(0x010c, (int) (opt), (int) (lines), \
	(struct LIB_LINES0 *) (src), 0x000c, (struct LIB_LINES1 *) (dest), \
	0x000c, 0x0000)

#define	lib_initmodulehandle0(opt, slot) \
	lib_execcmd0(0x00a0, (int) (opt), (int) (slot), 0x0000)

#define lib_putblock02001(gbox, buf, vx0, vy0) \
	lib_execcmd0(0x0058, 0x2001, (void *) (gbox), (void *) (buf), \
	(int) (vx0), (int) (vy0), 0x0000)

#define	lib_opengraphbox2(opt, graphbox, mode, mode_opt, x_bsize, y_bsize, \
	x_vsize, y_vsize, x_pos, y_pos, window) \
	(struct LIB_GRAPHBOX *) lib_execcmd1(2 * 4 + 12, 0x0030, (int) (opt), \
	(graphbox) ? (void *) (graphbox) : malloc(sizeof (struct LIB_GRAPHBOX) + (x_bsize) * (y_bsize) * ((mode) & 0xf)), \
	(int) (mode), (int) (mode_opt), (int) (x_bsize), (int) (y_bsize), \
	(int) (x_vsize), (int) (y_vsize), (int) (x_pos), (int) (y_pos), \
	(void *) (window), 0x0000)

#define	lib_opengraphbox2_nm(opt, graphbox, mode, mode_opt, x_bsize, y_bsize, \
	x_vsize, y_vsize, x_pos, y_pos, window) \
	lib_execcmd0(0x0030, (int) (opt), (void *) (graphbox), \
	(int) (mode), (int) (mode_opt), (int) (x_bsize), (int) (y_bsize), \
	(int) (x_vsize), (int) (y_vsize), (int) (x_pos), (int) (y_pos), \
	(void *) (window), 0x0000)

#define	lib_opengraphbox2_am(opt, graphbox, mode, mode_opt, x_bsize, y_bsize, \
	x_vsize, y_vsize, x_pos, y_pos, window) \
	(struct LIB_GRAPHBOX *) lib_execcmd1(2 * 4 + 12, 0x0030, (int) (opt), \
	malloc(sizeof (struct LIB_GRAPHBOX) + (x_bsize) * (y_bsize) * ((mode) & 0xf)), \
	(int) (mode), (int) (mode_opt), (int) (x_bsize), (int) (y_bsize), \
	(int) (x_vsize), (int) (y_vsize), (int) (x_pos), (int) (y_pos), \
	(void *) (window), 0x0000)

#define lib_putblock03001(gbox, buf, vx0, vy0, tbuf, tbuf_skip, tcol0) \
	lib_execcmd0(0x0058, 0x3001, (void *) (gbox), (void *) (buf), \
	(int) (vx0), (int) (vy0), (void *) (tbuf), (int) (tbuf_skip), \
	(int) (tcol0), 0x0000)

#define lib_drawpoints0(opt, gbox, x0, y0, xsize, ysize, points, ofs) \
	lib_execcmd0(0x005c, (int) (opt), (void *) (gbox), (int) (x0), \
	(int) (y0), (int) (xsize), (int) (ysize), (int) (points), (void *) (ofs), \
	0x000c, 0x0000)

#define	lib_wsjis2gg00jpn0(len, sjis, gg00jpn, ankbase, jpnbase) \
	lib_execcmd0(0x00ec, 0x0001, (int) (len), (void *) (sjis), 0x000c, \
	(int *) (gg00jpn), 0x000c, (int) (ankbase), (int) (jpnbase), 0x0000)

#define lib_drawlines1(opt, win, x0, y0, xsize, ysize, lines, ofs) \
	lib_execcmd0(0x0110, (int) (opt), (void *) (win), (int) (x0), \
	(int) (y0), (int) (xsize), (int) (ysize), (int) (lines), (void *) (ofs), \
	0x000c, 0x0000)

#define lib_drawpoints1(opt, win, x0, y0, xsize, ysize, points, ofs) \
	lib_execcmd0(0x0050, (int) (opt), (void *) (win), (int) (x0), \
	(int) (y0), (int) (xsize), (int) (ysize), (int) (points), (void *) (ofs), \
	0x000c, 0x0000)

#define	lib_seuc2gg00(len, seuc, gg00, ankbase, rightbase) \
	lib_execcmd0(0x00ec, 0x0002, (int) (len), (void *) (seuc), 0x000c, \
	(int *) (gg00), 0x000c, (int) (ankbase), (int) (rightbase), 0x0000)

#define	lib_resizemodule(opt, slot, newsize, sig) \
	lib_execcmd0(0x0120, 0x0000, (int) (slot), (int) (newsize), 1, \
	(int) (sig), 0x0000)

#define	lib_drawpoint0(opt, gbox, color, x, y) \
	lib_execcmd0(0x0054, (int) (opt), (void *) (gbox), (int) (color), \
	(int) (x), (int) (y), (int) (x), (int) (y), 0x0000)

#define	lib_getrandseed() \
	lib_execcmd1(2 * 4 + 12, 0x0118, (int) 0, (int) 0, (int) 0x0000)

#define	lib_putstring0(opt, x_pos, y_pos, textbox, color, bcolor, len, str) \
	lib_execcmd0(0x0040, (int) (opt) | 0x4000, (int) (x_pos),  (int) (y_pos), \
	(void *) (textbox), (int) (color), (int) (bcolor), (int) (len), \
	(void *) (str), (int) 0x000c, 0x0000)

#define	lib_putstring1(opt, x_pos, y_pos, tbox, col, bcol, base, len, str) \
	lib_execcmd0(0x0040, (int) (opt) | 0x4000, (int) (x_pos),  (int) (y_pos), \
	(void *) (tbox), (int) (col), (int) (bcol), (int) (base), (int) (len), \
	(void *) (str), (int) 0x000c, 0x0000)

/* <guigui00.h>改良計画のための追記 */

#define lib_openwintitle(size, window) \
    lib_opentextbox(0x1000, 0, 0, size, 1, 0, 0, window, 0x00c0, 0)

#define lib_settimertime_interval(slot, time0, time1) \
    lib_settimertime(0x12, slot, time0, time1, 0)

#define lib_settimertime_fromnow(slot, time0, time1) \
    lib_settimertime(0x32, slot, time0, time1, 0)

#define lib_wait_interval(time0, time1) \
    lib_waitsignaltime(0x0007, 0, 0, time0, time1, 0)

#define lib_wait_fromnow(time0, time1) \
    lib_waitsignaltime(0x000f, 0, 0, time0, time1, 0)

int lib_imul(signed int a, signed int b, int *h);
int lib_idiv(signed int a, signed int b, int *r);
int lib_imuldiv(signed int a, signed int b, signed int c, int *r);

#endif
