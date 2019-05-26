#include "filepath.h"

void	filepath::set(string& s){
	string	tmp1, tmp2;
	stringx	strx;
	int		n;
	strx = s;
	n = strx.lastdelimiter("\\");
	if(n == -1){
		tmp1 = "";
		tmp2 = strx.right(n);
	}else{
		tmp1 = strx.left(n);
		tmp2 = strx.right(n);
	}
	strx = tmp1;
	n = strx.lastdelimiter(":");
	if(n == -1){
		drive = "";
		path = tmp1;
	}else{
		drive = strx.left(n);
		path = strx.right(n);
	}
	strx = tmp2;
	n = strx.lastdelimiter(".");
	if(n == -1){
		name = tmp2;
		extention = "";
	}else{
		name = strx.left(n);
		extention = strx.right(n);
	}
}

string	filepath::getfullpath(){
	if(drive == "") return path;
	else return drive+":"+path;
}

string	filepath::getfilename(){
	if(extention == "") return name;
	else return name+"."+extention;
}

string	filepath::getfullname(){
	string tmp;
	tmp = getfullpath();
	if(tmp != ""){
		tmp += "\\";
	}
	tmp += getfilename();
	return tmp;
}


/*
void main(){
	filepath	p;
	p = "c:\\program files\\desktop.ini";
	puts(p.drive);
	puts(p.path);
	puts(p.name);
	puts(p.extention);
	puts(p.getfullpath());
	puts(p.getfilename());
	puts(p.getfullname());
}
*/
