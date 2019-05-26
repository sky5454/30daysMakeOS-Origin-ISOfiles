/*
	字句解析クラス　～scanner.h + scanner.cpp～
*/
#ifndef	__SCANNER_H
#define	__SCANNER_H

#pragma warning(disable:4786)

#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include <string>
#include <list>
#include <map>
#include <stack>

using namespace std;

#include "macro.h"
#include "module.h"
#include "tokendef.h"

class ScannerSub{
	int		nLine;					// 現在処理している行番号
	Module	Mdl;					// 現在処理しているファイル
	FILE*	lpLogFP;				// エラーメッセージ出力用ファイルポインタ
	char	linebuf[1024];			// 現在処理している行のバッファ
	LPSTR	lpPos;					// 現在処理している行の中の位置
	Token	token;					// トークンの種類
	char	labelbuf[256];			// tokenがTK_LABEL等の時のバッファ
	LONG	numbuf;					// tokenがTK_NUMの時のバッファ
	bool	bPeeked;				// すでにPeekToken()でトークンを得ているか
	int		nErrorCount;			// このソースで起こったエラーの数

	void	Init(void);				// バッファの初期化
	HRESULT	ReadLine(void);			// １行読み込む
	bool	IsToken(LPSTR &lp,LPSTR lp2);	// 一致していればlp1をトークンの終わりまで進める
	void	CopyLabel(LPSTR& lpPos);		// lpPosから次のトークンまでコピー
	HRESULT	NumCheck(LPSTR& lpPos);			// 調べて数値ならばnumbufに。そうでなければ戻り値：非0
	void	GetQuotedLabel(LPSTR &lpPos);	// 引用ラベルを得る
	Token	PeekToken2(void);				// PeekToken()の本体
	void	Error(LPSTR str);				// エラーメッセージを表示

  public:
	ScannerSub(){ lpLogFP=stderr; nErrorCount=0; Init(); }
	~ScannerSub(){}

#ifdef WINVC
	HRESULT	ReadFile(string& filename);// ファイルを読み込む
#else
	HRESULT	ReadFile(string filename);// ファイルを読み込む
#endif
	
	Token	GetToken(void);			// 次のtokenを得る（読み込みポインタ進める）
	Token	PeekToken(void){ token=PeekToken2(); return token; }
									// 次のtokenを得る（読み込みポインタ進めない）
	LPSTR	GetLabel(void){ return labelbuf; }	// tokenがTK_LABEL等の時、そのラベルが得られる
	LONG	GetNum(void){ return numbuf; }		// tokenがTK_NUMの時、その数値が得られる

	int		GetScanline(void){ return nLine; }
	string	GetFileName(void){ return Mdl.GetFileName(); }
	void	SetLogFile(FILE* fp){ lpLogFP = fp; }
	int		GetErrorCount(void){ return nErrorCount; }
};

typedef stack<ScannerSub*> StacklpScannerSub;

class Scanner{
	StacklpScannerSub files;
	int		nIncludeNest;			// インクルードのネスト数。なしの時は 0
	FILE*	lpLogFP;				// エラーメッセージ出力用ファイルポインタ
	int		nErrorCount;			// 字句解析部で起こったエラーの数

  public:
	Scanner(){ lpLogFP=stderr; nIncludeNest=0; nErrorCount=0; }
	~Scanner(){ while(!files.empty()){ DELETE_SAFE(files.top()); files.pop(); } }

#ifdef WINVC
	HRESULT	ReadFile(string& filename);// ファイルを読み込む
#else
	HRESULT	ReadFile(string filename);// ファイルを読み込む
#endif

	Token	GetToken(void);		// 次のtokenを得る（読み込みポインタ進める）
	Token	PeekToken(void);	// 次のtokenを得る（読み込みポインタ進めない）
	LPSTR	GetLabel(void){ return files.top()->GetLabel(); }
								// tokenがTK_LABEL等の時、そのラベルが得られる
	LONG	GetNum(void){ return files.top()->GetNum(); }
								// tokenがTK_NUMの時、その数値が得られる
	int		GetScanline(void){ return files.top()->GetScanline(); }
	string	GetFileName(void){ return files.top()->GetFileName(); }
	void	SetLogFile(FILE* fp){ lpLogFP = fp; }
	int		GetErrorCount(void){ return nErrorCount; }
};

#endif
