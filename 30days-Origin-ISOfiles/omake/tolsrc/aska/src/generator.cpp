#include "generator.h"
#ifdef LINUX
#define ltoa(n,b,l) (sprintf(b, "%ld", n), b)
#define itoa(n,b,l) (sprintf(b, "%d", n), b)
#endif

Generator::Generator(void){
	scanner=NULL;
	lpLogFP=stderr;
}


void	Generator::Param2LPSTR(LPSTR buf, Parameter& param){
	char	buf2[256];
	bool	first;
	if(param.pdepth != 0 && param.ptype == TK_SEGMENT){
		param.ndisp += 4;
		param.bLabel = false;
	}
	strcpy(buf, "");
	if(param.paramtype != P_REG){
		if(param.pdepth != 0){
			switch(param.size){
			  case 2: strcat(buf, "word ptr ");  break;
			  case 4: strcat(buf, "dword ptr "); break;
			  case 6: strcat(buf, "pword ptr "); break;
			  default: 
				  Error("Internal Error: Invalid size");
				  return;
			}
		}else{
			switch(param.size){
			  case 0: break;
			  case 1: strcat(buf, "byte ptr "); break;
			  case 2: strcat(buf, "word ptr "); break;
			  case 4: strcat(buf, "dword ptr "); break;
			  default: 
				  Error("Internal Error: Invalid size");
				  return;
			}
		}
	}
	switch(param.paramtype){
	  case P_REG: strcat(buf, param.base->name); break;
	  case P_IMM:
		strcat(buf, param.disp.c_str());
		if(param.ndisp != 0){
			if(buf[0] != 0) strcat(buf, "+");
			strcat(buf, ltoa(param.ndisp, buf2, 10));
		}
		break;
	  case P_MEM:
		if(param.bLabel == true){
			strcat(buf, param.disp.c_str());
		}else{
			if(param.seg != NULL){
				strcat(buf, param.seg->name);
				strcat(buf, ":[");
			}else{
				strcat(buf, "[");
			}
			first = true;
			if(param.base != NULL){
				strcat(buf, param.base->name);
				first = false;
			}
			if(param.index != NULL){
				if(first == false) strcat(buf, "+");
				strcat(buf, param.index->name);
				if(param.scale != 1){
					strcat(buf, "*");
					strcat(buf, ltoa(param.scale, buf2, 10));
				}
				first = false;
			}
			if(param.disp != ""){
				if(first == false && param.disp.at(0) != '+' && param.disp.at(0) != '-') strcat(buf, "+");
				strcat(buf, param.disp.c_str());
				first = false;
			}
			if(param.ndisp != 0){
				if(first == false) strcat(buf, "+");
				strcat(buf, ltoa(param.ndisp, buf2, 10));
			}
			strcat(buf, "]");
		}
		break;
	  default:
		Error("Internal Error: Invalid parameter type");
		return;
	}
}

void	Generator::FlushStaticData(void){
	MaplpSegmentList::iterator		itseg;
	ListStaticDataList::iterator	itstatic;
	for(itseg = SegmentData.mapsegment.begin(); itseg != SegmentData.mapsegment.end(); itseg++){
		if(itseg->second->liststatic.empty()) continue;
		OutputMASM("", "", "", "");		// １行改行する
		OpenSegment(itseg->second);
		for(itstatic = itseg->second->liststatic.begin(); itstatic != itseg->second->liststatic.end(); itstatic++){
			RegistVariable(itstatic->name, itstatic->label, itstatic->lpInit);
		}
		CloseSegment(itseg->second);
	}
}

void	Generator::OpenSegment(SegmentList* segment){
	char buf[256];
	strcpy(buf, "");
	switch(segment->align){
	  case TK_BYTE:   strcat(buf, "BYTE ");   break;
	  case TK_WORD:   strcat(buf, "WORD ");   break;
	  case TK_DWORD:  strcat(buf, "DWORD ");  break;
	  case TK_PARA:   strcat(buf, "PARA ");   break;
	  case TK_PAGE:   strcat(buf, "PAGE ");   break;
	  case TK_PAGE4K: strcat(buf, "PAGE4K "); break;
	  default: 
		Error("Internal Error: Invalid segment alignment");
		return;
	}
	switch(segment->combine){
	  case TK_PRIVATE:                          break;	// privateは指定なし
	  case TK_PUBLIC:  strcat(buf, "PUBLIC ");  break;
	  case TK_STACK:   strcat(buf, "STACK ");   break;
	  case TK_COMMON:  strcat(buf, "COMMON ");  break;
	  default: 
		Error("Internal Error: Invalid combination with segment alignment");
		return;
	}
	switch(segment->use){
	  case TK_USE32: strcat(buf, "USE32 "); break;
	  case TK_USE16: strcat(buf, "USE16 "); break;
	  default: 
		Error("Internal Error: Invalid use of segment");
		return;
	}
	switch(segment->access){
	  case TK_RO: strcat(buf, "RO "); break;
	  case TK_EO: strcat(buf, "EO "); break;
	  case TK_ER: strcat(buf, "ER "); break;
	  case TK_RW: strcat(buf, "RW "); break;
	  default: 
		Error("Internal Error: Invalid access segment");
		return;
	}
	if(segment->segmentclass != NULL) strcat(buf, segment->segmentclass);
	OutputMASM(segment->name, "segment", buf, "");
}

void	Generator::CloseSegment(SegmentList* segment){
	if(segment == NULL) return;
	OutputMASM(segment->name, "ends", "", "");
}

void	Generator::Error(LPSTR str){
	nErrorCount++;
	fprintf(lpLogFP, "%s(%d):(Generator)%s \n", scanner->GetFileName().c_str(), scanner->GetScanline(), str);
}


LabelList*	Generator::FindLabelList(LPSTR key){
	LabelList*	label;
	label = LocalData.Find(key);
	if(label == NULL) label = GlobalData.Find(key);
	return label;
}

void	Generator::BeginGenerate(string& outfilename, Scanner* s){
	scanner=s;
	OutFileName = outfilename;
	OutFile.New();
	seg = prevseg = NULL;
	bExistMain=false;
	nErrorCount=0;
}

void	Generator::EndGenerate(void){
	CloseSegment(prevseg);
	FlushStaticData();
	if(bExistMain == true) OutputMASM("", "end", "main", "");
	OutFile.Save(OutFileName);
}

// これはTAB位置の調整など、まだ未完成
void	Generator::OutputMASM(LPSTR label, LPSTR command, LPSTR param, LPSTR comment){
	int		n = strlen(label);
	char	buf[256];
	strcpy(buf, label);
	if(n < 7) strcat(buf, "\t\t\t");
	else if(n < 15) strcat(buf, "\t\t");
	else strcat(buf, "\t");
	strcat(buf, command);
	strcat(buf, "\t");
	strcat(buf, param);

#ifdef WINVC
	if(comment[0] != NULL){
#else
	if(comment[0] != '\0'){
#endif

		strcat(buf, "\t\t");
		strcat(buf, comment);
	}
	OutFile.PutLine(string(buf)+"\n");
}

void	Generator::Call(Token ptype, LPSTR func){
	char	buf[256];
	switch(ptype){
	  case TK_NEAR: strcpy(buf, "near"); break;
	  case TK_FAR:  strcpy(buf, "far");  break;
	  default:
		Error("Internal Error: Allowed to use only 'near' or 'far' for Call");
		return;
	}
	strcat(buf, " ptr ");
	strcat(buf, func);
	OutputMASM("", "call", buf, "");
}

void	Generator::GlobalLabel(LPSTR label){
	char	buf[256];
	strcpy(buf, label);
	strcat(buf, ":");
	OutputMASM(buf, "", "", "");
}

void	Generator::LocalLabel(LPSTR label){
	char	buf[256];
	strcpy(buf, "#");
	strcat(buf, label);
	strcat(buf, ":");
	OutputMASM(buf, "", "", "");
}

void	Generator::Op1(Token command, Parameter& param){
	char	buf[1024];
	Param2LPSTR(buf, param);
	if(param.paramtype == P_IMM){
		Error("Cannot use immediate operands for left value");
		return;
	}
	if(param.size != 1 && param.size != 2 && param.size != 4 && param.size != 6){
		Error("Invalid parameter size");
		return;
	}
	switch(command){
	  case TK_INC:
		if(param.pdepth != 0 && param.ptype == TK_FAR){			// あやしい追加分
			if(param.seg != NULL) param.paramtype = P_REG;
			param.pdepth = 0;
			param.size = param.base->size;
		}
		Param2LPSTR(buf, param);
		OutputMASM("", "inc", buf, "");
		break;
	  case TK_DEC:
		if(param.pdepth != 0 && param.ptype == TK_FAR){			// あやしい追加分
			if(param.seg != NULL) param.paramtype = P_REG;
			param.pdepth = 0;
			param.size = param.base->size;
		}
		Param2LPSTR(buf, param);
		OutputMASM("", "dec", buf, "");
		break;
	  case TK_CPLA: OutputMASM("", "not", buf, ""); break;
	  case TK_NEG:  OutputMASM("", "neg", buf, ""); break;
	  default:
		Error("Internal Error: Invalid expression operator");
		return;
	}
}

void	Generator::Op2(Token command, Parameter& param1, Parameter& param2){
	if(param1.paramtype == P_IMM){
		Error("Cannot use immediate operands for left value");
		return;
	}
	if(param1.bSigned != param2.bSigned && param1.paramtype == P_MEM && param2.paramtype == P_MEM){
		Error("Invalid signed type in left and right value");
		return;
	}
	if(param1.size == 0 && param2.size == 0){
		Error("Cannot find type specifier");
		return;
	}
	switch(command){
	  case TK_BECOME: RegistBecome(param1, param2); break;
	  case TK_ADD:    RegistAdd(param1, param2);    break;
	  case TK_SUB:    RegistSub(param1, param2);    break;
	  case TK_MULA:   RegistMul(param1, param2);    break;
	  case TK_DIVA:   RegistDiv(param1, param2);    break;
	  case TK_ANDA:   RegistAnd(param1, param2);    break;
	  case TK_ORA:    RegistOr(param1, param2);     break;
	  case TK_XORA:   RegistXor(param1, param2);    break;
	  case TK_SHLA:   RegistShl(param1, param2);    break;
	  case TK_SHRA:   RegistShr(param1, param2);    break;
	  case TK_CMP:    RegistCmp(param1, param2);    break;
	  default:
		Error("Internal Error: Invalid expression operator");
		return;
	}
}

void	Generator::RegistBecome(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024], command[16];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if(param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			Param2LPSTR(buf1, param1);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf1);
			OutputMASM("", "xor", buf, "");
		}else if(param1.pdepth != 0 && param1.ptype == TK_FAR){
			if(param2.pdepth != 0 && param2.ptype == TK_FAR
					&& param1.seg == param2.seg && param1.seg != NULL){
				param1.paramtype = P_REG; param1.pdepth = 0;
				param1.size = param1.base->size;
				param2.paramtype = P_REG; param2.pdepth = 0;
				param2.size = param2.base->size;
				Param2LPSTR(buf1, param1);
				Param2LPSTR(buf2, param2);
				strcpy(buf, buf1);
				strcat(buf, ",");
				strcat(buf, buf2);
				OutputMASM("", "mov", buf, "");
			}else if(param2.pdepth != 0 && param2.ptype == TK_FAR && param1.seg != NULL && param2.seg == NULL){
				param1.paramtype = P_REG; param1.pdepth = 0;
				param1.size = param1.base->size;
				Param2LPSTR(buf1, param1);
				Param2LPSTR(buf2, param2);
				strcpy(buf, buf1);
				strcat(buf, ",");
				strcat(buf, buf2);
				sprintf(command, "L%s", param1.seg->name);
				OutputMASM("", command, buf, "");
			}else{
				Error("Invalid far pointer");
				return;
			}
		}else{
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf2);
			OutputMASM("", "mov", buf, "");
		}
	}else if(param1.size < param2.size){
		if(param2.paramtype == P_MEM){
			param2.size = param1.size;		// Param2LPSTR()ではtypeは見てないのでsizeだけ変えればよい
		}else if(param2.paramtype == P_REG){
			if(RegisterDown(param1, param2) != 0) return;	// エラーなら処理せずに終了
		}else{
			Error("Casting mismatched immediate operand");
			return;
		}
		Param2LPSTR(buf1, param1);
		Param2LPSTR(buf2, param2);
		strcpy(buf, buf1);
		strcat(buf, ",");
		strcat(buf, buf2);
		OutputMASM("", "mov", buf, "");
	}else if(param1.size > param2.size){
		if(param1.paramtype == P_MEM){
			Error("Specified memory in left value with addition assignment");
			return;
		}
		Param2LPSTR(buf1, param1);
		Param2LPSTR(buf2, param2);
		strcpy(buf, buf1);
		strcat(buf, ",");
		strcat(buf, buf2);
		if(param2.bSigned == true){
			OutputMASM("", "movsx", buf, "");
		}else{
			OutputMASM("", "movzx", buf, "");
		}
	}else{
		Error("Internal Error: Unknown error in Op2()");
		return;
	}
}

HRESULT	Generator::RegisterDown(Parameter& param1, Parameter& param2){
	if(param1.size == 2 && param2.size == 4){
		if(strcmp(param2.base->name, "EAX") == 0){
			param2.base = FindRegisterList("AX");
		}else if(strcmp(param2.base->name, "EBX") == 0){
			param2.base = FindRegisterList("BX");
		}else if(strcmp(param2.base->name, "ECX") == 0){
			param2.base = FindRegisterList("CX");
		}else if(strcmp(param2.base->name, "EDX") == 0){
			param2.base = FindRegisterList("DX");
		}else if(strcmp(param2.base->name, "EDI") == 0){
			param2.base = FindRegisterList("DI");
		}else if(strcmp(param2.base->name, "ESI") == 0){
			param2.base = FindRegisterList("SI");
		}else if(strcmp(param2.base->name, "EBP") == 0){
			param2.base = FindRegisterList("BP");
		}else if(strcmp(param2.base->name, "ESP") == 0){
			param2.base = FindRegisterList("SP");
		}else{
			Error("This register has no LOW");
			return 1;		// エラー
		}
	}else if(param1.size == 1 && param2.size == 2){
		if(strcmp(param2.base->name, "AX") == 0){
			param2.base = FindRegisterList("AL");
		}else if(strcmp(param2.base->name, "BX") == 0){
			param2.base = FindRegisterList("BL");
		}else if(strcmp(param2.base->name, "CX") == 0){
			param2.base = FindRegisterList("CL");
		}else if(strcmp(param2.base->name, "DX") == 0){
			param2.base = FindRegisterList("DL");
		}else{
			Error("This register has no LOW");
			return 1;		// エラー
		}
	}else if(param1.size == 1 && param2.size == 4){
		if(strcmp(param2.base->name, "EAX") == 0){
			param2.base = FindRegisterList("AL");
		}else if(strcmp(param2.base->name, "EBX") == 0){
			param2.base = FindRegisterList("BL");
		}else if(strcmp(param2.base->name, "ECX") == 0){
			param2.base = FindRegisterList("CL");
		}else if(strcmp(param2.base->name, "EDX") == 0){
			param2.base = FindRegisterList("DL");
		}else{
			Error("This register has no LOW");
			return 1;		// エラー
		}
	}
	param2.size = param1.size;
	return 0;
}

void	Generator::RegistAdd(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if((param1.paramtype == P_REG && param1.base->type == R_GENERAL || param1.paramtype == P_MEM)
				&& param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "1"){
			Param2LPSTR(buf1, param1);
			OutputMASM("", "inc", buf1, "");
		}else if(param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			// 何もしない
		}else{
			if(param1.pdepth != 0 && param1.ptype == TK_FAR){			// あやしい追加分
				if(param1.seg != NULL) param1.paramtype = P_REG;
				param1.pdepth = 0;
				param1.size = param1.base->size;
			}
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf2);
			OutputMASM("", "add", buf, "");
		}
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistSub(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if((param1.paramtype == P_REG && param1.base->type == R_GENERAL || param1.paramtype == P_MEM)
				&& param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "1"){
			Param2LPSTR(buf1, param1);
			OutputMASM("", "dec", buf1, "");
		}else if(param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			// 何もしない
		}else{
			if(param1.pdepth != 0 && param1.ptype == TK_FAR){			// あやしい追加分
				if(param1.seg != NULL) param1.paramtype = P_REG;
				param1.pdepth = 0;
				param1.size = param1.base->size;
			}
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf2);
			OutputMASM("", "sub", buf, "");
		}
	}else{
		Error("Invalid parameter size");
		return;
	}
}

int		Generator::CheckPower2(int x){
	int i; 
	for(i = 0; i < 32; i++){
		if(x == 1 << i) return i;
	}
	return -1;
}

void	Generator::RegistMul(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	int		x;
	if(param2.paramtype == P_IMM && param2.ndisp == 0){
		if(param2.disp == "1"){
			// 何もしない
		}else if(param2.disp == "2" && param1.paramtype == P_REG && param1.base->type == R_GENERAL){
			Param2LPSTR(buf1, param1);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf1);
			OutputMASM("", "add", buf, "");
		}else if((x = CheckPower2(atoi(param2.disp.c_str()))) != -1
				&& (param1.paramtype == P_MEM || param1.paramtype == P_REG && param1.base->type == R_GENERAL)){
			Param2LPSTR(buf1, param1);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, itoa(x, buf2, 10));
			OutputMASM("", "shl", buf, "");
		}else if(param2.disp == "3" && param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param1.base->size == 4 && seg->use == TK_USE32){
			Param2LPSTR(buf1, param1);
			sprintf(buf2, "[%s*2 + %s]", param1.base->name, param1.base->name);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf2);
			OutputMASM("", "lea", buf, "");
		}else if(param2.disp == "5" && param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param1.base->size == 4 && seg->use == TK_USE32){
			Param2LPSTR(buf1, param1);
			sprintf(buf2, "[%s*4 + %s]", param1.base->name, param1.base->name);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf2);
			OutputMASM("", "lea", buf, "");
		}else if(param2.disp == "9" && param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param1.base->size == 4 && seg->use == TK_USE32){
			Param2LPSTR(buf1, param1);
			sprintf(buf2, "[%s*8 + %s]", param1.base->name, param1.base->name);
			strcpy(buf, buf1); strcat(buf, ","); strcat(buf, buf2);
			OutputMASM("", "lea", buf, "");
		}else{
			Error("*= allowed only when left value has 1,3,5,9 and 2^n (more conditions)");
			return;
		}
	}else{
		Error("Invalid parameter");
		return;
	}
}

void	Generator::RegistDiv(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], command[16];
	int		x;
	if(param1.bSigned == true){
		strcpy(command, "sar");
	}else{
		strcpy(command, "shr");
	}
	if((param1.paramtype == P_MEM || param1.paramtype == P_REG && param1.base->type == R_GENERAL)
			&& param2.paramtype == P_IMM && param2.ndisp == 0){
		if(param2.disp == "1"){
			// 何もしない
		}else if((x = CheckPower2(atoi(param2.disp.c_str()))) != -1){
			Param2LPSTR(buf, param1);
			strcat(buf, ","); strcat(buf, itoa(x, buf1, 10));
			OutputMASM("", command, buf, "");
		}else{
			Error("/= allowed only when right value has 2^n (more conditions)");
			return;
		}
	}else{
		Error("Invalid parameter");
		return;
	}
}

void	Generator::RegistAnd(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		Param2LPSTR(buf1, param1);
		Param2LPSTR(buf2, param2);
		strcpy(buf, buf1);
		strcat(buf, ",");
		strcat(buf, buf2);
		OutputMASM("", "and", buf, "");
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistOr(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		Param2LPSTR(buf1, param1);
		Param2LPSTR(buf2, param2);
		strcpy(buf, buf1);
		strcat(buf, ",");
		strcat(buf, buf2);
		OutputMASM("", "or", buf, "");
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistXor(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		Param2LPSTR(buf1, param1);
		Param2LPSTR(buf2, param2);
		strcpy(buf, buf1);
		strcat(buf, ",");
		strcat(buf, buf2);
		OutputMASM("", "xor", buf, "");
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistCmp(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if(param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			Param2LPSTR(buf1, param1);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf1);
			OutputMASM("", "test", buf, "");
		}else{
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf2);
			OutputMASM("", "cmp", buf, "");
		}
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistShl(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param2.paramtype != P_IMM && (param2.paramtype != P_REG || strcmp(param2.base->name, "CL") != 0)){
		Error("Only immediate operand or CL allowed for parameter");
		return;
	}
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if(param1.paramtype == P_REG && param1.base->type == R_GENERAL
				&& param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "1"){
			Param2LPSTR(buf1, param1);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf1);
			OutputMASM("", "add", buf, "");
		}else if(param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			// 何もしない
		}else{
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf2);
			if(param1.bSigned == true){
				OutputMASM("", "sal", buf, "");
			}else{
				OutputMASM("", "shl", buf, "");
			}
		}
	}else{
		Error("Invalid parameter size");
		return;
	}
}

void	Generator::RegistShr(Parameter& param1, Parameter& param2){
	char	buf[2048], buf1[1024], buf2[1024];
	if(param2.paramtype != P_IMM && (param2.paramtype != P_REG || strcmp(param2.base->name, "CL") != 0)){
		Error("Only immediate operand or CL allowed for parameter");
		return;
	}
	if(param1.size == param2.size || param1.size == 0 || param2.size == 0){
		if(param2.paramtype == P_IMM && param2.ndisp == 0 && param2.disp == "0"){
			// 何もしない
		}else{
			Param2LPSTR(buf1, param1);
			Param2LPSTR(buf2, param2);
			strcpy(buf, buf1);
			strcat(buf, ",");
			strcat(buf, buf2);
			if(param1.bSigned == true){
				OutputMASM("", "sar", buf, "");
			}else{
				OutputMASM("", "shr", buf, "");
			}
		}
	}else{
		Error("Invalid parameter size");
		return;
	}
}

// 引数をサポートしたら引数をローカル変数へ追加する
// ローカル変数をサポートしたらスタックの操作もする
void	Generator::StartFunction(LPSTR funcname, Token ptype, SegmentList* segment){
	if(strcmp(funcname, "main") == 0) bExistMain = true;
	seg = segment;
	if(prevseg == NULL){
		OpenSegment(segment);
	}else if(prevseg != segment){
		CloseSegment(prevseg);
		OutputMASM("", "", "", "");		// segmentが続いているからせめて改行を入れる
		OpenSegment(segment);
	}else{
		OutputMASM("", "", "", "");		// procが続いているからせめて改行を入れる
	}
	switch(ptype){
	  case TK_FAR:  OutputMASM(funcname, "proc", "far", "");  break;
	  case TK_NEAR: OutputMASM(funcname, "proc", "near", ""); break;
	  default:
		Error("Function without near and far used");
		return;
	}
}

// StartFunction()と同様
void	Generator::EndFunction(LPSTR funcname, int sysvarlocalvalue){
	char buf[16];
	OutputMASM("#local", "equ", itoa(sysvarlocalvalue, buf, 10), "");
	OutputMASM(funcname, "endp", "", "");
	ClearLocalLabelList();
	prevseg = seg;
	seg = NULL;
}

// 配列の初期化はinitializeに入っているものをそのまま書き出すだけの仕様。
// そのうちなんとかする予定。
void	Generator::RegistVariable(LPSTR varname, LabelList* label, LPSTR initialize){
	char	buf[256];
	int		index;
	strcpy(buf, "");
	if(label->type->bStruct == true){
		sprintf(buf, "%d dup(?)", label->size);
		OutputMASM(varname, "db", buf, "");
		if(initialize[0] != 0){

#ifdef WINVC
			Error("Inserting initialized value to structure (not supported now)");
#else
			Error("Inserting initialized value to structure (not supported now)");
#endif

			return;
		}
	}else if(label->bArray == true){
		switch(label->type->size){
		  case 1: strcat(buf, "db"); break;
		  case 2: strcat(buf, "dw"); break;
		  case 4: strcat(buf, "dd"); break;
		  case 6: strcat(buf, "dp"); break;
		  default: 
			  Error("Internal Error: Invalid size");
			  return;
		}
		index = label->size / label->type->size;
		if((label->size % label->type->size) != 0) index++;
		if(initialize[0] == 0){
			sprintf(initialize, "%d dup(?)", index);
		}
		OutputMASM(varname, buf, initialize, "");
	}else{
		switch(label->size){
		  case 1: strcat(buf, "db"); break;
		  case 2: strcat(buf, "dw"); break;
		  case 4: strcat(buf, "dd"); break;
		  case 6: strcat(buf, "dp"); break;
		  default: 
			  Error("Internal Error: Invalid size");
			  return;
		}
		if(initialize[0] == 0) strcpy(initialize, "?");
		OutputMASM(varname, buf, initialize, "");
	}
}

void	Generator::StartSegment(SegmentList* segment){
	seg = segment;
	if(prevseg == NULL){
		OpenSegment(segment);
		return;
	}
	if(prevseg != segment){
		CloseSegment(prevseg);
		OutputMASM("", "", "", "");		// segmentが続いているからせめて改行を入れる
		OpenSegment(segment);
	}else{
		OutputMASM("", "", "", "");		// 定義が続いているからせめて改行を入れる
	}
}

void	Generator::EndSegment(void){
	prevseg = seg;
	seg = NULL;
}

void	Generator::AssumeSegment(SegmentList* seg, RegisterList* reg){
	char	buf[256];
	sprintf(buf, "%s:%s", reg->name, seg->name);
	OutputMASM("", "assume", buf, "");
}

void	Generator::Jump(CompareType cmptype, int labelcount){
	char	buf[256];
	sprintf(buf, "#LL%04X", labelcount);
	switch(cmptype){
	  case C_JA:  OutputMASM("", "ja" , buf, ""); break;
	  case C_JAE: OutputMASM("", "jae", buf, ""); break;
	  case C_JB:  OutputMASM("", "jb" , buf, ""); break;
	  case C_JBE: OutputMASM("", "jbe", buf, ""); break;
	  case C_JG:  OutputMASM("", "jg" , buf, ""); break;
	  case C_JGE: OutputMASM("", "jge", buf, ""); break;
	  case C_JL:  OutputMASM("", "jl" , buf, ""); break;
	  case C_JLE: OutputMASM("", "jle", buf, ""); break;
	  case C_JE:  OutputMASM("", "je" , buf, ""); break;
	  case C_JNE: OutputMASM("", "jne", buf, ""); break;
	  case C_JC:  OutputMASM("", "jc" , buf, ""); break;
	  case C_JNC: OutputMASM("", "jnc", buf, ""); break;
	  case C_JMP: OutputMASM("", "jmp", buf, ""); break;
	  default:
		Error("Internal Error: Invalid jump");
		return;
	}
}

void	Generator::GlobalJump(CompareType cmptype, LPSTR globallabel){
	char	buf[256];
	strcpy(buf, globallabel);
	switch(cmptype){
	  case C_JA:  OutputMASM("", "ja" , buf, ""); break;
	  case C_JAE: OutputMASM("", "jae", buf, ""); break;
	  case C_JB:  OutputMASM("", "jb" , buf, ""); break;
	  case C_JBE: OutputMASM("", "jbe", buf, ""); break;
	  case C_JG:  OutputMASM("", "jg" , buf, ""); break;
	  case C_JGE: OutputMASM("", "jge", buf, ""); break;
	  case C_JL:  OutputMASM("", "jl" , buf, ""); break;
	  case C_JLE: OutputMASM("", "jle", buf, ""); break;
	  case C_JE:  OutputMASM("", "je" , buf, ""); break;
	  case C_JNE: OutputMASM("", "jne", buf, ""); break;
	  case C_JC:  OutputMASM("", "jc" , buf, ""); break;
	  case C_JNC: OutputMASM("", "jnc", buf, ""); break;
	  case C_JMP: OutputMASM("", "jmp", buf, ""); break;
	  default:
		Error("Internal Error: Invalid jump");
		return;
	}
}

void	Generator::LocalJump(CompareType cmptype, LPSTR locallabel){
	char	buf[256];
	strcpy(buf, "#");
	strcat(buf, locallabel);
	switch(cmptype){
	  case C_JA:  OutputMASM("", "ja" , buf, ""); break;
	  case C_JAE: OutputMASM("", "jae", buf, ""); break;
	  case C_JB:  OutputMASM("", "jb" , buf, ""); break;
	  case C_JBE: OutputMASM("", "jbe", buf, ""); break;
	  case C_JG:  OutputMASM("", "jg" , buf, ""); break;
	  case C_JGE: OutputMASM("", "jge", buf, ""); break;
	  case C_JL:  OutputMASM("", "jl" , buf, ""); break;
	  case C_JLE: OutputMASM("", "jle", buf, ""); break;
	  case C_JE:  OutputMASM("", "je" , buf, ""); break;
	  case C_JNE: OutputMASM("", "jne", buf, ""); break;
	  case C_JC:  OutputMASM("", "jc" , buf, ""); break;
	  case C_JNC: OutputMASM("", "jnc", buf, ""); break;
	  case C_JMP: OutputMASM("", "jmp", buf, ""); break;
	  default:
		Error("Internal Error: Invalid jump");
		return;
	}
}

void	Generator::Jump(CompareType cmptype, LPSTR locallabel){
	char	buf[256];
	strcpy(buf, "#");
	strcat(buf, locallabel);
	switch(cmptype){
	  case C_JA:  OutputMASM("", "ja" , buf, ""); break;
	  case C_JAE: OutputMASM("", "jae", buf, ""); break;
	  case C_JB:  OutputMASM("", "jb" , buf, ""); break;
	  case C_JBE: OutputMASM("", "jbe", buf, ""); break;
	  case C_JG:  OutputMASM("", "jg" , buf, ""); break;
	  case C_JGE: OutputMASM("", "jge", buf, ""); break;
	  case C_JL:  OutputMASM("", "jl" , buf, ""); break;
	  case C_JLE: OutputMASM("", "jle", buf, ""); break;
	  case C_JE:  OutputMASM("", "je" , buf, ""); break;
	  case C_JNE: OutputMASM("", "jne", buf, ""); break;
	  case C_JC:  OutputMASM("", "jc" , buf, ""); break;
	  case C_JNC: OutputMASM("", "jnc", buf, ""); break;
	  case C_JMP: OutputMASM("", "jmp", buf, ""); break;
	  default:
		Error("Internal Error: Invalid jump");
		return;
	}
}

LPSTR	Generator::ConstString(LPSTR str){
	LPSTR	initialize = new char[strlen(str) * 2];
	LPSTR	p = initialize;
	int		quoted = -1;
	
	str++;	// "を飛ばす
	while(*str != '\0'){
		if(IS_KANJI1(*((unsigned char*)str))){
			if(quoted == -1){
				quoted = 1;
				*p++ = '\"';
			}else if(quoted == 0){
				quoted = 1;
				*p++ = ','; *p++ = '\"';
			}
			*p++ = *str++;
			*p++ = *str++;
		}else if(*str == '\\'){
			str++;
			if(quoted == -1){
				quoted = 0;
			}else if(quoted == 1){
				quoted = 0;
				*p++ = '\"'; *p++ = ',';
			}else{
				*p++ = ',';
			}
			switch(*str){
			  case 'n':
				*p++ = '0'; *p++ = 'A'; *p++ = 'H';
				break;
			  case 'r':
				*p++ = '0'; *p++ = 'D'; *p++ = 'H';
				break;
			  case 't':
				*p++ = '0'; *p++ = '9'; *p++ = 'H';
				break;
			  case '0':
				*p++ = '0'; *p++ = '0'; *p++ = 'H';
				break;
			  default:
				*p++ = *str;
				break;
			}
			str++;
		}else if(*str == '\"'){
			break;
		}else{
			if(quoted == -1){
				quoted = 1;
				*p++ = '\"';
			}else if(quoted == 0){
				quoted = 1;
				*p++ = ','; *p++ = '\"';
			}
			*p++ = *str++;
		}
	}
	if(quoted == 1){
		*p++ = '\"';
	}
	*p = '\0';
	
	return initialize;
}

void	Generator::Asmout(LPSTR buf){
	OutFile.PutLine(string(buf)+"\n");
}
