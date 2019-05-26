/*
	ファイルパス管理クラス　～filepath.h～		Ver.[2000/02/11]
*/
#ifndef	__FILEPATH_H
#define	__FILEPATH_H

#pragma warning(disable:4786)

#include <stdio.h>
#include <stdlib.h>

#include <string>
#include <list>
#include <map>
#include <stack>

using namespace std;

#include "stringx.h"

class filepath{
  public:
	string	drive;
	string	path;
	string	name;
	string	extention;

	void	set(string&);
	void	set(char* s){ string t=s; set(t);}
	filepath&	operator=(string& s){ set(s); return *this; }
	filepath&	operator=(char* s){ set(s); return *this; }
	string	operator()(){ return getfullname(); }
			operator string(){ return getfullname(); }
	string	getfullpath();
	string	getfilename();
	string	getfullname();
};

#endif
