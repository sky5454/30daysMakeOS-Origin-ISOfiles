#include "stringx.h"

stringx::size_type	stringx::strlen(char* s){
	int i;
	for(i = 0; s[i] != 0; i++);
	return i;
}

string	stringx::substr(size_type pos, size_type n){
	string				tmp;
	string::iterator	itr = str.begin() + pos;
	tmp.insert(tmp.begin(), itr, itr + n);
	return tmp;
}

string	stringx::cut(size_type pos, size_type n){
	string				tmp;
	string::iterator	itr = str.begin() + pos;
	tmp = substr(pos, n);
	str.erase(itr, itr + n);
	return tmp;
}

string	stringx::tolower(){
	string				tmp;
	string::iterator	itr, itr2;
	for(itr = str.begin(), itr2 = tmp.begin(); itr != str.end(); itr++, itr2++){
		if(*itr >= 'A' && *itr <= 'Z'){
			*itr2 = *itr + 0x20;		// ‘å•¶š¨¬•¶š•ÏŠ·
		}
	}
	return tmp;
}

string	stringx::toupper(){
	string				tmp;
	string::iterator	itr, itr2;
	for(itr = str.begin(), itr2 = tmp.begin(); itr != str.end(); itr++, itr2++){
		if(*itr >= 'a' && *itr <= 'z'){
			*itr2 = *itr - 0x20;		// ¬•¶š¨‘å•¶š•ÏŠ·
		}
	}
	return tmp;
}

string::size_type	stringx::lastdelimiter(char* s){
	string::iterator	itr;
	int					i, n = strlen(s), last = -1;
	for(itr = str.begin(); itr != str.end(); itr++){
		for(i = 0; i < n; i++){
			if(*itr == s[i]) last = itr - str.begin();
		}
	}
	return last;
}


/*
void main(){
	string	str = "string.h";
	stringx	strx;
	
	strx.set(str);
	puts(strx.left(strx.lastdelimiter(".")));
	puts(strx.right(strx.lastdelimiter(".")));
}
*/
