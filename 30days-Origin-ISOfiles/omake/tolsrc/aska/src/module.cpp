#include <string.h>
#include "module.h"
#ifdef LINUX
#include <sys/stat.h>
unsigned int filelength(int fd){
  struct stat st;
  if (fstat(fd, &st))
    return 0;
  return st.st_size;
}
#endif

//現在ではディレクトリの検索などはしていないので、単純に""や<>をはずすだけ
string	Module::MakeFullPath(string& p){
	string	str = p.substr(0, 0);
	if(str == "\"" || str == "\'" || str == "<"){
		str = p.substr(1, str.size()-1);
	}else{
		str = p.substr();
	}
	return str;
}


HRESULT	Module::ReadFile(string& filename){
	FILE* lpFP;

	Release();
	FileName = MakeFullPath(filename);
	lpFP = fopen(FileName.c_str(), "rb");
	if(lpFP == NULL){
		return 1;	// fileopen失敗
	}
	
	dwMdlSize = filelength(fileno(lpFP));

	if (dwMdlSize == 0){
	  fclose(lpFP);
	  return 2;
	}

	lpMdlAdr = (LPVOID) new unsigned char[dwMdlSize];
	
	if(lpMdlAdr == NULL){
		dwMdlSize = 0;
		fclose(lpFP);
		return 3;	// メモリ確保失敗
	}
	if(fread(lpMdlAdr, 1, dwMdlSize, lpFP) != dwMdlSize){
		dwMdlSize = 0;
		fclose(lpFP);
		return 4;	// 読み込み失敗
	}
	if(fclose(lpFP)){
		lpMdlAdr = NULL;
		dwMdlSize = 0;
		return 5;	// fileclose失敗
	}
	lpMdlPos = (LPSTR)lpMdlAdr;
	return 0;		// 正常終了
}

HRESULT Module::ReadLine(LPSTR buf){
	int i, j;
	
	if(lpMdlPos == NULL) return 3;
	j = ((LPSTR)lpMdlAdr + dwMdlSize) - lpMdlPos;
	if (j <= 0) return 1;	// もうファイルがない
	if (j > 1023) i = 1023;	// バッファサイズで頭打ち
	for(i = j; i > 0; i--){
		if(*lpMdlPos == 0x0D && *(lpMdlPos+1) == 0x0A){
			*buf = '\0';
			lpMdlPos += 2;
			return 0;	// １行終了
		}

		if (*lpMdlPos == 0x0a || *lpMdlPos == 0x0d){
		  *buf = '\0';
		  lpMdlPos++;
		  return 0;
		}

		*(buf++) = *(lpMdlPos++);
	}
	*buf = '\0';
	if (j < 1023)
	  return 0;		// ファイル終端
	else
	  return 2;	// バッファあふれ
}
