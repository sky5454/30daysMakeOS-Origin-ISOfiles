/* Generated automatically by the program `genemit'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "function.h"
#include "expr.h"
#include "optabs.h"
#include "real.h"
#include "flags.h"
#include "output.h"
#include "insn-config.h"
#include "hard-reg-set.h"
#include "recog.h"
#include "resource.h"
#include "reload.h"
#include "toplev.h"
#include "ggc.h"

#define FAIL return (end_sequence (), _val)
#define DONE return (_val = gen_sequence (), end_sequence (), _val)
rtx
gen_cmpdi_ccno_1_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpdi_1_insn_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	operand0,
	operand1));
}

rtx
gen_cmpqi_ext_3_insn (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	0),
	operand1));
}

rtx
gen_cmpqi_ext_3_insn_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	0),
	operand1));
}

rtx
gen_x86_fnstsw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (VOIDmode,
	18)),
	9));
}

rtx
gen_x86_sahf_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (1,
		operand0),
	10));
}

rtx
gen_popsi1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4)))));
}

rtx
gen_movsi_insv_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1);
}

rtx
gen_pushdi2_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_popdi1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8)))));
}

rtx
gen_swapxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

rtx
gen_swaptf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	operand1,
	operand0)));
}

rtx
gen_zero_extendhisi2_and (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_zero_extendsidi2_32 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_zero_extendsidi2_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

rtx
gen_zero_extendhidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

rtx
gen_zero_extendqidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1));
}

rtx
gen_extendsidi2_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

rtx
gen_extendhidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

rtx
gen_extendqidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1));
}

rtx
gen_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

rtx
gen_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1));
}

rtx
gen_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (SImode,
	operand1));
}

rtx
gen_truncdfsf2_3 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

rtx
gen_truncdfsf2_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1));
}

rtx
gen_fix_truncdi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (5,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

rtx
gen_fix_truncdi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode))));
}

rtx
gen_fix_truncsfdi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

rtx
gen_fix_truncdfdi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

rtx
gen_fix_truncsi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

rtx
gen_fix_truncsi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

rtx
gen_fix_truncsfsi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

rtx
gen_fix_truncdfsi_sse (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

rtx
gen_fix_trunchi_nomemory (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand4)));
}

rtx
gen_fix_trunchi_memory (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3)));
}

rtx
gen_x86_fnstcw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		gen_rtx_REG (HImode,
	18)),
	11));
}

rtx
gen_x86_fldcw_1 (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (HImode,
	18),
	gen_rtx_UNSPEC (HImode,
	gen_rtvec (1,
		operand0),
	12));
}

rtx
gen_floathisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

rtx
gen_floathidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

rtx
gen_floathixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

rtx
gen_floathitf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

rtx
gen_floatsixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

rtx
gen_floatsitf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

rtx
gen_floatdixf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (XFmode,
	operand1));
}

rtx
gen_floatditf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (TFmode,
	operand1));
}

rtx
gen_addqi3_cc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	12)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2))));
}

rtx
gen_addsi_1_zext (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_addqi_ext_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_PLUS (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_subdi3_carry_rex64 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_LTU (DImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_subsi3_carry (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_subsi3_carry_zext (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_MINUS (SImode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_divqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_udivqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_divmodhi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_udivmoddi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_udivmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_testsi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (VOIDmode,
	17),
	gen_rtx_COMPARE (VOIDmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

rtx
gen_andqi_ext_0 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_negsf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_negsf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_negdf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_negdf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_abssf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_abssf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_absdf2_memory (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_absdf2_ifs (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_ashldi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_x86_shld_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFT (SImode,
	operand0,
	operand2),
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	GEN_INT (32),
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_ashrdi3_63_rex64 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_ashrdi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_x86_shrd_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	gen_rtx_ASHIFTRT (SImode,
	operand0,
	operand2),
	gen_rtx_ASHIFT (SImode,
	operand1,
	gen_rtx_MINUS (QImode,
	GEN_INT (32),
	operand2)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_ashrsi3_31 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_lshrdi3_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_setcc_2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	gen_rtx (GET_CODE (operand1), QImode,
		gen_rtx_REG (VOIDmode,
	17),
		const0_rtx));
}

rtx
gen_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0));
}

rtx
gen_doloop_end_internal (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	operand1,
	const1_rtx),
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)),
		gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_blockage ()
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	0);
}

rtx
gen_return_internal ()
{
  return gen_rtx_RETURN (VOIDmode);
}

rtx
gen_return_pop_internal (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

rtx
gen_return_indirect_internal (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_RETURN (VOIDmode),
		gen_rtx_USE (VOIDmode,
	operand0)));
}

rtx
gen_nop ()
{
  return const0_rtx;
}

rtx
gen_prologue_set_got (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	gen_rtx_MINUS (SImode,
	pc_rtx,
	operand2)))),
	1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_prologue_get_pc (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		gen_rtx_PLUS (SImode,
	pc_rtx,
	operand1)),
	2));
}

rtx
gen_eh_return_si (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	13);
}

rtx
gen_eh_return_di (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	13);
}

rtx
gen_leave ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	6),
	GEN_INT (4))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	6),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

rtx
gen_leave_rex64 ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	6),
	GEN_INT (8))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	6),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	6))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

rtx
gen_ffssi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	operand1,
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	5))));
}

rtx
gen_sqrtsf2_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

rtx
gen_sqrtsf2_1_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

rtx
gen_sqrtsf2_i387 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1));
}

rtx
gen_sqrtdf2_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

rtx
gen_sqrtdf2_1_sse_only (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

rtx
gen_sqrtdf2_i387 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1));
}

rtx
gen_sqrtxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (XFmode,
	operand1));
}

rtx
gen_sqrttf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (TFmode,
	operand1));
}

rtx
gen_sindf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	1));
}

rtx
gen_sinsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	1));
}

rtx
gen_sinxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	1));
}

rtx
gen_sintf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (1,
		operand1),
	1));
}

rtx
gen_cosdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DFmode,
	gen_rtvec (1,
		operand1),
	2));
}

rtx
gen_cossf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SFmode,
	gen_rtvec (1,
		operand1),
	2));
}

rtx
gen_cosxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (XFmode,
	gen_rtvec (1,
		operand1),
	2));
}

rtx
gen_costf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (TFmode,
	gen_rtvec (1,
		operand1),
	2));
}

rtx
gen_cld ()
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	19),
	const0_rtx);
}

rtx
gen_strmovdi_rex_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	operand2),
	gen_rtx_MEM (DImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand2,
	GEN_INT (8))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	GEN_INT (8))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovsi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	gen_rtx_MEM (SImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (4))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovsi_rex_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand2),
	gen_rtx_MEM (SImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand2,
	GEN_INT (4))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovhi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand2),
	gen_rtx_MEM (HImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	GEN_INT (2))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovhi_rex_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand2),
	gen_rtx_MEM (HImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand2,
	GEN_INT (2))),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovqi_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand2),
	gen_rtx_MEM (QImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand2,
	const1_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand3,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strmovqi_rex_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand2),
	gen_rtx_MEM (QImode,
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand2,
	const1_rtx)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand3,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_movdi_rex64 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand5,
	GEN_INT (3)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand5,
	GEN_INT (3)),
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_movsi (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand5,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand5,
	GEN_INT (2)),
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_movsi_rex64 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand5,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand5,
	GEN_INT (2)),
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_movqi (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand3,
	operand5)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand4,
	operand5)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_movqi_rex64 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand3,
	operand5)),
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand4,
	operand5)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	gen_rtx_MEM (BLKmode,
	operand4)),
		gen_rtx_USE (VOIDmode,
	operand5),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsetdi_rex_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (8))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsetsi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsetsi_rex_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsethi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsethi_rex_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsetqi_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_strsetqi_rex_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand1),
	operand2),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	const1_rtx)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_stosdi_rex64 (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand4,
	GEN_INT (3)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_stossi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	gen_rtx_ASHIFT (SImode,
	operand4,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_stossi_rex64 (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	gen_rtx_ASHIFT (DImode,
	operand4,
	GEN_INT (2)),
	operand3)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_stosqi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand3,
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19))));
}

rtx
gen_rep_stosqi_rex64 (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (6,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand3,
	operand4)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (BLKmode,
	operand3),
	const0_rtx),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (DImode,
	19))));
}

rtx
gen_cmpstrqi_nz_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

rtx
gen_cmpstrqi_nz_rex_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

rtx
gen_cmpstrqi_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

rtx
gen_cmpstrqi_rex_1 (operand0, operand1, operand2, operand3, operand4, operand5, operand6)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
     rtx operand6;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2)));
}

rtx
gen_strlenqi_1 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (4,
		gen_rtx_MEM (BLKmode,
	operand5),
		operand2,
		operand3,
		operand4),
	0)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_strlenqi_rex_1 (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (4,
		gen_rtx_MEM (BLKmode,
	operand5),
		operand2,
		operand3,
		operand4),
	0)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_x86_movdicc_0_m1_rex64 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	gen_rtx_LTU (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	constm1_rtx,
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_x86_movsicc_0_m1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_LTU (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	constm1_rtx,
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_pro_epilogue_adjust_stack_rex64 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode)))));
}

rtx
gen_sse_movsfcc (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_sse_movsfcc_eq (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_EQ (VOIDmode,
	operand3,
	operand4),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_sse_movdfcc (operand0, operand1, operand2, operand3, operand4, operand5)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
     rtx operand5;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx (GET_CODE (operand1), VOIDmode,
		operand4,
		operand5),
	operand2,
	operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_sse_movdfcc_eq (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_EQ (VOIDmode,
	operand3,
	operand4),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_allocate_stack_worker_1 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand0),
	3),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_allocate_stack_worker_rex64 (operand0)
     rtx operand0;
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (4,
		gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand0),
	3),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_MINUS (DImode,
	gen_rtx_REG (DImode,
	7),
	operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_trap ()
{
  return gen_rtx_TRAP_IF (VOIDmode,
	const1_rtx,
	GEN_INT (5));
}

rtx
gen_movv4sf_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movv4si_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movv8qi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movv4hi_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movv2si_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movv2sf_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_movti_internal (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_sse_movaps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	38));
}

rtx
gen_sse_movups (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	39));
}

rtx
gen_sse_movmskps (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

rtx
gen_mmx_pmovmskb (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (1,
		operand1),
	33));
}

rtx
gen_mmx_maskmovq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8QImode,
	operand0),
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	32));
}

rtx
gen_mmx_maskmovq_rex (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8QImode,
	operand0),
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	32));
}

rtx
gen_sse_movntv4sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	34));
}

rtx
gen_sse_movntdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		operand1),
	34));
}

rtx
gen_sse_movhlps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		GEN_INT (3),
		const0_rtx,
		const1_rtx))),
	GEN_INT (3)));
}

rtx
gen_sse_movlhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		GEN_INT (3),
		const0_rtx,
		const1_rtx))),
	GEN_INT (12)));
}

rtx
gen_sse_movhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	GEN_INT (12)));
}

rtx
gen_sse_movlps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	GEN_INT (3)));
}

rtx
gen_sse_loadss (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	const0_rtx)),
	const1_rtx));
}

rtx
gen_sse_movss (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	operand2,
	const1_rtx));
}

rtx
gen_sse_storess (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

rtx
gen_sse_shufps (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	41));
}

rtx
gen_addv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmaddv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_PLUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_subv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmsubv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MINUS (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_mulv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmmulv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_MULT (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_divv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmdivv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_DIV (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_rcpv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	42));
}

rtx
gen_vmrcpv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	42),
	operand2,
	const1_rtx));
}

rtx
gen_rsqrtv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	43));
}

rtx
gen_vmrsqrtv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		operand1),
	43),
	operand2,
	const1_rtx));
}

rtx
gen_sqrtv4sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (V4SFmode,
	operand1));
}

rtx
gen_vmsqrtv4sf2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SQRT (V4SFmode,
	operand1),
	operand2,
	const1_rtx));
}

rtx
gen_sse_andti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (TImode,
	operand1,
	operand2));
}

rtx
gen_sse_nandti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	operand1),
	operand2));
}

rtx
gen_sse_iorti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (TImode,
	operand1,
	operand2));
}

rtx
gen_sse_xorti3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (TImode,
	operand1,
	operand2));
}

rtx
gen_sse_clrv4sf (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4SFmode,
	gen_rtvec (1,
		const0_rtx),
	45));
}

rtx
gen_maskcmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2));
}

rtx
gen_maskncmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2)));
}

rtx
gen_vmmaskcmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2),
	operand1,
	const1_rtx));
}

rtx
gen_vmmaskncmpv4sf3 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SImode,
	gen_rtx_NOT (V4SImode,
	gen_rtx (GET_CODE (operand3), V4SImode,
		operand1,
		operand2)),
	gen_rtx_SUBREG (V4SImode,
	operand1,
	0),
	const1_rtx));
}

rtx
gen_sse_comi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx (GET_CODE (operand2), CCFPmode,
		gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

rtx
gen_sse_ucomi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPUmode,
	17),
	gen_rtx (GET_CODE (operand2), CCFPUmode,
		gen_rtx_VEC_SELECT (SFmode,
	operand0,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
		gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx)))));
}

rtx
gen_sse_unpckhps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	GEN_INT (5)));
}

rtx
gen_sse_unpcklps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_VEC_SELECT (V4SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V4SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	GEN_INT (5)));
}

rtx
gen_smaxv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmsmaxv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMAX (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_sminv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2));
}

rtx
gen_vmsminv4sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	gen_rtx_SMIN (V4SFmode,
	operand1,
	operand2),
	operand1,
	const1_rtx));
}

rtx
gen_cvtpi2ps (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (V2SFmode,
	operand2)),
	GEN_INT (12)));
}

rtx
gen_cvtps2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

rtx
gen_cvttps2pi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))));
}

rtx
gen_cvtsi2ss (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4SFmode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4SFmode,
	gen_rtx_FLOAT (SFmode,
	operand2)),
	GEN_INT (14)));
}

rtx
gen_cvtss2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	gen_rtx_FIX (V4SImode,
	operand1),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

rtx
gen_cvttss2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (SImode,
	gen_rtx_UNSPEC (V4SImode,
	gen_rtvec (1,
		operand1),
	30),
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))));
}

rtx
gen_addv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_addv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_addv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	operand1,
	operand2));
}

rtx
gen_ssaddv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_ssaddv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_PLUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_usaddv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_usaddv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_PLUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_subv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_subv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_subv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SImode,
	operand1,
	operand2));
}

rtx
gen_sssubv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_sssubv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SS_MINUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_ussubv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V8QImode,
	operand1,
	operand2));
}

rtx
gen_ussubv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_US_MINUS (V4HImode,
	operand1,
	operand2));
}

rtx
gen_mulv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V4HImode,
	operand1,
	operand2));
}

rtx
gen_smulv4hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16))));
}

rtx
gen_umulv4hi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand1),
	gen_rtx_ZERO_EXTEND (V4SImode,
	operand2)),
	GEN_INT (16))));
}

rtx
gen_mmx_pmaddwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SImode,
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2))))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		GEN_INT (2)))))),
	gen_rtx_MULT (V2SImode,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		GEN_INT (3))))),
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_VEC_SELECT (V2HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		GEN_INT (3))))))));
}

rtx
gen_mmx_iordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_IOR (DImode,
	operand1,
	operand2)),
	45));
}

rtx
gen_mmx_xordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_XOR (DImode,
	operand1,
	operand2)),
	45));
}

rtx
gen_mmx_clrdi (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		const0_rtx),
	45));
}

rtx
gen_mmx_anddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	operand1,
	operand2)),
	45));
}

rtx
gen_mmx_nanddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_AND (DImode,
	gen_rtx_NOT (DImode,
	operand1),
	operand2)),
	45));
}

rtx
gen_mmx_uavgv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V8QImode,
	gen_rtx_PLUS (V8QImode,
	gen_rtx_PLUS (V8QImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V8QImode,
	gen_rtvec (8,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

rtx
gen_mmx_uavgv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	gen_rtx_PLUS (V4HImode,
	gen_rtx_PLUS (V4HImode,
	operand1,
	operand2),
	gen_rtx_CONST_VECTOR (V4HImode,
	gen_rtvec (4,
		const1_rtx,
		const1_rtx,
		const1_rtx,
		const1_rtx))),
	const1_rtx));
}

rtx
gen_mmx_psadbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (V8QImode,
	gen_rtx_MINUS (V8QImode,
	operand1,
	operand2)));
}

rtx
gen_mmx_pinsrw (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	operand1,
	gen_rtx_VEC_DUPLICATE (V4HImode,
	gen_rtx_TRUNCATE (HImode,
	operand2)),
	operand3));
}

rtx
gen_mmx_pextrw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	gen_rtx_VEC_SELECT (HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		operand2)))));
}

rtx
gen_mmx_pshufw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V4HImode,
	gen_rtvec (2,
		operand1,
		operand2),
	41));
}

rtx
gen_eqv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V8QImode,
	operand1,
	operand2));
}

rtx
gen_eqv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V4HImode,
	operand1,
	operand2));
}

rtx
gen_eqv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

rtx
gen_gtv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V8QImode,
	operand1,
	operand2));
}

rtx
gen_gtv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V4HImode,
	operand1,
	operand2));
}

rtx
gen_gtv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

rtx
gen_umaxv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMAX (V8QImode,
	operand1,
	operand2));
}

rtx
gen_smaxv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V4HImode,
	operand1,
	operand2));
}

rtx
gen_uminv8qi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UMIN (V8QImode,
	operand1,
	operand2));
}

rtx
gen_sminv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V4HImode,
	operand1,
	operand2));
}

rtx
gen_ashrv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V4HImode,
	operand1,
	operand2));
}

rtx
gen_ashrv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (V2SImode,
	operand1,
	operand2));
}

rtx
gen_lshrv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V4HImode,
	operand1,
	operand2));
}

rtx
gen_lshrv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (V2SImode,
	operand1,
	operand2));
}

rtx
gen_mmx_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
	45));
}

rtx
gen_ashlv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V4HImode,
	operand1,
	operand2));
}

rtx
gen_ashlv2si3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (V2SImode,
	operand1,
	operand2));
}

rtx
gen_mmx_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (1,
		gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
	45));
}

rtx
gen_mmx_packsswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V4QImode,
	operand2)));
}

rtx
gen_mmx_packssdw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V4HImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand1),
	gen_rtx_SS_TRUNCATE (V2HImode,
	operand2)));
}

rtx
gen_mmx_packuswb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V8QImode,
	gen_rtx_US_TRUNCATE (V4QImode,
	operand1),
	gen_rtx_US_TRUNCATE (V4QImode,
	operand2)));
}

rtx
gen_mmx_punpckhbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	GEN_INT (85)));
}

rtx
gen_mmx_punpckhwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	GEN_INT (5)));
}

rtx
gen_mmx_punpckhdq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	const1_rtx));
}

rtx
gen_mmx_punpcklbw (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V8QImode,
	gen_rtx_VEC_SELECT (V8QImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		const0_rtx,
		GEN_INT (4),
		const1_rtx,
		GEN_INT (5),
		GEN_INT (2),
		GEN_INT (6),
		GEN_INT (3),
		GEN_INT (7)))),
	gen_rtx_VEC_SELECT (V8QImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (8,
		GEN_INT (4),
		const0_rtx,
		GEN_INT (5),
		const1_rtx,
		GEN_INT (6),
		GEN_INT (2),
		GEN_INT (7),
		GEN_INT (3)))),
	GEN_INT (85)));
}

rtx
gen_mmx_punpcklwd (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V4HImode,
	gen_rtx_VEC_SELECT (V4HImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		GEN_INT (2),
		const0_rtx,
		GEN_INT (3),
		const1_rtx))),
	gen_rtx_VEC_SELECT (V4HImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		const0_rtx,
		GEN_INT (2),
		const1_rtx,
		GEN_INT (3)))),
	GEN_INT (5)));
}

rtx
gen_mmx_punpckldq (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_MERGE (V2SImode,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))),
	gen_rtx_VEC_SELECT (V2SImode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const0_rtx,
		const1_rtx))),
	const1_rtx));
}

rtx
gen_emms ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	31),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36))));
}

rtx
gen_ldmxcsr (operand0)
     rtx operand0;
{
  return gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		operand0),
	37);
}

rtx
gen_stmxcsr (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC_VOLATILE (SImode,
	gen_rtvec (1,
		const0_rtx),
	40));
}

rtx
gen_addv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (V2SFmode,
	operand1,
	operand2));
}

rtx
gen_subv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand1,
	operand2));
}

rtx
gen_subrv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (V2SFmode,
	operand2,
	operand1));
}

rtx
gen_gtv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (V2SImode,
	operand1,
	operand2));
}

rtx
gen_gev2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (V2SImode,
	operand1,
	operand2));
}

rtx
gen_eqv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (V2SImode,
	operand1,
	operand2));
}

rtx
gen_pfmaxv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMAX (V2SFmode,
	operand1,
	operand2));
}

rtx
gen_pfminv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SMIN (V2SFmode,
	operand1,
	operand2));
}

rtx
gen_mulv2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (V2SFmode,
	operand1,
	operand2));
}

rtx
gen_femms ()
{
  return gen_rtx_PARALLEL (VOIDmode, gen_rtvec (17,
		gen_rtx_UNSPEC_VOLATILE (VOIDmode,
	gen_rtvec (1,
		const0_rtx),
	46),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36))));
}

rtx
gen_pf2id (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (V2SImode,
	operand1));
}

rtx
gen_pf2iw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (V2SImode,
	gen_rtx_SS_TRUNCATE (V2HImode,
	gen_rtx_FIX (V2SImode,
	operand1))));
}

rtx
gen_pfacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

rtx
gen_pfnacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

rtx
gen_pfpnacc (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_CONCAT (V2SFmode,
	gen_rtx_MINUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx)))),
	gen_rtx_PLUS (SFmode,
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))),
	gen_rtx_VEC_SELECT (SFmode,
	operand2,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))));
}

rtx
gen_pi2fw (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	gen_rtx_VEC_CONCAT (V2SImode,
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const0_rtx))))),
	gen_rtx_SIGN_EXTEND (SImode,
	gen_rtx_TRUNCATE (HImode,
	gen_rtx_VEC_SELECT (SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (1,
		const1_rtx))))))));
}

rtx
gen_floatv2si2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (V2SFmode,
	operand1));
}

rtx
gen_pavgusb (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V8QImode,
	gen_rtvec (2,
		operand1,
		operand2),
	49));
}

rtx
gen_pfrcpv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	50));
}

rtx
gen_pfrcpit1v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	51));
}

rtx
gen_pfrcpit2v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	52));
}

rtx
gen_pfrsqrtv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (1,
		operand1),
	53));
}

rtx
gen_pfrsqit1v2sf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (V2SFmode,
	gen_rtvec (2,
		operand1,
		operand2),
	54));
}

rtx
gen_pmulhrwv4hi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (V4HImode,
	gen_rtx_LSHIFTRT (V4SImode,
	gen_rtx_PLUS (V4SImode,
	gen_rtx_MULT (V4SImode,
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand1),
	gen_rtx_SIGN_EXTEND (V4SImode,
	operand2)),
	gen_rtx_CONST_VECTOR (V4SImode,
	gen_rtvec (4,
		GEN_INT (32768),
		GEN_INT (32768),
		GEN_INT (32768),
		GEN_INT (32768)))),
	GEN_INT (16))));
}

rtx
gen_pswapdv2si2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SImode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

rtx
gen_pswapdv2sf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_VEC_SELECT (V2SFmode,
	operand1,
	gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		const1_rtx,
		const0_rtx))));
}

rtx
gen_cmpdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (DImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (SImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmphi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (HImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[0] = force_reg (QImode, operands[0]);
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpdi_1_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

rtx
gen_cmpsi_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1));
}

rtx
gen_cmpqi_ext_3 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_SUBREG (QImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	0),
	operand1));
}

rtx
gen_cmpxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmptf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_compare_op0 = operands[0];
  ix86_compare_op1 = operands[1];
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand0,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_845 PARAMS ((rtx *));
rtx
gen_split_845 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_rtx_MEM (Pmode, stack_pointer_rtx);
   operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18),
	gen_rtx_COMPARE (CCFPmode,
	operand0,
	operand2)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstricthi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* Don't generate memory->memory moves, go through a register */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (HImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_reload_outqi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx op0, op1, op2;
  op0 = operands[0]; op1 = operands[1]; op2 = operands[2];

  if (reg_overlap_mentioned_p (op2, op0))
    abort ();
  if (! q_regs_operand (op1, QImode))
    {
      emit_insn (gen_movqi (op2, op1));
      op1 = op2;
    }
  emit_insn (gen_movqi (op0, op1));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		operand0,
		operand1,
		operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstrictqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* Don't generate memory->memory moves, go through a register.  */
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (QImode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_853 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_853 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_854 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_854 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_855 PARAMS ((rtx *));
rtx
gen_split_855 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
split_di (operands + 1, 1, operands + 2, operands + 3);
   operands[1] = gen_lowpart (DImode, operands[2]);
   operands[2] = gen_rtx_MEM (SImode, gen_rtx_PLUS (DImode, stack_pointer_rtx,
						    GEN_INT (4)));
  
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_856 PARAMS ((rtx *));
rtx
gen_split_856 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_857 PARAMS ((rtx *));
rtx
gen_split_857 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_858 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_858 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_859 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_859 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_860 PARAMS ((rtx *));
rtx
gen_split_860 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
split_di (operands, 2, operands + 2, operands + 4);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand3));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand5));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movsf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_862 PARAMS ((rtx *));
rtx
gen_split_862 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = get_pool_constant (XEXP (operands[1], 0));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_863 PARAMS ((rtx *));
rtx
gen_split_863 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-4))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_864 PARAMS ((rtx *));
rtx
gen_split_864 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_866 PARAMS ((rtx *));
rtx
gen_split_866 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_867 PARAMS ((rtx *));
rtx
gen_split_867 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_868 PARAMS ((rtx *));
rtx
gen_split_868 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_869 PARAMS ((rtx *));
rtx
gen_split_869 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movxf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movtf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_move (TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_872 PARAMS ((rtx *));
rtx
gen_split_872 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_873 PARAMS ((rtx *));
rtx
gen_split_873 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_874 PARAMS ((rtx *));
rtx
gen_split_874 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_875 PARAMS ((rtx *));
rtx
gen_split_875 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (DImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_876 PARAMS ((rtx *));
rtx
gen_split_876 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_877 PARAMS ((rtx *));
rtx
gen_split_877 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = get_pool_constant (XEXP (operands[1], 0));
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendhisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
    {
      operands[1] = force_reg (HImode, operands[1]);
      emit_insn (gen_zero_extendhisi2_and (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_879 PARAMS ((rtx *));
rtx
gen_split_879 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (65535))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendqihi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

extern rtx gen_split_881 PARAMS ((rtx *));
rtx
gen_split_881 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_882 PARAMS ((rtx *));
rtx
gen_split_882 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_883 PARAMS ((rtx *));
rtx
gen_split_883 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	copy_rtx (operand0),
	GEN_INT (255))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendqisi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

extern rtx gen_split_885 PARAMS ((rtx *));
rtx
gen_split_885 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_886 PARAMS ((rtx *));
rtx
gen_split_886 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand2),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_887 PARAMS ((rtx *));
rtx
gen_split_887 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	GEN_INT (255))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_zero_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (!TARGET_64BIT)
     {
       emit_insn (gen_zero_extendsidi2_32 (operands[0], operands[1]));
       DONE;
     }
  
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_889 PARAMS ((rtx *));
rtx
gen_split_889 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_890 PARAMS ((rtx *));
rtx
gen_split_890 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_891 PARAMS ((rtx *));
rtx
gen_split_891 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendsidi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2 ATTRIBUTE_UNUSED;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_extendsidi2_rex64 (operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_893 PARAMS ((rtx *));
rtx
gen_split_893 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
split_di (&operands[0], 1, &operands[3], &operands[4]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_ASHIFTRT (SImode,
	copy_rtx (operand1),
	GEN_INT (31))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	copy_rtx (operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_894 PARAMS ((rtx *));
rtx
gen_split_894 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[1]) == 0
      && true_regnum (operands[2]) == 1
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[2], operands[1], GEN_INT (31)));
    }
  else
    {
      emit_move_insn (operands[2], operands[1]);
      emit_insn (gen_ashrsi3_31 (operands[2], operands[2], GEN_INT (31)));
    }
  emit_move_insn (operands[4], operands[2]);
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_895 PARAMS ((rtx *));
rtx
gen_split_895 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  split_di (&operands[0], 1, &operands[3], &operands[4]);

  if (true_regnum (operands[3]) != true_regnum (operands[1]))
    emit_move_insn (operands[3], operands[1]);

  /* Generate a cltd if possible and doing so it profitable.  */
  if (true_regnum (operands[3]) == 0
      && (optimize_size || TARGET_USE_CLTD))
    {
      emit_insn (gen_ashrsi3_31 (operands[4], operands[3], GEN_INT (31)));
      DONE;
    }

  if (true_regnum (operands[4]) != true_regnum (operands[1]))
    emit_move_insn (operands[4], operands[1]);

  emit_insn (gen_ashrsi3_31 (operands[4], operands[4], GEN_INT (31)));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_896 PARAMS ((rtx *));
rtx
gen_split_896 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_897 PARAMS ((rtx *));
rtx
gen_split_897 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_898 PARAMS ((rtx *));
rtx
gen_split_898 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (XFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_899 PARAMS ((rtx *));
rtx
gen_split_899 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_900 PARAMS ((rtx *));
rtx
gen_split_900 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_901 PARAMS ((rtx *));
rtx
gen_split_901 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-12))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_902 PARAMS ((rtx *));
rtx
gen_split_902 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (SImode,
	7)),
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_903 PARAMS ((rtx *));
rtx
gen_split_903 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TFmode,
	gen_rtx_REG (DImode,
	7)),
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendsfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendsfxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extendsftf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extenddfxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extenddftf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (GET_CODE (operands[0]) == MEM && GET_CODE (operands[1]) == MEM)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_EXTEND (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_truncdfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;

   if (TARGET_80387)
     operands[2] = assign_386_stack_local (SFmode, 0);
   else
     {
	emit_insn (gen_truncdfsf2_sse_only (operands[0], operands[1]));
	DONE;
     }

    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_910 PARAMS ((rtx *));
rtx
gen_split_910 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_911 PARAMS ((rtx *));
rtx
gen_split_911 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_912 PARAMS ((rtx *));
rtx
gen_split_912 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_truncxfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (SFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_914 PARAMS ((rtx *));
rtx
gen_split_914 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_915 PARAMS ((rtx *));
rtx
gen_split_915 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_trunctfsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (SFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_917 PARAMS ((rtx *));
rtx
gen_split_917 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_918 PARAMS ((rtx *));
rtx
gen_split_918 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (SFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_truncxfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (DFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_920 PARAMS ((rtx *));
rtx
gen_split_920 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_921 PARAMS ((rtx *));
rtx
gen_split_921 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_trunctfdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
operands[2] = assign_386_stack_local (DFmode, 0);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_923 PARAMS ((rtx *));
rtx
gen_split_923 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_924 PARAMS ((rtx *));
rtx
gen_split_924 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_FLOAT_TRUNCATE (DFmode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_fix_truncxfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

rtx
gen_fix_trunctfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1));
}

rtx
gen_fix_truncdfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT && TARGET_SSE2)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncdfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_fix_truncsfdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE && TARGET_64BIT)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (DImode);
     emit_insn (gen_fix_truncsfdi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_929 PARAMS ((rtx *));
rtx
gen_split_929 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncdi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (DImode, 0);
      emit_insn (gen_fix_truncdi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_930 PARAMS ((rtx *));
rtx
gen_split_930 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_931 PARAMS ((rtx *));
rtx
gen_split_931 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (DImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	operand5))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_fix_truncxfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

rtx
gen_fix_trunctfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1));
}

rtx
gen_fix_truncdfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE2)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncdfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_fix_truncsfsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SSE)
   {
     rtx out = REG_P (operands[0]) ? operands[0] : gen_reg_rtx (SImode);
     emit_insn (gen_fix_truncsfsi_sse (out, operands[1]));
     if (out != operands[0])
	emit_move_insn (operands[0], out);
     DONE;
   }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_936 PARAMS ((rtx *));
rtx
gen_split_936 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_truncsi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (SImode, 0);
      emit_insn (gen_fix_truncsi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_937 PARAMS ((rtx *));
rtx
gen_split_937 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_938 PARAMS ((rtx *));
rtx
gen_split_938 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (SImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_fix_truncxfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

rtx
gen_fix_trunctfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

rtx
gen_fix_truncdfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

rtx
gen_fix_truncsfhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1));
}

extern rtx gen_split_943 PARAMS ((rtx *));
rtx
gen_split_943 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = assign_386_stack_local (HImode, 1);
  operands[3] = assign_386_stack_local (HImode, 2);
  if (memory_operand (operands[0], VOIDmode))
    emit_insn (gen_fix_trunchi_memory (operands[0], operands[1],
				       operands[2], operands[3]));
  else
    {
      operands[4] = assign_386_stack_local (HImode, 0);
      emit_insn (gen_fix_trunchi_nomemory (operands[0], operands[1],
					   operands[2], operands[3],
					   operands[4]));
    }
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_944 PARAMS ((rtx *));
rtx
gen_split_944 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_945 PARAMS ((rtx *));
rtx
gen_split_945 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx_FIX (HImode,
	operand1)),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand4)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand4)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_floatsisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

rtx
gen_floatdisf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (SFmode,
	operand1));
}

rtx
gen_floatsidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

rtx
gen_floatdidf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FLOAT (DFmode,
	operand1));
}

extern rtx gen_split_950 PARAMS ((rtx *));
rtx
gen_split_950 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[2] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[2] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[2]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], operands[2]));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_adddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_952 PARAMS ((rtx *));
rtx
gen_split_952 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_UNSPEC (CCmode,
	gen_rtvec (2,
		operand1,
		operand2),
	12)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand4),
	operand5)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_addsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_954 PARAMS ((rtx *));
rtx
gen_split_954 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_PLUS (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_955 PARAMS ((rtx *));
rtx
gen_split_955 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_956 PARAMS ((rtx *));
rtx
gen_split_956 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  pat = gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1], operands[2]),
  		      operands[3]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_957 PARAMS ((rtx *));
rtx
gen_split_957 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_958 PARAMS ((rtx *));
rtx
gen_split_958 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
  pat = gen_rtx_PLUS (Pmode,
  		      gen_rtx_PLUS (Pmode, gen_rtx_MULT (Pmode, operands[1],
		      					 operands[2]),
				    operands[3]),
  		      operands[4]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_959 PARAMS ((rtx *));
rtx
gen_split_959 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[3] = gen_lowpart (Pmode, operands[3]);
  operands[4] = gen_lowpart (Pmode, operands[4]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_PLUS (DImode,
	gen_rtx_MULT (DImode,
	operand1,
	operand2),
	operand3),
	operand4),
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_960 PARAMS ((rtx *));
rtx
gen_split_960 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_961 PARAMS ((rtx *));
rtx
gen_split_961 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  /* In -fPIC mode the constructs like (const (unspec [symbol_ref]))
     may confuse gen_lowpart.  */
  if (GET_MODE (operands[0]) != Pmode)
    {
      operands[1] = gen_lowpart (Pmode, operands[1]);
      operands[2] = gen_lowpart (Pmode, operands[2]);
    }
  operands[0] = gen_lowpart (SImode, operands[0]);
  pat = gen_rtx_PLUS (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_962 PARAMS ((rtx *));
rtx
gen_split_962 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = gen_lowpart (Pmode, operands[2]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_PLUS (DImode,
	operand1,
	operand2),
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_addhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_addqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (PLUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_addxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (XFmode,
	operand1,
	operand2));
}

rtx
gen_addtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (TFmode,
	operand1,
	operand2));
}

rtx
gen_adddf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DFmode,
	operand1,
	operand2));
}

rtx
gen_addsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SFmode,
	operand1,
	operand2));
}

rtx
gen_subdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_970 PARAMS ((rtx *));
rtx
gen_split_970 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  start_sequence ();
split_di (operands+0, 1, operands+0, operands+3);
   split_di (operands+1, 1, operands+1, operands+4);
   split_di (operands+2, 1, operands+2, operands+5);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MINUS (SImode,
	operand4,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand5))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_subsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_subhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_subqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (MINUS, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_subxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (XFmode,
	operand1,
	operand2));
}

rtx
gen_subtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (TFmode,
	operand1,
	operand2));
}

rtx
gen_subdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (DFmode,
	operand1,
	operand2));
}

rtx
gen_subsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SFmode,
	operand1,
	operand2));
}

rtx
gen_muldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_umulqihi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_ZERO_EXTEND (HImode,
	operand1),
	gen_rtx_ZERO_EXTEND (HImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulqihi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (HImode,
	gen_rtx_SIGN_EXTEND (HImode,
	operand1),
	gen_rtx_SIGN_EXTEND (HImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_umulditi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_umulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulditi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulsidi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_umuldi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_ZERO_EXTEND (TImode,
	operand1),
	gen_rtx_ZERO_EXTEND (TImode,
	operand2)),
	GEN_INT (64)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_umulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_ZERO_EXTEND (DImode,
	operand1),
	gen_rtx_ZERO_EXTEND (DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_smuldi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (DImode,
	gen_rtx_LSHIFTRT (TImode,
	gen_rtx_MULT (TImode,
	gen_rtx_SIGN_EXTEND (TImode,
	operand1),
	gen_rtx_SIGN_EXTEND (TImode,
	operand2)),
	GEN_INT (64)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_smulsi3_highpart (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_TRUNCATE (SImode,
	gen_rtx_LSHIFTRT (DImode,
	gen_rtx_MULT (DImode,
	gen_rtx_SIGN_EXTEND (DImode,
	operand1),
	gen_rtx_SIGN_EXTEND (DImode,
	operand2)),
	GEN_INT (32)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

rtx
gen_mulxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (XFmode,
	operand1,
	operand2));
}

rtx
gen_multf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (TFmode,
	operand1,
	operand2));
}

rtx
gen_muldf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DFmode,
	operand1,
	operand2));
}

rtx
gen_mulsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (SFmode,
	operand1,
	operand2));
}

rtx
gen_divxf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (XFmode,
	operand1,
	operand2));
}

rtx
gen_divtf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (TFmode,
	operand1,
	operand2));
}

rtx
gen_divdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DFmode,
	operand1,
	operand2));
}

rtx
gen_divsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SFmode,
	operand1,
	operand2));
}

rtx
gen_divmoddi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

extern rtx gen_split_1001 PARAMS ((rtx *));
rtx
gen_split_1001 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  /* Avoid use of cltd in favour of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      if (true_regnum (operands[1]))
	abort();
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (DImode,
	operand4,
	GEN_INT (63))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (DImode,
	gen_rtx_REG (DImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (DImode,
	gen_rtx_REG (DImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_divmodsi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_MOD (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

extern rtx gen_split_1003 PARAMS ((rtx *));
rtx
gen_split_1003 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
{
  /* Avoid use of cltd in favour of a mov+shift.  */
  if (!TARGET_USE_CLTD && !optimize_size)
    {
      if (true_regnum (operands[1]))
        emit_move_insn (operands[0], operands[1]);
      else
	emit_move_insn (operands[3], operands[1]);
      operands[4] = operands[3];
    }
  else
    {
      if (true_regnum (operands[1]))
	abort();
      operands[4] = operands[1];
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_ASHIFTRT (SImode,
	operand4,
	GEN_INT (31))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_DIV (SImode,
	gen_rtx_REG (SImode,
	0),
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_MOD (SImode,
	gen_rtx_REG (SImode,
	0),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1004 PARAMS ((rtx *));
rtx
gen_split_1004 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (DImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (DImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1005 PARAMS ((rtx *));
rtx
gen_split_1005 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (SImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_UMOD (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))),
		gen_rtx_USE (VOIDmode,
	copy_rtx (operand3)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_udivmodhi4 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
operands[4] = gen_reg_rtx (HImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	const0_rtx));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UDIV (HImode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_UMOD (HImode,
	operand1,
	operand2)),
		gen_rtx_USE (VOIDmode,
	operand4),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_testsi_ccno_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx));
}

rtx
gen_testqi_ccz_1 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx));
}

rtx
gen_testqi_ext_ccno_0 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1),
	const0_rtx));
}

extern rtx gen_split_1010 PARAMS ((rtx *));
rtx
gen_split_1010 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
{
  HOST_WIDE_INT len = INTVAL (operands[1]);
  HOST_WIDE_INT pos = INTVAL (operands[2]);
  HOST_WIDE_INT mask;
  enum machine_mode mode, submode;

  mode = GET_MODE (operands[0]);
  if (GET_CODE (operands[0]) == MEM)
    {
      /* ??? Combine likes to put non-volatile mem extractions in QImode
	 no matter the size of the test.  So find a mode that works.  */
      if (! MEM_VOLATILE_P (operands[0]))
	{
	  mode = smallest_mode_for_size (pos + len, MODE_INT);
	  operands[0] = adjust_address (operands[0], mode, 0);
	}
    }
  else if (GET_CODE (operands[0]) == SUBREG
	   && (submode = GET_MODE (SUBREG_REG (operands[0])),
	       GET_MODE_BITSIZE (mode) > GET_MODE_BITSIZE (submode))
	   && pos + len <= GET_MODE_BITSIZE (submode))
    {
      /* Narrow a paradoxical subreg to prevent partial register stalls.  */
      mode = submode;
      operands[0] = SUBREG_REG (operands[0]);
    }
  else if (mode == HImode && pos + len <= 8)
    {
      /* Small HImode tests can be converted to QImode.  */
      mode = QImode;
      operands[0] = gen_lowpart (QImode, operands[0]);
    }

  mask  = ((HOST_WIDE_INT)1 << (pos + len)) - 1;
  mask &= ~(((HOST_WIDE_INT)1 << pos) - 1);

  operands[3] = gen_rtx_AND (mode, operands[0],
			     GEN_INT (trunc_int_for_mode (mask, mode)));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	operand3,
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_anddi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_andsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1013 PARAMS ((rtx *));
rtx
gen_split_1013 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (HImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1014 PARAMS ((rtx *));
rtx
gen_split_1014 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = gen_lowpart (QImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand1),
	const0_rtx));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1015 PARAMS ((rtx *));
rtx
gen_split_1015 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_andhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_andqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (AND, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_iordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_iorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_iorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_iorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (IOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_xordi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_xorsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_xorhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_xorqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (XOR, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_xorqi_cc_ext_1 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_XOR (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	GEN_INT (8),
	GEN_INT (8)),
	operand2))));
}

rtx
gen_negdi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1028 PARAMS ((rtx *));
rtx
gen_split_1028 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
split_di (operands+1, 1, operands+2, operands+3);
   split_di (operands+0, 1, operands+0, operands+1);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_NEG (SImode,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	copy_rtx (operand2))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	gen_rtx_PLUS (SImode,
	gen_rtx_LTU (SImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx),
	operand3),
	const0_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_NEG (SImode,
	copy_rtx (operand1))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_neghi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (HImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (QImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_negsf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (SFmode);
	  rtx dest = operands[0];

	  operands[1] = force_reg (SFmode, operands[1]);
	  operands[0] = force_reg (SFmode, operands[0]);
	  emit_move_insn (reg,
			  gen_lowpart (SFmode,
				       GEN_INT (trunc_int_for_mode (0x80000000,
							            SImode))));
	  emit_insn (gen_negsf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (NEG, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1033 PARAMS ((rtx *));
rtx
gen_split_1033 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1034 PARAMS ((rtx *));
rtx
gen_split_1034 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1035 PARAMS ((rtx *));
rtx
gen_split_1035 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  if (operands_match_p (operands[0], operands[2]))
    {
      rtx tmp;
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1036 PARAMS ((rtx *));
rtx
gen_split_1036 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1037 PARAMS ((rtx *));
rtx
gen_split_1037 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (trunc_int_for_mode (0x80000000, SImode));
   operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1038 PARAMS ((rtx *));
rtx
gen_split_1038 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  int size = GET_MODE_SIZE (GET_MODE (operands[1]));

  /* XFmode's size is 12, TFmode 16, but only 10 bytes are used.  */
  if (size >= 12)
    size = 10;
  operands[0] = adjust_address (operands[0], QImode, size - 1);
  operands[1] = GEN_INT (trunc_int_for_mode (0x80, QImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE2)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_negdf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (DFmode);
#if HOST_BITS_PER_WIDE_INT >= 64
	  rtx imm = GEN_INT (trunc_int_for_mode(((HOST_WIDE_INT)1) << 63,
					        DImode));
#else
	  rtx imm = immed_double_const (0, 0x80000000, DImode);
#endif
	  rtx dest = operands[0];

	  operands[1] = force_reg (DFmode, operands[1]);
	  operands[0] = force_reg (DFmode, operands[0]);
	  emit_move_insn (reg, gen_lowpart (DFmode, imm));
	  emit_insn (gen_negdf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (NEG, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1040 PARAMS ((rtx *));
rtx
gen_split_1040 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1041 PARAMS ((rtx *));
rtx
gen_split_1041 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1042 PARAMS ((rtx *));
rtx
gen_split_1042 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (DImode, operands[0]);
    operands[1] = gen_lowpart (DImode, operands[1]);
    operands[2] = gen_lowpart (DImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1043 PARAMS ((rtx *));
rtx
gen_split_1043 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  if (operands_match_p (operands[0], operands[2]))
    {
      rtx tmp;
      tmp = operands[1];
      operands[1] = operands[2];
      operands[2] = tmp;
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_XOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand1,
	0),
	gen_rtx_SUBREG (TImode,
	operand2,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1044 PARAMS ((rtx *));
rtx
gen_split_1044 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1045 PARAMS ((rtx *));
rtx
gen_split_1045 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[4] = GEN_INT (trunc_int_for_mode (0x80000000, SImode));
   split_di (operands+0, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_XOR (SImode,
	copy_rtx (operand3),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_negtf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NEG, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1048 PARAMS ((rtx *));
rtx
gen_split_1048 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1049 PARAMS ((rtx *));
rtx
gen_split_1049 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1050 PARAMS ((rtx *));
rtx
gen_split_1050 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1051 PARAMS ((rtx *));
rtx
gen_split_1051 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_abssf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_abssf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (SFmode);
	  rtx dest = operands[0];

	  operands[1] = force_reg (SFmode, operands[1]);
	  operands[0] = force_reg (SFmode, operands[0]);
	  emit_move_insn (reg,
			  gen_lowpart (SFmode,
				       GEN_INT (trunc_int_for_mode (0x80000000,
							            SImode))));
	  emit_insn (gen_abssf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (ABS, SFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1053 PARAMS ((rtx *));
rtx
gen_split_1053 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1054 PARAMS ((rtx *));
rtx
gen_split_1054 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1055 PARAMS ((rtx *));
rtx
gen_split_1055 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)),
	gen_rtx_SUBREG (TImode,
	operand1,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1056 PARAMS ((rtx *));
rtx
gen_split_1056 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1057 PARAMS ((rtx *));
rtx
gen_split_1057 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (trunc_int_for_mode (~0x80000000, SImode));
   operands[0] = gen_rtx_REG (SImode, REGNO (operands[0]));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1058 PARAMS ((rtx *));
rtx
gen_split_1058 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  int size = GET_MODE_SIZE (GET_MODE (operands[1]));

  /* XFmode's size is 12, TFmode 16, but only 10 bytes are used.  */
  if (size >= 12)
    size = 10;
  operands[0] = adjust_address (operands[0], QImode, size - 1);
  operands[1] = GEN_INT (trunc_int_for_mode (~0x80, QImode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (QImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_absdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
if (TARGET_SSE2)
     {
       /* In case operand is in memory,  we will not use SSE.  */
       if (memory_operand (operands[0], VOIDmode)
	   && rtx_equal_p (operands[0], operands[1]))
	 emit_insn (gen_absdf2_memory (operands[0], operands[1]));
       else
	{
	  /* Using SSE is tricky, since we need bitwise negation of -0
	     in register.  */
	  rtx reg = gen_reg_rtx (DFmode);
#if HOST_BITS_PER_WIDE_INT >= 64
	  rtx imm = GEN_INT (trunc_int_for_mode(((HOST_WIDE_INT)1) << 63,
					        DImode));
#else
	  rtx imm = immed_double_const (0, 0x80000000, DImode);
#endif
	  rtx dest = operands[0];

	  operands[1] = force_reg (DFmode, operands[1]);
	  operands[0] = force_reg (DFmode, operands[0]);
	  emit_move_insn (reg, gen_lowpart (DFmode, imm));
	  emit_insn (gen_absdf2_ifs (operands[0], operands[1], reg));
	  if (dest != operands[0])
	    emit_move_insn (dest, operands[0]);
	}
       DONE;
     }
   ix86_expand_unary_operator (ABS, DFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1060 PARAMS ((rtx *));
rtx
gen_split_1060 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1061 PARAMS ((rtx *));
rtx
gen_split_1061 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1062 PARAMS ((rtx *));
rtx
gen_split_1062 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0)),
	gen_rtx_SUBREG (TImode,
	operand1,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1063 PARAMS ((rtx *));
rtx
gen_split_1063 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1064 PARAMS ((rtx *));
rtx
gen_split_1064 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx _val = 0;
  start_sequence ();
operands[4] = GEN_INT (trunc_int_for_mode (~0x80000000, SImode));
   split_di (operands+0, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_AND (SImode,
	copy_rtx (operand3),
	operand4)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_absxf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (ABS, XFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (XFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_abstf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (ABS, TFmode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (TFmode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1067 PARAMS ((rtx *));
rtx
gen_split_1067 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (XFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1068 PARAMS ((rtx *));
rtx
gen_split_1068 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (~0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1069 PARAMS ((rtx *));
rtx
gen_split_1069 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ABS (TFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1070 PARAMS ((rtx *));
rtx
gen_split_1070 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1] = GEN_INT (~0x8000);
   operands[0] = gen_rtx_REG (SImode,
			      true_regnum (operands[0]) + (TARGET_64BIT ? 1 : 2));
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_one_cmpldi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (DImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1072 PARAMS ((rtx *));
rtx
gen_split_1072 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (DImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (DImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_one_cmplsi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1074 PARAMS ((rtx *));
rtx
gen_split_1074 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1075 PARAMS ((rtx *));
rtx
gen_split_1075 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_XOR (SImode,
	copy_rtx (operand1),
	constm1_rtx))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_one_cmplhi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (HImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1077 PARAMS ((rtx *));
rtx
gen_split_1077 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_one_cmplqi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
ix86_expand_unary_operator (NOT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (QImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1079 PARAMS ((rtx *));
rtx
gen_split_1079 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashldi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1081 PARAMS ((rtx *));
rtx
gen_split_1081 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2] = GEN_INT (trunc_int_for_mode (1 << INTVAL (operands[2]),
					      DImode));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MULT (DImode,
	operand1,
	operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1082 PARAMS ((rtx *));
rtx
gen_split_1082 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashldi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1083 PARAMS ((rtx *));
rtx
gen_split_1083 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashldi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_x86_shift_adj_1 (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_AND (QImode,
	operand2,
	GEN_INT (32)),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand1,
	operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand3,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_x86_shift_adj_2 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_move_insn (operands[1], const0_rtx);

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1087 PARAMS ((rtx *));
rtx
gen_split_1087 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  rtx pat;
  operands[0] = gen_lowpart (SImode, operands[0]);
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = GEN_INT (trunc_int_for_mode (1 << INTVAL (operands[2]),
					     Pmode));
  pat = gen_rtx_MULT (Pmode, operands[1], operands[2]);
  if (Pmode != SImode)
    pat = gen_rtx_SUBREG (SImode, pat, 0);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0], pat));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1088 PARAMS ((rtx *));
rtx
gen_split_1088 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
{
  operands[1] = gen_lowpart (Pmode, operands[1]);
  operands[2] = GEN_INT (trunc_int_for_mode (1 << INTVAL (operands[2]),
					     Pmode));
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTEND (DImode,
	gen_rtx_SUBREG (SImode,
	gen_rtx_MULT (SImode,
	operand1,
	operand2),
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashlhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashlqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_ashrdi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (ASHIFTRT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1092 PARAMS ((rtx *));
rtx
gen_split_1092 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashrdi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1093 PARAMS ((rtx *));
rtx
gen_split_1093 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_ashrdi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_x86_shift_adj_3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx label = gen_label_rtx ();
  rtx tmp;

  emit_insn (gen_testqi_ccz_1 (operands[2], GEN_INT (32)));

  tmp = gen_rtx_REG (CCZmode, FLAGS_REG);
  tmp = gen_rtx_EQ (VOIDmode, tmp, const0_rtx);
  tmp = gen_rtx_IF_THEN_ELSE (VOIDmode, tmp,
			      gen_rtx_LABEL_REF (VOIDmode, label),
			      pc_rtx);
  tmp = emit_jump_insn (gen_rtx_SET (VOIDmode, pc_rtx, tmp));
  JUMP_LABEL (tmp) = label;

  emit_move_insn (operands[0], operands[1]);
  emit_insn (gen_ashrsi3_31 (operands[1], operands[1], GEN_INT (31)));

  emit_label (label);
  LABEL_NUSES (label) = 1;

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ashrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ASHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_lshrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (!TARGET_64BIT && TARGET_CMOVE && ! immediate_operand (operands[2], QImode))
    {
      emit_insn (gen_lshrdi3_1 (operands[0], operands[1], operands[2]));
      DONE;
    }
  ix86_expand_binary_operator (LSHIFTRT, DImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (DImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1099 PARAMS ((rtx *));
rtx
gen_split_1099 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_lshrdi (operands, operands[3]); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1100 PARAMS ((rtx *));
rtx
gen_split_1100 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_lshrdi (operands, NULL_RTX); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_lshrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_lshrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_lshrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (LSHIFTRT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LSHIFTRT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotldi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotlsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotlhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotlqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATE, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATE (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotrdi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, DImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (DImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotrsi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, SImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotrhi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, HImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (HImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_rotrqi3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
ix86_expand_binary_operator (ROTATERT, QImode, operands); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ROTATERT (QImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SIGN_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_extzv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[2]) != 8 || INTVAL (operands[3]) != 8)
    FAIL;

  /* From mips.md: extract_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[1], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_insv (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  /* Handle extractions from %ah et al.  */
  if (INTVAL (operands[1]) != 8 || INTVAL (operands[2]) != 8)
    FAIL;

  /* From mips.md: insert_bit_field doesn't verify that our source
     matches the predicate, so check it again here.  */
  if (! register_operand (operands[0], VOIDmode))
    FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	operand1,
	operand2),
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_seq (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (EQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_EQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sne (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (NE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sgt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sgtu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_slt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sltu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LTU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sge (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sgeu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (GEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_GEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sle (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sleu (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LEU, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LEU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sunordered (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sordered (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (ORDERED, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ORDERED (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_suneq (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNEQ, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNEQ (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sunge (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNGE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sungt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sunle (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNLE, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLE (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sunlt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (UNLT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNLT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sltgt (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
if (ix86_expand_setcc (LTGT, operands[0])) DONE; else FAIL;
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_LTGT (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1133 PARAMS ((rtx *));
rtx
gen_split_1133 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1134 PARAMS ((rtx *));
rtx
gen_split_1134 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], QImode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1135 PARAMS ((rtx *));
rtx
gen_split_1135 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, REVERSE_CONDITION (GET_CODE (new_op1),
					GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1136 PARAMS ((rtx *));
rtx
gen_split_1136 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op1 = copy_rtx (operands[1]);
  operands[1] = new_op1;
  PUT_MODE (new_op1, QImode);
  PUT_CODE (new_op1, REVERSE_CONDITION (GET_CODE (new_op1),
					GET_MODE (XEXP (new_op1, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op1, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_beq (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (EQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bne (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (NE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bgt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bgtu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_blt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bltu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LTU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bge (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bgeu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (GEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ble (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bleu (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LEU, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bunordered (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bordered (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (ORDERED, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_buneq (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNEQ, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bunge (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNGE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bungt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bunle (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNLE, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bunlt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (UNLT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_bltgt (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
ix86_expand_branch (LTGT, operands[0]); DONE;
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand1,
	gen_rtx_LABEL_REF (VOIDmode,
	operand0),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1155 PARAMS ((rtx *));
rtx
gen_split_1155 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[0], VOIDmode);
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1156 PARAMS ((rtx *));
rtx
gen_split_1156 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
{
  rtx new_op0 = copy_rtx (operands[0]);
  operands[0] = new_op0;
  PUT_MODE (new_op0, VOIDmode);
  PUT_CODE (new_op0, REVERSE_CONDITION (GET_CODE (new_op0),
					GET_MODE (XEXP (new_op0, 0))));

  /* Make sure that (a) the CCmode we have for the flags is strong
     enough for the reversed compare or (b) we have a valid FP compare.  */
  if (! ix86_comparison_operator (new_op0, VOIDmode))
    FAIL;
}
  operand0 = operands[0];
  operand1 = operands[1];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand0,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1),
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1157 PARAMS ((rtx *));
rtx
gen_split_1157 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
			operands[3], operands[4], NULL_RTX);
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1158 PARAMS ((rtx *));
rtx
gen_split_1158 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  start_sequence ();
{
  ix86_split_fp_branch (GET_CODE (operands[0]), operands[1], operands[2],
			operands[3], operands[4], operands[5]);
  DONE;
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	operand6,
	operand3,
	operand4)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_indirect_jump (operand0)
     rtx operand0;
{
  return gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0);
}

rtx
gen_tablejump (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  /* In PIC mode, the table entries are stored GOT-relative.  Convert
     the relative address to an absolute address.  */
  if (flag_pic)
    {
      if (TARGET_64BIT)
	operands[0] = expand_simple_binop (Pmode, PLUS, operands[0],
					   gen_rtx_LABEL_REF (Pmode, operands[1]),
					   NULL_RTX, 0,
					   OPTAB_DIRECT);
      else if (HAVE_AS_GOTOFF_IN_DATA)
	{
	  operands[0] = expand_simple_binop (Pmode, PLUS, operands[0],
					     pic_offset_table_rtx, NULL_RTX,
					     1, OPTAB_DIRECT);
	  current_function_uses_pic_offset_table = 1;
	}
      else
	{
	  operands[0] = expand_simple_binop (Pmode, MINUS, pic_offset_table_rtx,
					     operands[0], NULL_RTX, 1,
					     OPTAB_DIRECT);
	  current_function_uses_pic_offset_table = 1;
	}
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_jump_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	pc_rtx,
	operand0),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (VOIDmode,
	operand1)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_doloop_end (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
                                 
{
  /* Only use cloop on innermost loops.  */
  if (INTVAL (operands[3]) > 1)
    FAIL;
  if (GET_MODE (operands[0]) != SImode)
    FAIL;
  emit_jump_insn (gen_doloop_end_internal (operands[4], operands[0],
					   operands[0]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1162 PARAMS ((rtx *));
rtx
gen_split_1162 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_PLUS (SImode,
	operand1,
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand1),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand1),
	constm1_rtx)))));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand0,
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1163 PARAMS ((rtx *));
rtx
gen_split_1163 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	gen_rtx_COMPARE (CCZmode,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand3),
	constm1_rtx),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand3),
	gen_rtx_PLUS (SImode,
	copy_rtx (operand3),
	constm1_rtx)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	copy_rtx (operand3)));
  emit_jump_insn (gen_rtx_SET (VOIDmode,
	pc_rtx,
	gen_rtx_IF_THEN_ELSE (VOIDmode,
	gen_rtx_NE (VOIDmode,
	gen_rtx_REG (CCZmode,
	17),
	const0_rtx),
	operand0,
	pc_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1164 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1164 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), 17);
  operands[5] = gen_rtx_REG (QImode, REGNO (operands[3]));
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1165 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1165 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
{
  operands[4] = gen_rtx_REG (GET_MODE (operands[0]), 17);
  operands[5] = gen_rtx_REG (QImode, REGNO (operands[3]));
  ix86_expand_clear (operands[3]);
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand5),
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call_pop (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  if (operands[3] == const0_rtx)
    {
      emit_insn (gen_call (operands[0], operands[1], constm1_rtx));
      DONE;
    }
  /* Static functions and indirect calls don't need
     current_function_uses_pic_offset_table.  */
  if (flag_pic
      && GET_CODE (XEXP (operands[0], 0)) == SYMBOL_REF
      && ! SYMBOL_REF_FLAG (XEXP (operands[0], 0)))
    current_function_uses_pic_offset_table = 1;
  if (! call_insn_operand (XEXP (operands[0], 0), Pmode))
    XEXP (operands[0], 0) = copy_to_mode_reg (Pmode, XEXP (operands[0], 0));
  if (TARGET_64BIT)
    abort();
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_CALL (VOIDmode,
	operand0,
	operand1),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand3)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  rtx insn;
  /* Static functions and indirect calls don't need
     current_function_uses_pic_offset_table.  */
  if (flag_pic
      && GET_CODE (XEXP (operands[0], 0)) == SYMBOL_REF
      && ! SYMBOL_REF_FLAG (XEXP (operands[0], 0)))
    current_function_uses_pic_offset_table = 1;

  if (! call_insn_operand (XEXP (operands[0], 0), Pmode))
    XEXP (operands[0], 0) = copy_to_mode_reg (Pmode, XEXP (operands[0], 0));
  if (TARGET_64BIT && INTVAL (operands[2]) >= 0)
    {
      rtx reg = gen_rtx_REG (QImode, 0);
      emit_move_insn (reg, operands[2]);
      insn = emit_call_insn (gen_call_exp (operands[0], operands[1]));
      use_reg (&CALL_INSN_FUNCTION_USAGE (insn), reg);
      DONE;
    }
   insn = emit_call_insn (gen_call_exp (operands[0], operands[1]));
   DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_CALL (VOIDmode,
	operand0,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call_exp (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  return gen_rtx_CALL (VOIDmode,
	operand0,
	operand1);
}

rtx
gen_call_value_pop (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
{
  if (operands[4] == const0_rtx)
    {
      emit_insn (gen_call_value (operands[0], operands[1], operands[2],
				 constm1_rtx));
      DONE;
    }
  /* Static functions and indirect calls don't need
     current_function_uses_pic_offset_table.  */
  if (flag_pic
      && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
      && ! SYMBOL_REF_FLAG (XEXP (operands[1], 0)))
    current_function_uses_pic_offset_table = 1;
  if (! call_insn_operand (XEXP (operands[1], 0), Pmode))
    XEXP (operands[1], 0) = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand4)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call_value (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
  rtx insn;
  /* Static functions and indirect calls don't need
     current_function_uses_pic_offset_table.  */
  if (flag_pic
      && GET_CODE (XEXP (operands[1], 0)) == SYMBOL_REF
      && ! SYMBOL_REF_FLAG (XEXP (operands[1], 0)))
    current_function_uses_pic_offset_table = 1;
  if (! call_insn_operand (XEXP (operands[1], 0), Pmode))
    XEXP (operands[1], 0) = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  if (TARGET_64BIT && INTVAL (operands[3]) >= 0)
    {
      rtx reg = gen_rtx_REG (QImode, 0);
      emit_move_insn (reg, operands[3]);
      insn = emit_call_insn (gen_call_value_exp (operands[0], operands[1],
						 operands[2]));
      use_reg (&CALL_INSN_FUNCTION_USAGE (insn), reg);
      DONE;
    }
  insn = emit_call_insn (gen_call_value_exp (operands[0], operands[1],
					     operands[2]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_call_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_call_value_exp (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_CALL (VOIDmode,
	operand1,
	operand2));
}

rtx
gen_untyped_call (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int i;

  /* In order to give reg-stack an easier job in validating two
     coprocessor registers as containing a possible return value,
     simply pretend the untyped call returns a complex long double
     value.  */

  emit_call_insn (TARGET_FLOAT_RETURNS_IN_80387
                  ? gen_call_value (gen_rtx_REG (XCmode, FIRST_FLOAT_REG),
				    operands[0], const0_rtx,
				    GEN_INT (SSE_REGPARM_MAX - 1))
                  : gen_call (operands[0], const0_rtx,
			      GEN_INT (SSE_REGPARM_MAX - 1)));

  for (i = 0; i < XVECLEN (operands[2], 0); i++)
    {
      rtx set = XVECEXP (operands[2], 0, i);
      emit_move_insn (SET_DEST (set), SET_SRC (set));
    }

  /* The optimizer does not know that the call sets the function value
     registers we stored in the result block.  We avoid problems by
     claiming that all hard registers are used and clobbered at this
     point.  */
  emit_insn (gen_blockage ());

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_call_insn (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_CALL (VOIDmode,
	operand0,
	const0_rtx),
		operand1,
		operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_return ()
{
  rtx _val = 0;
  start_sequence ();
  {
{
  if (current_function_pops_args)
    {
      rtx popc = GEN_INT (current_function_pops_args);
      emit_jump_insn (gen_return_pop_internal (popc));
      DONE;
    }
}
  }
  emit_jump_insn (gen_rtx_RETURN (VOIDmode));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_prologue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_prologue (); DONE;
  }
  emit_insn (const1_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_epilogue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_epilogue (1); DONE;
  }
  emit_insn (const1_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sibcall_epilogue ()
{
  rtx _val = 0;
  start_sequence ();
  {
ix86_expand_epilogue (0); DONE;
  }
  emit_insn (const1_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_eh_return (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx tmp, sa = operands[0], ra = operands[1];

  /* Tricky bit: we write the address of the handler to which we will
     be returning into someone else's stack frame, one word below the
     stack address we wish to restore.  */
  tmp = gen_rtx_PLUS (Pmode, arg_pointer_rtx, sa);
  tmp = plus_constant (tmp, -UNITS_PER_WORD);
  tmp = gen_rtx_MEM (Pmode, tmp);
  emit_move_insn (tmp, ra);

  if (Pmode == SImode)
    emit_insn (gen_eh_return_si (sa));
  else
    emit_insn (gen_eh_return_di (sa));
  emit_barrier ();
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1178 PARAMS ((rtx *));
rtx
gen_split_1178 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1179 PARAMS ((rtx *));
rtx
gen_split_1179 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_expand_epilogue (2); DONE;
  emit_insn (const1_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_ffssi2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  rtx out = gen_reg_rtx (SImode), tmp = gen_reg_rtx (SImode);
  rtx in = operands[1];

  if (TARGET_CMOVE)
    {
      emit_move_insn (tmp, constm1_rtx);
      emit_insn (gen_ffssi_1 (out, in));
      emit_insn (gen_rtx_SET (VOIDmode, out,
		  gen_rtx_IF_THEN_ELSE (SImode, 
		    gen_rtx_EQ (VOIDmode, gen_rtx_REG (CCZmode, FLAGS_REG),
				const0_rtx),
		    tmp,
		    out)));
      emit_insn (gen_addsi3 (out, out, const1_rtx));
      emit_move_insn (operands[0], out);
    }

  /* Pentium bsf instruction is extremly slow.  The following code is
     recommended by the Intel Optimizing Manual as a reasonable replacement:
           TEST    EAX,EAX
	   JZ      SHORT BS2
	   XOR     ECX,ECX
	   MOV     DWORD PTR [TEMP+4],ECX
	   SUB     ECX,EAX
	   AND     EAX,ECX
	   MOV     DWORD PTR [TEMP],EAX
	   FILD    QWORD PTR [TEMP]
	   FSTP    QWORD PTR [TEMP]
	   WAIT    ; WAIT only needed for compatibility with
	           ; earlier processors
	   MOV     ECX, DWORD PTR [TEMP+4]
	   SHR     ECX,20
	   SUB     ECX,3FFH
	   TEST    EAX,EAX       ; clear zero flag
       BS2:
     Following piece of code expand ffs to similar beast.
       */

  else if (TARGET_PENTIUM && !optimize_size && TARGET_80387)
    {
      rtx label = gen_label_rtx ();
      rtx lo, hi;
      rtx mem = assign_386_stack_local (DImode, 0);
      rtx fptmp = gen_reg_rtx (DFmode);
      split_di (&mem, 1, &lo, &hi);

      emit_move_insn (out, const0_rtx);

      emit_cmp_and_jump_insns (in, const0_rtx, EQ, 0, SImode, 1, label);

      emit_move_insn (hi, out);
      emit_insn (gen_subsi3 (out, out, in));
      emit_insn (gen_andsi3 (out, out, in));
      emit_move_insn (lo, out);
      emit_insn (gen_floatdidf2 (fptmp,mem));
      emit_move_insn (gen_rtx_MEM (DFmode, XEXP (mem, 0)), fptmp);
      emit_move_insn (out, hi);
      emit_insn (gen_lshrsi3 (out, out, GEN_INT (20)));
      emit_insn (gen_subsi3 (out, out, GEN_INT (0x3ff - 1)));

      emit_label (label);
      LABEL_NUSES (label) = 1;

      emit_move_insn (operands[0], out);
    }
  else
    {
      emit_move_insn (tmp, const0_rtx);
      emit_insn (gen_ffssi_1 (out, in));
      emit_insn (gen_rtx_SET (VOIDmode, 
		  gen_rtx_STRICT_LOW_PART (VOIDmode, gen_lowpart (QImode, tmp)),
		  gen_rtx_EQ (QImode, gen_rtx_REG (CCZmode, FLAGS_REG),
			      const0_rtx)));
      emit_insn (gen_negsi2 (tmp, tmp));
      emit_insn (gen_iorsi3 (out, out, tmp));
      emit_insn (gen_addsi3 (out, out, const1_rtx));
      emit_move_insn (operands[0], out);
    }
  DONE;  
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_FFS (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1181 PARAMS ((rtx *));
rtx
gen_split_1181 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{ 
  operands[4] = ix86_force_to_memory (GET_MODE (operands[1]), operands[1]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[4],
					  operands[2])));
  ix86_free_from_memory (GET_MODE (operands[1]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1182 PARAMS ((rtx *));
rtx
gen_split_1182 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
  operands[4] = ix86_force_to_memory (GET_MODE (operands[2]), operands[2]);
  operands[4] = gen_rtx_FLOAT (GET_MODE (operands[0]), operands[4]);
  emit_insn (gen_rtx_SET (VOIDmode, operands[0],
			  gen_rtx_fmt_ee (GET_CODE (operands[3]),
					  GET_MODE (operands[3]),
					  operands[1],
					  operands[4])));
  ix86_free_from_memory (GET_MODE (operands[2]));
  DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sqrtsf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!TARGET_SSE_MATH)
    operands[1] = force_reg (SFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (SFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sqrtdf2 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (!TARGET_SSE2 || !TARGET_SSE_MATH)
    operands[1] = force_reg (DFmode, operands[1]);
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_SQRT (DFmode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstrsi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_movstr (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movstrdi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_movstr (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovdi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovdi_rex_1 (operands[0], operands[1], operands[0],
				     operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (DImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (DImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovsi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovsi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovsi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovsi_rex_1 (operands[0], operands[1], operands[0],
				     operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (SImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (SImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovhi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovhi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovhi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovhi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovhi_rex_1 (operands[0], operands[1], operands[0],
				     operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (HImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (HImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strmovqi_rex64 (operands[0], operands[1]));
      DONE;
    }
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovqi_1 (operands[0], operands[1], operands[0],
				operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (QImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (QImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (SImode,
	operand1,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strmovqi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strmovqi_rex_1 (operands[0], operands[1], operands[0],
				     operands[1]));
      DONE;
    }
  else 
    operands[2] = gen_reg_rtx (QImode);
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_MEM (QImode,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand2));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_PLUS (DImode,
	operand1,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_clrstrsi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
 if (ix86_expand_clrstr (operands[0], operands[1], operands[2]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_clrstrdi (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
 if (ix86_expand_clrstr (operands[0], operands[1], operands[2]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_USE (VOIDmode,
	operand0));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand1));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsetdi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetdi_rex_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsetsi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsetsi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetsi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsetsi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetsi_rex_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsethi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsethi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsethi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsethi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsethi_rex_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (HImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	GEN_INT (2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsetqi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_strsetqi_rex64 (operands[0], operands[1]));
      DONE;
    }
  else if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetqi_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strsetqi_rex64 (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_SINGLE_STRINGOP || optimize_size)
    {
      emit_insn (gen_strsetqi_rex_1 (operands[0], operands[0], operands[1]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (QImode,
	operand0),
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	operand0,
	const1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpstrsi (operand0, operand1, operand2, operand3, operand4)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
     rtx operand4;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[5];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
    operands[4] = operand4;
{
  rtx addr1, addr2, out, outlow, count, countreg, align;

  out = operands[0];
  if (GET_CODE (out) != REG)
    out = gen_reg_rtx (SImode);

  addr1 = copy_to_mode_reg (Pmode, XEXP (operands[1], 0));
  addr2 = copy_to_mode_reg (Pmode, XEXP (operands[2], 0));
  
  count = operands[3];
  countreg = ix86_zero_extend_to_Pmode (count);

  /* %%% Iff we are testing strict equality, we can use known alignment
     to good advantage.  This may be possible with combine, particularly
     once cc0 is dead.  */
  align = operands[4];

  emit_insn (gen_cld ());
  if (GET_CODE (count) == CONST_INT)
    {
      if (INTVAL (count) == 0)
	{
	  emit_move_insn (operands[0], const0_rtx);
	  DONE;
	}
      if (TARGET_64BIT)
	emit_insn (gen_cmpstrqi_nz_rex_1 (addr1, addr2, countreg, align,
					  addr1, addr2, countreg));
      else
	emit_insn (gen_cmpstrqi_nz_1 (addr1, addr2, countreg, align,
				      addr1, addr2, countreg));
    }
  else
    {
      if (TARGET_64BIT)
	{
	  emit_insn (gen_cmpdi_1_rex64 (countreg, countreg));
	  emit_insn (gen_cmpstrqi_rex_1 (addr1, addr2, countreg, align,
					 addr1, addr2, countreg));
	}
      else
	{
	  emit_insn (gen_cmpsi_1 (countreg, countreg));
	  emit_insn (gen_cmpstrqi_1 (addr1, addr2, countreg, align,
				     addr1, addr2, countreg));
	}
    }

  outlow = gen_lowpart (QImode, out);
  emit_insn (gen_cmpintqi (outlow));
  emit_move_insn (out, gen_rtx_SIGN_EXTEND (SImode, outlow));

  if (operands[0] != out)
    emit_move_insn (operands[0], out);

  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
    operand4 = operands[4];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_COMPARE (SImode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand3));
  emit_insn (gen_rtx_USE (VOIDmode,
	operand4));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_cmpintqi (operand0)
     rtx operand0;
{
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
operands[1] = gen_reg_rtx (QImode);
   operands[2] = gen_reg_rtx (QImode);
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_GTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_LTU (QImode,
	gen_rtx_REG (CCmode,
	17),
	const0_rtx)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (QImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strlensi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (SImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_strlendi (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
{
 if (ix86_expand_strlen (operands[0], operands[1], operands[2], operands[3]))
   DONE;
 else
   FAIL;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (DImode,
	gen_rtvec (3,
		operand1,
		operand2,
		operand3),
	0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1207 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1207 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5))),
		gen_rtx_USE (VOIDmode,
	operand6),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1208 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1208 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (7,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCmode,
	17),
	gen_rtx_IF_THEN_ELSE (CCmode,
	gen_rtx_NE (VOIDmode,
	operand6,
	const0_rtx),
	gen_rtx_COMPARE (CCmode,
	gen_rtx_MEM (BLKmode,
	operand4),
	gen_rtx_MEM (BLKmode,
	operand5)),
	const0_rtx)),
		gen_rtx_USE (VOIDmode,
	operand3),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_USE (VOIDmode,
	gen_rtx_REG (SImode,
	19)),
		gen_rtx_CLOBBER (VOIDmode,
	operand0),
		gen_rtx_CLOBBER (VOIDmode,
	operand1),
		gen_rtx_CLOBBER (VOIDmode,
	operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movsicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movhicc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (!ix86_expand_int_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (HImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movsfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movdfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1214 PARAMS ((rtx *));
rtx
gen_split_1214 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx operand8;
  rtx _val = 0;
  start_sequence ();
split_di (operands+2, 1, operands+5, operands+6);
   split_di (operands+3, 1, operands+7, operands+8);
   split_di (operands, 1, operands+2, operands+3);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  operand8 = operands[8];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		operand4,
		const0_rtx),
	operand5,
	operand7)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	gen_rtx_IF_THEN_ELSE (SImode,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		const0_rtx),
	operand6,
	operand8)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movxfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (XFmode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movtfcc (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[4];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
    operands[3] = operand3;
if (! ix86_expand_fp_movcc (operands)) FAIL; DONE;
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
    operand3 = operands[3];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (TFmode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_minsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17))));
}

extern rtx gen_split_1218 PARAMS ((rtx *));
rtx
gen_split_1218 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1219 PARAMS ((rtx *));
rtx
gen_split_1219 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand2,
	operand1)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GE (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_mindf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1221 PARAMS ((rtx *));
rtx
gen_split_1221 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_LT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1222 PARAMS ((rtx *));
rtx
gen_split_1222 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand2,
	copy_rtx (operand2))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GE (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	operand1,
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_maxsf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1224 PARAMS ((rtx *));
rtx
gen_split_1224 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1225 PARAMS ((rtx *));
rtx
gen_split_1225 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SFmode,
	gen_rtx_GT (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_maxdf3 (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
#
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1227 PARAMS ((rtx *));
rtx
gen_split_1227 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	operand1,
	operand2),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1228 PARAMS ((rtx *));
rtx
gen_split_1228 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	gen_rtx_COMPARE (CCFPmode,
	operand1,
	operand2)));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (DFmode,
	gen_rtx_GT (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17),
	const0_rtx),
	copy_rtx (operand1),
	copy_rtx (operand2))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_pro_epilogue_adjust_stack (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  if (TARGET_64BIT)
    {
      emit_insn (gen_pro_epilogue_adjust_stack_rex64
		 (operands[0], operands[1], operands[2]));
      DONE;
    }
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	operand1,
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1230 PARAMS ((rtx *));
rtx
gen_split_1230 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
{
   ix86_compare_op0 = operands[5];
   ix86_compare_op1 = operands[4];
   operands[1] = gen_rtx_fmt_ee (swap_condition (GET_CODE (operands[1])),
				 VOIDmode, operands[5], operands[4]);
   ix86_expand_fp_movcc (operands);
   DONE;
}
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1231 PARAMS ((rtx *));
rtx
gen_split_1231 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  /* If op2 == op3, op3 will be clobbered before it is used.
     This should be optimized out though.  */
  if (operands_match_p (operands[2], operands[3]))
    abort ();
  PUT_MODE (operands[1], GET_MODE (operands[0]));
  if (operands_match_p (operands[0], operands[4]))
    operands[6] = operands[4], operands[7] = operands[2];
  else
    operands[6] = operands[2], operands[7] = operands[4];
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand4,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand4),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand2,
	0),
	gen_rtx_AND (TImode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand2),
	0),
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0),
	gen_rtx_AND (TImode,
	gen_rtx_NOT (TImode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand4),
	0)),
	gen_rtx_SUBREG (TImode,
	operand3,
	0))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	operand0,
	0),
	gen_rtx_IOR (TImode,
	gen_rtx_SUBREG (TImode,
	operand6,
	0),
	gen_rtx_SUBREG (TImode,
	operand7,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1232 PARAMS ((rtx *));
rtx
gen_split_1232 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx operand4;
  rtx operand5;
  rtx operand6;
  rtx operand7;
  rtx _val = 0;
  start_sequence ();
{
  PUT_MODE (operands[1], GET_MODE (operands[0]));
  if (!sse_comparison_operator (operands[1], VOIDmode))
    {
      rtx tmp = operands[5];
      operands[5] = operands[4];
      operands[4] = tmp;
      PUT_CODE (operands[1], swap_condition (GET_CODE (operands[1])));
    }
  if (const0_operand (operands[2], GET_MODE (operands[0])))
    {
      operands[7] = operands[3];
      operands[6] = gen_rtx_NOT (TImode, gen_rtx_SUBREG (TImode, operands[0],
							 0));
    }
  else
    {
      operands[7] = operands[2];
      operands[6] = gen_rtx_SUBREG (TImode, operands[0], 0);
    }
}
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  operand4 = operands[4];
  operand5 = operands[5];
  operand6 = operands[6];
  operand7 = operands[7];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand1), GET_MODE (operand1),
		copy_rtx (operand0),
		operand5)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_SUBREG (TImode,
	copy_rtx (operand0),
	0),
	gen_rtx_AND (TImode,
	operand6,
	gen_rtx_SUBREG (TImode,
	operand7,
	0))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_allocate_stack_worker (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  if (TARGET_64BIT)
    emit_insn (gen_allocate_stack_worker_rex64 (operands[0]));
  else
    emit_insn (gen_allocate_stack_worker_1 (operands[0]));
  DONE;
}
    operand0 = operands[0];
  }
  emit (operand0);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_allocate_stack (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
#ifdef CHECK_STACK_LIMIT
  if (GET_CODE (operands[1]) == CONST_INT
      && INTVAL (operands[1]) < CHECK_STACK_LIMIT)
    emit_insn (gen_subsi3 (stack_pointer_rtx, stack_pointer_rtx,
			   operands[1]));
  else 
#endif
    emit_insn (gen_allocate_stack_worker (copy_to_mode_reg (SImode,
							    operands[1])));

  emit_move_insn (operands[0], virtual_stack_dynamic_rtx);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_MINUS (SImode,
	gen_rtx_REG (SImode,
	7),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_builtin_setjmp_receiver (operand0)
     rtx operand0;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
    operands[0] = operand0;
{
  load_pic_register ();
  DONE;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_LABEL_REF (VOIDmode,
	operand0));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1236 PARAMS ((rtx *));
rtx
gen_split_1236 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
   if (GET_CODE (operands[3]) != ASHIFT)
     operands[2] = gen_lowpart (SImode, operands[2]);
   PUT_MODE (operands[3], SImode);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1237 PARAMS ((rtx *));
rtx
gen_split_1237 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
operands[2]
     = GEN_INT (trunc_int_for_mode (INTVAL (operands[2])
				    & GET_MODE_MASK (GET_MODE (operands[0])),
				    SImode));
   operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand1,
	operand2),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_AND (SImode,
	copy_rtx (operand1),
	copy_rtx (operand2))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1238 PARAMS ((rtx *));
rtx
gen_split_1238 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[1]
     = GEN_INT (trunc_int_for_mode (INTVAL (operands[1])
				    & GET_MODE_MASK (GET_MODE (operands[0])),
				    SImode));
   operands[0] = gen_lowpart (SImode, operands[0]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1239 PARAMS ((rtx *));
rtx
gen_split_1239 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NEG (SImode,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1240 PARAMS ((rtx *));
rtx
gen_split_1240 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[1] = gen_lowpart (SImode, operands[1]);
  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_NOT (SImode,
	operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1241 PARAMS ((rtx *));
rtx
gen_split_1241 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  start_sequence ();
operands[0] = gen_lowpart (SImode, operands[0]);
   operands[2] = gen_lowpart (SImode, operands[2]);
   operands[3] = gen_lowpart (SImode, operands[3]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_IF_THEN_ELSE (SImode,
	operand1,
	operand2,
	operand3)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1242 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1242 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1243 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1243 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1244 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1244 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", SFmode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1245 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1245 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1246 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1246 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (1, 1, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1247 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1247 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand1)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1248 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1248 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
operands[2] = gen_rtx_REG (SImode, true_regnum (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1249 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1249 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[1] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
operands[2] = gen_rtx_REG (SImode, true_regnum (operands[1]));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand2,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1250 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1250 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1251 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1251 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", HImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1252 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1252 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "q", QImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1253 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1253 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[3] = peep2_find_free_register (1, 1, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand3,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	copy_rtx (operand3),
	const0_rtx)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1254 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1254 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (SImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1255 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1255 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (HImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1256 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1256 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_XOR (QImode,
	operand1,
	constm1_rtx)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1257 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1257 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	operand0,
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (SImode,
	copy_rtx (operand0),
	copy_rtx (operand1))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1258 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1258 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (QImode,
	operand0,
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_AND (QImode,
	copy_rtx (operand0),
	copy_rtx (operand1))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1259 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1259 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCNOmode,
	17),
	gen_rtx_COMPARE (CCNOmode,
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	operand0,
	GEN_INT (8),
	GEN_INT (8)),
	operand1),
	const0_rtx)),
		gen_rtx_SET (VOIDmode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	gen_rtx_AND (SImode,
	gen_rtx_ZERO_EXTRACT (SImode,
	copy_rtx (operand0),
	GEN_INT (8),
	GEN_INT (8)),
	copy_rtx (operand1))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1260 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1260 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand0),
		copy_rtx (operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1261 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1261 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand1));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		copy_rtx (operand0))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1262 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1262 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		copy_rtx (operand2),
		operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1263 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1263 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx operand3;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[2] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  operand3 = operands[3];
  emit_insn (gen_rtx_SET (VOIDmode,
	operand2,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand2),
	gen_rtx (GET_CODE (operand3), GET_MODE (operand3),
		operand1,
		copy_rtx (operand2))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  emit_insn (gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	copy_rtx (operand2)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1264 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1264 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      true_regnum (operands[0]));
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1265 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1265 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_STRICT_LOW_PART (VOIDmode,
	operand0),
	const0_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1266 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1266 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[0] = gen_rtx_REG (GET_MODE (operands[0]) == DImode ? DImode : SImode,
			      true_regnum (operands[0]));
  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	constm1_rtx),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1267 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1267 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1268 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1268 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = gen_lowpart (SImode, operands[2]);
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1269 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1269 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_PLUS (DImode,
	copy_rtx (operand0),
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1270 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1270 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1271 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1271 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[1])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (DImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1272 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1272 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx operand2;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();
operands[2] = GEN_INT (exact_log2 (INTVAL (operands[2])));
  operand0 = operands[0];
  operand1 = operands[1];
  operand2 = operands[2];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_ASHIFT (SImode,
	copy_rtx (operand0),
	operand2)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1273 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1273 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1274 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1274 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1275 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1275 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1276 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1276 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (SImode,
	gen_rtx_PRE_DEC (SImode,
	gen_rtx_REG (SImode,
	7))),
	copy_rtx (operand0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1277 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1277 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1278 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1278 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1279 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1279 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1280 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1280 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1281 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1281 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1282 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1282 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", SImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (SImode,
	gen_rtx_REG (SImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (4))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1283 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1283 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1284 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1284 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1285 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1285 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	operand1)),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1286 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1286 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	GEN_INT (128))),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1287 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1287 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (CCGCmode,
	17),
	gen_rtx_COMPARE (CCGCmode,
	operand0,
	GEN_INT (128))),
		gen_rtx_CLOBBER (VOIDmode,
	copy_rtx (operand0)))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1288 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1288 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1289 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1289 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1290 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1290 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1291 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1291 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();
  operand0 = operands[0];
  emit_insn (gen_rtx_CLOBBER (VOIDmode,
	operand0));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (DImode,
	gen_rtx_PRE_DEC (DImode,
	gen_rtx_REG (DImode,
	7))),
	copy_rtx (operand0)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1292 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1292 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1293 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1293 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1294 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1294 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (3,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))),
		gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_MEM (BLKmode,
	gen_rtx_SCRATCH (VOIDmode))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1295 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1295 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1296 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1296 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  if ((operands[1] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand1,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_peephole2_1297 PARAMS ((rtx, rtx *));
rtx
gen_peephole2_1297 (curr_insn, operands)
     rtx curr_insn ATTRIBUTE_UNUSED;
     rtx *operands;
{
  rtx operand0;
  rtx _val = 0;
  HARD_REG_SET _regs_allocated;
  CLEAR_HARD_REG_SET (_regs_allocated);
  if ((operands[0] = peep2_find_free_register (0, 0, "r", DImode, &_regs_allocated)) == NULL_RTX)
    return NULL;
  start_sequence ();

  operand0 = operands[0];
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  emit (gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (2,
		gen_rtx_SET (VOIDmode,
	copy_rtx (operand0),
	gen_rtx_MEM (DImode,
	gen_rtx_REG (DImode,
	7))),
		gen_rtx_SET (VOIDmode,
	gen_rtx_REG (DImode,
	7),
	gen_rtx_PLUS (DImode,
	gen_rtx_REG (DImode,
	7),
	GEN_INT (8))))));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_conditional_trap (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx operand2;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
{
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
			      ix86_expand_compare (GET_CODE (operands[0]),
						   NULL, NULL),
			      operands[1]));
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_TRAP_IF (VOIDmode,
	gen_rtx (GET_CODE (operand0), VOIDmode,
		operand2,
		const0_rtx),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movti (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  if (TARGET_64BIT)
    ix86_expand_move (TImode, operands);
  else
    ix86_expand_vector_move (TImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv4sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv4si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv2si (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2SImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv4hi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V4HImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv8qi (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V8QImode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_movv2sf (operand0, operand1)
     rtx operand0;
     rtx operand1;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[2];
    operands[0] = operand0;
    operands[1] = operand1;
{
  ix86_expand_vector_move (V2SFmode, operands);
  DONE;
}
    operand0 = operands[0];
    operand1 = operands[1];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1306 PARAMS ((rtx *));
rtx
gen_split_1306 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (TImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1307 PARAMS ((rtx *));
rtx
gen_split_1307 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1308 PARAMS ((rtx *));
rtx
gen_split_1308 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-16))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4SImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1309 PARAMS ((rtx *));
rtx
gen_split_1309 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2SImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1310 PARAMS ((rtx *));
rtx
gen_split_1310 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V4HImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1311 PARAMS ((rtx *));
rtx
gen_split_1311 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V8QImode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1312 PARAMS ((rtx *));
rtx
gen_split_1312 (operands)
      rtx *operands;
{
  rtx operand0;
  rtx operand1;
  rtx _val = 0;
  start_sequence ();

  operand0 = operands[0];
  operand1 = operands[1];
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_REG (SImode,
	7),
	gen_rtx_PLUS (SImode,
	gen_rtx_REG (SImode,
	7),
	GEN_INT (-8))));
  emit_insn (gen_rtx_SET (VOIDmode,
	gen_rtx_MEM (V2SFmode,
	gen_rtx_REG (SImode,
	7)),
	operand1));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

extern rtx gen_split_1313 PARAMS ((rtx *));
rtx
gen_split_1313 (operands)
      rtx *operands ATTRIBUTE_UNUSED;
{
  rtx _val = 0;
  start_sequence ();
ix86_split_long_move (operands); DONE;
  emit_insn (const0_rtx);
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sfence ()
{
  rtx operand0;
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[1];
{
  operands[0] = gen_rtx_MEM (BLKmode, gen_rtx_SCRATCH (Pmode));
  MEM_VOLATILE_P (operands[0]) = 1;
}
    operand0 = operands[0];
  }
  emit_insn (gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (1,
		operand0),
	44)));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}

rtx
gen_sse_prologue_save (operand0, operand1, operand2, operand3)
     rtx operand0;
     rtx operand1;
     rtx operand2;
     rtx operand3;
{
  return gen_rtx_PARALLEL (VOIDmode,
	gen_rtvec (4,
		gen_rtx_SET (VOIDmode,
	operand0,
	gen_rtx_UNSPEC (BLKmode,
	gen_rtvec (8,
		gen_rtx_REG (DImode,
	21),
		gen_rtx_REG (DImode,
	22),
		gen_rtx_REG (DImode,
	23),
		gen_rtx_REG (DImode,
	24),
		gen_rtx_REG (DImode,
	25),
		gen_rtx_REG (DImode,
	26),
		gen_rtx_REG (DImode,
	27),
		gen_rtx_REG (DImode,
	28)),
	13)),
		gen_rtx_USE (VOIDmode,
	operand1),
		gen_rtx_USE (VOIDmode,
	operand2),
		gen_rtx_USE (VOIDmode,
	gen_rtx_LABEL_REF (DImode,
	operand3))));
}

rtx
gen_prefetch (operand0, operand1, operand2)
     rtx operand0;
     rtx operand1;
     rtx operand2;
{
  rtx _val = 0;
  start_sequence ();
  {
    rtx operands[3];
    operands[0] = operand0;
    operands[1] = operand1;
    operands[2] = operand2;
{
  int rw = INTVAL (operands[1]);
  int locality = INTVAL (operands[2]);

  if (rw != 0 && rw != 1)
    abort ();
  if (locality < 0 || locality > 3)
    abort ();

  /* Use 3dNOW prefetch in case we are asking for write prefetch not
     suported by SSE counterpart or the SSE prefetch is not available
     (K6 machines).  Otherwise use SSE prefetch as it allows specifying
     of locality.  */
  if (TARGET_3DNOW && (!TARGET_PREFETCH_SSE || rw))
    operands[2] = GEN_INT (3);
  else
    operands[1] = const0_rtx;
}
    operand0 = operands[0];
    operand1 = operands[1];
    operand2 = operands[2];
  }
  emit_insn (gen_rtx_PREFETCH (VOIDmode,
	operand0,
	operand1,
	operand2));
  _val = gen_sequence ();
  end_sequence ();
  return _val;
}



void
add_clobbers (pattern, insn_code_number)
     rtx pattern ATTRIBUTE_UNUSED;
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 815:
    case 801:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	8));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	9));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	10));
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	11));
      XVECEXP (pattern, 0, 5) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	12));
      XVECEXP (pattern, 0, 6) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	13));
      XVECEXP (pattern, 0, 7) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	14));
      XVECEXP (pattern, 0, 8) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (XFmode,
	15));
      XVECEXP (pattern, 0, 9) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	29));
      XVECEXP (pattern, 0, 10) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	30));
      XVECEXP (pattern, 0, 11) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	31));
      XVECEXP (pattern, 0, 12) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	32));
      XVECEXP (pattern, 0, 13) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	33));
      XVECEXP (pattern, 0, 14) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	34));
      XVECEXP (pattern, 0, 15) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	35));
      XVECEXP (pattern, 0, 16) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (DImode,
	36));
      break;

    case 640:
    case 639:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 638:
    case 637:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SFmode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 507:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 501:
    case 500:
    case 499:
    case 498:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17));
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 497:
    case 496:
    case 495:
    case 494:
    case 493:
    case 492:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	18));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCFPmode,
	17));
      break;

    case 650:
    case 649:
    case 612:
    case 611:
    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 379:
    case 378:
    case 375:
    case 360:
    case 359:
    case 356:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 448:
    case 423:
    case 405:
    case 265:
    case 264:
    case 262:
    case 261:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 263:
    case 260:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    case 341:
    case 324:
    case 226:
    case 225:
    case 224:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (QImode));
      break;

    case 337:
    case 319:
    case 220:
    case 219:
    case 218:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (HImode));
      break;

    case 334:
    case 316:
    case 214:
    case 213:
    case 211:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 327:
    case 309:
    case 206:
    case 205:
    case 204:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DImode));
      break;

    case 154:
      XVECEXP (pattern, 0, 3) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 153:
      XVECEXP (pattern, 0, 4) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (DFmode));
      break;

    case 119:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      XVECEXP (pattern, 0, 2) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_SCRATCH (SImode));
      break;

    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 615:
    case 613:
    case 518:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 480:
    case 479:
    case 478:
    case 477:
    case 476:
    case 475:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 466:
    case 463:
    case 462:
    case 459:
    case 458:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 445:
    case 444:
    case 441:
    case 440:
    case 437:
    case 436:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 420:
    case 419:
    case 418:
    case 416:
    case 415:
    case 413:
    case 412:
    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
    case 383:
    case 382:
    case 381:
    case 380:
    case 377:
    case 376:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 358:
    case 357:
    case 355:
    case 353:
    case 351:
    case 348:
    case 347:
    case 345:
    case 344:
    case 339:
    case 338:
    case 335:
    case 330:
    case 329:
    case 328:
    case 325:
    case 321:
    case 320:
    case 317:
    case 312:
    case 311:
    case 310:
    case 307:
    case 306:
    case 305:
    case 304:
    case 302:
    case 299:
    case 298:
    case 296:
    case 293:
    case 292:
    case 290:
    case 267:
    case 266:
    case 259:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 250:
    case 249:
    case 246:
    case 243:
    case 238:
    case 237:
    case 236:
    case 235:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 222:
    case 221:
    case 216:
    case 215:
    case 208:
    case 207:
    case 202:
    case 189:
    case 188:
    case 186:
    case 185:
    case 115:
    case 113:
    case 112:
    case 110:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      XVECEXP (pattern, 0, 1) = gen_rtx_CLOBBER (VOIDmode,
	gen_rtx_REG (CCmode,
	17));
      break;

    default:
      abort ();
    }
}


int
added_clobbers_hard_reg_p (insn_code_number)
     int insn_code_number;
{
  switch (insn_code_number)
    {
    case 341:
    case 324:
    case 226:
    case 225:
    case 224:
    case 337:
    case 319:
    case 220:
    case 219:
    case 218:
    case 334:
    case 316:
    case 214:
    case 213:
    case 211:
    case 327:
    case 309:
    case 206:
    case 205:
    case 204:
    case 154:
    case 153:
      return 0;

    case 815:
    case 801:
    case 640:
    case 639:
    case 638:
    case 637:
    case 507:
    case 501:
    case 500:
    case 499:
    case 498:
    case 497:
    case 496:
    case 495:
    case 494:
    case 493:
    case 492:
    case 650:
    case 649:
    case 612:
    case 611:
    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 379:
    case 378:
    case 375:
    case 360:
    case 359:
    case 356:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 448:
    case 423:
    case 405:
    case 265:
    case 264:
    case 262:
    case 261:
    case 263:
    case 260:
    case 119:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 615:
    case 613:
    case 518:
    case 485:
    case 484:
    case 483:
    case 482:
    case 481:
    case 480:
    case 479:
    case 478:
    case 477:
    case 476:
    case 475:
    case 474:
    case 473:
    case 472:
    case 471:
    case 470:
    case 469:
    case 468:
    case 467:
    case 466:
    case 463:
    case 462:
    case 459:
    case 458:
    case 453:
    case 452:
    case 451:
    case 450:
    case 449:
    case 445:
    case 444:
    case 441:
    case 440:
    case 437:
    case 436:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 424:
    case 420:
    case 419:
    case 418:
    case 416:
    case 415:
    case 413:
    case 412:
    case 409:
    case 408:
    case 407:
    case 406:
    case 403:
    case 383:
    case 382:
    case 381:
    case 380:
    case 377:
    case 376:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 358:
    case 357:
    case 355:
    case 353:
    case 351:
    case 348:
    case 347:
    case 345:
    case 344:
    case 339:
    case 338:
    case 335:
    case 330:
    case 329:
    case 328:
    case 325:
    case 321:
    case 320:
    case 317:
    case 312:
    case 311:
    case 310:
    case 307:
    case 306:
    case 305:
    case 304:
    case 302:
    case 299:
    case 298:
    case 296:
    case 293:
    case 292:
    case 290:
    case 267:
    case 266:
    case 259:
    case 258:
    case 257:
    case 256:
    case 255:
    case 254:
    case 253:
    case 252:
    case 251:
    case 250:
    case 249:
    case 246:
    case 243:
    case 238:
    case 237:
    case 236:
    case 235:
    case 232:
    case 231:
    case 230:
    case 229:
    case 228:
    case 227:
    case 222:
    case 221:
    case 216:
    case 215:
    case 208:
    case 207:
    case 202:
    case 189:
    case 188:
    case 186:
    case 185:
    case 115:
    case 113:
    case 112:
    case 110:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      return 1;

    default:
      abort ();
    }
}
