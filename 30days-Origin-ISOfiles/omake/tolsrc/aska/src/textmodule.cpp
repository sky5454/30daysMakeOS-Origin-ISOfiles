
#include "textmodule.h"

// ファイルがあった場合に読み込む、読み込まないの設定
// ファイルの最後にシークするかどうかの設定をどうするか？ > Openも
void	TextModule::New(){
		TextData.clear();
		FileName = "";
		LineItr = TextData.begin();
		LinePos = 1;
		BufferEOF = false;
}

void	TextModule::Open(String& filename){
	char	buf[1024];	// Buffer Size
	FILE*	fp;
	Close();
	FileName = filename;
//	LineItr = TextData.begin();
//	LinePos = 1;
//	BufferEOF = false;
	fp = fopen(FileName.c_str(), "rt");
	if(fp == NULL){
		New();
		return;
	}
	while(fgets(buf, 1023, fp) != NULL) TextData.push_back(String(buf));
	fclose(fp);
}

void	TextModule::Save(){
	FILE*	fp;
	fp = fopen(FileName.c_str(), "wt");
	if(fp == NULL){
		// エラー
		return;
	}
	for(LineData itr = TextData.begin(); itr != TextData.end(); itr++) fputs((*itr).c_str(), fp);
}

void	TextModule::NextLine(SizeType line){
	long	tmp = LinePos + line - GetMaxLinePos();
	if(tmp > 1){
		line -= tmp - 1;
		BufferEOF = true;
	}
	LinePos += line;
	for(int i = 0; i < line; i++) LineItr++;
}

void	TextModule::PrevLine(SizeType line){
	long	tmp = LinePos - line - 1;
	if(tmp < 0) line += tmp;
	LinePos -= line;
	for(int i = 0; i < line; i++) LineItr--;
}

void	TextModule::SeekLine(SizeType linepos){
	long	line = linepos - LinePos;
	if(line > 0) NextLine(line);
	if(line < 0) PrevLine(-line);
}

void	TextModule::SeekLine(LineData linedata){
	LinePos = 1;
	for(LineItr = TextData.begin(); LineItr != linedata; LineItr++) LinePos++;
}

TextModule::SizeType	TextModule::Seek(LineData linedata){
	SizeType	linepos = 1;
	for(LineData itr = TextData.begin(); itr != linedata; itr++) linepos++;
	return linepos;
}

TextModule::String	TextModule::PeekLine(){
	if(BufferEOF == true) return String();
	return *LineItr;
}

TextModule::String	TextModule::GetLine(){
	LineData	linedata = LineItr;
	NextLine();
	if(BufferEOF == true) return String();
	return *linedata;
}

#ifdef WINVC
TextModule::LineData	TextModule::InsertLine(LineData linedata, String& str){
#else
TextModule::LineData	TextModule::InsertLine(LineData linedata, String str){
#endif


	SizeType	linepos = Seek(linedata);
	if(LinePos >= linepos) LinePos++;
	return TextData.insert(linedata, str);
}

void	TextModule::EraseLine(LineData linedata){
	SizeType	linepos = Seek(linedata);
	if(LinePos > linepos) LinePos--;
	else if(LinePos == linepos){
		NextLine();
		LinePos--;
	}
	TextData.erase(linedata);
}


/*
void	main(){
	TextModule	tm;
	TextModule::LineData	linedata1, linedata2;
	tm.New();
	linedata1 = tm.ReserveLine();
	tm.PutLine(string("2\n"));
	linedata2 = tm.ReserveLine();
	tm.SeekLine(linedata1);
	tm.PutLine(string("1\n"));
	tm.SeekLine(linedata2);
	tm.EraseLine(linedata1);
	tm.EraseLine(linedata2);
	tm.PutLine(string("3\n"));
	tm.Save(string("test.txt"));
}
*/
