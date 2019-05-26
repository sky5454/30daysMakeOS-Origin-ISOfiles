/*
	テキストファイルモジュール化クラス　～textmodule.h + textmodule.cpp～
															Ver.[2000/02/17]
*/
#ifndef	__TEXTMODULE_H
#define	__TEXTMODULE_H

#pragma warning(disable:4786)

#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <list>
#include <map>
#include <stack>

using namespace std;


class	TextModule{
  public:
// 以下二つにより、Stringの実体がstringかwstringかには依存しないようにする
	typedef string					String;
	typedef	unsigned char			Letter;
	typedef	long					SizeType;
	typedef	list<String>			ListString;
	typedef	ListString::iterator	LineData;

  protected:
	ListString	TextData;			// テキストデータを保存するバッファ
	
	String		FileName;			// 現在関連づけられたファイル名
	LineData	LineItr;			// 現在の行のイテレータ
	int			LinePos;			// 現在の行番号
	bool		BufferEOF;			// EOFならtrueになる

  public:
	TextModule(){ LineItr=TextData.begin(); LinePos=1; BufferEOF=false; }
	~TextModule(){}
	
	void		New();					// 新規作成
	void		Open(String& filename);	// 開く
	void		Close(){ New(); }		// 閉じる
	void		Save();					// 上書き保存
	void		Save(String& filename){ FileName=filename; Save(); }	// 名前を付けて保存
	
	String		GetFileName(){ return FileName; }	// ファイル名を得る
	SizeType	GetLinePos(){ return LinePos; }		// 処理行を得る
//	SizeType	GetFileSize();						// ファイルサイズを得る
	SizeType	GetMaxLinePos(){ return TextData.size(); }	// 最大行＝最終行
	bool		IsEOF(){ return BufferEOF; }		// EOFを調べる
	
	void		NextLine(SizeType line=1);		// 次の行へ進む
	void		PrevLine(SizeType line=1);		// 前の行へ戻る
	void		SeekLine(SizeType linepos);		// 行番号へ進む
	void		SeekLine(LineData);				// 行へ進む
	SizeType	Seek(LineData);					// 行情報から行番号を得る

	String		PeekLine();						// 行読み込み。次に進まない
	String		GetLine();						// 行読み込み。次に進む

#ifdef WINVC
	void		PutLine(String& str){ InsertLine(LineItr, str); }
#else
	void		PutLine(String str){ InsertLine(LineItr, str); }		// 行書き込み。次に進む
#endif
	LineData	ReserveLine(){ return InsertLine(LineItr, String()); }	// 空白行を挿入。ブックマークとして使う。使ったらEraseLine()で消去のこと
#ifdef WINVC
	LineData	InsertLine(LineData, String&);
#else
	LineData	InsertLine(LineData, String);	// 行挿入
#endif
	void		EraseLine(LineData);			// 行消去
};

#endif
