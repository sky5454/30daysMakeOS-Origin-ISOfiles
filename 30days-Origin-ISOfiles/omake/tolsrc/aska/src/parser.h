/*
	構文解析クラス　～parser.h + parser.cpp～
*/
#ifndef	__PARSER_H
#define	__PARSER_H

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
#include "scanner.h"
#include "generator.h"
#include "filepath.h"

class Parser{
  public:
	typedef	Generator::LineData	LineData;

  private:
	Scanner		scanner;			// スキャンクラス
	Generator	generator;			// コードジェネレータ
	
	int			StructAlignCount;	// alignのための疑似ラベル名
	int			LoopLabel[32];		// ネストしたloop文でbreakするため
	int			LoopLabelPoint;		// ネスト数
	int			LocalLabelCounter;	// 条件分岐やループで内部的に使うラベル
	int			StatementLevel;		// statementのレベル
	LPSTR		lpFunctionName;		// 現在処理している関数名
	Parameter	defaultlocal;		// ローカル変数用local == SS:EBP;
	SegmentList*defaultsegment;		// 関数を割り付けるdefault segment
	SegmentList*defaultdatasegment;	// 変数を割り付けるdefault segment
	int			SysVarLocalValue;	// 関数内のローカル変数領域のバイト数
	
	LPSTR		lpLogFileName;		// エラーメッセージ出力ファイル名			
	FILE*		lpLogFP;			// エラーメッセージ出力用ファイルポインタ
	int			nErrorCount;		// 構文解析部で起きたエラーの数

	//int			stackpoint;		// 関数が呼び出されたときのstackpointからaddしている量

	// 以下HRESULTがあるものは、正常終了時は0、下位のルーチンでエラーが起きたときは1、
	// それ以外の数字は関数内部でのエラーという意味を持つ。（つまり!=0ならエラー）
	HRESULT	Sizeof(Parameter& param);
	HRESULT	Address(Parameter& param);
	HRESULT	LocalAddress(Parameter& param);
	HRESULT	Selector(Parameter& param, LabelList* label);
	HRESULT	Selector2(Parameter& param);
	void	Member2Param(Parameter& param, MemberList* member);
	HRESULT	Param2Param(Parameter& to, Parameter& from);
	HRESULT	Array(Parameter& param);
	void	PointerCheck(RegisterList* reg);
	HRESULT	ArrayReg(Parameter& param, RegisterList* reg);
	HRESULT	Pointer(Parameter& param);
	HRESULT	GetParameter(Parameter& param);
	HRESULT	Cast(Parameter& param);
	HRESULT	Immedeate(Parameter& param);
	void	Expression(void);
	void	Statement(void);
	void	DefineFunction(void);
	void	DefineVariable(void);
	void	InitialArray(LabelList* label);
	void	DefineAlias(LabelList* label);
	void	DefineInitial(LabelList* label, LPSTR buf);
	void	DefineStruct(void);
	void	DefineMember(TagList* tag);
	void	DefineSegment(void);
	void	DefineDefault(void);
	void	StatementSequence(void);
	void	IfStatement(void);
	CompareType Compare(void);
	CompareType IsCmpOperator(bool bSigned);
	CompareType TransCompare(CompareType cmptype);
	CompareType FlagCompare(void);
	void	LoopStatement(void);
	void	BreakStatement(CompareType cmptype = C_JMP);
	void	AltStatement(void);
	void	AsmoutStatement(void);
	void	ForStatement(void);
	void	WhileStatement(void);
	void	DoStatement(void);
	void	ContinueStatement(CompareType cmptype = C_JMP);
	void	AssumeSegment(void);


//	void	alt_statement(void);
//	bool	case_block(DWORD dw); // ラベルID
	void	StartParse(void);

	void	Error(LPSTR str);

  public:
	Parser(void);
	~Parser(){}
	
#ifdef WINVC
	HRESULT	Compile(string& filename);
#else
	HRESULT	Compile(string filename);
#endif

#ifdef WINVC
	HRESULT	Compile(string& filename, string& outfilename);
#else
	HRESULT	Compile(string filename, string outfilename);
#endif

	void	SetLogFile(LPSTR filename);
	int		GetErrorCount(void){ return nErrorCount; }
};

#endif
