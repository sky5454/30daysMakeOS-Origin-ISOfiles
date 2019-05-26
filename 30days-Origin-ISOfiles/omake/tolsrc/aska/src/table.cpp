#include "table.h"

Register::Register(){
	RegisterList*	rl;
	rl = new RegisterList("AL" , R_GENERAL, 1, false, false); Add("AL" , rl);
	rl = new RegisterList("AH" , R_GENERAL, 1, false, false); Add("AH" , rl);
	rl = new RegisterList("AX" , R_GENERAL, 2, false, false); Add("AX" , rl);
	rl = new RegisterList("EAX", R_GENERAL, 4, true , true ); Add("EAX", rl);
	rl = new RegisterList("BL" , R_GENERAL, 1, false, false); Add("BL" , rl);
	rl = new RegisterList("BH" , R_GENERAL, 1, false, false); Add("BH" , rl);
	rl = new RegisterList("BX" , R_GENERAL, 2, true , false); Add("BX" , rl);
	rl = new RegisterList("EBX", R_GENERAL, 4, true , true ); Add("EBX", rl);
	rl = new RegisterList("CL" , R_GENERAL, 1, false, false); Add("CL" , rl);
	rl = new RegisterList("CH" , R_GENERAL, 1, false, false); Add("CH" , rl);
	rl = new RegisterList("CX" , R_GENERAL, 2, false, false); Add("CX" , rl);
	rl = new RegisterList("ECX", R_GENERAL, 4, true , true ); Add("ECX", rl);
	rl = new RegisterList("DL" , R_GENERAL, 1, false, false); Add("DL" , rl);
	rl = new RegisterList("DH" , R_GENERAL, 1, false, false); Add("DH" , rl);
	rl = new RegisterList("DX" , R_GENERAL, 2, false, false); Add("DX" , rl);
	rl = new RegisterList("EDX", R_GENERAL, 4, true , true ); Add("EDX", rl);
	rl = new RegisterList("DI" , R_GENERAL, 2, true , true ); Add("DI" , rl);
	rl = new RegisterList("EDI", R_GENERAL, 4, true , true ); Add("EDI", rl);
	rl = new RegisterList("SI" , R_GENERAL, 2, true , true ); Add("SI" , rl);
	rl = new RegisterList("ESI", R_GENERAL, 4, true , true ); Add("ESI", rl);
	rl = new RegisterList("BP" , R_GENERAL, 2, true , false); Add("BP" , rl);
	rl = new RegisterList("EBP", R_GENERAL, 4, true , true ); Add("EBP", rl);
	rl = new RegisterList("SP" , R_GENERAL, 2, false, false); Add("SP" , rl);
	rl = new RegisterList("ESP", R_GENERAL, 4, true , false); Add("ESP", rl);
	rl = new RegisterList("CS" , R_SEGREG , 2, false, false); Add("CS" , rl);
	rl = new RegisterList("DS" , R_SEGREG , 2, false, false); Add("DS" , rl);
	rl = new RegisterList("ES" , R_SEGREG , 2, false, false); Add("ES" , rl);
	rl = new RegisterList("FS" , R_SEGREG , 2, false, false); Add("FS" , rl);
	rl = new RegisterList("GS" , R_SEGREG , 2, false, false); Add("GS" , rl);
	rl = new RegisterList("SS" , R_SEGREG , 2, false, false); Add("SS" , rl);
	rl = new RegisterList("CR0", R_CTRL   , 4, false, false); Add("CR0", rl);
	rl = new RegisterList("CR2", R_CTRL   , 4, false, false); Add("CR2", rl);
	rl = new RegisterList("CR3", R_CTRL   , 4, false, false); Add("CR3", rl);
	rl = new RegisterList("DR0", R_DEBUG  , 4, false, false); Add("DR0", rl);
	rl = new RegisterList("DR1", R_DEBUG  , 4, false, false); Add("DR1", rl);
	rl = new RegisterList("DR2", R_DEBUG  , 4, false, false); Add("DR2", rl);
	rl = new RegisterList("DR3", R_DEBUG  , 4, false, false); Add("DR3", rl);
	rl = new RegisterList("DR6", R_DEBUG  , 4, false, false); Add("DR6", rl);
	rl = new RegisterList("DR7", R_DEBUG  , 4, false, false); Add("DR7", rl);
	rl = new RegisterList("TR3", R_TEST   , 4, false, false); Add("TR3", rl);
	rl = new RegisterList("TR4", R_TEST   , 4, false, false); Add("TR4", rl);
	rl = new RegisterList("TR5", R_TEST   , 4, false, false); Add("TR5", rl);
	rl = new RegisterList("TR6", R_TEST   , 4, false, false); Add("TR6", rl);
	rl = new RegisterList("TR7", R_TEST   , 4, false, false); Add("TR7", rl);
	rl = new RegisterList("MM0", R_MMX    , 8, false, false); Add("MM0", rl);
	rl = new RegisterList("MM1", R_MMX    , 8, false, false); Add("MM1", rl);
	rl = new RegisterList("MM2", R_MMX    , 8, false, false); Add("MM2", rl);
	rl = new RegisterList("MM3", R_MMX    , 8, false, false); Add("MM3", rl);
	rl = new RegisterList("MM4", R_MMX    , 8, false, false); Add("MM4", rl);
	rl = new RegisterList("MM5", R_MMX    , 8, false, false); Add("MM5", rl);
	rl = new RegisterList("MM6", R_MMX    , 8, false, false); Add("MM6", rl);
	rl = new RegisterList("MM7", R_MMX    , 8, false, false); Add("MM7", rl);
}

Register::~Register(){
	MaplpRegisterList::iterator it;
	for(it = mapregister.begin(); it != mapregister.end(); it++){
		DELETE_SAFE(it->second);
	}
	mapregister.clear();
}

void	SegmentList::AddStaticData(LPSTR varname, LabelList* label, LPSTR initialize){
	StaticDataList	staticdata;
	staticdata.name   = varname;
	staticdata.label  = label;
	staticdata.lpInit = initialize;
	liststatic.push_back(staticdata);
}

Segment::Segment(){
//	SegmentList*	sl;
//	sl = new SegmentList("CODE",  TK_DWORD, TK_PRIVATE, TK_USE32, TK_ER, NULL); Add("CODE",  sl);
//	sl = new SegmentList("DATA",  TK_DWORD, TK_PRIVATE, TK_USE32, TK_RW, NULL); Add("DATA",  sl);
//	sl = new SegmentList("STACK", TK_DWORD, TK_STACK,   TK_USE32, TK_RW, NULL); Add("STACK", sl);
}

Segment::~Segment(){
	MaplpSegmentList::iterator it;
	for(it = mapsegment.begin(); it != mapsegment.end(); it++){
		DELETE_SAFE(it->second);
	}
	mapsegment.clear();
}

MemberList&	MemberList::operator=(MemberList& member){
	bSigned	= member.bSigned;
	type	= member.type;
	ptype	= member.ptype;
	pdepth	= member.pdepth;
	bArray	= member.bArray;
	size	= member.size;
	offset	= member.offset;
	return *this;
}

TagList::~TagList(){
	MaplpMemberList::iterator it;
	for(it = mapmember.begin(); it != mapmember.end(); it++){
		DELETE_SAFE(it->second);
	}
	mapmember.clear();
}

void	TagList::AddMemberList(LPSTR n, bool bs, TagList* t, Token pt, int pd, bool ba, int s){
	string		k = n;
	MemberList* member = new MemberList(bs, t, pt, pd, ba, s, size);
	size += s;			// サイズを増加させる。アライメントするならここで調整
	mapmember[k] = member;
}

Tag::Tag(){
	TagList*	tl;
	tl = new TagList(false); Add("int"  , tl); tl->AddMemberList("__type", true , NULL, TK_FAR, 0, false, 4);
	tl = new TagList(false); Add("long" , tl); tl->AddMemberList("__type", true , NULL, TK_FAR, 0, false, 4);
	tl = new TagList(false); Add("short", tl); tl->AddMemberList("__type", true , NULL, TK_FAR, 0, false, 2);
	tl = new TagList(false); Add("char" , tl); tl->AddMemberList("__type", true , NULL, TK_FAR, 0, false, 1);
	tl = new TagList(false); Add("dword", tl); tl->AddMemberList("__type", false, NULL, TK_FAR, 0, false, 4);
	tl = new TagList(false); Add("word" , tl); tl->AddMemberList("__type", false, NULL, TK_FAR, 0, false, 2);
	tl = new TagList(false); Add("byte" , tl); tl->AddMemberList("__type", false, NULL, TK_FAR, 0, false, 1);
	tl = new TagList(false); Add("void" , tl); tl->AddMemberList("__type", false, NULL, TK_FAR, 0, false, 0);
}

Tag::~Tag(){
	MaplpTagList::iterator it;
	for(it = maptag.begin(); it != maptag.end(); it++){
		DELETE_SAFE(it->second);
	}
	maptag.clear();
}

Parameter&	Parameter::operator=(Parameter& param){
	paramtype = param.paramtype;
	seg       = param.seg;
	base      = param.base;
	index     = param.index;
	scale     = param.scale;
	disp      = param.disp;
	ndisp     = param.ndisp;
	bLabel    = param.bLabel;
	bSigned   = param.bSigned;
	type      = param.type;
	ptype     = param.ptype;
	pdepth    = param.pdepth;
	size      = param.size;
	bArray    = param.bArray;
	return *this;
}
	bool			bStatic;
	bool			bSigned;	// 符号あり型かどうか
	TagList*		type;		// 変数の型
	Token			ptype;		// near:TK_NEAR, far:TK_FAR
	int				pdepth;		// ポインタの深さ。これが0ならポインタでない
	SegmentList*	segment;	// データをどこに割り付けるか
	int				size;		// 変数のサイズ（配列、ポインタ、構造体も加味）
	bool			bArray;		// 配列であるか
	bool			bAlias;		// エイリアスであるか
	Parameter		alias;		// エイリアス(定数はここへ数字を入れる事で行う)
	int				nLocalAddress;	// ローカルラベルならローカルアドレスを入れる
	bool			bFunction;	// 関数であるか

LabelList&	LabelList::operator=(LabelList& label){
	bStatic = label.bStatic;
	bSigned = label.bSigned;
	type    = label.type;
	ptype   = label.ptype;
	pdepth  = label.pdepth;
	segment = label.segment;
	size    = label.size;
	bArray  = label.bArray;
	bAlias  = label.bAlias;
	alias   = label.alias;
	nLocalAddress = label.nLocalAddress;
	bFunction = label.bFunction;
	return *this;
}

void	Label::Clear(void){
	MaplpLabelList::iterator it;
	for(it = maplabel.begin(); it != maplabel.end(); it++){
		DELETE_SAFE(it->second);
	}
	maplabel.clear();
}
