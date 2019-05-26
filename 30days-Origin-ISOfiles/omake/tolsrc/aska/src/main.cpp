#include "parser.h"

void usage(void){
	puts("ASKA Ver1.0 Beta20 Modified by I.Tak.");
	puts("Usage: ASKA <InputFile> <OutputFile>");
}

int main(int argc, char* argv[]){
	Parser	parser;
	if(argc < 2){
		usage();
	}else if(argc < 3){
		return (int) parser.Compile(string(argv[1]));
	}else{
		return (int) parser.Compile(string(argv[1]), string(argv[2]));
	}
	return 0;
}
