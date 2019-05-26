#include <string.h>
#include "parser.h"
#ifdef LINUX
#define ltoa(n,b,l) (sprintf(b, "%ld", n), b)
#define itoa(n,b,l) (sprintf(b, "%d", n), b)
#endif

Parser::Parser(void){
	lpLogFP=stderr;
	nErrorCount=0;
	LoopLabelPoint=0;
	StructAlignCount = 0;
	defaultlocal.paramtype = P_MEM;
	defaultlocal.seg = generator.FindRegisterList("SS");
	defaultlocal.base = generator.FindRegisterList("EBP");
	defaultsegment = defaultdatasegment =NULL;
}


// Parameter追加系の処理関数
HRESULT	Parser::Sizeof(Parameter& param){
	TagList*	tag;
	int			size;
	if(scanner.PeekToken() == TK_SIZEOF) scanner.GetToken();
	if(scanner.GetToken() != TK_LPR){
		Error("Missing \"(\"");
		return 2;
	}
	switch(scanner.PeekToken()){
	  case TK_UNSIGNED: case TK_SIGNED: scanner.GetToken(); break;
	}
	scanner.GetToken();
//	if(scanner.PeekToken() == TK_STRUCT) scanner.GetToken(); // 「struct タグ名」を許可するための苦肉の策
	tag = generator.FindTagList(scanner.GetLabel());
	if(tag == NULL){
		Error("Invalid type");
		return 3;
	}
	size = tag->size;
	switch(scanner.PeekToken()){
	  case TK_NEAR:
		if(generator.seg->use == TK_USE32) size = 4; else size = 2;
		scanner.GetToken();						// 次へ進める
		if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
			Error("Missing \"*\" after near");
			return 4;
		}
		break;
	  case TK_FAR:
		if(generator.seg->use == TK_USE32) size = 6; else size = 4;
		scanner.GetToken();						// 次へ進める
		if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
			Error("Missing \"*\" after far");
			return 4;
		}
		break;
	  case TK_MUL:
		if(generator.seg->use == TK_USE32) size = 6; else size = 4;
		scanner.GetToken();
		break;
	}
	param.ndisp += size;
	if(scanner.GetToken() != TK_RPR){
		Error("Missing \")\"");
		return 5;
	}
	return 0;
}

// Parameter追加系の処理関数
HRESULT	Parser::Address(Parameter& param){
	LabelList* label;
	Parameter	selparam;			// Selector()はparamが破壊されるから
	if(scanner.PeekToken() == TK_AND) scanner.GetToken();
	if(scanner.GetToken() != TK_LABEL){
		Error("Invalid value after \"&\"");
		return 2;
	}
	label = generator.FindLabelList(scanner.GetLabel());
	if(label == NULL){
		Error("Invalid value after \"&\"");
		return 2;
	}
	if(Selector(selparam, label) != 0) return 1;
	if(selparam.bLabel == false){
		Error("Cannot use  \"&\" for register, array, and immediate operand");
		return 3;
	}
	selparam.disp = "offset " + selparam.disp;
	Param2Param(param, selparam);
	return 0;
}

// Parameter追加系の処理関数
// &&のチェック機構が甘い。default == のため。
HRESULT	Parser::LocalAddress(Parameter& param){
	LabelList*	label;
	Parameter	selparam;			// Selector()はparamが破壊されるから
	char		buf[256];
	if(scanner.PeekToken() == TK_DAND) scanner.GetToken();
	if(scanner.PeekToken() != TK_LABEL) return 0;
	scanner.GetToken();
	label = generator.FindLocalLabelList(scanner.GetLabel());
	if(label == NULL){
		Error("Invalid local value after \"&&\"");
		return 3;
	}
	if(label->bAlias == false){
		Error("Cannot use \"&&\" for address label");
		return 4;
	}
	if(Selector(selparam, label) != 0) return 1;
	if(label->bArray == true || label->alias.paramtype != P_MEM){
		Error("Cannot use  \"&\" for register, array, and immediate operand");
		return 5;
	}
	param.disp += ltoa(selparam.ndisp + label->nLocalAddress, buf, 10);
	return 0;
}

// paramの中身は壊される
HRESULT	Parser::Selector(Parameter& param, LabelList* label){
	char	buf[256];
	string	dummy;
	strcpy(buf, "");
	param.bSigned=label->bSigned; param.type=label->type; param.ptype =label->ptype;
	param.pdepth =label->pdepth;  param.size=label->size; param.bArray=label->bArray;
	if(label->bAlias == true){
		param.ndisp = label->alias.ndisp; param.bLabel = false;
		param.seg   = label->alias.seg;   param.base = label->alias.base;
		param.index = label->alias.index; param.disp = label->alias.disp;
		param.paramtype = label->alias.paramtype;
	}else{
		param.paramtype = P_MEM;
		if(generator.FindLocalLabelList(scanner.GetLabel()) != NULL){
			if(label->bStatic == true){
				strcat(buf, "__");
				strcat(buf, lpFunctionName);
			}else{
				strcat(buf, "#");
			}
		}
		strcat(buf, scanner.GetLabel());
		if(param.bArray == true || param.type->bStruct == true){
			param.bLabel = false; param.disp = dummy + "offset " + buf;
		}else{
			param.bLabel = true;  param.disp = buf;
		}
	}
	if(Selector2(param) != 0) return 1;
	if(param.ndisp != 0){
		if(param.disp == ""){
			param.disp += ltoa(param.ndisp, buf, 10);
		}else{
			param.disp += dummy + "+" + ltoa(param.ndisp, buf, 10);
		}
		param.ndisp = 0;
	}
	return 0;
}

HRESULT	Parser::Selector2(Parameter& param){
	MemberList*	member;
	switch(scanner.PeekToken()){
	  case TK_LSQ:
		if(param.pdepth == 0 && param.bArray == false){
			Error("Only pointer value avalible before \"[\"");
			return 2;
		}
		if(Array(param) != 0) return 1;
		if(Selector2(param) != 0) return 1;		//再帰をかける
		break;
	  case TK_DOT:
		if(param.type->bStruct == false){

#ifdef WINVC
			Error("Cannot use \".\" not for structure");
#else
			Error("Cannot use \".\" not for structure");
#endif

			return 3;
		}
		if(param.pdepth != 0){
			Error("Cannot use \".\" for pointer");
			return 4;
		}
		scanner.GetToken();			// 次に進める
		scanner.GetToken();
		member = param.type->FindMemberList(scanner.GetLabel());
		if(member == NULL){
			Error("Invalid member after \".\"");
			return 5;
		}
		Member2Param(param, member);
		if(Selector2(param) != 0) return 1;		//再帰をかける
		break;
	  case TK_MEMBER:
		if(param.type->bStruct == false){

#ifdef WINVC
			Error("Not for structure, cannot use \"->\"");
#else
			Error("Not for structure, cannot use \"->\"");
#endif

			return 6;
		}
		if(param.pdepth == 0){
			Error("Not for pointer, cannot use \"->\"");
			return 7;
		}
		if(param.bLabel == true){
			Error("Can use \"->\" only for alias");
			return 8;
		}
		scanner.GetToken();			// 次に進める
		scanner.GetToken();
		member = param.type->FindMemberList(scanner.GetLabel());
		if(member == NULL){
			Error("Invalid member after \"->\"");
			return 9;
		}
		Member2Param(param, member);
		if(Selector2(param) != 0) return 1;		//再帰をかける
		break;
	}
	return 0;
}

void	Parser::Member2Param(Parameter& param, MemberList* member){
	param.bSigned  = member->bSigned;
	param.type     = member->type;
	param.ptype    = member->ptype;
	param.pdepth   = member->pdepth;
	param.bArray   = member->bArray;
	param.size     = member->size;
	param.ndisp   += member->offset;
}

HRESULT	Parser::Param2Param(Parameter& to, Parameter& from){
	switch(to.paramtype){
	  case P_MEM:
		if(to.seg != NULL && from.seg != NULL){
			Error("Two more items in Seg:Base");
			return 2;
		}else if(to.seg == NULL && from.seg != NULL){
			if(to.base != NULL){
				if(to.base->bIndex == false || to.index != NULL){
					Error("Multiple base registers not allowed");
					return 3;
				}
				to.index = to.base;
			}
			to.seg  = from.seg;
			to.base = from.base;
		}else if(to.seg == NULL && from.base != NULL){
			if(to.base != NULL){
				if(to.base->bIndex == false || to.index != NULL){
					Error("Multiple base registers not allowed");
					return 3;
				}
				to.index = to.base;
			}
			to.base = from.base;
		}
		if(to.scale != 1 && from.scale != 1){
			Error("Two more items in Index*Scale");
			return 4;
		}else if(to.scale == 1 && from.scale != 1){
			if(to.index != NULL){
				if(to.index->bBase == false || to.base != NULL){
					Error("Multiple index registers not allowed");
					return 5;
				}
				to.base = to.index;
			}
			to.index = from.index;
			to.scale = from.scale;
		}else if(to.scale == 1 && from.index != NULL){
			if(to.index != NULL){
				if(to.index->bBase == false || to.base != NULL){
					Error("Multiple index registers not allowed");
					return 5;
				}
				to.base = to.index;
			}
			to.index = from.index;
		}
		to.disp  += from.disp;
		to.ndisp += from.ndisp;
		break;
	  case P_ERR: to = from; break;
	  case P_REG:
		if(to.base != NULL){
			Error("Register already exists");
			return 6;
		}
		to.base = from.base;
		break;
	  case P_IMM:
		if(to.disp != ""){
			to.disp += "+" + from.disp;
		}else{
			to.disp += from.disp;
		}
		to.ndisp += from.ndisp;
		break;
	  default:
		Error("Internal error on parameter");
		return 7;
	}
	return 0;
}

// offsetキャストやsegmentキャストは指定できない
HRESULT	Parser::Array(Parameter& param){
	Token			ope = TK_PLUS;
	int				PRnest, SQnest;
	Parameter		selparam, castparam;			// Selector()はparamが破壊されるから
	SegmentList*	seg;
	RegisterList*	reg;
	LabelList*		label;
	switch(scanner.GetToken()){
	  case TK_LPR: PRnest=1; SQnest=100; break;	// おそらく関係ない方は0にならない
	  case TK_LSQ: SQnest=1; PRnest=100; break;	// おそらく関係ない方は0にならない
	  default: return 0;
	}
	param.paramtype = P_MEM;
	if(param.disp != "") param.disp += "+";
	while(true){
		switch(scanner.GetToken()){
		  case TK_LABEL:
			seg   = generator.FindSegmentList(scanner.GetLabel());
			if(seg != NULL){
				if(ope != TK_PLUS){
					Error("Cannot use operator except for \"+\", only for immediate operand");
					return 2;
				}
				if(ArrayReg(param, seg->assume) != 0) return 1;	// ?
				break;
			}
			reg   = generator.FindRegisterList(scanner.GetLabel());
			if(reg != NULL){
				if(ope != TK_PLUS){
					Error("Cannot use operator except for \"+\", only for immediate operand");
					return 2;
				}
				if(ArrayReg(param, reg) != 0) return 1;			// ?
				break;
			}
			label = generator.FindLabelList(scanner.GetLabel());
			if(label != NULL){
				if(Selector(selparam, label) != 0) return 1;	// ?
				if(selparam.bLabel == true){
					Error("Not allowed to be followed by value");
					return 3;
				}
				if(selparam.base  != NULL) PointerCheck(selparam.base);
				if(selparam.index != NULL) PointerCheck(selparam.index);
				Param2Param(param, selparam);
				if(castparam.type != NULL){
					selparam.type =castparam.type;  selparam.bSigned=castparam.bSigned;
					selparam.ptype=castparam.ptype; selparam.pdepth =castparam.pdepth;
				}
				if(param.pdepth != 0){
					if(param.type == NULL){
						param.type =selparam.type;  param.bSigned=selparam.bSigned;
						param.ptype=selparam.ptype; param.pdepth =selparam.pdepth;
					}else if(param.type != selparam.type || param.bSigned != selparam.bSigned
							|| param.ptype != selparam.ptype || param.pdepth != selparam.pdepth){
						Error("Cannot add different type pointer");
						return 4;
					}
				}
				castparam.type = NULL;
				break;
			}
			Error("Invalid register or value");
			return 5;
		  case TK_NUM:   param.disp+=scanner.GetLabel();       castparam.type=NULL; break;
		  case TK_SIZEOF:if(Sizeof(param) != 0)  return 1;     castparam.type=NULL; break;
		  case TK_AND:   if(Address(param) != 0) return 1;     castparam.type=NULL; break;
		  case TK_DAND:  if(LocalAddress(param) != 0) return 1;castparam.type=NULL; break;
		  case TK_PLUS:  param.disp+="+";                      castparam.type=NULL; continue;	// 単項演算子+
		  case TK_MINUS: param.disp+="-";     ope=TK_MINUS;    castparam.type=NULL; continue;	// 単項演算子-
		  case TK_CPL:   param.disp+=" NOT "; ope=TK_CPL;      castparam.type=NULL; continue;	// 単項演算子~
		  case TK_LPR:
			if(scanner.PeekToken() >= TK_DWORD && scanner.PeekToken() <= TK_SEGMENT){
				if(Cast(castparam) != 0) return 1;		// ?
			}else{
				PRnest++; param.disp += "(";
			}
			continue;
		  default:
			Error("Operator not properly used nor correct operator");
			return 6;
		}
		ope = scanner.GetToken();
		switch(ope){
		  case TK_PLUS:  if(param.disp != "") param.disp+="+";     break;
		  case TK_MINUS: param.disp+="-";                          break;
		  case TK_MUL:   param.disp+="*";                          break;
		  case TK_DIV:   param.disp+="/";                          break;
		  case TK_REM:   param.disp+=" MOD ";                      break;
		  case TK_AND:   param.disp+=" AND ";                      break;
		  case TK_OR:    param.disp+=" OR ";                       break;
		  case TK_XOR:   param.disp+=" XOR ";                      break;
		  case TK_SHR:   param.disp+=" SHR ";                      break;
		  case TK_SHL:   param.disp+=" SHL ";                      break;
		  case TK_RPR:   if((--PRnest) != 0) param.disp += ")";    break;
		  case TK_RSQ:   SQnest--;                                 break;
		  default:
			Error("Operator not properly used nor correct operator");
			return 6;
		}
		if(PRnest == 0 || SQnest == 0) break;
	}
	if(param.type == NULL){
		param.size=0; param.bArray=false; param.pdepth=0;
	}else{
		param.size=param.type->size; param.bArray=false;
		if(param.pdepth > 0) param.pdepth--;	// 臨時。ホントはif節だけでよいはず
	}
	return 0;
}

void	Parser::PointerCheck(RegisterList* reg){
	if(reg == NULL) return;
	if(generator.seg == NULL) return;
}

HRESULT	Parser::ArrayReg(Parameter& param, RegisterList* reg){
	Parameter	param2;
	LabelList*	label;
	if(reg == NULL) return 0;
	switch(reg->type){
	  case R_SEGREG:
		param2.seg = reg;
		if(scanner.GetToken() != TK_COLON){
			Error("Segment register must be followed by \":\"");
			return 2;
		}
		switch(scanner.GetToken()){
		  case TK_NUM:
			param2.disp = scanner.GetLabel();
			break;
		  case TK_LABEL:
			reg = generator.FindRegisterList(scanner.GetLabel());
			label = generator.FindLabelList(scanner.GetLabel());
			if(reg != NULL){
				PointerCheck(reg);
				if(reg->bBase == false){
					Error("Invalid Seg:Base");
					return 4;
				}
				param2.base = reg;
			}else if(label != NULL){
				if(label->bAlias == false){
					Error("Invalid alias");
					return 7;
				}
				switch(label->alias.paramtype){
				  case P_IMM:
					param2.disp = label->alias.disp;
					param2.ndisp = label->alias.ndisp;
				  case P_REG:
					PointerCheck(reg);
					if(reg->bBase == false){
						Error("Invalid Seg:Base");
						return 4;
					}
					param2.base = label->alias.base;
					break;
				  case P_MEM:
					Error("Memory alias not allowed to be specified");
					return 8;
				}
			}else{
				Error("Invalid register");
				return 3;
			}
			break;
		}
		break;
	  case R_GENERAL:
		reg = generator.FindRegisterList(scanner.GetLabel());
		if(reg == NULL){
			Error("Invalid register");
			return 3;
		}
		PointerCheck(reg);
		if(reg->bIndex == true){
			if(scanner.PeekToken() == TK_MUL){
				scanner.GetToken();					// 次へ進める
				if(scanner.GetToken() != TK_NUM){
					Error("Must be Index*{1,2,4,8}");
					return 5;
				}
				if(scanner.GetNum() != 1 && scanner.GetNum() != 2
						&& scanner.GetNum() != 4 && scanner.GetNum() != 8){
					Error("Must be Index*{1,2,4,8}");
					return 5;
				}
				param2.index = reg;
				param2.scale = scanner.GetNum();
			}else{
				if(param.base == NULL && reg->bBase == true) param2.base = reg;
				else param2.index = reg;
			}
			break;
		}
		if(reg->bBase == true){
			param2.base = reg;
		}
		Error("Invalid base register or index register");
		return 6;
	  default:
		Error("Invalid base, index, or segment register");
		return 6;
	}
	Param2Param(param, param2);
	return 0;
}

HRESULT	Parser::Pointer(Parameter& param){
	Parameter	selparam;				// Selector()はparamが破壊されるから
	LabelList*	label;
	if(scanner.PeekToken() == TK_MUL) scanner.GetToken();
	switch(scanner.PeekToken()){
	  case TK_LABEL:
		scanner.GetToken();				//次に進める
		label = generator.FindLabelList(scanner.GetLabel());
		if(label == NULL){
			Error("Value not defined");
			return 2;
		}
		if(Selector(selparam, label) != 0) return 1;
		if(selparam.pdepth == 0){
			Error("Invalid pointer");
			return 3;
		}
		if(selparam.bLabel == true){
			Error("Value not expected to be pointer");
			return 4;
		}
		Param2Param(param, selparam);
		param.bSigned=selparam.bSigned;    param.ptype =selparam.ptype;
		param.size   =selparam.type->size; param.bArray=false;
		param.pdepth--;
		break;
	  case TK_LPR:
		if(Array(param) != 0) return 1;
		break;
	}
	return 0;
}

HRESULT	Parser::GetParameter(Parameter& param){
	string			dummy;
	char			*buf, *initialize;
	SegmentList*	seg;
	LabelList*		stlabel;
	RegisterList*	reg;
	LabelList*		label;
	Parameter		selparam, castparam;
	if(scanner.PeekToken() == TK_LPR){
		scanner.GetToken();
		if(scanner.PeekToken() >= TK_DWORD && scanner.PeekToken() <= TK_SEGMENT){
			if(Cast(castparam) != 0) return 1;
		}else{
			Error("\"(etc)\" not allowed in unnecessary position");
			return 2;
		}
	}
	switch(scanner.PeekToken()){
	  case TK_MUL:
		if(Pointer(param) != 0) return 1;
		if(castparam.type != NULL){
			param.type   =castparam.type;    param.ptype =castparam.ptype;
			param.size   =castparam.size;    param.pdepth=castparam.pdepth;
			param.bSigned=castparam.bSigned;
		}
		break;
	  case TK_LSQ:
		if(Array(param) != 0) return 1;
		if(castparam.type != NULL){
			param.type   =castparam.type;    param.ptype =castparam.ptype;
			param.size   =castparam.size;    param.pdepth=castparam.pdepth;
			param.bSigned=castparam.bSigned;
		}
		break;
	  case TK_SIZEOF: case TK_AND: case TK_DAND: case TK_NUM: case TK_MINUS:
		if(Immedeate(param) != 0) return 1;
		break;
	  case TK_WQUOTE:
		scanner.GetToken();
		if(defaultdatasegment == NULL){
			Error("Missing default data segment");
		}
		buf = new char[256];
		sprintf(buf, "LL%04X", LocalLabelCounter);
		strcat(buf, "__");
		strcat(buf, lpFunctionName);
		LocalLabelCounter++;
		stlabel = new LabelList;
		stlabel->bArray = true;
		stlabel->pdepth = 1;
		stlabel->bStatic = true;
		stlabel->segment = defaultdatasegment;
		stlabel->size = strlen(scanner.GetLabel()) - 2 + 1;
		stlabel->type = generator.FindTagList("char");
		initialize = generator.ConstString(scanner.GetLabel());
		defaultdatasegment->AddStaticData(buf, stlabel, initialize);
		param.paramtype = P_MEM; param.bLabel = true; param.disp = dummy + "offset " + buf;
		param.pdepth = 1; param.type = stlabel->type; param.ptype = TK_NEAR;
		if(generator.seg->use == TK_USE32) param.size = 4; else param.size = 2;
		break;
	  case TK_LABEL:
		scanner.GetToken();
		seg = generator.FindSegmentList(scanner.GetLabel());
		if(seg != NULL){
			if(scanner.PeekToken() == TK_DCOLON){
				scanner.GetToken();
				if(scanner.GetToken() != TK_WQUOTE){
					Error("Must be Segment::\"～\"");
					return 8;
				}
				buf = new char[256];
				sprintf(buf, "LL%04X", LocalLabelCounter);
				strcat(buf, "__");
				strcat(buf, lpFunctionName);
				LocalLabelCounter++;
				stlabel = new LabelList;
				stlabel->bArray = true;
				stlabel->pdepth = 1;
				stlabel->bStatic = true;
				stlabel->segment = seg;
				stlabel->size = strlen(scanner.GetLabel()) - 2 + 1;
				stlabel->type = generator.FindTagList("char");
				initialize = generator.ConstString(scanner.GetLabel());
				seg->AddStaticData(buf, stlabel, initialize);
				param.paramtype = P_MEM; param.bLabel = true; param.disp = dummy + "offset " + buf;
				param.pdepth = 1; param.type = stlabel->type; param.ptype = TK_NEAR;
				if(generator.seg->use == TK_USE32) param.size = 4; else param.size = 2;
				break;
			}else{
				reg = seg->assume;
				if(reg == NULL){
					Error("Followed by segment name independently");
					return 8;
				}
			}
		}
		reg = generator.FindRegisterList(scanner.GetLabel());
		if(reg != NULL){
			switch(reg->type){
			  case R_SEGREG:
				selparam.seg = reg;
				if(scanner.PeekToken() != TK_COLON){
					if(seg != NULL){
						scanner.GetToken();	// 「:」をとばす
						Error("Followed by segment name independently");
						return 8;
					}else{
						selparam.base=reg;	param.bLabel=false; param.paramtype=P_REG;
						param.pdepth =0;	param.size  =reg->size;
					}
				}else{
					scanner.GetToken();	// 「:」をとばす
					scanner.GetToken();
					reg = generator.FindRegisterList(scanner.GetLabel());
					if(reg == NULL){
						Error("Invalid register");
						return 4;
					}
					PointerCheck(reg);
					if(reg->bBase == false){
						Error("Must be Seg:Base");	// segreg:constは書けない
						return 5;
					}
					selparam.base=reg; param.bLabel=false;  param.paramtype=P_MEM;
					param.pdepth =1;   param.ptype =TK_FAR; param.size     =reg->size + 2;
					param.bSigned=true;
					if(castparam.type != NULL){
						param.type   =castparam.type;    param.ptype =castparam.ptype;
						param.size   =castparam.size;    param.pdepth=castparam.pdepth;
						param.bSigned=castparam.bSigned;
					}else if(castparam.ptype == TK_OFFSET || castparam.ptype == TK_SEGMENT){
						if(param.ptype == TK_NEAR){
							Error("Not for far pointer, segment and offset casted");
							return 6;
						}
						param.ptype=castparam.ptype; param.size=castparam.size;
					}
				}
				break;
			  default:
				selparam.base=reg; param.bLabel=false;	param.paramtype=P_REG;
				param.pdepth =0;	param.size  =reg->size;
				if(castparam.type != NULL){
					param.type   =castparam.type;    param.ptype =castparam.ptype;
					param.size   =castparam.size;    param.pdepth=castparam.pdepth;
					param.bSigned=castparam.bSigned;
				}else if(castparam.ptype == TK_OFFSET || castparam.ptype == TK_SEGMENT){
					if(param.ptype == TK_NEAR){
						Error("Not for far pointer, segment and offset casted");
						return 6;
					}
					param.ptype=castparam.ptype; param.size=castparam.size;
				}
				break;
			}
			Param2Param(param, selparam);
			break;
		}
		label = generator.FindLabelList(scanner.GetLabel());
		if(label != NULL){
			if(Selector(selparam, label) != 0) return 1;
			Param2Param(param, selparam);
			param.bLabel   =selparam.bLabel;    param.bSigned=selparam.bSigned;
			param.paramtype=selparam.paramtype; param.pdepth =selparam.pdepth;
			param.ptype    =selparam.ptype;     param.size   =selparam.size;
			param.bArray   =selparam.bArray;    param.type   =selparam.type;
			if(castparam.type != NULL){
				param.type   =castparam.type;    param.ptype =castparam.ptype;
				param.size   =castparam.size;    param.pdepth=castparam.pdepth;
				param.bSigned=castparam.bSigned;
			}else if(castparam.ptype == TK_OFFSET || castparam.ptype == TK_SEGMENT){
				if(param.ptype == TK_NEAR){
					Error("Not for far pointer, segment and offset casted");
					return 6;
				}
				param.ptype=castparam.ptype; param.size=castparam.size;
				param.pdepth=castparam.pdepth; param.paramtype=castparam.paramtype; // Castにより追加
				//! offsetが数値のエイリアスを動作させるためのあやしい追加
				if(param.base == NULL) param.paramtype = P_IMM;
			}
			break;
		}
		// 変数でもレジスタでもない場合はアドレスラベルと見なす
		param.type =generator.FindTagList("dword");
		param.ptype=TK_NEAR; param.pdepth=1; param.size=4; param.bLabel=true;
		param.disp =scanner.GetLabel(); param.paramtype=P_MEM;
		break;
	  default:
		Error("Invalid register, value, or number");
		return 7;
	}
	return 0;
}

// rep, true, falseなどのコマンドキャストはどうやって渡すのか？
// (の次のトークンから渡す
HRESULT	Parser::Cast(Parameter& param){
	TagList*	tag;
	Token		token;
	switch(scanner.PeekToken()){
	  case TK_SIGNED:   param.bSigned=true;  scanner.GetToken(); break;
	  case TK_UNSIGNED: param.bSigned=false; scanner.GetToken(); break;
	}
	switch(scanner.PeekToken()){
	  case TK_OFFSET: 
		scanner.GetToken(); param.ptype=TK_OFFSET;
		if(generator.seg->use == TK_USE32) param.size=4; else param.size=2;
//		if(param.seg != NULL){			// あやしい追加分
			param.paramtype = P_REG;
			param.pdepth = 0;
//		}
		if(scanner.GetToken() != TK_RPR){
			Error("Missing \")\"");
			return 4;
		}
		return 0;
	  case TK_SEGMENT:
		scanner.GetToken(); param.ptype=TK_SEGMENT; param.size=2;
//		if(param.seg != NULL){			// あやしい追加分
			param.paramtype = P_REG;
			param.base = param.seg;
			param.pdepth = 0;
//		}
		if(scanner.GetToken() != TK_RPR){
			Error("Missing \")\"");
			return 4;
		}
		return 0;
	}
	scanner.GetToken();
//	if(scanner.PeekToken() == TK_STRUCT) scanner.GetToken(); // 「struct タグ名」を許可するための苦肉の策
	tag = generator.FindTagList(scanner.GetLabel());
	if(tag == NULL){
		Error("Invalid type for cast or invalid type");
		return 3;
	}
	param.type = tag;
	param.size = param.type->size;
	token = scanner.GetToken();
	switch(token){
	  case TK_NEAR: case TK_FAR:
		if(param.ptype != TK_OFFSET && param.ptype !=TK_SEGMENT) param.ptype = token;
		if(scanner.GetToken() != TK_MUL){
			Error("Cannot find \"*\" after near, far keywords");
			return 2;
		}
		// 本当はここに*がいくつ続いてもいいようにする
		param.pdepth = 1;
		if(param.ptype == TK_NEAR){
			if(generator.seg->use == TK_USE32) param.size = 4; else param.size = 2;
		}else{
			if(generator.seg->use == TK_USE32) param.size = 6; else param.size = 4;
		}
		break;
	  case TK_MUL:
		// 本当はここに*がいくつ続いてもいいようにする
		param.pdepth = 1;
		if(param.ptype == TK_NEAR){
			if(generator.seg->use == TK_USE32) param.size = 4; else param.size = 2;
		}else{
			if(generator.seg->use == TK_USE32) param.size = 6; else param.size = 4;
		}
		break;
	  case TK_RPR:
		// 臨時デバッグ。ここは(int)等の時に通る
		return 0;
	}
	if(scanner.GetToken() != TK_RPR){
		Error("Missing \")\"");
		return 4;
	}
	return 0;
}

HRESULT	Parser::Immedeate(Parameter& param){
	bool			bFlag = false;
	int				PRnest = 0;
	LabelList*		label;
	
	param.paramtype=P_IMM; param.pdepth=0;     param.type  =NULL;
	param.bSigned  =false; param.bLabel=false; param.bArray=false;
	
	while(bFlag == false){
		switch(scanner.GetToken()){
		  case TK_AND:   if(Address(param) != 0) return 1;      break;
		  case TK_DAND:  if(LocalAddress(param) != 0) return 1; break;
		  case TK_SIZEOF:if(Sizeof(param) != 0) return 1;       break;
		  case TK_NUM:   param.disp+=scanner.GetLabel();        break;
		  case TK_PLUS:  param.disp+="+";                       continue;	// 単項演算子+
		  case TK_MINUS: param.disp+="-";                       continue;	// 単項演算子-
		  case TK_CPL:   param.disp+=" NOT ";                   continue;	// 単項演算子~
		  case TK_LABEL:
			label = generator.FindLabelList(scanner.GetLabel());
			if(label == NULL || label->alias.paramtype != P_IMM) return 1;
			param.disp += label->alias.disp;
			param.ndisp += label->alias.ndisp;
			break;
		  case TK_LPR:
			if(scanner.PeekToken() >= TK_DWORD && scanner.PeekToken() <= TK_SEGMENT){
				if(Cast(param) != 0) return 1;
			}else{
				PRnest++; param.disp += "(";
			}
			continue;
		  default:
			Error("Operator not properly used nor correct operator");
			return 2;
		}
		switch(scanner.PeekToken()){
		  case TK_PLUS:  if(param.disp != "") param.disp+="+"; scanner.GetToken(); break;
		  case TK_MINUS: param.disp+="-";                      scanner.GetToken(); break;
		  case TK_MUL:   param.disp+="*";                      scanner.GetToken(); break;
		  case TK_DIV:   param.disp+="/";                      scanner.GetToken(); break;
		  case TK_REM:   param.disp+=" MOD ";                  scanner.GetToken(); break;
		  case TK_AND:   param.disp+=" AND ";                  scanner.GetToken(); break;
		  case TK_OR:    param.disp+=" OR ";                   scanner.GetToken(); break;
		  case TK_XOR:   param.disp+=" XOR ";                  scanner.GetToken(); break;
		  case TK_SHR:   param.disp+=" SHR ";                  scanner.GetToken(); break;
		  case TK_SHL:   param.disp+=" SHL ";                  scanner.GetToken(); break;
		  case TK_RPR:
			  if((--PRnest) < 0){
				  bFlag = true;
			  }else{
				  param.disp+=")"; scanner.GetToken();
			  }
			  break;
		  default: bFlag=true; break;
		}
	}
	return 0;
}

void	Parser::Expression(void){
	Parameter	param1, param2;
	Token		command, tmp;
	if(GetParameter(param1) != 0) return;		// skipline
	command = scanner.GetToken();
	tmp = scanner.PeekToken();
	if(tmp != TK_DLM && tmp != TK_RPR) if(GetParameter(param2) != 0) return;	// skipline
	switch(command){
	  case TK_BECOME:
		generator.Op2(command, param1, param2);
		break;
	  case TK_ADD:  case TK_SUB: case TK_MULA: case TK_DIVA:
	  case TK_ANDA: case TK_ORA: case TK_XORA: case TK_SHLA: case TK_SHRA:
		generator.Op2(command, param1, param2);
		break;
	  case TK_INC: case TK_DEC:
		generator.Op1(command, param1);
		break;
	  case TK_CPLA: case TK_NEG:
		generator.Op1(command, param1);		// 本当はparam1==param2のチェックをする
		break;
	  default:
		Error("Invalid operator in expression");
		// skipline
		return;
	}
	tmp = scanner.PeekToken();
	if(tmp == TK_DLM){
		scanner.GetToken();
	}else if(tmp != TK_RPR){
		Error("Missing \";\"");
		// skipline
		return;
	}
	return;
}

// case, default, elseはどうする？
void	Parser::Statement(void){
	char			buf[2048], buf2[1024];
	LPSTR			str;
	LPSTR			p;
	LabelList*		label;
	RegisterList*	reg;
	TagList*		tag;
	SegmentList*	seg;
	Parameter		param;
	switch(scanner.PeekToken()){
	  case TK_DLM: scanner.GetToken(); break;
	  case TK_LABEL:
		str = strdup(scanner.GetLabel());
		label = generator.FindLabelList(str);
		reg   = generator.FindRegisterList(str);
		tag   = generator.FindTagList(str);
		seg   = generator.FindSegmentList(str);
		if(reg != NULL || seg != NULL){
			Expression();
		}else if(label != NULL){
			if(label->bFunction == true){
				scanner.GetToken();
				if(scanner.GetToken() != TK_LPR || scanner.GetToken() != TK_RPR || scanner.GetToken() != TK_DLM){
					Error("Descriptive error of function call");
					// skipline
					return;
				}
				generator.Call(label->ptype, str);
			}else{
				Expression();
			}
		}else if(tag != NULL){
			DefineVariable();
		}else{
			scanner.GetToken();			// 次へ進める
			switch(scanner.GetToken()){
			  case TK_COLON:	// アドレスラベル定義
				if(StatementLevel == 0){
					if(str[0] == '#'){
						Error("Cannot define local label in root scope");
						return;
					}else{
						if(str[0] =='@'){
							p = str + 1;
						}else{
							p = str;
						}
						if(generator.FindGlobalLabelList(p) != NULL){
							Error("Cannot duplicate to register label");
							return;
						}
						label = new LabelList(false, generator.FindTagList("dword")
							, TK_NEAR, 1, generator.seg, 4, false, false, param, 0, false);
						generator.AddGlobalLabelList(p, label);
						generator.GlobalLabel(p);
					}
				}else if(StatementLevel == 1){
					// セグメント内でのラベル定義は無視
				}else{
					if(str[0] == '@'){
						p = str + 1;
						if(generator.FindGlobalLabelList(p) != NULL){
							Error("Cannot duplicate to register label");
							return;
						}
						label = new LabelList(false, generator.FindTagList("dword")
							, TK_NEAR, 1, generator.seg, 4, false, false, param, 0, false);
						generator.AddGlobalLabelList(p, label);
						generator.GlobalLabel(p);
					}else{
						if(str[0] =='#'){
							p = str + 1;
						}else{
							p = str;
						}
						if(generator.FindLocalLabelList(p) != NULL){
							Error("Cannot duplicate to register label");
							return;
						}
						label = new LabelList(false, generator.FindTagList("dword")
							, TK_NEAR, 1, generator.seg, 4, false, false, param, 0, false);
						generator.AddLocalLabelList(p, label);
						generator.LocalLabel(p);
					}
				}
				break;
			  case TK_LPR:		// アセンブラキーワード直接指定
				strcpy(buf, "");
				while(scanner.PeekToken() != TK_RPR){
					if(GetParameter(param) != 0){};	// skipline
					generator.Param2LPSTR(buf2, param);
					strcat(buf, buf2);
					switch(scanner.PeekToken()){
					  case TK_COMMA: scanner.GetToken(); strcat(buf, ","); break;
					  case TK_RPR:   break;
					  default:
						Error("Missing \",\"");
						// skipline
						return;
					}
					param.Initialize();
				}
				scanner.GetToken();			// 次へ進める
				generator.OutputMASM("", str, buf, "");
				if(scanner.GetToken() != TK_DLM){
					Error("Missing \";\"");
					return;
				}
				break;
			  default:
				Error("Undefined value exists");
				return;
			}
		}
		break;
	  case TK_LPR: case TK_MUL: case TK_LSQ:
		Expression();
		break;
	  case TK_VOID:
		DefineFunction();
		break;
	  case TK_BYTE: case TK_WORD: case TK_DWORD: case TK_CHAR: case TK_SHORT: case TK_LONG:
	  case TK_INT: case TK_STATIC: case TK_SIGNED: case TK_UNSIGNED:
		DefineVariable();
		break;
	  case TK_STRUCT:
//		scanner.GetToken();
//		str = strdup(scanner.GetLabel());
//		tag = generator.FindTagList(str);
//		if(tag != NULL){
//			DefineVariable();
//		}else{
			DefineStruct();
//		}
		break;
	  case TK_DEFAULT:
		DefineDefault();
		break;
	  case TK_ASMOUT:
		AsmoutStatement();
		break;
	  case TK_IF:
		IfStatement();
		break;
	  case TK_LOOP:
		LoopStatement();
		break;
	  case TK_BREAK:
		BreakStatement();
		break;
	  case TK_FOR:
		ForStatement();
		break;
	  case TK_WHILE:
		WhileStatement();
		break;
	  case TK_DO:
		DoStatement();
		break;
	  case TK_CONTINUE:
		ContinueStatement();
		break;
	  case TK_ALT:
		AltStatement();
		break;
	  case TK_GOTO:
		scanner.GetToken();		// 次へ進める
		switch(scanner.GetToken()){
		  case TK_LABEL:
			str = scanner.GetLabel();
			if(str[0] == '@'){
				generator.GlobalJump(C_JMP, str+1);
				if(scanner.GetToken() != TK_DLM){
					Error("Missing \";\"");
					return;
				}
			}else if(str[0] == '#'){
				generator.LocalJump(C_JMP, str+1);
				if(scanner.GetToken() != TK_DLM){
					Error("Missing \";\"");
					return;
				}
			}else{
				if(generator.FindLocalLabelList(str) != NULL){
					generator.LocalJump(C_JMP, str);
					if(scanner.GetToken() != TK_DLM){
						Error("Missing \";\"");
						return;
					}
				}else if(generator.FindGlobalLabelList(str) != NULL){
					generator.GlobalJump(C_JMP, str);
					if(scanner.GetToken() != TK_DLM){
						Error("Missing \";\"");
						return;
					}
				}else{
					// ラベルの前方参照はできないのでローカルラベルと仮定
					generator.Jump(C_JMP, str);
					if(scanner.GetToken() != TK_DLM){
						Error("Missing \";\"");
						return;
					}
				}
			}
			break;
		  default:
			Error("Missing label after goto clause");
			// skipline
			return;
		}
		break;
	  case TK_RETURN:
		scanner.GetToken();		// 次へ進める
		generator.OutputMASM("", "ret", "", "");
		if(scanner.GetToken() != TK_DLM){
			Error("Missing \";\"");
			return;
		}
		break;
	  case TK_SEGMENT:
		if(StatementLevel == 0){
			DefineSegment();
		}else if(StatementLevel == 2){
			AssumeSegment();
		}else{
			Error("Not allowed to use segment clause here");
			// skipline
		}
		break;
	  default:
		scanner.GetToken();
		Error("Internal error on Statement()");
		// skipline
		return;
	}
}

// 引数には対応してない
void	Parser::DefineFunction(void){
	LPSTR			str;
	LabelList*		label;
	SegmentList*	segment;
	Parameter		param;
	Token			ptype = TK_FAR;
	if(scanner.PeekToken() == TK_VOID) scanner.GetToken();
	switch(scanner.PeekToken()){
	  case TK_NEAR: scanner.GetToken(); ptype=TK_NEAR; break;
	  case TK_FAR:  scanner.GetToken(); ptype=TK_FAR;  break;
	  default: ptype=TK_NEAR; break;
	}
	if(scanner.GetToken() != TK_LABEL){
		Error("Cannot find segment or function name");
		return;
	}
	str = strdup(scanner.GetLabel());
	if(scanner.PeekToken() == TK_DCOLON){
		segment = generator.FindSegmentList(str);
		free(str);
		if(segment == NULL){
			Error("Undefined segment name");
			return;
		}
		scanner.GetToken();
		if(scanner.GetToken() != TK_LABEL){
			Error("Cannot find function name");
			return;
		}
		str = strdup(scanner.GetLabel());
	}else{
		if(defaultsegment == NULL){
			Error("Undefined default segment");
			return;
		}
		segment = defaultsegment;
	}
	if(scanner.GetToken() != TK_LPR){
		Error("Missing \"(\" after function name in function declaration");
		return;
	}
	if(scanner.PeekToken() == TK_VOID) scanner.GetToken();
	if(scanner.GetToken() != TK_RPR){
		Error("Missing \")\" in function declaration (parametor not available)");
		return;
	}
	// 関数の宣言を定義する。StatementLevelに注意
	if(StatementLevel == 2){
		Error("Function not alowed in a function");
		return;
	}
	if(scanner.PeekToken() == TK_DLM){
		scanner.GetToken();		// 次へ進める
		if(generator.FindGlobalLabelList(str) != NULL) return;
		label = new LabelList(false, generator.FindTagList("void")
			, ptype, 0, segment, 0, false, true, param, 0, true);
		generator.AddGlobalLabelList(str, label);	// bAlias=trueは宣言だけの意味
		return;
	}
	// ここから関数自体を定義する
	label = generator.FindGlobalLabelList(str);
	if(label != NULL){
		if(label->bAlias == false){
			Error("Cannot duplicate to register function");
			return;
		}
		label->bAlias = false;		// 実体が定義されたのでbAlias=falseにする
	}else{
		label = new LabelList(false, generator.FindTagList("void")
			, ptype, 0, segment, 0, false, false, param, 0, true);
		generator.AddGlobalLabelList(str, label);
	}
	lpFunctionName = str;
	LocalLabelCounter = 0;
	StatementLevel = 2;

	SysVarLocalValue = 0;
	LabelList* lpLabelsysvarlocal = new LabelList;
	lpLabelsysvarlocal->type = generator.FindTagList("int");
	lpLabelsysvarlocal->bAlias = true;
	lpLabelsysvarlocal->alias.paramtype = P_IMM;
	lpLabelsysvarlocal->alias.bLabel = false;
	lpLabelsysvarlocal->alias.disp = "#local";
	lpLabelsysvarlocal->alias.type = generator.FindTagList("int");
	generator.AddLocalLabelList("local", lpLabelsysvarlocal);

	generator.StartFunction(str, label->ptype, segment);
	StatementSequence();
	generator.EndFunction(str, SysVarLocalValue);
	StatementLevel = 0;
	lpFunctionName = NULL;
}

void	Parser::DefineVariable(void){
	bool		casted = false;
	LPSTR		str = NULL;
	char		*initialize = new char[1024];
	char		*buf = new char[256];
	Token		token;
	LabelList*	initlabel = new LabelList;
	LabelList	*label, *stlabel;
	SegmentList*	segment;
	MemberList*	member;
	Parameter	param;
	
	strcpy(initialize, "");
	
//	if(StatementLevel == 0){
//		Error("Cannot define value except for segment or function");
//		return;
//	}
	if(scanner.PeekToken() == TK_ASMOUT){
		AsmoutStatement();
		return;
	}
	if(scanner.PeekToken() == TK_STATIC){
		scanner.GetToken();			// 次へ進める
		initlabel->bStatic = true;
	}
	switch(scanner.PeekToken()){
	  case TK_UNSIGNED: casted=true; initlabel->bSigned=false; scanner.GetToken(); break;
	  case TK_SIGNED:   casted=true; initlabel->bSigned=true;  scanner.GetToken(); break;
	}
	token = scanner.GetToken();
	initlabel->type = generator.FindTagList(scanner.GetLabel());
	if(initlabel->type == NULL){
		Error("Undefined type");
		return;
	}
	member = initlabel->type->FindMemberList("__type");
	if(casted == false && member != NULL) initlabel->bSigned = member->bSigned;

	while(scanner.PeekToken() != TK_DLM){
		strcpy(initialize, "");
		str = NULL;
		label = new LabelList(initlabel);
		param.Initialize();
		token = scanner.PeekToken();
		switch(token){
		  case TK_NEAR:
			label->ptype = TK_NEAR;
			scanner.GetToken();						// 次へ進める
			if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
				Error("Missing \"*\" after near");
				return;
			}
			label->pdepth = 1;
			break;
		  case TK_FAR:
			label->ptype = TK_FAR;
			scanner.GetToken();						// 次へ進める
			if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
				Error("Missing \"*\" after near");
				return;
			}
			label->pdepth = 1;
			break;
		  case TK_MUL: scanner.GetToken(); label->ptype = TK_FAR; label->pdepth = 1; break;
		}

		if(scanner.PeekToken() != TK_LABEL){
			Error("Cannot find segment name or value name");
			return;
		}
		segment = generator.FindSegmentList(scanner.GetLabel());
		if(segment != NULL){
			scanner.GetToken();
			if(scanner.GetToken() != TK_DCOLON){
				Error("Missing \"::\"");
				return;
			}
			label->segment = segment;
			label->bStatic = true;
		}else if(label->bStatic == true){
			if(defaultdatasegment == NULL){
				Error("Missing default data segment");
				return;
			}
			label->segment = defaultdatasegment;
		}
		if(scanner.GetToken() != TK_LABEL){
			Error("Missing value name");
			return;
		}
		str = strdup(scanner.GetLabel());
		if(label->pdepth != 0){
			switch(generator.seg->use){
			  case TK_USE32:
				switch(label->ptype){
				  case TK_FAR:  label->size = 6; break;
				  case TK_NEAR: label->size = 4; break;
				  default:
					Error("Internal error in declaration");
					return;
				}
				break;
			  case TK_USE16:
				switch(label->ptype){
				  case TK_FAR:  label->size = 4; break;
				  case TK_NEAR: label->size = 2; break;
				  default:
					Error("Internal error in declaration");
					return;
				}
				break;
			}
		}else{
			label->size = label->type->size;
		}
		if(StatementLevel == 0){
			if(generator.FindGlobalLabelList(str) != NULL){
				Error("Cannot duplicate register label on the same statement level");
				return;
			}
			label->segment = defaultdatasegment;
			// 配列、初期値の処理。
			InitialArray(label);
			switch(scanner.PeekToken()){
			  case TK_EQ:
				DefineAlias(label);
				break;
			  case TK_BECOME:
				DefineInitial(label, initialize);
				break;
			}
			generator.AddGlobalLabelList(str, label);
			stlabel = new LabelList(label);
			if(label->bAlias == false) label->segment->AddStaticData(str, stlabel, initialize);
		}else if(StatementLevel == 1){
			if(generator.FindGlobalLabelList(str) != NULL){
				Error("Cannot duplicate to register label on the same statement level");
				return;
			}
			// 配列、初期値の処理。
			InitialArray(label);
			switch(scanner.PeekToken()){
			  case TK_EQ:
				DefineAlias(label);
				break;
			  case TK_BECOME:
				DefineInitial(label, initialize);
				break;
			}
			generator.AddGlobalLabelList(str, label);
			if(label->bAlias == false) generator.RegistVariable(str, label, initialize);
		}else if(StatementLevel == 2 && label->bStatic == true){
			if(generator.FindLocalLabelList(str) != NULL){
				Error("Cannot duplicate to register label on the same statement level");
				return;
			}
			// 配列、初期値の処理。
			InitialArray(label);
			switch(scanner.PeekToken()){
			  case TK_EQ:
				Error("Not allowed to be alias");
				return;
			  case TK_BECOME:
				DefineInitial(label, initialize);
				break;
			}
			generator.AddLocalLabelList(str, label);
			strcpy(buf, "__");
			strcat(buf, lpFunctionName);
			strcat(buf, str);
			stlabel = new LabelList(label);
			label->segment->AddStaticData(buf, stlabel, initialize);
		}else{
			if(generator.FindLocalLabelList(str) != NULL){
				Error("Cannot duplicate register label on the same statement level");
				return;
			}
			// 配列、エイリアスの処理
			InitialArray(label);
			if(label->bArray == true && label->size == 0){
				Error("Meaningless array without element (Cannot initialize local value)");
			}
			switch(scanner.PeekToken()){
			  case TK_EQ:
				DefineAlias(label);
				break;
			  case TK_BECOME:
				Error("Cannot initialize local value");
				return;
			  default:
				label->bAlias = true;
				label->alias = defaultlocal;
				label->alias.ndisp = SysVarLocalValue;
				label->nLocalAddress = SysVarLocalValue;
				SysVarLocalValue += label->type->size;
				break;
			}
			generator.AddLocalLabelList(str, label);	// ローカル変数の場合はこれで終わり
		}
		switch(scanner.PeekToken()){
		  case TK_COMMA:
			scanner.GetToken();
		  case TK_DLM:	break;			
		  default:
			Error("Missing \";\"");
			return;
		}
	}
	scanner.GetToken();
}

void	Parser::InitialArray(LabelList* label){
	if(scanner.PeekToken() == TK_LSQ){
		label->bArray = true;
		label->pdepth = 1;
		scanner.GetToken();		// 次へ進める
		switch(scanner.GetToken()){
		case TK_NUM:
			label->size = scanner.GetNum();
			if(scanner.GetToken() != TK_RSQ){
				Error("Missing \"]\" in array declaration");
				return;
			}
			break;
		case TK_RSQ:
			label->size = 0;
			break;
		default:
			Error("Must be number in array element");
			return;
		}
	}else{
		label->bArray = false;
	}
}

void	Parser::DefineAlias(LabelList* label){
	Parameter		param;
	RegisterList*	reg;
	LabelList*		lab;
	if(scanner.GetToken() != TK_EQ) return;
	label->bAlias = true;
	switch(scanner.PeekToken()){
	  case TK_NUM:
		Immedeate(param);
		label->alias.paramtype = P_IMM;
		label->alias.disp=param.disp;
		label->alias.ndisp=param.ndisp;
		break;
	  case TK_LABEL:
		reg = generator.FindRegisterList(scanner.GetLabel());
		lab = generator.FindLabelList(scanner.GetLabel());
		if(reg != NULL){
			scanner.GetToken();
			if(reg->type == R_SEGREG && scanner.PeekToken() == TK_COLON){
				label->alias.paramtype = P_MEM;
				label->alias.seg = reg;
				scanner.GetToken();
				switch(scanner.PeekToken()){
				  case TK_NUM:
					label->alias.disp = scanner.GetLabel();
					break;
				  case TK_LABEL:
					reg = generator.FindRegisterList(scanner.GetLabel());
					lab = generator.FindLabelList(scanner.GetLabel());
					if(reg != NULL){
						PointerCheck(reg);
						if(reg->bBase == false){
							Error("Must be Seg:Base");
							return;
						}
						label->alias.base = reg;
					}else if(lab != NULL){
						if(lab->bAlias == false){
							Error("Not alias");
							return;
						}
						switch(lab->alias.paramtype){
						  case P_IMM:
							label->alias.disp = lab->alias.disp;
							label->alias.ndisp = lab->alias.ndisp;
						  case P_REG:
							PointerCheck(reg);
							if(reg->bBase == false){
								Error("Must be Seg:Base");
								return;
							}
							label->alias.base = lab->alias.base;
							break;
						  case P_MEM:
							Error("Cannot specify memory alias");
							return;
						}
					}else{
						Error("Not register");
						return;
					}
					break;
				}
				scanner.GetToken();
				if(scanner.PeekToken() == TK_PLUS){
					scanner.GetToken();
					Immedeate(param);
					label->alias.disp=param.disp;
					label->alias.ndisp=param.ndisp;
				}else if(scanner.PeekToken() == TK_MINUS){
					scanner.GetToken();
					Immedeate(param);
					label->alias.disp = "-" + param.disp;
					label->alias.ndisp=param.ndisp;
				}
			}else{
				label->alias.paramtype = P_REG;
				label->alias.base = reg;
			}
		}else if(lab != NULL){
			if(label->bAlias == false){
				Error("Not alias");
				return;
			}
			switch(lab->alias.paramtype){
			  case P_MEM:
				scanner.GetToken();
				label->alias = lab->alias;
				if(scanner.PeekToken() == TK_PLUS){
					scanner.GetToken();
					Immedeate(param);
					label->alias.disp=param.disp;
					label->alias.ndisp=param.ndisp;
				}else if(scanner.PeekToken() == TK_MINUS){
					scanner.GetToken();
					Immedeate(param);
					label->alias.disp = "-" + param.disp;
					label->alias.ndisp=param.ndisp;
				}
				break;
			  case P_IMM:
				Immedeate(param);
				label->alias.paramtype = P_IMM;
				label->alias.disp=param.disp;
				label->alias.ndisp=param.ndisp;
				break;
			  case P_REG:
				scanner.GetToken();
				label->alias.paramtype = P_REG;
				label->alias.base = lab->alias.base;
				break;
			}
		}else{
			scanner.GetToken();
			Error("Cannot find number, register, or alias after ==");
			return;
		}
		break;
	}
}

// 現在では構造体はもちろん、配列の初期化もサポートしてない（なんとかしたい）
// 配列をサポートするためには要素数をしっかり把握してうまい具合に','を入れる必要がある
void	Parser::DefineInitial(LabelList* label, LPSTR initialize){
	char	buf[1024], *p;
	int		size;
	
	if(scanner.GetToken() != TK_BECOME) return;
	switch(scanner.GetToken()){
	  case TK_NUM: case TK_QUOTE:
		strcpy(initialize, scanner.GetLabel());
		break;
	  case TK_WQUOTE:
		if(label->bArray == false || label->type->size != 1){
			Error("Initializing of \" can be used only in char[]");
			return;
		}
		p = generator.ConstString(scanner.GetLabel());
		strcpy(initialize, p);
		free(p);
		size = strlen(scanner.GetLabel()) - 2 + 1;
		if(label->size == 0){
			label->size = size;
		}else if(label->size > size){
			sprintf(buf, ", %d dup(?)", label->size - size);
			strcat(initialize, buf);
		}else{
			Error("Warning: array size too small for initialized magnitude");
		}
		break;
	  case TK_LBR:
		Error("Not yet available initializing by {}");
		//if(label->size == 0)
		break;
	}
}

void	Parser::DefineStruct(void){
	TagList*	tag;
	LPSTR			name;
//	if(scanner.PeekToken() == TK_STRUCT) scanner.GetToken();	// struct タグ名関連での修正 from Statement()
	if(scanner.GetToken() != TK_STRUCT) return;
	if(scanner.GetToken() != TK_LABEL){

#ifdef WINVC
		Error("Cannot find structure name");
#else
		Error("Cannot find structure name");
#endif

		return;
	}
	name = strdup(scanner.GetLabel());
	tag = generator.FindTagList(name);
	if(tag != NULL){

#ifdef WINVC
		Error("Same structure name already exists");
#else
		Error("Same structure name already exists");
#endif

		return;
	}
	tag = new TagList(true);
	generator.AddTagList(name, tag);
	if(scanner.GetToken() != TK_LBR){
		Error("Missing \"{\"");
		return;
	}
	while(scanner.PeekToken() != TK_RBR) DefineMember(tag);
	scanner.GetToken();			// 次に進める
	StructAlignCount = 0;
	if(scanner.GetToken() != TK_DLM){
		Error("Missing \";\"");
		return;
	}
}

void	Parser::DefineMember(TagList* tag){
	Token		token;
	LPSTR		name;
	MemberList	*member, initmember;
	if(scanner.PeekToken() == TK_ASMOUT){
		AsmoutStatement();
		return;
	}
	token = scanner.GetToken();
//	if(scanner.PeekToken() == TK_STRUCT) scanner.GetToken(); // 「struct タグ名」を許可するための苦肉の策
	switch(token){
	  case TK_UNSIGNED: initmember.bSigned=false; token=scanner.GetToken(); break;
	  case TK_SIGNED:   initmember.bSigned=true;  token=scanner.GetToken(); break;
	}
	initmember.type = generator.FindTagList(scanner.GetLabel());
	if(initmember.type == NULL){
		Error("Undefined type");
		return;
	}
	while(scanner.PeekToken() != TK_DLM){
		member = new MemberList(&initmember);
		token = scanner.PeekToken();
		switch(token){
		  case TK_NEAR:
			member->ptype = TK_NEAR;
			scanner.GetToken();						// 次へ進める
			if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
				Error("Cannot find \"*\" after near");
				return;
			}
			member->pdepth = 1;
			break;
		  case TK_FAR:
			member->ptype = TK_FAR;
			scanner.GetToken();						// 次へ進める
			if(scanner.GetToken() != TK_MUL){		// 今は*がいくつも続くのをかけない
				Error("Cannot find \"*\" after near");
				return;
			}
			member->pdepth = 1;
			break;
		  case TK_MUL: scanner.GetToken(); member->ptype = TK_FAR; member->pdepth = 1; break;
		}
		if(scanner.PeekToken() == TK_LABEL){
			scanner.GetToken();
			name = strdup(scanner.GetLabel());
			if(tag->FindMemberList(name) != NULL){
				Error("Same member name already exists");
				return;
			}
		}else{
			name = new char[256];
			sprintf(name, "AL%04X", StructAlignCount);
			if(scanner.PeekToken() == TK_DLM){
				Error("Missing value name");
				return;
			}
		}
		if(scanner.PeekToken() == TK_LSQ){
			member->bArray = true;
			scanner.GetToken();		// 次へ進める
			switch(scanner.GetToken()){
			case TK_NUM:
				member->size = scanner.GetNum();
				if(scanner.GetToken() != TK_RSQ){
					Error("Missing \"]\" in array declaration");
					return;
				}
				break;
			default:
				Error("Not number in array element");
				return;
			}
		}else{
			member->bArray = false;
			if(member->pdepth != 0){
				switch(generator.seg->use){
				  case TK_USE32:
					switch(member->ptype){
					  case TK_FAR:  member->size = 6; break;
					  case TK_NEAR: member->size = 4; break;
					  default:
						Error("Internal error: Invalid declaration");
						return;
					}
					break;
				  case TK_USE16:
					switch(member->ptype){
					  case TK_FAR:  member->size = 4; break;
					  case TK_NEAR: member->size = 2; break;
					  default:
						Error("Internal error: Invalid declaration");
						return;
					}
					break;
				}
			}else{
				member->size = member->type->size;
			}
		}
		tag->AddMemberList(name, member->bSigned, member->type
			, member->ptype, member->pdepth, member->bArray, member->size);
		switch(scanner.PeekToken()){
		  case TK_COMMA:
			scanner.GetToken();
		  case TK_DLM:	break;			
		  default:
			Error("Missing \";\"");
			return;
		}
	}
	scanner.GetToken();
}

void	Parser::DefineSegment(void){
	SegmentList*	seg;
	Token			token;
	LPSTR			name;
	if(scanner.GetToken() != TK_SEGMENT) return;
	if(scanner.GetToken() != TK_LABEL){
		Error("Missing segment name");
		return;
	}
	name = strdup(scanner.GetLabel());
// 全て同じパラメータなら複数書くことは許されているが、面倒なのでチェックなし
//	seg = generator.FindSegmentList(name);
//	if(seg != NULL){
//		Error("Same segment name already exists");
//		return;
//	}
	if(scanner.GetToken() != TK_LPR){
		Error("Cannot find \"(\" after segment name");
		return;
	}
	seg = new SegmentList;
	seg->name = name;
	while(scanner.PeekToken() != TK_RPR){
		token = scanner.GetToken();
		switch(token){
		  case TK_BYTE: case TK_WORD: case TK_DWORD: case TK_PARA: case TK_PAGE: case TK_PAGE4K:
			seg->align = token;
			break;
		  case TK_PRIVATE: case TK_PUBLIC: case TK_STACK: case TK_COMMON:
			seg->combine = token;
			break;
		  case TK_USE32: case TK_USE16:
			seg->use = token;
			break;
		  case TK_RO: case TK_EO: case TK_ER: case TK_RW:
			seg->access = token;
			break;
		  case TK_QUOTE:
			seg->segmentclass = strdup(scanner.GetLabel());
			break;
		  default:
			Error("Cannot use this token for segment definition");
			return;
		}
		switch(scanner.PeekToken()){
		  case TK_COMMA: scanner.GetToken(); break;
		  case TK_RPR:   break;
		  default:
			Error("Missing \",\"");
			return;
		}
	}
	scanner.GetToken();			// 次へ進める
	generator.AddSegmentList(name, seg);
	switch(scanner.GetToken()){
	  case TK_DLM: return;
	  case TK_LBR:
		StatementLevel = 1;
		generator.StartSegment(seg);
		while(scanner.PeekToken() != TK_RBR){
			DefineVariable();
		}
		scanner.GetToken();			// 次へ進める
		generator.EndSegment();
		StatementLevel = 0;
		break;
	}
}

void	Parser::DefineDefault(void){
	Parameter	param;
	LabelList	label;
	
	if(scanner.GetToken() != TK_DEFAULT) return;
	switch(scanner.PeekToken()){
	  case TK_LPR:
		scanner.GetToken();
		switch(scanner.PeekToken()){
		  case TK_LABEL:
			if(strcmp(scanner.GetLabel(), "code") == 0){
				scanner.GetToken();
				if(scanner.GetToken() != TK_EQ){
					Error("Missing ==");
					return;
				}
				if(scanner.GetToken() != TK_LABEL){
					Error("Missing segment name");
					return;
				}
				defaultsegment = generator.FindSegmentList(scanner.GetLabel());
				if(defaultsegment == NULL){
					Error("Not segment name");
					return;
				}
			}else if(strcmp(scanner.GetLabel(), "data") == 0){
				scanner.GetToken();
				if(scanner.GetToken() != TK_EQ){
					Error("Missing ==");
					return;
				}
				if(scanner.GetToken() != TK_LABEL){
					Error("Missing segment name");
					return;
				}
				defaultdatasegment = generator.FindSegmentList(scanner.GetLabel());
				if(defaultdatasegment == NULL){
					Error("Not segment name");
					return;
				}
			}else if(strcmp(scanner.GetLabel(), "local") == 0){
				scanner.GetToken();
				if(scanner.PeekToken() != TK_EQ){
					Error("Missing ==");
					return;
				}
				DefineAlias(&label);
				defaultlocal = label.alias;
			}else{
				Error("Invalid parameter in definition clause");
				return;
			}
			break;
		}
		if(scanner.GetToken() != TK_RPR){
			Error("Missing )");
			return;
		}
	}
	if(scanner.GetToken() != TK_DLM){
		Error("Missing \";\"");
		return;
	}
}


void	Parser::StatementSequence(void){
	if(scanner.PeekToken() != TK_LBR){ Statement(); return; }
	scanner.GetToken();			// 次に進める
	while(scanner.PeekToken() != TK_RBR) Statement();
	scanner.GetToken();			// 次に進める
}

void	Parser::IfStatement(void){
	int			labelcount;
	CompareType	cmptype;
	char		buf[256];
	if(scanner.GetToken() != TK_IF) return;
	if(scanner.PeekToken() != TK_LPR){
		scanner.GetToken();		// 次へ進める
		Error("Missing \"(\" in if clause");
		return;
	}
	cmptype = Compare();
	switch(scanner.PeekToken()){
	  case TK_GOTO:
		scanner.GetToken();	// 次へ進める
		if(scanner.GetToken() != TK_LABEL){
			Error("Cannot find label after goto");
			return;
		}
		generator.Jump(cmptype, scanner.GetLabel());
		if(scanner.GetToken() != TK_DLM){
			Error("Missing \";\"");
			return;
		}
		return;
	  case TK_BREAK:
		BreakStatement(cmptype);
		return;
	  case TK_CONTINUE:
		ContinueStatement(cmptype);
		return;
	}
	cmptype = TransCompare(cmptype);
	labelcount = LocalLabelCounter;
	LocalLabelCounter += 2;		// elseとif文の終わりの２カ所分確保
	generator.Jump(cmptype, labelcount);
	StatementSequence();
	if(scanner.PeekToken() != TK_ELSE){
		sprintf(buf, "LL%04X", labelcount);
		generator.LocalLabel(buf);
		return;
	}
	scanner.GetToken();		// 次へ進める
	generator.Jump(C_JMP, labelcount+1);		// if文の終わりへジャンプ
	sprintf(buf, "LL%04X", labelcount);
	generator.LocalLabel(buf);
	StatementSequence();
	sprintf(buf, "LL%04X", labelcount+1);
	generator.LocalLabel(buf);
}

// 比較文はキャスト関係が非常にあやしい
// 機能追加の嵐でもうぐちゃぐちゃ（汗
CompareType Parser::Compare(void){
	Parameter	param1, param2, castparam;
	CompareType	cmptype;
	bool		bCasted = false;
	bool		bFor = false;
	if(scanner.PeekToken() == TK_LPR) scanner.GetToken(); else bFor = true;
	if(scanner.PeekToken() == TK_LPR){
		scanner.GetToken();			// 次へ進める
		bCasted=true;
		switch(scanner.GetToken()){
		  case TK_UNSIGNED: castparam.bSigned = false; break;
		  case TK_SIGNED:   castparam.bSigned = true;  break;
		  default:
			Error("Can specify only unsigned or signed cast in comparison clause");
			return C_NOTHING;
		}
		if(scanner.GetToken() != TK_RPR){
			Error("Missing \")\"");
			return C_NOTHING;
		}
	}
	switch(scanner.PeekToken()){
	  case TK_CF: case TK_ZF:
		cmptype = FlagCompare();
		if(bFor == false){
			if(scanner.GetToken() != TK_RPR){
				Error("Missing \")\"");
				return C_NOTHING;
			}
		}else{
			if(scanner.GetToken() != TK_DLM){
				Error("Missing \";\"");
				return C_NOTHING;
			}
		}
		return cmptype;
	}
	cmptype = IsCmpOperator(castparam.bSigned);
	if(cmptype != C_NOTHING){
		if(scanner.PeekToken() == TK_NUM){
			if(scanner.GetNum() != 0){
				Error("Must be 0");
				return C_NOTHING;
			}
			scanner.GetToken();
		}
		if(bFor == false){
			if(scanner.GetToken() != TK_RPR){
				Error("Missing \")\"");
				return C_NOTHING;
			}
		}else{
			if(scanner.GetToken() != TK_DLM){
				Error("Missing \";\"");
				return C_NOTHING;
			}
		}
		return cmptype;
	}
	if(scanner.PeekToken() == TK_NOT){
		scanner.GetToken();
		GetParameter(param1);
		cmptype = C_JE;
		param2.paramtype = P_IMM; param2.disp = "0";
		if(bFor == false){
			if(scanner.GetToken() != TK_RPR){
				Error("Missing \")\"");
				return C_NOTHING;
			}
		}else{
			if(scanner.GetToken() != TK_DLM){
				Error("Missing \";\"");
				return C_NOTHING;
			}
		}
		generator.Op2(TK_CMP, param1, param2);
		return cmptype;
	}
	GetParameter(param1);
	if(bCasted == true) cmptype = IsCmpOperator(castparam.bSigned);
		else cmptype = IsCmpOperator(param1.bSigned);
	if(cmptype == C_NOTHING){
		cmptype = C_JNE;
		param2.paramtype = P_IMM; param2.disp = "0";
	}else{
		GetParameter(param2);
	}
	if(bFor == false){
		if(scanner.GetToken() != TK_RPR){
			Error("Missing \")\"");
			return C_NOTHING;
		}
	}else{
		if(scanner.GetToken() != TK_DLM){
			Error("Missing \";\"");
			return C_NOTHING;
		}
	}
	generator.Op2(TK_CMP, param1, param2);
	return cmptype;
}

CompareType Parser::IsCmpOperator(bool bSigned){
	CompareType	cmptype;
	switch(scanner.PeekToken()){
	  case TK_BE: if(bSigned == true) cmptype = C_JL;  else cmptype = C_JB;  scanner.GetToken(); break;
	  case TK_LE: if(bSigned == true) cmptype = C_JLE; else cmptype = C_JBE; scanner.GetToken(); break;
	  case TK_AB: if(bSigned == true) cmptype = C_JG;  else cmptype = C_JA;  scanner.GetToken(); break;
	  case TK_GE: if(bSigned == true) cmptype = C_JGE; else cmptype = C_JAE; scanner.GetToken(); break;
	  case TK_EQ: cmptype = C_JE;  scanner.GetToken(); break;
	  case TK_NE: cmptype = C_JNE; scanner.GetToken(); break;
	  default:    cmptype = C_NOTHING; break;
	}
	return cmptype;
}

CompareType Parser::TransCompare(CompareType cmptype){
	CompareType	tcmptype;
	switch(cmptype){
	  case C_JA:  tcmptype = C_JBE; break;
	  case C_JAE: tcmptype = C_JB;  break;
	  case C_JB:  tcmptype = C_JAE; break;
	  case C_JBE: tcmptype = C_JA;  break;
	  case C_JG:  tcmptype = C_JLE; break;
	  case C_JGE: tcmptype = C_JL;  break;
	  case C_JL:  tcmptype = C_JGE; break;
	  case C_JLE: tcmptype = C_JG;  break;
	  case C_JE:  tcmptype = C_JNE; break;
	  case C_JNE: tcmptype = C_JE;  break;
	  case C_JC:  tcmptype = C_JNC; break;
	  case C_JNC: tcmptype = C_JC;  break;
	  default:    tcmptype = C_NOTHING; break;
	}
	return tcmptype;
}

CompareType Parser::FlagCompare(void){
	CompareType	cmptype = C_NOTHING;
	switch(scanner.GetToken()){
	  case TK_CF: cmptype = C_JC; break;
	  case TK_ZF: cmptype = C_JE; break;
	  default: return C_NOTHING;
	}
	switch(scanner.GetToken()){
	  case TK_EQ:
		scanner.GetToken();
		if(scanner.GetNum() == 0) cmptype = TransCompare(cmptype);
		break;
	  case TK_NE:
		scanner.GetToken();
		if(scanner.GetNum() == 1) cmptype = TransCompare(cmptype);
		break;
	  default: return C_NOTHING;
	}
	return cmptype;
}

void	Parser::LoopStatement(void){
	int		labelcount;
	char	buf[256];
	if(scanner.GetToken() != TK_LOOP) return;
	if(LoopLabelPoint >= 32){
		Error("32 nests allowed in loop clause");
		return;
	}
	labelcount = LocalLabelCounter;
	LocalLabelCounter += 2;		// loop文のはじめとloop文の終わりの２カ所分確保
	LoopLabel[LoopLabelPoint] = labelcount+1;
	LoopLabelPoint++;
	sprintf(buf, "LL%04X", labelcount);
	generator.LocalLabel(buf);
	StatementSequence();
	generator.Jump(C_JMP, labelcount);			// loop文のはじめへジャンプ
	sprintf(buf, "LL%04X", labelcount+1);
	generator.LocalLabel(buf);
	LoopLabelPoint--;
}

void	Parser::BreakStatement(CompareType cmptype){
	int		nest;
	if(scanner.GetToken() != TK_BREAK) return;
	switch(scanner.GetToken()){
	  case TK_NUM:
		nest = scanner.GetNum();
		if(scanner.GetToken() != TK_DLM){
			Error("Missing \";\"");
			return;
		}
		break;
	  case TK_DLM: nest = 1; break;
	  default:
		Error("Invalid break caluse or missing \";\"");
		return;
	}
	nest = LoopLabelPoint - nest;
	if(nest < 0){
		Error("Number of break is more than loop nest");
		return;
	}
	generator.Jump(cmptype, LoopLabel[nest]);
}

void	Parser::AltStatement(void){
	Error("Not yet available alt clause now");
	return;
}

void	Parser::AsmoutStatement(void){
	char	buf[256];
	if(scanner.GetToken() != TK_ASMOUT) return;
	if(scanner.GetToken() != TK_LPR){
		Error("Missing \"(\"");
		return;
	}
	if(scanner.GetToken() != TK_WQUOTE){
		Error("Missing \"(\"");
		return;
	}
	strcpy(buf, scanner.GetLabel() + 1);	// はじめの"を除く
	buf[strlen(buf)-1] = '\0';				// 最後の"を除く
	generator.Asmout(buf);
	if(scanner.GetToken() != TK_RPR){
		Error("Missing \")\"");
		return;
	}
	if(scanner.GetToken() != TK_DLM){
		Error("Missing \";\"");
		return;
	}
}

void	Parser::ForStatement(void){
	int			labelcount;
	CompareType	cmptype;
	char		buf[256];
	LineData	linedata1, linedata2;
	
	if(LoopLabelPoint >= 32){
		Error("32 nests allowed in loop clause");
		return;
	}
	if(scanner.GetToken() != TK_FOR) return;
	if(scanner.GetToken() != TK_LPR){
		Error("Missing \"(\"");
		return;
	}
	// 第１文
	if(scanner.PeekToken() == TK_DLM) scanner.GetToken();
	else Expression();
	
	labelcount = LocalLabelCounter;
	LocalLabelCounter += 2;		// loop文のはじめとloop文の終わりの２カ所分確保
	LoopLabel[LoopLabelPoint] = labelcount+1;
	LoopLabelPoint++;
	sprintf(buf, "LL%04X", labelcount);
	generator.LocalLabel(buf);
	
	// 第２文
	if(scanner.PeekToken() == TK_DLM) scanner.GetToken();
	else{
		cmptype = Compare();
		cmptype = TransCompare(cmptype);
		generator.Jump(cmptype, labelcount+1);
	}
	
	// 第３文
	if(scanner.PeekToken() == TK_RPR){
		scanner.GetToken();
		StatementSequence();
	}else{
		linedata1 = generator.Reserve();
		Expression();
		linedata2 = generator.Reserve();
		if(scanner.GetToken() != TK_RPR){
			Error("Missing \")\"");
			return;
		}
		generator.Seek(linedata1);
		StatementSequence();
		generator.Seek(linedata2);
		generator.Erase(linedata1);
		generator.Erase(linedata2);
	}
	generator.Jump(C_JMP, labelcount);			// loop文のはじめへジャンプ
	
	sprintf(buf, "LL%04X", labelcount+1);
	generator.LocalLabel(buf);
	LoopLabelPoint--;
}

void	Parser::WhileStatement(void){
	int		labelcount;
	CompareType	cmptype;
	char	buf[256];
	if(scanner.GetToken() != TK_WHILE) return;
	if(LoopLabelPoint >= 32){
		Error("32 nests allowed in loop clause");
		return;
	}
	if(scanner.PeekToken() != TK_LPR){
		scanner.GetToken();		// 次へ進める
		Error("Cannot find \"(\" in while clause");
		return;
	}
	labelcount = LocalLabelCounter;
	LocalLabelCounter += 2;		// while文のはじめとwhile文の終わりの２カ所分確保
	LoopLabel[LoopLabelPoint] = labelcount+1;
	LoopLabelPoint++;
	sprintf(buf, "LL%04X", labelcount);
	generator.LocalLabel(buf);
	cmptype = Compare();
	cmptype = TransCompare(cmptype);
	generator.Jump(cmptype, labelcount+1);
	StatementSequence();
	generator.Jump(C_JMP, labelcount);			// while文のはじめへジャンプ
	sprintf(buf, "LL%04X", labelcount+1);
	generator.LocalLabel(buf);
	LoopLabelPoint--;
}

void	Parser::DoStatement(void){
	int		labelcount;
	CompareType	cmptype;
	char	buf[256];
	if(scanner.GetToken() != TK_DO) return;
	if(LoopLabelPoint >= 32){
		Error("32 nests allowed in loop clause");
		return;
	}
	labelcount = LocalLabelCounter;
	LocalLabelCounter += 2;		// do～while文のはじめとdo～while文の終わりの２カ所分確保
	LoopLabel[LoopLabelPoint] = labelcount+1;
	LoopLabelPoint++;
	sprintf(buf, "LL%04X", labelcount);
	generator.LocalLabel(buf);
	StatementSequence();
	if(scanner.GetToken() != TK_WHILE) return;
	if(scanner.PeekToken() != TK_LPR){
		scanner.GetToken();		// 次へ進める
		Error("Cannot find \"(\" in do～while clause");
		return;
	}
	cmptype = Compare();
	generator.Jump(cmptype, labelcount);
	sprintf(buf, "LL%04X", labelcount+1);
	generator.LocalLabel(buf);
	LoopLabelPoint--;
	if(scanner.GetToken() != TK_DLM){
		Error("Missing \";\"");
		return;
	}
}

void	Parser::ContinueStatement(CompareType cmptype){
	int		nest;
	if(scanner.GetToken() != TK_CONTINUE) return;
	switch(scanner.GetToken()){
	  case TK_NUM:
		nest = scanner.GetNum();
		if(scanner.GetToken() != TK_DLM){
			Error("Missing \";\"");
			return;
		}
		break;
	  case TK_DLM: nest = 1; break;
	  default:
		Error("Invalid continue clause or missing \";\"");
		return;
	}
	nest = LoopLabelPoint - nest;
	if(nest < 0){
		Error("Number of continue more than loop nest");
		return;
	}
	generator.Jump(cmptype, LoopLabel[nest] - 1);		// -1するとloopの先頭にジャンプ
}

void	Parser::AssumeSegment(void){
	SegmentList*	seg;
	RegisterList*	reg;
	if(scanner.GetToken() != TK_SEGMENT) return;
	scanner.GetToken();
	seg = generator.FindSegmentList(scanner.GetLabel());
	if(seg == NULL){
		Error("Not segment name");
		return;
	}
	if(scanner.GetToken() != TK_EQ){
		Error("Missing \"==\"");
		return;
	}
	scanner.GetToken();
	reg = generator.FindRegisterList(scanner.GetLabel());
	if(reg == NULL || reg->type != R_SEGREG){
		Error("Not segment register");
		return;
	}
	seg->assume = reg;
	generator.AssumeSegment(seg, reg);
}



void	Parser::StartParse(void){
	while(scanner.PeekToken() != TK_EOF){
		switch(scanner.PeekToken()){
		  case TK_STRUCT:
			DefineStruct();
			break;
		  case TK_SEGMENT:
			DefineSegment();
			break;
		  case TK_VOID:
			DefineFunction();
			break;
		  case TK_DEFAULT:
			DefineDefault();
			break;
		  case TK_ASMOUT:
			AsmoutStatement();
			break;
		  case TK_BYTE: case TK_WORD: case TK_DWORD: case TK_CHAR: case TK_SHORT: case TK_LONG:
		  case TK_INT: case TK_STATIC: case TK_SIGNED: case TK_UNSIGNED:
			DefineVariable();
			break;
		  case TK_LABEL:
			if(generator.FindTagList(scanner.GetLabel()) != NULL){
				DefineVariable();
			}
			break;
		  default:

#ifdef WINVC
			Error("Root scope must be followed ony by structure segment or function definition");
#else
			Error("Root scope must be followed ony by structure segment or function definition");
#endif

			return;
		}
	}
}

void	Parser::Error(LPSTR str){
	nErrorCount++;
	fprintf(lpLogFP, "%s(%d):(Parser)%s \n", scanner.GetFileName().c_str(), scanner.GetScanline(), str);
}

#ifdef WINVC
HRESULT		Parser::Compile(string& filename){
#else
HRESULT		Parser::Compile(string filename){
#endif

	filepath	path;
	path = filename;
	path.extention = "asm";
	return Compile(filename, path.getfullname());
}

#ifdef WINVC
HRESULT		Parser::Compile(string& filename, string& outfilename){
#else
HRESULT		Parser::Compile(string filename, string outfilename){
#endif

	if(scanner.ReadFile(filename) != 0) return -1;
	
	// LocalLabelCounter = 0;
	StatementLevel = 0;
	generator.BeginGenerate(outfilename, &scanner);

	StartParse();			// Parsing開始

	generator.EndGenerate();

	if (scanner.GetErrorCount() + GetErrorCount() + generator.GetErrorCount())

	fprintf(lpLogFP,"Error Counts  >>>  Scanner:%d, Parser:%d, Generator:%d \n"
		, scanner.GetErrorCount(), GetErrorCount(), generator.GetErrorCount());
	return scanner.GetErrorCount() + GetErrorCount() + generator.GetErrorCount();
}

void		Parser::SetLogFile(LPSTR filename){
	lpLogFileName = filename;
	FILE* fp = fopen(lpLogFileName, "wt");
	if(fp == NULL){
		Error("Cannot open error message output file. Terminated with fatal error.");
		exit(-1);
	}
	lpLogFP=fp;
}
