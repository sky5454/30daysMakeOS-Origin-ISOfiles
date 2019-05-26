/* Generated automatically by the program `genoutput'
   from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "flags.h"
#include "ggc.h"
#include "rtl.h"
#include "expr.h"
#include "insn-codes.h"
#include "tm_p.h"
#include "function.h"
#include "regs.h"
#include "hard-reg-set.h"
#include "real.h"
#include "insn-config.h"

#include "conditions.h"
#include "insn-attr.h"

#include "recog.h"

#include "toplev.h"
#include "output.h"

static const char * const output_0[] = {
  "test{q}\t{%0, %0|%0, %0}",
  "cmp{q}\t{%1, %0|%0, %1}",
};

static const char * const output_3[] = {
  "test{l}\t{%0, %0|%0, %0}",
  "cmp{l}\t{%1, %0|%0, %1}",
};

static const char * const output_6[] = {
  "test{w}\t{%0, %0|%0, %0}",
  "cmp{w}\t{%1, %0|%0, %1}",
};

static const char * const output_9[] = {
  "test{b}\t{%0, %0|%0, %0}",
  "cmp{b}\t{$0, %0|%0, 0}",
};

static const char *output_18 PARAMS ((rtx *, rtx));

static const char *
output_18 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "ftst\n\tfnstsw\t%0\n\tfstp\t%y0";
  else
    return "ftst\n\tfnstsw\t%0";
}
}

static const char *output_19 PARAMS ((rtx *, rtx));

static const char *
output_19 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *output_20 PARAMS ((rtx *, rtx));

static const char *
output_20 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 2, 0);
}

static const char *output_21 PARAMS ((rtx *, rtx));

static const char *
output_21 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *output_22 PARAMS ((rtx *, rtx));

static const char *
output_22 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 2, 0);
}

static const char *output_23 PARAMS ((rtx *, rtx));

static const char *
output_23 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *output_24 PARAMS ((rtx *, rtx));

static const char *
output_24 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 0, 0);
}

static const char *output_25 PARAMS ((rtx *, rtx));

static const char *
output_25 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 2, 0);
}

static const char *output_26 PARAMS ((rtx *, rtx));

static const char *
output_26 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 2, 0);
}

static const char *output_27 PARAMS ((rtx *, rtx));

static const char *
output_27 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 0, 1);
}

static const char *output_28 PARAMS ((rtx *, rtx));

static const char *
output_28 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 2, 1);
}

static const char *output_32 PARAMS ((rtx *, rtx));

static const char *
output_32 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *output_33 PARAMS ((rtx *, rtx));

static const char *
output_33 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *output_34 PARAMS ((rtx *, rtx));

static const char *
output_34 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 0);
}

static const char *output_35 PARAMS ((rtx *, rtx));

static const char *
output_35 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *output_36 PARAMS ((rtx *, rtx));

static const char *
output_36 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *output_37 PARAMS ((rtx *, rtx));

static const char *
output_37 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fp_compare (insn, operands, 1, 1);
}

static const char *output_44 PARAMS ((rtx *, rtx));

static const char *
output_44 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  operands[1] = constm1_rtx;
  return "or{l}\t{%1, %0|%0, %1}";
}
}

static const char *output_45 PARAMS ((rtx *, rtx));

static const char *
output_45 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSE:
      if (get_attr_mode (insn) == TImode)
        return "movdqa\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_MMX:
      if (get_attr_mode (insn) == DImode)
	return "movq\t{%1, %0|%0, %1}";
      return "movd\t{%1, %0|%0, %1}";

    case TYPE_LEA:
      return "lea{l}\t{%1, %0|%0, %1}";

    default:
      if (flag_pic && SYMBOLIC_CONST (operands[1]))
	abort();
      return "mov{l}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_46[] = {
  "movabs{l}\t{%1, %P0|%P0, %1}",
  "mov{l}\t{%1, %a0|%a0, %1}",
  "movabs{l}\t{%1, %a0|%a0, %1}",
};

static const char * const output_47[] = {
  "movabs{l}\t{%P1, %0|%0, %P1}",
  "mov{l}\t{%a1, %0|%0, %a1}",
};

static const char * const output_49[] = {
  "push{w}\t{|WORD PTR }%1",
  "push{w}\t%1",
};

static const char *output_51 PARAMS ((rtx *, rtx));

static const char *
output_51 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      /* movzwl is faster than movw on p2 due to partial word stalls,
	 though not as fast as an aligned movl.  */
      return "movz{wl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{w}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_52[] = {
  "movabs{w}\t{%1, %P0|%P0, %1}",
  "mov{w}\t{%1, %a0|%a0, %1}",
  "movabs{w}\t{%1, %a0|%a0, %1}",
};

static const char * const output_53[] = {
  "movabs{w}\t{%P1, %0|%0, %P1}",
  "mov{w}\t{%a1, %0|%0, %a1}",
};

static const char * const output_58[] = {
  "push{w}\t{|word ptr }%1",
  "push{w}\t%w1",
};

static const char *output_60 PARAMS ((rtx *, rtx));

static const char *
output_60 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      if (!ANY_QI_REG_P (operands[1]) && GET_CODE (operands[1]) != MEM)
	abort ();
      return "movz{bl|x}\t{%1, %k0|%k0, %1}";
    default:
      if (get_attr_mode (insn) == MODE_SI)
        return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else
        return "mov{b}\t{%1, %0|%0, %1}";
    }
}
}

static const char *output_66 PARAMS ((rtx *, rtx));

static const char *
output_66 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *output_67 PARAMS ((rtx *, rtx));

static const char *
output_67 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movs{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_68[] = {
  "movabs{b}\t{%1, %P0|%P0, %1}",
  "mov{b}\t{%1, %a0|%a0, %1}",
  "movabs{b}\t{%1, %a0|%a0, %1}",
};

static const char * const output_69[] = {
  "movabs{b}\t{%P1, %0|%0, %P1}",
  "mov{b}\t{%a1, %0|%0, %a1}",
};

static const char *output_71 PARAMS ((rtx *, rtx));

static const char *
output_71 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char *output_72 PARAMS ((rtx *, rtx));

static const char *
output_72 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      return "movz{bl|x}\t{%h1, %k0|%k0, %h1}";
    default:
      return "mov{b}\t{%h1, %0|%0, %h1}";
    }
}
}

static const char * const output_77[] = {
  "push{q}\t%1",
  "#",
};

static const char *output_82 PARAMS ((rtx *, rtx));

static const char *
output_82 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  operands[1] = constm1_rtx;
  return "or{q}\t{%1, %0|%0, %1}";
}
}

static const char * const output_83[] = {
  "#",
  "#",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
  "movdqa\t{%1, %0|%0, %1}",
  "movq\t{%1, %0|%0, %1}",
};

static const char *output_84 PARAMS ((rtx *, rtx));

static const char *
output_84 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_SSE:
      if (register_operand (operands[0], DImode)
	  && register_operand (operands[1], DImode))
	  return "movdqa\t{%1, %0|%0, %1}";
      /* FALLTHRU */
    case TYPE_MMX:
      return "movq\t{%1, %0|%0, %1}";
    case TYPE_MULTI:
      return "#";
    case TYPE_LEA:
      return "lea{q}\t{%a1, %0|%0, %a1}";
    default:
      if (flag_pic && SYMBOLIC_CONST (operands[1]))
	abort ();
      if (get_attr_mode (insn) == MODE_SI)
	return "mov{l}\t{%k1, %k0|%k0, %k1}";
      else if (which_alternative == 2)
	return "movabs{q}\t{%1, %0|%0, %1}";
      else
	return "mov{q}\t{%1, %0|%0, %1}";
    }
}
}

static const char * const output_85[] = {
  "movabs{q}\t{%1, %P0|%P0, %1}",
  "mov{q}\t{%1, %a0|%a0, %1}",
};

static const char * const output_86[] = {
  "movabs{q}\t{%P1, %0|%0, %P1}",
  "mov{q}\t{%a1, %0|%0, %a1}",
};

static const char *output_88 PARAMS ((rtx *, rtx));

static const char *
output_88 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (SFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (4);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
      return "push{l}\t%1";
    case 2:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_89 PARAMS ((rtx *, rtx));

static const char *
output_89 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (SFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (8);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{q}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{q}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
      return "push{q}\t%q1";

    case 2:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_90 PARAMS ((rtx *, rtx));

static const char *
output_90 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      abort();

    case 3:
    case 4:
      return "mov{l}\t{%1, %0|%0, %1}";
    case 5:
      if (TARGET_SSE2)
	return "pxor\t%0, %0";
      else
	return "xorps\t%0, %0";
    case 6:
      if (TARGET_PARTIAL_REG_DEPENDENCY)
	return "movaps\t{%1, %0|%0, %1}";
      else
	return "movss\t{%1, %0|%0, %1}";
    case 7:
    case 8:
      return "movss\t{%1, %0|%0, %1}";

    case 9:
    case 10:
      return "movd\t{%1, %0|%0, %1}";

    case 11:
      return "movq\t{%1, %0|%0, %1}";

    default:
      abort();
    }
}
}

static const char *output_91 PARAMS ((rtx *, rtx));

static const char *
output_91 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *output_92 PARAMS ((rtx *, rtx));

static const char *
output_92 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (DFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (8);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
    case 2:
    case 3:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_93 PARAMS ((rtx *, rtx));

static const char *
output_93 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (DFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (8);
      if (TARGET_64BIT)
	if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	  return "sub{q}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
	else
	  return "sub{q}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";
      else
	if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	  return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
	else
	  return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";


    case 1:
    case 2:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_94 PARAMS ((rtx *, rtx));

static const char *
output_94 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      abort();

    case 3:
    case 4:
      return "#";
    case 5:
      return "pxor\t%0, %0";
    case 6:
      if (TARGET_PARTIAL_REG_DEPENDENCY)
	return "movapd\t{%1, %0|%0, %1}";
      else
	return "movsd\t{%1, %0|%0, %1}";
    case 7:
    case 8:
        return "movsd\t{%1, %0|%0, %1}";

    default:
      abort();
    }
}
}

static const char *output_95 PARAMS ((rtx *, rtx));

static const char *
output_95 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";
      else
        return "fst%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      abort();

    case 3:
    case 4:
      return "#";

    case 5:
      return "pxor\t%0, %0";
    case 6:
      if (TARGET_PARTIAL_REG_DEPENDENCY)
	return "movapd\t{%1, %0|%0, %1}";
      else
	return "movsd\t{%1, %0|%0, %1}";
    case 7:
    case 8:
      return "movsd\t{%1, %0|%0, %1}";

    default:
      abort();
    }
}
}

static const char *output_96 PARAMS ((rtx *, rtx));

static const char *
output_96 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *output_97 PARAMS ((rtx *, rtx));

static const char *
output_97 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (XFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (12);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
    case 2:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_98 PARAMS ((rtx *, rtx));

static const char *
output_98 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (XFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (16);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
    case 2:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_99 PARAMS ((rtx *, rtx));

static const char *
output_99 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (XFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (12);
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
      else
	return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_100 PARAMS ((rtx *, rtx));

static const char *
output_100 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      /* %%% We loose REG_DEAD notes for controling pops if we split late.  */
      operands[0] = gen_rtx_MEM (XFmode, stack_pointer_rtx);
      operands[2] = stack_pointer_rtx;
      operands[3] = GEN_INT (16);
      if (TARGET_64BIT)
	if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	  return "sub{q}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
	else
	  return "sub{q}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";
      else
	if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	  return "sub{l}\t{%3, %2|%2, %3}\n\tfstp%z0\t%y0";
	else
	  return "sub{l}\t{%3, %2|%2, %3}\n\tfst%z0\t%y0";

    case 1:
      return "#";

    default:
      abort ();
    }
}
}

static const char *output_101 PARAMS ((rtx *, rtx));

static const char *
output_101 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      break;

    case 3: case 4:
      return "#";
    }
  abort();
}
}

static const char *output_102 PARAMS ((rtx *, rtx));

static const char *
output_102 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      break;

    case 3: case 4:
      return "#";
    }
  abort();
}
}

static const char *output_103 PARAMS ((rtx *, rtx));

static const char *
output_103 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      break;

    case 3: case 4:
      return "#";
    }
  abort();
}
}

static const char *output_104 PARAMS ((rtx *, rtx));

static const char *
output_104 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    case 2:
      switch (standard_80387_constant_p (operands[1]))
        {
        case 1:
	  return "fldz";
	case 2:
	  return "fld1";
	}
      break;

    case 3: case 4:
      return "#";
    }
  abort();
}
}

static const char *output_105 PARAMS ((rtx *, rtx));

static const char *
output_105 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char *output_106 PARAMS ((rtx *, rtx));

static const char *
output_106 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (STACK_TOP_P (operands[0]))
    return "fxch\t%1";
  else
    return "fxch\t%0";
}
}

static const char * const output_116[] = {
  "mov\t{%k1, %k0|%k0, %k1}",
  "#",
};

static const char * const output_117[] = {
  "movz{wl|x}\t{%1, %k0|%k0, %1} ",
  "movz{wq|x}\t{%1, %0|%0, %1}",
};

static const char * const output_118[] = {
  "movz{bl|x}\t{%1, %k0|%k0, %1} ",
  "movz{bq|x}\t{%1, %0|%0, %1}",
};

static const char * const output_120[] = {
  "{cltq|cdqe}",
  "movs{lq|x}\t{%1,%0|%0, %1}",
};

static const char *output_123 PARAMS ((rtx *, rtx));

static const char *
output_123 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *output_124 PARAMS ((rtx *, rtx));

static const char *
output_124 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cwtl|cwde}";
    default:
      return "movs{wl|x}\t{%1,%k0|%k0, %1}";
    }
}
}

static const char *output_125 PARAMS ((rtx *, rtx));

static const char *
output_125 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_prefix_0f (insn))
    {
    case 0:
      return "{cbtw|cbw}";
    default:
      return "movs{bw|x}\t{%1,%0|%0, %1}";
    }
}
}

static const char *output_133 PARAMS ((rtx *, rtx));

static const char *
output_133 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0";

      else
        return "fst%z0\t%y0";
    case 2:
      return "cvtss2sd\t{%1, %0|%0, %1}";

    default:
      abort ();
    }
}
}

static const char *output_135 PARAMS ((rtx *, rtx));

static const char *
output_135 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      abort ();
    }
}
}

static const char *output_136 PARAMS ((rtx *, rtx));

static const char *
output_136 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      abort ();
    }
}
}

static const char *output_137 PARAMS ((rtx *, rtx));

static const char *
output_137 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      abort ();
    }
}
}

static const char *output_138 PARAMS ((rtx *, rtx));

static const char *
output_138 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (REG_P (operands[1])
          && find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp\t%y0";
      else if (STACK_TOP_P (operands[0]))
        return "fld%z1\t%y1";
      else
        return "fst\t%y0";

    case 1:
      /* There is no non-popping store to memory for XFmode.  So if
	 we need one, follow the store with a load.  */
      if (! find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
        return "fstp%z0\t%y0\n\tfld%z0\t%y0";
      else
        return "fstp%z0\t%y0";

    default:
      abort ();
    }
}
}

static const char *output_139 PARAMS ((rtx *, rtx));

static const char *
output_139 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort ();
    }
}
}

static const char *output_140 PARAMS ((rtx *, rtx));

static const char *
output_140 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    case 4:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    default:
      abort ();
    }
}
}

static const char *output_141 PARAMS ((rtx *, rtx));

static const char *
output_141 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      return "cvtsd2ss\t{%1, %0|%0, %1}";
    case 1:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort ();
    }
}
}

static const char *output_142 PARAMS ((rtx *, rtx));

static const char *
output_142 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *output_144 PARAMS ((rtx *, rtx));

static const char *
output_144 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort();
    }
}
}

static const char *output_145 PARAMS ((rtx *, rtx));

static const char *
output_145 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *output_146 PARAMS ((rtx *, rtx));

static const char *
output_146 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort();
    }
}
}

static const char *output_147 PARAMS ((rtx *, rtx));

static const char *
output_147 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *output_148 PARAMS ((rtx *, rtx));

static const char *
output_148 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort();
    }
  abort ();
}
}

static const char *output_149 PARAMS ((rtx *, rtx));

static const char *
output_149 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *output_150 PARAMS ((rtx *, rtx));

static const char *
output_150 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (which_alternative)
    {
    case 0:
      if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
	return "fstp%z0\t%y0";
      else
	return "fst%z0\t%y0";
    default:
      abort();
    }
  abort ();
}
}

static const char *output_151 PARAMS ((rtx *, rtx));

static const char *
output_151 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (find_regno_note (insn, REG_DEAD, REGNO (operands[1])))
    return "fstp%z0\t%y0";
  else
    return "fst%z0\t%y0";
}
}

static const char *output_154 PARAMS ((rtx *, rtx));

static const char *
output_154 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 operands[5] = operands[4]; return output_fix_trunc (insn, operands);
}

static const char *output_159 PARAMS ((rtx *, rtx));

static const char *
output_159 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fix_trunc (insn, operands);
}

static const char *output_164 PARAMS ((rtx *, rtx));

static const char *
output_164 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_fix_trunc (insn, operands);
}

static const char * const output_167[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_168[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss\t{%1, %0|%0, %1}",
};

static const char * const output_170[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_171[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2ss{q}\t{%1, %0|%0, %1}",
};

static const char * const output_173[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_174[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd\t{%1, %0|%0, %1}",
};

static const char * const output_176[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_177[] = {
  "fild%z1\t%1",
  "#",
  "cvtsi2sd{q}\t{%1, %0|%0, %1}",
};

static const char * const output_179[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_180[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_181[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_182[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_183[] = {
  "fild%z1\t%1",
  "#",
};

static const char * const output_184[] = {
  "fild%z1\t%1",
  "#",
};

static const char *output_202 PARAMS ((rtx *, rtx));

static const char *
output_202 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{q}\t%0";
      else
	abort ();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_203 PARAMS ((rtx *, rtx));

static const char *
output_203 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{q}\t%0";
      else
	abort ();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constrant?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_204 PARAMS ((rtx *, rtx));

static const char *
output_204 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{q}\t%0";
      else
	abort ();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* ???? We ought to handle there the 32bit case too
	 - do we need new constrant?  */
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_205 PARAMS ((rtx *, rtx));

static const char *
output_205 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{q}\t%0";
      else if (operands[2] == const1_rtx)
        return "dec{q}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128))
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1))))
	return "sub{q}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_206 PARAMS ((rtx *, rtx));

static const char *
output_206 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{q}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{q}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
	  /* Avoid overflows.  */
	  && ((INTVAL (operands[2]) & ((((unsigned int) 1) << 31) - 1)))
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{q}\t{%2, %0|%0, %2}";
        }
      return "add{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_207 PARAMS ((rtx *, rtx));

static const char *
output_207 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();

      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_208 PARAMS ((rtx *, rtx));

static const char *
output_208 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %k0|%k0, %a2}";

    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%k0";
      else
	abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *output_209 PARAMS ((rtx *, rtx));

static const char *
output_209 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_210 PARAMS ((rtx *, rtx));

static const char *
output_210 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%k0";
      else
	abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *output_211 PARAMS ((rtx *, rtx));

static const char *
output_211 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_212 PARAMS ((rtx *, rtx));

static const char *
output_212 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
        return "inc{l}\t%k0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%k0";
      else
	abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %k0|%k0, %2}";
        }
      return "add{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *output_213 PARAMS ((rtx *, rtx));

static const char *
output_213 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx)
        return "inc{l}\t%0";
      else if (operands[2] == const1_rtx)
        return "dec{l}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{l}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_214 PARAMS ((rtx *, rtx));

static const char *
output_214 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (operands[2] == const1_rtx)
        return "inc{l}\t%0";
      else if (operands[2] == constm1_rtx)
        return "dec{l}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "sub{l}\t{%2, %0|%0, %2}";
        }
      return "add{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_215 PARAMS ((rtx *, rtx));

static const char *
output_215 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 65535))
	return "dec{w}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_216 PARAMS ((rtx *, rtx));

static const char *
output_216 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 65535))
	return "dec{w}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_217 PARAMS ((rtx *, rtx));

static const char *
output_217 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 65535))
	return "dec{w}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_218 PARAMS ((rtx *, rtx));

static const char *
output_218 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 65535))
	return "dec{w}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_219 PARAMS ((rtx *, rtx));

static const char *
output_219 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (GET_CODE (operands[2]) == CONST_INT
	      && INTVAL (operands[2]) == 65535))
        return "inc{w}\t%0";
      else if (operands[2] == const1_rtx)
        return "dec{w}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if ((INTVAL (operands[2]) == -128
	   || (INTVAL (operands[2]) > 0
	       && INTVAL (operands[2]) != 128)))
	return "sub{w}\t{%2, %0|%0, %2}";
      operands[2] = GEN_INT (-INTVAL (operands[2]));
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_220 PARAMS ((rtx *, rtx));

static const char *
output_220 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{w}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 65535))
	return "dec{w}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{w}\t{%2, %0|%0, %2}";
	}
      return "add{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_221 PARAMS ((rtx *, rtx));

static const char *
output_221 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_222 PARAMS ((rtx *, rtx));

static const char *
output_222 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  int widen = (which_alternative == 2);
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return widen ? "inc{l}\t%k0" : "inc{b}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return widen ? "dec{l}\t%k0" : "dec{b}\t%0";
      abort();

    default:
      /* Make things pretty and `subl $4,%eax' rather than `addl $-4, %eax'.
	 Exceptions: -128 encodes smaller than 128, so swap sign and op.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
		  && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  if (widen)
	    return "sub{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sub{b}\t{%2, %0|%0, %2}";
	}
      if (widen)
        return "add{l}\t{%k2, %k0|%k0, %k2}";
      else
        return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_223 PARAMS ((rtx *, rtx));

static const char *
output_223 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return "dec{b}\t%0";
      abort();

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_224 PARAMS ((rtx *, rtx));

static const char *
output_224 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return "dec{b}\t%0";
      abort();

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_225 PARAMS ((rtx *, rtx));

static const char *
output_225 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == constm1_rtx
	  || (GET_CODE (operands[2]) == CONST_INT
	      && INTVAL (operands[2]) == 255))
        return "inc{b}\t%0";
      else if (operands[2] == const1_rtx)
        return "dec{b}\t%0";
      else
	abort();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (INTVAL (operands[2]) < 0)
        {
          operands[2] = GEN_INT (-INTVAL (operands[2]));
          return "add{b}\t{%2, %0|%0, %2}";
        }
      return "sub{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_226 PARAMS ((rtx *, rtx));

static const char *
output_226 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return "dec{b}\t%0";
      abort();

    default:
      /* Make things pretty and `subb $4,%al' rather than `addb $-4, %al'.  */
      if (GET_CODE (operands[2]) == CONST_INT
          && INTVAL (operands[2]) < 0)
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{b}\t{%2, %0|%0, %2}";
	}
      return "add{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_227 PARAMS ((rtx *, rtx));

static const char *
output_227 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return "dec{b}\t%h0";
      abort();

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char *output_228 PARAMS ((rtx *, rtx));

static const char *
output_228 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_INCDEC:
      if (operands[2] == const1_rtx)
	return "inc{b}\t%h0";
      else if (operands[2] == constm1_rtx
	       || (GET_CODE (operands[2]) == CONST_INT
		   && INTVAL (operands[2]) == 255))
	return "dec{b}\t%h0";
      abort();

    default:
      return "add{b}\t{%2, %h0|%h0, %2}";
    }
}
}

static const char * const output_249[] = {
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %1, %0|%0, %1, %2}",
  "imul{q}\t{%2, %0|%0, %2}",
};

static const char * const output_250[] = {
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %1, %0|%0, %1, %2}",
  "imul{l}\t{%2, %0|%0, %2}",
};

static const char * const output_251[] = {
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %1, %k0|%k0, %1, %2}",
  "imul{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_252[] = {
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %1, %0|%0, %1, %2}",
  "imul{w}\t{%2, %0|%0, %2}",
};

static const char * const output_280[] = {
  "test{l}\t{%k1, %k0|%k0, %k1} ",
  "test{l}\t{%k1, %k0|%k0, %k1} ",
  "test{q}\t{%1, %0|%0, %1} ",
  "test{q}\t{%1, %0|%0, %1} ",
  "test{q}\t{%1, %0|%0, %1}",
};

static const char *output_283 PARAMS ((rtx *, rtx));

static const char *
output_283 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (which_alternative == 3)
    {
      if (GET_CODE (operands[1]) == CONST_INT
	  && (INTVAL (operands[1]) & 0xffffff00))
	operands[1] = GEN_INT (INTVAL (operands[1]) & 0xff);
      return "test{l}\t{%1, %k0|%k0, %1}";
    }
  return "test{b}\t{%1, %0|%0, %1}";
}
}

static const char *output_290 PARAMS ((rtx *, rtx));

static const char *
output_290 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	if (GET_CODE (operands[2]) != CONST_INT)
	  abort ();
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else if (INTVAL (operands[2]) == 0xffff)
	  mode = HImode;
	else
	  abort ();
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bq|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wq|x}\t{%1,%0|%0, %1}";
      }

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      if (get_attr_mode (insn) == MODE_SI)
	return "and{l}\t{%k2, %k0|%k0, %k2}";
      else
	return "and{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_291[] = {
  "and{l}\t{%k2, %k0|%k0, %k2} ",
  "and{q}\t{%2, %0|%0, %2} ",
  "and{q}\t{%2, %0|%0, %2}",
};

static const char *output_292 PARAMS ((rtx *, rtx));

static const char *
output_292 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      {
	enum machine_mode mode;

	if (GET_CODE (operands[2]) != CONST_INT)
	  abort ();
        if (INTVAL (operands[2]) == 0xff)
	  mode = QImode;
	else if (INTVAL (operands[2]) == 0xffff)
	  mode = HImode;
	else
	  abort ();
	
	operands[1] = gen_lowpart (mode, operands[1]);
	if (mode == QImode)
	  return "movz{bl|x}\t{%1,%0|%0, %1}";
	else
	  return "movz{wl|x}\t{%1,%0|%0, %1}";
      }

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();
      return "and{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_296 PARAMS ((rtx *, rtx));

static const char *
output_296 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOVX:
      if (GET_CODE (operands[2]) != CONST_INT)
	abort ();
      if (INTVAL (operands[2]) == 0xff)
	return "movz{bl|x}\t{%b1, %k0|%k0, %b1}";
      abort ();

    default:
      if (! rtx_equal_p (operands[0], operands[1]))
	abort ();

      return "and{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_298[] = {
  "and{b}\t{%2, %0|%0, %2}",
  "and{b}\t{%2, %0|%0, %2}",
  "and{l}\t{%k2, %k0|%k0, %k2}",
};

static const char *output_300 PARAMS ((rtx *, rtx));

static const char *
output_300 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (which_alternative == 2)
    {
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) & 0xffffff00))
        operands[2] = GEN_INT (INTVAL (operands[2]) & 0xff);
      return "and{l}\t{%2, %k0|%k0, %2}";
    }
  return "and{b}\t{%2, %0|%0, %2}";
}
}

static const char * const output_320[] = {
  "or{b}\t{%2, %0|%0, %2}",
  "or{b}\t{%2, %0|%0, %2}",
  "or{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_325[] = {
  "xor{q}\t{%2, %0|%0, %2} ",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_326[] = {
  "xor{q}\t{%2, %0|%0, %2} ",
  "xor{q}\t{%2, %0|%0, %2}",
};

static const char * const output_338[] = {
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{b}\t{%2, %0|%0, %2}",
  "xor{l}\t{%k2, %k0|%k0, %k2}",
};

static const char * const output_401[] = {
  "not{b}\t%0",
  "not{l}\t%k0",
};

static const char *output_403 PARAMS ((rtx *, rtx));

static const char *
output_403 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      if (!rtx_equal_p (operands[0], operands[1]))
	abort ();
      return "add{q}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      if (GET_CODE (operands[2]) != CONST_INT
	  || (unsigned HOST_WIDE_INT) INTVAL (operands[2]) > 3)
	abort ();
      operands[1] = gen_rtx_MULT (DImode, operands[1],
				  GEN_INT (1 << INTVAL (operands[2])));
      return "lea{q}\t{%a1, %0|%0, %a1}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_404 PARAMS ((rtx *, rtx));

static const char *
output_404 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{q}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{q}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{q}\t%0";
      else
	return "sal{q}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_407[] = {
  "shld{l}\t{%2, %1, %0|%0, %1, %2}",
  "shld{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char *output_408 PARAMS ((rtx *, rtx));

static const char *
output_408 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      if (!rtx_equal_p (operands[0], operands[1]))
	abort ();
      return "add{l}\t{%0, %0|%0, %0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_409 PARAMS ((rtx *, rtx));

static const char *
output_409 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    case TYPE_LEA:
      return "#";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *output_410 PARAMS ((rtx *, rtx));

static const char *
output_410 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{l}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{l}\t%0";
      else
	return "sal{l}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_411 PARAMS ((rtx *, rtx));

static const char *
output_411 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{l}\t{%k0, %k0|%k0, %k0}";

    default:
      if (REG_P (operands[2]))
	return "sal{l}\t{%b2, %k0|%k0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{l}\t%k0";
      else
	return "sal{l}\t{%2, %k0|%k0, %2}";
    }
}
}

static const char *output_412 PARAMS ((rtx *, rtx));

static const char *
output_412 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_413 PARAMS ((rtx *, rtx));

static const char *
output_413 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_414 PARAMS ((rtx *, rtx));

static const char *
output_414 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{w}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{w}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{w}\t%0";
      else
	return "sal{w}\t{%2, %0|%0, %2}";
    }
}
}

static const char *output_415 PARAMS ((rtx *, rtx));

static const char *
output_415 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_LEA:
      return "#";
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *output_416 PARAMS ((rtx *, rtx));

static const char *
output_416 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      if (REG_P (operands[1]) && !ANY_QI_REG_P (operands[1]))
        return "add{l}\t{%k0, %k0|%k0, %k0}";
      else
        return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%b2, %k0|%k0, %b2}";
	  else
	    return "sal{b}\t{%b2, %0|%0, %b2}";
	}
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t%0";
	  else
	    return "sal{b}\t%0";
	}
      else
	{
	  if (get_attr_mode (insn) == MODE_SI)
	    return "sal{l}\t{%2, %k0|%k0, %2}";
	  else
	    return "sal{b}\t{%2, %0|%0, %2}";
	}
    }
}
}

static const char *output_417 PARAMS ((rtx *, rtx));

static const char *
output_417 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_ALU:
      if (operands[2] != const1_rtx)
	abort ();
      return "add{b}\t{%0, %0|%0, %0}";

    default:
      if (REG_P (operands[2]))
	return "sal{b}\t{%b2, %0|%0, %b2}";
      else if (GET_CODE (operands[2]) == CONST_INT
	       && INTVAL (operands[2]) == 1
	       && (TARGET_PENTIUM || TARGET_PENTIUMPRO))
	return "sal{b}\t%0";
      else
	return "sal{b}\t{%2, %0|%0, %2}";
    }
}
}

static const char * const output_418[] = {
  "{cqto|cqo}",
  "sar{q}\t{%2, %0|%0, %2}",
};

static const char * const output_420[] = {
  "sar{q}\t{%2, %0|%0, %2}",
  "sar{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_425[] = {
  "shrd{l}\t{%2, %1, %0|%0, %1, %2}",
  "shrd{l}\t{%s2%1, %0|%0, %1, %2}",
};

static const char * const output_426[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %0|%0, %2}",
};

static const char * const output_427[] = {
  "{cltd|cdq}",
  "sar{l}\t{%2, %k0|%k0, %2}",
};

static const char * const output_430[] = {
  "sar{l}\t{%2, %0|%0, %2}",
  "sar{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_431[] = {
  "sar{l}\t{%2, %k0|%k0, %2}",
  "sar{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_437[] = {
  "sar{w}\t{%2, %0|%0, %2}",
  "sar{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_441[] = {
  "sar{b}\t{%2, %0|%0, %2}",
  "sar{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_445[] = {
  "shr{q}\t{%2, %0|%0, %2}",
  "shr{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_452[] = {
  "shr{l}\t{%2, %0|%0, %2}",
  "shr{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_453[] = {
  "shr{l}\t{%2, %k0|%k0, %2}",
  "shr{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_459[] = {
  "shr{w}\t{%2, %0|%0, %2}",
  "shr{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_463[] = {
  "shr{b}\t{%2, %0|%0, %2}",
  "shr{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_467[] = {
  "rol{q}\t{%2, %0|%0, %2}",
  "rol{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_470[] = {
  "rol{l}\t{%2, %0|%0, %2}",
  "rol{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_471[] = {
  "rol{l}\t{%2, %k0|%k0, %2}",
  "rol{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_473[] = {
  "rol{w}\t{%2, %0|%0, %2}",
  "rol{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_475[] = {
  "rol{b}\t{%2, %0|%0, %2}",
  "rol{b}\t{%b2, %0|%0, %b2}",
};

static const char * const output_477[] = {
  "ror{q}\t{%2, %0|%0, %2}",
  "ror{q}\t{%b2, %0|%0, %b2}",
};

static const char * const output_480[] = {
  "ror{l}\t{%2, %0|%0, %2}",
  "ror{l}\t{%b2, %0|%0, %b2}",
};

static const char * const output_481[] = {
  "ror{l}\t{%2, %k0|%k0, %2}",
  "ror{l}\t{%b2, %k0|%k0, %b2}",
};

static const char * const output_483[] = {
  "ror{w}\t{%2, %0|%0, %2}",
  "ror{w}\t{%b2, %0|%0, %b2}",
};

static const char * const output_485[] = {
  "ror{b}\t{%2, %0|%0, %2}",
  "ror{b}\t{%b2, %0|%0, %b2}",
};

static const char *output_507 PARAMS ((rtx *, rtx));

static const char *
output_507 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (which_alternative != 0)
    return "#";
  if (get_attr_length (insn) == 2)
    return "%+loop\t%l0";
  else
    return "dec{l}\t%1\n\t%+jne\t%l0";
}
}

static const char *output_508 PARAMS ((rtx *, rtx));

static const char *
output_508 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *output_509 PARAMS ((rtx *, rtx));

static const char *
output_509 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[0], Pmode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P0";
      else
	return "call\t%P0";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A0";
  else
    return "call\t%A0";
}
}

static const char *output_510 PARAMS ((rtx *, rtx));

static const char *
output_510 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P0";
  else
    return "call\t%P0";
}
}

static const char *output_511 PARAMS ((rtx *, rtx));

static const char *
output_511 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[0], QImode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P0";
      else
	return "call\t%P0";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A0";
  else
    return "call\t%A0";
}
}

static const char *output_512 PARAMS ((rtx *, rtx));

static const char *
output_512 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[0], QImode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P0";
      else
	return "call\t%P0";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A0";
  else
    return "call\t%A0";
}
}

static const char *output_518 PARAMS ((rtx *, rtx));

static const char *
output_518 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (GET_CODE (operands[2]) == LABEL_REF)
     operands[2] = XEXP (operands[2], 0);
  if (TARGET_DEEP_BRANCH_PREDICTION) 
    return "add{l}\t{%1, %0|%0, %1}";
  else  
    return "add{l}\t{%1+[.-%X2], %0|%0, %a1+(.-%X2)}";
}
}

static const char *output_519 PARAMS ((rtx *, rtx));

static const char *
output_519 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (GET_CODE (operands[1]) == LABEL_REF)
    operands[1] = XEXP (operands[1], 0);
  output_asm_insn ("call\t%X1", operands);
  if (! TARGET_DEEP_BRANCH_PREDICTION)
    {
      ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
				 CODE_LABEL_NUMBER (operands[1]));
      return "pop{l}\t%0";
    }
  RET;
}
}

static const char *output_525 PARAMS ((rtx *, rtx));

static const char *
output_525 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_526 PARAMS ((rtx *, rtx));

static const char *
output_526 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_527 PARAMS ((rtx *, rtx));

static const char *
output_527 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_528 PARAMS ((rtx *, rtx));

static const char *
output_528 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_529 PARAMS ((rtx *, rtx));

static const char *
output_529 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_530 PARAMS ((rtx *, rtx));

static const char *
output_530 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_531 PARAMS ((rtx *, rtx));

static const char *
output_531 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_532 PARAMS ((rtx *, rtx));

static const char *
output_532 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_533 PARAMS ((rtx *, rtx));

static const char *
output_533 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_534 PARAMS ((rtx *, rtx));

static const char *
output_534 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_535 PARAMS ((rtx *, rtx));

static const char *
output_535 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_536 PARAMS ((rtx *, rtx));

static const char *
output_536 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_537 PARAMS ((rtx *, rtx));

static const char *
output_537 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_538 PARAMS ((rtx *, rtx));

static const char *
output_538 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_539 PARAMS ((rtx *, rtx));

static const char *
output_539 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_540 PARAMS ((rtx *, rtx));

static const char *
output_540 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_541 PARAMS ((rtx *, rtx));

static const char *
output_541 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_542 PARAMS ((rtx *, rtx));

static const char *
output_542 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_543 PARAMS ((rtx *, rtx));

static const char *
output_543 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_544 PARAMS ((rtx *, rtx));

static const char *
output_544 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_545 PARAMS ((rtx *, rtx));

static const char *
output_545 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_546 PARAMS ((rtx *, rtx));

static const char *
output_546 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_547 PARAMS ((rtx *, rtx));

static const char *
output_547 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_548 PARAMS ((rtx *, rtx));

static const char *
output_548 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_549 PARAMS ((rtx *, rtx));

static const char *
output_549 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_550 PARAMS ((rtx *, rtx));

static const char *
output_550 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return which_alternative ? "#" : output_387_binary_op (insn, operands);
}

static const char *output_551 PARAMS ((rtx *, rtx));

static const char *
output_551 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_552 PARAMS ((rtx *, rtx));

static const char *
output_552 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_553 PARAMS ((rtx *, rtx));

static const char *
output_553 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_554 PARAMS ((rtx *, rtx));

static const char *
output_554 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_555 PARAMS ((rtx *, rtx));

static const char *
output_555 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_556 PARAMS ((rtx *, rtx));

static const char *
output_556 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_557 PARAMS ((rtx *, rtx));

static const char *
output_557 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char *output_558 PARAMS ((rtx *, rtx));

static const char *
output_558 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
 return output_387_binary_op (insn, operands);
}

static const char * const output_559[] = {
  "fsqrt",
  "sqrtss\t{%1, %0|%0, %1}",
};

static const char * const output_562[] = {
  "fsqrt",
  "sqrtsd\t{%1, %0|%0, %1}",
};

static const char * const output_614[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_616[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_617[] = {
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_618[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_619[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "#",
  "#",
};

static const char * const output_620[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
  "cmov%O2%C1\t{%2, %0|%0, %2}",
  "cmov%O2%c1\t{%3, %0|%0, %3}",
};

static const char * const output_621[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char * const output_622[] = {
  "fcmov%F1\t{%2, %0|%0, %2}",
  "fcmov%f1\t{%3, %0|%0, %3}",
};

static const char *output_635 PARAMS ((rtx *, rtx));

static const char *
output_635 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{l}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{l}\t{%2, %0|%0, %2}";
	}
      return "add{l}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{l}\t{%a2, %0|%0, %a2}";

    default:
      abort ();
    }
}
}

static const char *output_636 PARAMS ((rtx *, rtx));

static const char *
output_636 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  switch (get_attr_type (insn))
    {
    case TYPE_IMOV:
      return "mov{q}\t{%1, %0|%0, %1}";

    case TYPE_ALU:
      if (GET_CODE (operands[2]) == CONST_INT
          && (INTVAL (operands[2]) == 128
	      || (INTVAL (operands[2]) < 0
	          && INTVAL (operands[2]) != -128)))
	{
	  operands[2] = GEN_INT (-INTVAL (operands[2]));
	  return "sub{q}\t{%2, %0|%0, %2}";
	}
      return "add{q}\t{%2, %0|%0, %2}";

    case TYPE_LEA:
      operands[2] = SET_SRC (XVECEXP (PATTERN (insn), 0, 0));
      return "lea{q}\t{%a2, %0|%0, %a2}";

    default:
      abort ();
    }
}
}

static const char *output_651 PARAMS ((rtx *, rtx));

static const char *
output_651 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *output_652 PARAMS ((rtx *, rtx));

static const char *
output_652 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[1], QImode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P1";
      else
	return "call\t%P1";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A1";
  else
    return "call\t%A1";
}
}

static const char *output_653 PARAMS ((rtx *, rtx));

static const char *
output_653 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *output_654 PARAMS ((rtx *, rtx));

static const char *
output_654 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (SIBLING_CALL_P (insn))
    return "jmp\t%P1";
  else
    return "call\t%P1";
}
}

static const char *output_655 PARAMS ((rtx *, rtx));

static const char *
output_655 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[1], QImode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P1";
      else
	return "call\t%P1";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%*%1";
  else
    return "call\t%*%1";
}
}

static const char *output_656 PARAMS ((rtx *, rtx));

static const char *
output_656 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (constant_call_address_operand (operands[1], QImode))
    {
      if (SIBLING_CALL_P (insn))
	return "jmp\t%P1";
      else
	return "call\t%P1";
    }
  if (SIBLING_CALL_P (insn))
    return "jmp\t%A1";
  else
    return "call\t%A1";
}
}

static const char *output_658 PARAMS ((rtx *, rtx));

static const char *
output_658 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  operands[2] = gen_label_rtx ();
  output_asm_insn ("j%c0\t%l2\n\t int\t%1", operands);
  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[2]));
  RET;
}
}

static const char * const output_672[] = {
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
};

static const char * const output_673[] = {
  "#",
  "#",
  "xorps\t%0, %0",
  "movaps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
};

static const char * const output_674[] = {
  "movaps\t{%1, %0|%0, %1}",
  "movaps\t{%1, %0|%0, %1}",
};

static const char * const output_675[] = {
  "movups\t{%1, %0|%0, %1}",
  "movups\t{%1, %0|%0, %1}",
};

static const char *output_728 PARAMS ((rtx *, rtx));

static const char *
output_728 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (GET_CODE (operands[3]) == UNORDERED)
    return "cmpordps\t{%2, %0|%0, %2}";
  else
    return "cmpn%D3ps\t{%2, %0|%0, %2}";
}
}

static const char *output_730 PARAMS ((rtx *, rtx));

static const char *
output_730 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (GET_CODE (operands[3]) == UNORDERED)
    return "cmpordss\t{%2, %0|%0, %2}";
  else
    return "cmpn%D3ss\t{%2, %0|%0, %2}";
}
}

static const char *output_805 PARAMS ((rtx *, rtx));

static const char *
output_805 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{

{
  int i;
  operands[0] = gen_rtx_MEM (Pmode,
			     gen_rtx_PLUS (Pmode, operands[0], operands[4]));
  output_asm_insn ("jmp\t%A1", operands);
  for (i = SSE_REGPARM_MAX - 1; i >= INTVAL (operands[2]); i--)
    {
      operands[4] = adjust_address (operands[0], DImode, i*16);
      operands[5] = gen_rtx_REG (TImode, SSE_REGNO (i));
      PUT_MODE (operands[4], TImode);
      if (GET_CODE (XEXP (operands[0], 0)) != PLUS)
        output_asm_insn ("rex", operands);
      output_asm_insn ("movaps\t{%5, %4|%4, %5}", operands);
    }
  ASM_OUTPUT_INTERNAL_LABEL (asm_out_file, "L",
			     CODE_LABEL_NUMBER (operands[3]));
  RET;
}
  
}

static const char *output_832 PARAMS ((rtx *, rtx));

static const char *
output_832 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  static const char * const patterns[4] = {
   "prefetchnta\t%a0", "prefetcht2\t%a0", "prefetcht1\t%a0", "prefetcht0\t%a0"
  };

  int locality = INTVAL (operands[1]);
  if (locality < 0 || locality > 3)
    abort ();

  return patterns[locality];  
}
}

static const char *output_833 PARAMS ((rtx *, rtx));

static const char *
output_833 (operands, insn)
     rtx *operands ATTRIBUTE_UNUSED;
     rtx insn ATTRIBUTE_UNUSED;
{
{
  if (INTVAL (operands[1]) == 0)
    return "prefetch\t%a0";
  else
    return "prefetchw\t%a0";
}
}


extern int nonimmediate_operand PARAMS ((rtx, enum machine_mode));
extern int const0_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_general_operand PARAMS ((rtx, enum machine_mode));
extern int general_operand PARAMS ((rtx, enum machine_mode));
extern int ext_register_operand PARAMS ((rtx, enum machine_mode));
extern int register_operand PARAMS ((rtx, enum machine_mode));
extern int nonmemory_operand PARAMS ((rtx, enum machine_mode));
extern int push_operand PARAMS ((rtx, enum machine_mode));
extern int general_no_elim_operand PARAMS ((rtx, enum machine_mode));
extern int nonmemory_no_elim_operand PARAMS ((rtx, enum machine_mode));
extern int immediate_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_movabs_operand PARAMS ((rtx, enum machine_mode));
extern int q_regs_operand PARAMS ((rtx, enum machine_mode));
extern int const_int_operand PARAMS ((rtx, enum machine_mode));
extern int scratch_operand PARAMS ((rtx, enum machine_mode));
extern int memory_operand PARAMS ((rtx, enum machine_mode));
extern int address_operand PARAMS ((rtx, enum machine_mode));
extern int const248_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_immediate_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_szext_nonmemory_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_szext_general_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_zext_immediate_operand PARAMS ((rtx, enum machine_mode));
extern int const_int_1_31_operand PARAMS ((rtx, enum machine_mode));
extern int const_int_1_operand PARAMS ((rtx, enum machine_mode));
extern int ix86_comparison_operator PARAMS ((rtx, enum machine_mode));
extern int sse_comparison_operator PARAMS ((rtx, enum machine_mode));
extern int comparison_operator PARAMS ((rtx, enum machine_mode));
extern int constant_call_address_operand PARAMS ((rtx, enum machine_mode));
extern int call_insn_operand PARAMS ((rtx, enum machine_mode));
extern int symbolic_operand PARAMS ((rtx, enum machine_mode));
extern int binary_fp_operator PARAMS ((rtx, enum machine_mode));
extern int fcmov_comparison_operator PARAMS ((rtx, enum machine_mode));
extern int cmpsi_operand PARAMS ((rtx, enum machine_mode));
extern int cmp_fp_expander_operand PARAMS ((rtx, enum machine_mode));
extern int x86_64_nonmemory_operand PARAMS ((rtx, enum machine_mode));
extern int shiftdi_operand PARAMS ((rtx, enum machine_mode));
extern int aligned_operand PARAMS ((rtx, enum machine_mode));
extern int promotable_binary_operator PARAMS ((rtx, enum machine_mode));
extern int arith_or_logical_operator PARAMS ((rtx, enum machine_mode));
extern int incdec_operand PARAMS ((rtx, enum machine_mode));



static const struct insn_operand_data operand_data[] = 
{
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "r,?mr",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,mr",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,?mr",
    HImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,mr",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "q,?mq",
    QImode,
    0,
    1
  },
  {
    const0_operand,
    "n,n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,q",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,mq",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f#x,x#f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f#x,xm#f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    SImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "ri*m",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    SImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*?a,r,*?a,m,!*y,!rm,!*y,!*Y,!rm,!*Y",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "im,rinm,rinm,rin,rm,*y,*y,rm,*Y,*Y",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    SImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    HImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "n,r*m",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    HImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*?a,r,r,*?a,r,m",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "i,r,rn,rm,rm,rn",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er,i",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    HImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+rm,r",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "rn,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    HImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    HImode,
    0,
    1
  },
  {
    push_operand,
    "=X,X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "n,r",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "=X",
    QImode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,q,q,r,r,?r,m",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "q,qn,qm,q,rn,qm,qn",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "*qn,m",
    QImode,
    0,
    1
  },
  {
    q_regs_operand,
    "+q",
    QImode,
    1,
    1
  },
  {
    const0_operand,
    "i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=R",
    HImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?r",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=Q,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er,i",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    QImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Qm,?R",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q,Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "+Q",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "Q",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "riF*m",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<,!<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m,n",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DImode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "re*m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r*m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const0_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,!m*y,!*y,!m,!*Y,!*Y",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,*y,m,*Y,*Y,m",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,r,mr,!mr,!m*y,!*y,!*Y,!m,!*Y",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "Z,rem,i,re,n,*y,m,*Y,*Y,*m",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "a,er",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a,r",
    DImode,
    0,
    1
  },
  {
    x86_64_movabs_operand,
    "i,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "+r",
    DImode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    SFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f#rx,rFm#fx,x#rf",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    SFmode,
    0,
    1
  },
  {
    nonmemory_no_elim_operand,
    "f#rx,rF#fx,x#rf",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#xr,m,f#xr,r#xf,m,x#rf,x#rf,x#rf,m,!*y,!rm,!*y",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "fm#rx,f#rx,G,rmF#fx,Fr#fx,H,x,xm#rf,x#rf,rm,*y,*y",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f#Y,Fo#fY,*r#fY,Y#f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    DFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f#rY,rFo#fY,Y#rf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#Y,m,f#Y,*r,o,Y#f,Y#f,Y#f,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm#Y,f#Y,G,*roF,F*r,H,Y#f,YHm#f,Y#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#Yr,m,f#Yr,r#Yf,o,Y#rf,Y#rf,Y#rf,m",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "fm#Yr,f#Yr,G,roF#Yf,Fr#Yf,H,Y#rf,Ym#rf,Y#rf",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=X,X,X",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<,<",
    TFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f,Fo,*r",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    XFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f#r,ro#f",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "=<,<",
    TFmode,
    0,
    1
  },
  {
    general_no_elim_operand,
    "f#r,rFo#f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m,f,*r,o",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "fm,f,G,*roF,F*r",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,m,f#r,r#f,o",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "fm#r,f#r,G,roF#f,Fr#f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,m,f#r,r#f,o",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "fm#r,f#r,G,roF#f,Fr#f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "+f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,?&q",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm,0",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "r,m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Q,m",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*A,r,?r,?*o",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0,r,r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,X,&r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=*a,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*0,qm",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fY",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#Y,mf#Y,Y#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm#Y,f#Y,mY#f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,m",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f#rx,?r#fx,?x#rf",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*!m,?f#rx,?r#fx,?x#rf,Y",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f,f,f,f,mY",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m,X",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y,!m",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY,f",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mY",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f#rx,?r#fx,?x#rf",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f#rx,?r#fx,?x#rf",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f#rY,?r#fY,?Y#rf",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?f#rY,?r#fY,?Y#rf",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f,f,f,f",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "=X,m,m,m",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f,&1f",
    DFmode,
    0,
    0
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&1f",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=m,?r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f,f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m,m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,?f,Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "ri",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "r",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    x86_64_general_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni,rni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,r",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,rni",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni,rni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmni",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=rm",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,r",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn,rn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni,qni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmni",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=qm",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qmn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Qn",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "%0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "roiF,riF",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qn,qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "K,e,mr",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%rm,0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "K,i,mr",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=A",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=1",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qm",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&a,?a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d,&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&d",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=d",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "3",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%*a,r,*a,r,rm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_nonmemory_operand,
    "Z,Z,e,e,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%*a,r,rm",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "in,in,rin",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%*a,r,rm",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "n,n,rn",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%*a,q,qm,r",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "n,n,qn,n",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm,r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0,qm",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,re,rm,L",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "Z,rem,re",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,qm",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rm,L",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim,ri",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,q,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qi,qmi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+qm,q",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qi,qmi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm,*r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi,i",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "Qm",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=Q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "Q",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "re,rme",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem,re",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "rem",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "ri,rmi",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,m",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rmi,ri",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "=r",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "rim",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,m,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qmi,qi,ri",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,m",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "qmi,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=q,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "+q,qm",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim,qi",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=q",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "%0",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "qim",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SImode,
    0,
    1
  },
  {
    x86_64_zext_immediate_operand,
    "Z",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "=q",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "0",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "qmn",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=ro",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x#fr,x#fr,f#xr,rm#xf",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,x#fr,0,0",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "x,0#x,*g#x,*g#x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,rm#f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y#fr,Y#fr,f#Yr,rm#Yf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,Y#fr,0,0",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Y,0,*g#Y,*g#Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y#fr,Y#fr,fm#Yr,r#Yf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,Y#fr,0,0",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "Y,0,*g#Yr,*rm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,rm#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f,mf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,rm#f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=f#r,rm#f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x#fr,f#xr,rm#xf",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x,0,0",
    SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "*0#x,*g#x,*g#x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y#fr,mf#Yr,mr#Yf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y,0,0",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "*0#Y,*g#Y,*g#Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=Y#fr,mf#Yr",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y,0",
    DFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "*0#Y,*g#Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cJ,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "Jc",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "=&r",
    SImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+r*m,r*m",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "r,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_1_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_1_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,r",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,r",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_1_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0,r",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI,M",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,r",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "cI,cI",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_1_31_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "J,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=*d,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=*d,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "*a,0",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    HImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm,qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    QImode,
    0,
    1
  },
  {
    const_int_1_operand,
    "I",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "e",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "I,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=rm,rm",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "e,c",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=qm",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "+qm",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f#x,x#f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "f#x,xm#f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c,?*r,?*r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=1,1,*m*r",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "=X,X,r",
    SImode,
    0,
    0
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    symbolic_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f#x,x#f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm#x,xm#f",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f#Y,Y#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm#Y,Ym#f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f",
    TFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f,x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,xm#f",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f#Y,f#Y,Y#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,fm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0,Ym#f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "f,0",
    TFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    TFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,?r",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    SFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    XFmode,
    0,
    0
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "fm,0",
    DFmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    TFmode,
    0,
    0
  },
  {
    register_operand,
    "=f#x,x#f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0#x,xm#f",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f#Y,Y#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0#Y,Ym#f",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=S",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=c",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "2",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=&c",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "a",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "1",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    HImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm,0",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,rm",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,r,r",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f,&r,&r",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "f,0,rm,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,f,0,rm",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    XFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "=f,f",
    TFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "f,0",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "0,f",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "=x#f,f#x,f#x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0,f#x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm#f,f#x,0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x#f,f#x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm#f,f#x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y#f,f#Y,f#Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0,0,f#Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym#f,f#Y,0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y#f,f#Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0,0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym#f,f#Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i,i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r,r",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0,r",
    DImode,
    0,
    1
  },
  {
    x86_64_immediate_operand,
    "e,e",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=&x#rf,x#rf,?f#xr,?f#xr,?f#xr,?f#xr,?r#xf,?r#xf,?r#xf,?r#xf",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "x#fr,0#fr,f#fx,0#fx,f#fx,0#fx,rm#rx,0#rx,rm#rx,0#rx",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x#fr,x#fr,0#fx,f#fx,0#fx,f#fx,0#fx,rm#rx,0#rx,rm#rx",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0#fx,x#fx,f#x,f#x,xm#f,xm#f,f#x,f#x,xm#f,xm#f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm#f,xm#f,f#x,f#x,x#f,x#f,f#x,f#x,x#f,x#f",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2,&4,X,X,X,X,X,X,X,X",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=&x#rf,x#rf,?f#xr,?f#xr,?r#xf,?r#xf",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x#fr,0#fr,0#fx,0#fx,0#rx,0#rx",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "x#fr,x#fr,f#fx,f#fx,rm#rx,rm#rx",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0#fx,x#fx,f#x,xm#f,f#x,xm#f",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm#f,xm#f,f#x,x#f,f#x,x#f",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1,&3,X,X,X,X",
    SFmode,
    0,
    0
  },
  {
    register_operand,
    "=&Y#rf,Y#rf,?f#Yr,?f#Yr,?f#Yr,?f#Yr,?r#Yf,?r#Yf,?r#Yf,?r#Yf",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "Y#fr,0#fr,f#fY,0#fY,f#fY,0#fY,rm#rY,0#rY,rm#rY,0#rY",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y#fr,Y#fr,0#fY,f#fY,0#fY,f#fY,0#fY,rm#rY,0#rY,rm#rY",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0#fY,Y#fY,f#Y,f#Y,Ym#f,Ym#f,f#Y,f#Y,Ym#f,Ym#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym#f,Ym#f,f#Y,f#Y,Y#f,Y#f,f#Y,f#Y,Y#f,Y#f",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=2,&4,X,X,X,X,X,X,X,X",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=&Y#rf,Y#rf,?f#Yr,?f#Yr,?r#Yf,?r#Yf",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y#fr,0#fr,0#fY,0#fY,0#rY,0#rY",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Y#fr,Y#fr,f#fY,f#fY,rm#rY,rm#rY",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0#fY,Y#fY,f#Y,Ym#f,f#Y,Ym#f",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym#f,Ym#f,f#Y,Y#f,f#Y,Y#f",
    DFmode,
    0,
    1
  },
  {
    scratch_operand,
    "=1,&3,X,X,X,X",
    DFmode,
    0,
    0
  },
  {
    register_operand,
    "=&x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const0_operand,
    "X",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&x",
    SFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const0_operand,
    "X",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=&Y",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "Y",
    DFmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=&Y",
    DFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const0_operand,
    "X",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=&Y",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "Y",
    DFmode,
    0,
    1
  },
  {
    const0_operand,
    "X",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=&Y",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const0_operand,
    "X",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "Y",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    constant_call_address_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    call_insn_operand,
    "rsm",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm,x",
    V4SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,y",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,y",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=y,m",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym,y",
    V2SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "x",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "x",
    V4SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    push_operand,
    "=<",
    V2SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,x,m",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "O,xm,x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=r,o,x,mx,x",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "riFo,riF,O,x,m",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "D",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "=x,m",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "0,0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "m,x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    V4SFmode,
    0,
    1
  },
  {
    memory_operand,
    "=m",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "=Y",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "Ym",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "%0",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "%0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    TImode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    V4SImode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    CCFPmode,
    0,
    0
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "x",
    V4SFmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    CCFPUmode,
    0,
    0
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=x",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "xm",
    V4SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    immediate_operand,
    "i",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "yi",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V8QImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V4HImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "y",
    V2SImode,
    0,
    1
  },
  {
    memory_operand,
    "m",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "R",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "i",
    DImode,
    0,
    1
  },
  {
    0,
    "X",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "0",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "y",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SFmode,
    0,
    1
  },
  {
    register_operand,
    "=y",
    V2SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "ym",
    V2SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    address_operand,
    "p",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "n",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    cmpsi_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    cmp_fp_expander_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    1,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    0,
    "=m",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=&q",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "rm",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const248_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const248_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "=d",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    DImode,
    0,
    0
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    x86_64_szext_general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    0,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    shiftdi_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "r",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    ext_register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    QImode,
    1,
    1
  },
  {
    ix86_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    scratch_operand,
    "=a",
    HImode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "rm",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "",
    SImode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    ix86_comparison_operator,
    "",
    QImode,
    0,
    0
  },
  {
    q_regs_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    QImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    binary_fp_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    general_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    BLKmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    general_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    fcmov_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    XFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    TFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DFmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    sse_comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "=r",
    SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    promotable_binary_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    aligned_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    comparison_operator,
    "",
    VOIDmode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    register_operand,
    "",
    VOIDmode,
    0,
    1
  },
  {
    push_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    push_operand,
    "",
    DImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    push_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SFmode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SFmode,
    0,
    0
  },
  {
    push_operand,
    "",
    HImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    push_operand,
    "",
    QImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    HImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    HImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    HImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "q",
    QImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    0,
    "",
    VOIDmode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    QImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    memory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    SImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    arith_or_logical_operator,
    "",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    VOIDmode,
    1,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    DImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    SImode,
    0,
    0
  },
  {
    register_operand,
    "",
    SImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    SImode,
    0,
    1
  },
  {
    register_operand,
    "",
    HImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    HImode,
    0,
    1
  },
  {
    register_operand,
    "",
    QImode,
    0,
    1
  },
  {
    incdec_operand,
    "",
    QImode,
    0,
    1
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    scratch_operand,
    "r",
    DImode,
    0,
    0
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    general_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    TImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    TImode,
    0,
    1
  },
  {
    push_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4SFmode,
    0,
    1
  },
  {
    push_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V2SImode,
    0,
    1
  },
  {
    push_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V4HImode,
    0,
    1
  },
  {
    push_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V8QImode,
    0,
    1
  },
  {
    push_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonmemory_operand,
    "",
    V2SFmode,
    0,
    1
  },
  {
    nonimmediate_operand,
    "",
    TImode,
    0,
    1
  },
  {
    general_operand,
    "",
    TImode,
    0,
    1
  },
  {
    0,
    "",
    BLKmode,
    0,
    1
  },
  {
    register_operand,
    "",
    DImode,
    0,
    1
  },
  {
    immediate_operand,
    "",
    DImode,
    0,
    1
  },
  {
    0,
    "",
    VOIDmode,
    0,
    1
  },
  {
    address_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
  {
    const_int_operand,
    "",
    SImode,
    0,
    1
  },
};



const struct insn_data insn_data[] = 
{
  {
    "cmpdi_ccno_1_rex64",
    (const PTR) output_0,
    (insn_gen_fn) gen_cmpdi_ccno_1_rex64,
    &operand_data[1],
    2,
    0,
    2,
    2
  },
  {
    "*cmpdi_minus_1_rex64",
    "cmp{q}\t{%1, %0|%0, %1}",
    0,
    &operand_data[3],
    2,
    0,
    2,
    1
  },
  {
    "cmpdi_1_insn_rex64",
    "cmp{q}\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_cmpdi_1_insn_rex64,
    &operand_data[5],
    2,
    0,
    2,
    1
  },
  {
    "*cmpsi_ccno_1",
    (const PTR) output_3,
    0,
    &operand_data[7],
    2,
    0,
    2,
    2
  },
  {
    "*cmpsi_minus_1",
    "cmp{l}\t{%1, %0|%0, %1}",
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  {
    "*cmpsi_1_insn",
    "cmp{l}\t{%1, %0|%0, %1}",
    0,
    &operand_data[9],
    2,
    0,
    2,
    1
  },
  {
    "*cmphi_ccno_1",
    (const PTR) output_6,
    0,
    &operand_data[11],
    2,
    0,
    2,
    2
  },
  {
    "*cmphi_minus_1",
    "cmp{w}\t{%1, %0|%0, %1}",
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  {
    "*cmphi_1",
    "cmp{w}\t{%1, %0|%0, %1}",
    0,
    &operand_data[13],
    2,
    0,
    2,
    1
  },
  {
    "*cmpqi_ccno_1",
    (const PTR) output_9,
    0,
    &operand_data[15],
    2,
    0,
    2,
    2
  },
  {
    "*cmpqi_1",
    "cmp{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  {
    "*cmpqi_minus_1",
    "cmp{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[17],
    2,
    0,
    2,
    1
  },
  {
    "*cmpqi_ext_1",
    "cmp{b}\t{%h1, %0|%0, %h1}",
    0,
    &operand_data[19],
    2,
    0,
    1,
    1
  },
  {
    "*cmpqi_ext_1_rex64",
    "cmp{b}\t{%h1, %0|%0, %h1}",
    0,
    &operand_data[21],
    2,
    0,
    1,
    1
  },
  {
    "*cmpqi_ext_2",
    "test{b}\t%h0, %h0",
    0,
    &operand_data[22],
    2,
    0,
    1,
    1
  },
  {
    "cmpqi_ext_3_insn",
    "cmp{b}\t{%1, %h0|%h0, %1}",
    (insn_gen_fn) gen_cmpqi_ext_3_insn,
    &operand_data[24],
    2,
    0,
    1,
    1
  },
  {
    "cmpqi_ext_3_insn_rex64",
    "cmp{b}\t{%1, %h0|%h0, %1}",
    (insn_gen_fn) gen_cmpqi_ext_3_insn_rex64,
    &operand_data[26],
    2,
    0,
    1,
    1
  },
  {
    "*cmpqi_ext_4",
    "cmp{b}\t{%h1, %h0|%h0, %h1}",
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  {
    "*cmpfp_0",
    (const PTR) output_18,
    0,
    &operand_data[30],
    3,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_sf",
    (const PTR) output_19,
    0,
    &operand_data[33],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_sf_1",
    (const PTR) output_20,
    0,
    &operand_data[35],
    3,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_df",
    (const PTR) output_21,
    0,
    &operand_data[38],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_df_1",
    (const PTR) output_22,
    0,
    &operand_data[40],
    3,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_xf",
    (const PTR) output_23,
    0,
    &operand_data[43],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_tf",
    (const PTR) output_24,
    0,
    &operand_data[45],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_xf_1",
    (const PTR) output_25,
    0,
    &operand_data[47],
    3,
    0,
    1,
    3
  },
  {
    "*cmpfp_2_tf_1",
    (const PTR) output_26,
    0,
    &operand_data[50],
    3,
    0,
    1,
    3
  },
  {
    "*cmpfp_2u",
    (const PTR) output_27,
    0,
    &operand_data[53],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_2u_1",
    (const PTR) output_28,
    0,
    &operand_data[55],
    3,
    0,
    1,
    3
  },
  {
    "*ficom_1",
    "#",
    0,
    &operand_data[58],
    2,
    0,
    2,
    1
  },
  {
    "x86_fnstsw_1",
    "fnstsw\t%0",
    (insn_gen_fn) gen_x86_fnstsw_1,
    &operand_data[30],
    1,
    0,
    1,
    1
  },
  {
    "x86_sahf_1",
    "sahf",
    (insn_gen_fn) gen_x86_sahf_1,
    &operand_data[60],
    1,
    0,
    1,
    1
  },
  {
    "*cmpfp_i",
    (const PTR) output_32,
    0,
    &operand_data[53],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_i_sse",
    (const PTR) output_33,
    0,
    &operand_data[61],
    2,
    0,
    2,
    3
  },
  {
    "*cmpfp_i_sse_only",
    (const PTR) output_34,
    0,
    &operand_data[63],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_iu",
    (const PTR) output_35,
    0,
    &operand_data[53],
    2,
    0,
    1,
    3
  },
  {
    "*cmpfp_iu_sse",
    (const PTR) output_36,
    0,
    &operand_data[61],
    2,
    0,
    2,
    3
  },
  {
    "*cmpfp_iu_sse_only",
    (const PTR) output_37,
    0,
    &operand_data[63],
    2,
    0,
    1,
    3
  },
  {
    "*pushsi2",
    "push{l}\t%1",
    0,
    &operand_data[65],
    2,
    0,
    1,
    1
  },
  {
    "*pushsi2_rex64",
    "push{q}\t%q1",
    0,
    &operand_data[67],
    2,
    0,
    1,
    1
  },
  {
    "*pushsi2_prologue",
    "push{l}\t%1",
    0,
    &operand_data[65],
    2,
    0,
    1,
    1
  },
  {
    "*popsi1_epilogue",
    "pop{l}\t%0",
    0,
    &operand_data[69],
    1,
    0,
    1,
    1
  },
  {
    "popsi1",
    "pop{l}\t%0",
    (insn_gen_fn) gen_popsi1,
    &operand_data[69],
    1,
    0,
    1,
    1
  },
  {
    "*movsi_xor",
    "xor{l}\t{%0, %0|%0, %0}",
    0,
    &operand_data[70],
    2,
    0,
    1,
    1
  },
  {
    "*movsi_or",
    (const PTR) output_44,
    0,
    &operand_data[72],
    2,
    0,
    1,
    3
  },
  {
    "*movsi_1",
    (const PTR) output_45,
    0,
    &operand_data[74],
    2,
    0,
    10,
    3
  },
  {
    "*movabssi_1_rex64",
    (const PTR) output_46,
    0,
    &operand_data[76],
    2,
    0,
    3,
    2
  },
  {
    "*movabssi_2_rex64",
    (const PTR) output_47,
    0,
    &operand_data[78],
    2,
    0,
    2,
    2
  },
  {
    "*swapsi",
    "xchg{l}\t%1, %0",
    0,
    &operand_data[80],
    2,
    2,
    1,
    1
  },
  {
    "*pushhi2",
    (const PTR) output_49,
    0,
    &operand_data[82],
    2,
    0,
    2,
    2
  },
  {
    "*pushhi2_rex64",
    "push{q}\t%q1",
    0,
    &operand_data[84],
    2,
    0,
    1,
    1
  },
  {
    "*movhi_1",
    (const PTR) output_51,
    0,
    &operand_data[86],
    2,
    0,
    6,
    3
  },
  {
    "*movabshi_1_rex64",
    (const PTR) output_52,
    0,
    &operand_data[88],
    2,
    0,
    3,
    2
  },
  {
    "*movabshi_2_rex64",
    (const PTR) output_53,
    0,
    &operand_data[90],
    2,
    0,
    2,
    2
  },
  {
    "*swaphi_1",
    "xchg{w}\t%1, %0",
    0,
    &operand_data[92],
    2,
    2,
    1,
    1
  },
  {
    "*swaphi_2",
    "xchg{l}\t%k1, %k0",
    0,
    &operand_data[92],
    2,
    2,
    1,
    1
  },
  {
    "*movstricthi_1",
    "mov{w}\t{%1, %0|%0, %1}",
    0,
    &operand_data[94],
    2,
    0,
    2,
    1
  },
  {
    "*movstricthi_xor",
    "xor{w}\t{%0, %0|%0, %0}",
    0,
    &operand_data[96],
    2,
    0,
    1,
    1
  },
  {
    "*pushqi2",
    (const PTR) output_58,
    0,
    &operand_data[98],
    2,
    0,
    2,
    2
  },
  {
    "*pushqi2_rex64",
    "push{q}\t%q1",
    0,
    &operand_data[100],
    2,
    0,
    1,
    1
  },
  {
    "*movqi_1",
    (const PTR) output_60,
    0,
    &operand_data[102],
    2,
    0,
    7,
    3
  },
  {
    "*swapqi",
    "xchg{b}\t%1, %0",
    0,
    &operand_data[104],
    2,
    2,
    1,
    1
  },
  {
    "*movstrictqi_1",
    "mov{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[106],
    2,
    0,
    2,
    1
  },
  {
    "*movstrictqi_xor",
    "xor{b}\t{%0, %0|%0, %0}",
    0,
    &operand_data[108],
    2,
    0,
    1,
    1
  },
  {
    "*movsi_extv_1",
    "movs{bl|x}\t{%h1, %0|%0, %h1}",
    0,
    &operand_data[110],
    2,
    0,
    1,
    1
  },
  {
    "*movhi_extv_1",
    "movs{bl|x}\t{%h1, %k0|%k0, %h1}",
    0,
    &operand_data[112],
    2,
    0,
    1,
    1
  },
  {
    "*movqi_extv_1",
    (const PTR) output_66,
    0,
    &operand_data[114],
    2,
    0,
    2,
    3
  },
  {
    "*movqi_extv_1_rex64",
    (const PTR) output_67,
    0,
    &operand_data[116],
    2,
    0,
    2,
    3
  },
  {
    "*movabsqi_1_rex64",
    (const PTR) output_68,
    0,
    &operand_data[118],
    2,
    0,
    3,
    2
  },
  {
    "*movabsqi_2_rex64",
    (const PTR) output_69,
    0,
    &operand_data[120],
    2,
    0,
    2,
    2
  },
  {
    "*movsi_extzv_1",
    "movz{bl|x}\t{%h1, %0|%0, %h1}",
    0,
    &operand_data[110],
    2,
    0,
    1,
    1
  },
  {
    "*movqi_extzv_2",
    (const PTR) output_71,
    0,
    &operand_data[122],
    2,
    0,
    2,
    3
  },
  {
    "*movqi_extzv_2_rex64",
    (const PTR) output_72,
    0,
    &operand_data[116],
    2,
    0,
    2,
    3
  },
  {
    "movsi_insv_1",
    "mov{b}\t{%b1, %h0|%h0, %b1}",
    (insn_gen_fn) gen_movsi_insv_1,
    &operand_data[124],
    2,
    0,
    1,
    1
  },
  {
    "*movsi_insv_1_rex64",
    "mov{b}\t{%b1, %h0|%h0, %b1}",
    0,
    &operand_data[126],
    2,
    0,
    1,
    1
  },
  {
    "*movqi_insv_2",
    "mov{b}\t{%h1, %h0|%h0, %h1}",
    0,
    &operand_data[128],
    2,
    0,
    1,
    1
  },
  {
    "*pushdi",
    "#",
    0,
    &operand_data[130],
    2,
    0,
    1,
    1
  },
  {
    "pushdi2_rex64",
    (const PTR) output_77,
    (insn_gen_fn) gen_pushdi2_rex64,
    &operand_data[132],
    2,
    0,
    2,
    2
  },
  {
    "*pushdi2_prologue_rex64",
    "push{q}\t%1",
    0,
    &operand_data[134],
    2,
    0,
    1,
    1
  },
  {
    "*popdi1_epilogue_rex64",
    "pop{q}\t%0",
    0,
    &operand_data[136],
    1,
    0,
    1,
    1
  },
  {
    "popdi1",
    "pop{q}\t%0",
    (insn_gen_fn) gen_popdi1,
    &operand_data[136],
    1,
    0,
    1,
    1
  },
  {
    "*movdi_xor_rex64",
    "xor{l}\t{%k0, %k0|%k0, %k0}",
    0,
    &operand_data[137],
    2,
    0,
    1,
    1
  },
  {
    "*movdi_or_rex64",
    (const PTR) output_82,
    0,
    &operand_data[139],
    2,
    0,
    1,
    3
  },
  {
    "*movdi_2",
    (const PTR) output_83,
    0,
    &operand_data[141],
    2,
    0,
    7,
    2
  },
  {
    "*movdi_1_rex64",
    (const PTR) output_84,
    0,
    &operand_data[143],
    2,
    0,
    10,
    3
  },
  {
    "*movabsdi_1_rex64",
    (const PTR) output_85,
    0,
    &operand_data[145],
    2,
    0,
    2,
    2
  },
  {
    "*movabsdi_2_rex64",
    (const PTR) output_86,
    0,
    &operand_data[147],
    2,
    0,
    2,
    2
  },
  {
    "*swapdi_rex64",
    "xchg{q}\t%1, %0",
    0,
    &operand_data[149],
    2,
    2,
    1,
    1
  },
  {
    "*pushsf",
    (const PTR) output_88,
    0,
    &operand_data[151],
    2,
    0,
    3,
    3
  },
  {
    "*pushsf_rex64",
    (const PTR) output_89,
    0,
    &operand_data[153],
    2,
    0,
    3,
    3
  },
  {
    "*movsf_1",
    (const PTR) output_90,
    0,
    &operand_data[155],
    2,
    0,
    12,
    3
  },
  {
    "*swapsf",
    (const PTR) output_91,
    0,
    &operand_data[157],
    2,
    2,
    1,
    3
  },
  {
    "*pushdf_nointeger",
    (const PTR) output_92,
    0,
    &operand_data[159],
    2,
    0,
    4,
    3
  },
  {
    "*pushdf_integer",
    (const PTR) output_93,
    0,
    &operand_data[161],
    2,
    0,
    3,
    3
  },
  {
    "*movdf_nointeger",
    (const PTR) output_94,
    0,
    &operand_data[163],
    2,
    0,
    9,
    3
  },
  {
    "*movdf_integer",
    (const PTR) output_95,
    0,
    &operand_data[165],
    2,
    0,
    9,
    3
  },
  {
    "*swapdf",
    (const PTR) output_96,
    0,
    &operand_data[167],
    2,
    2,
    1,
    3
  },
  {
    "*pushxf_nointeger",
    (const PTR) output_97,
    0,
    &operand_data[169],
    2,
    0,
    3,
    3
  },
  {
    "*pushtf_nointeger",
    (const PTR) output_98,
    0,
    &operand_data[171],
    2,
    0,
    3,
    3
  },
  {
    "*pushxf_integer",
    (const PTR) output_99,
    0,
    &operand_data[173],
    2,
    0,
    2,
    3
  },
  {
    "*pushtf_integer",
    (const PTR) output_100,
    0,
    &operand_data[175],
    2,
    0,
    2,
    3
  },
  {
    "*movxf_nointeger",
    (const PTR) output_101,
    0,
    &operand_data[177],
    2,
    0,
    5,
    3
  },
  {
    "*movtf_nointeger",
    (const PTR) output_102,
    0,
    &operand_data[179],
    2,
    0,
    5,
    3
  },
  {
    "*movxf_integer",
    (const PTR) output_103,
    0,
    &operand_data[181],
    2,
    0,
    5,
    3
  },
  {
    "*movtf_integer",
    (const PTR) output_104,
    0,
    &operand_data[183],
    2,
    0,
    5,
    3
  },
  {
    "swapxf",
    (const PTR) output_105,
    (insn_gen_fn) gen_swapxf,
    &operand_data[185],
    2,
    2,
    1,
    3
  },
  {
    "swaptf",
    (const PTR) output_106,
    (insn_gen_fn) gen_swaptf,
    &operand_data[187],
    2,
    2,
    1,
    3
  },
  {
    "zero_extendhisi2_and",
    "#",
    (insn_gen_fn) gen_zero_extendhisi2_and,
    &operand_data[189],
    2,
    0,
    1,
    1
  },
  {
    "*zero_extendhisi2_movzwl",
    "movz{wl|x}\t{%1, %0|%0, %1}",
    0,
    &operand_data[191],
    2,
    0,
    1,
    1
  },
  {
    "*zero_extendqihi2_and",
    "#",
    0,
    &operand_data[193],
    2,
    0,
    2,
    1
  },
  {
    "*zero_extendqihi2_movzbw_and",
    "#",
    0,
    &operand_data[195],
    2,
    0,
    2,
    1
  },
  {
    "*zero_extendqihi2_movzbw",
    "movz{bw|x}\t{%1, %0|%0, %1}",
    0,
    &operand_data[197],
    2,
    0,
    1,
    1
  },
  {
    "*zero_extendqisi2_and",
    "#",
    0,
    &operand_data[199],
    2,
    0,
    2,
    1
  },
  {
    "*zero_extendqisi2_movzbw_and",
    "#",
    0,
    &operand_data[201],
    2,
    0,
    2,
    1
  },
  {
    "*zero_extendqisi2_movzbw",
    "movz{bl|x}\t{%1, %0|%0, %1}",
    0,
    &operand_data[203],
    2,
    0,
    1,
    1
  },
  {
    "zero_extendsidi2_32",
    "#",
    (insn_gen_fn) gen_zero_extendsidi2_32,
    &operand_data[205],
    2,
    0,
    3,
    1
  },
  {
    "zero_extendsidi2_rex64",
    (const PTR) output_116,
    (insn_gen_fn) gen_zero_extendsidi2_rex64,
    &operand_data[207],
    2,
    0,
    2,
    2
  },
  {
    "zero_extendhidi2",
    (const PTR) output_117,
    (insn_gen_fn) gen_zero_extendhidi2,
    &operand_data[209],
    2,
    0,
    2,
    2
  },
  {
    "zero_extendqidi2",
    (const PTR) output_118,
    (insn_gen_fn) gen_zero_extendqidi2,
    &operand_data[211],
    2,
    0,
    2,
    2
  },
  {
    "*extendsidi2_1",
    "#",
    0,
    &operand_data[213],
    3,
    0,
    4,
    1
  },
  {
    "extendsidi2_rex64",
    (const PTR) output_120,
    (insn_gen_fn) gen_extendsidi2_rex64,
    &operand_data[216],
    2,
    0,
    2,
    2
  },
  {
    "extendhidi2",
    "movs{wq|x}\t{%1,%0|%0, %1}",
    (insn_gen_fn) gen_extendhidi2,
    &operand_data[218],
    2,
    0,
    1,
    1
  },
  {
    "extendqidi2",
    "movs{bq|x}\t{%1,%0|%0, %1}",
    (insn_gen_fn) gen_extendqidi2,
    &operand_data[220],
    2,
    0,
    1,
    1
  },
  {
    "extendhisi2",
    (const PTR) output_123,
    (insn_gen_fn) gen_extendhisi2,
    &operand_data[222],
    2,
    0,
    2,
    3
  },
  {
    "*extendhisi2_zext",
    (const PTR) output_124,
    0,
    &operand_data[224],
    2,
    0,
    2,
    3
  },
  {
    "extendqihi2",
    (const PTR) output_125,
    (insn_gen_fn) gen_extendqihi2,
    &operand_data[226],
    2,
    0,
    2,
    3
  },
  {
    "extendqisi2",
    "movs{bl|x}\t{%1,%0|%0, %1}",
    (insn_gen_fn) gen_extendqisi2,
    &operand_data[203],
    2,
    0,
    1,
    1
  },
  {
    "*extendqisi2_zext",
    "movs{bl|x}\t{%1,%k0|%k0, %1}",
    0,
    &operand_data[220],
    2,
    0,
    1,
    1
  },
  {
    "*dummy_extendsfdf2",
    "#",
    0,
    &operand_data[228],
    2,
    0,
    1,
    1
  },
  {
    "*dummy_extendsfxf2",
    "#",
    0,
    &operand_data[230],
    2,
    0,
    1,
    1
  },
  {
    "*dummy_extendsftf2",
    "#",
    0,
    &operand_data[232],
    2,
    0,
    1,
    1
  },
  {
    "*dummy_extenddfxf2",
    "#",
    0,
    &operand_data[234],
    2,
    0,
    1,
    1
  },
  {
    "*dummy_extenddftf2",
    "#",
    0,
    &operand_data[236],
    2,
    0,
    1,
    1
  },
  {
    "*extendsfdf2_1",
    (const PTR) output_133,
    0,
    &operand_data[238],
    2,
    0,
    3,
    3
  },
  {
    "*extendsfdf2_1_sse_only",
    "cvtss2sd\t{%1, %0|%0, %1}",
    0,
    &operand_data[240],
    2,
    0,
    1,
    1
  },
  {
    "*extendsfxf2_1",
    (const PTR) output_135,
    0,
    &operand_data[242],
    2,
    0,
    2,
    3
  },
  {
    "*extendsftf2_1",
    (const PTR) output_136,
    0,
    &operand_data[244],
    2,
    0,
    2,
    3
  },
  {
    "*extenddfxf2_1",
    (const PTR) output_137,
    0,
    &operand_data[246],
    2,
    0,
    2,
    3
  },
  {
    "*extenddftf2_1",
    (const PTR) output_138,
    0,
    &operand_data[248],
    2,
    0,
    2,
    3
  },
  {
    "*truncdfsf2_1",
    (const PTR) output_139,
    0,
    &operand_data[250],
    3,
    0,
    4,
    3
  },
  {
    "*truncdfsf2_1_sse",
    (const PTR) output_140,
    0,
    &operand_data[253],
    3,
    0,
    5,
    3
  },
  {
    "*truncdfsf2_2",
    (const PTR) output_141,
    0,
    &operand_data[256],
    2,
    0,
    2,
    3
  },
  {
    "truncdfsf2_3",
    (const PTR) output_142,
    (insn_gen_fn) gen_truncdfsf2_3,
    &operand_data[258],
    2,
    0,
    1,
    3
  },
  {
    "truncdfsf2_sse_only",
    "cvtsd2ss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_truncdfsf2_sse_only,
    &operand_data[260],
    2,
    0,
    1,
    1
  },
  {
    "*truncxfsf2_1",
    (const PTR) output_144,
    0,
    &operand_data[262],
    3,
    0,
    4,
    3
  },
  {
    "*truncxfsf2_2",
    (const PTR) output_145,
    0,
    &operand_data[265],
    2,
    0,
    1,
    3
  },
  {
    "*trunctfsf2_1",
    (const PTR) output_146,
    0,
    &operand_data[267],
    3,
    0,
    4,
    3
  },
  {
    "*trunctfsf2_2",
    (const PTR) output_147,
    0,
    &operand_data[270],
    2,
    0,
    1,
    3
  },
  {
    "*truncxfdf2_1",
    (const PTR) output_148,
    0,
    &operand_data[272],
    3,
    0,
    4,
    3
  },
  {
    "*truncxfdf2_2",
    (const PTR) output_149,
    0,
    &operand_data[275],
    2,
    0,
    1,
    3
  },
  {
    "*trunctfdf2_1",
    (const PTR) output_150,
    0,
    &operand_data[277],
    3,
    0,
    4,
    3
  },
  {
    "*trunctfdf2_2",
    (const PTR) output_151,
    0,
    &operand_data[280],
    2,
    0,
    1,
    3
  },
  {
    "*fix_truncdi_1",
    "#",
    0,
    &operand_data[282],
    2,
    0,
    2,
    1
  },
  {
    "fix_truncdi_nomemory",
    "#",
    (insn_gen_fn) gen_fix_truncdi_nomemory,
    &operand_data[282],
    6,
    0,
    2,
    1
  },
  {
    "fix_truncdi_memory",
    (const PTR) output_154,
    (insn_gen_fn) gen_fix_truncdi_memory,
    &operand_data[288],
    5,
    0,
    1,
    3
  },
  {
    "fix_truncsfdi_sse",
    "cvttss2si{q}\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_fix_truncsfdi_sse,
    &operand_data[293],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncdfdi_sse",
    "cvttsd2si{q}\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_fix_truncdfdi_sse,
    &operand_data[295],
    2,
    0,
    1,
    1
  },
  {
    "*fix_truncsi_1",
    "#",
    0,
    &operand_data[297],
    2,
    0,
    2,
    1
  },
  {
    "fix_truncsi_nomemory",
    "#",
    (insn_gen_fn) gen_fix_truncsi_nomemory,
    &operand_data[297],
    5,
    0,
    2,
    1
  },
  {
    "fix_truncsi_memory",
    (const PTR) output_159,
    (insn_gen_fn) gen_fix_truncsi_memory,
    &operand_data[302],
    4,
    0,
    1,
    3
  },
  {
    "fix_truncsfsi_sse",
    "cvttss2si\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_fix_truncsfsi_sse,
    &operand_data[306],
    2,
    0,
    1,
    1
  },
  {
    "fix_truncdfsi_sse",
    "cvttsd2si\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_fix_truncdfsi_sse,
    &operand_data[308],
    2,
    0,
    1,
    1
  },
  {
    "*fix_trunchi_1",
    "#",
    0,
    &operand_data[310],
    2,
    0,
    2,
    1
  },
  {
    "fix_trunchi_nomemory",
    "#",
    (insn_gen_fn) gen_fix_trunchi_nomemory,
    &operand_data[310],
    5,
    0,
    2,
    1
  },
  {
    "fix_trunchi_memory",
    (const PTR) output_164,
    (insn_gen_fn) gen_fix_trunchi_memory,
    &operand_data[315],
    4,
    0,
    1,
    3
  },
  {
    "x86_fnstcw_1",
    "fnstcw\t%0",
    (insn_gen_fn) gen_x86_fnstcw_1,
    &operand_data[315],
    1,
    0,
    1,
    1
  },
  {
    "x86_fldcw_1",
    "fldcw\t%0",
    (insn_gen_fn) gen_x86_fldcw_1,
    &operand_data[290],
    1,
    0,
    1,
    1
  },
  {
    "floathisf2",
    (const PTR) output_167,
    (insn_gen_fn) gen_floathisf2,
    &operand_data[319],
    2,
    0,
    2,
    2
  },
  {
    "*floatsisf2_i387",
    (const PTR) output_168,
    0,
    &operand_data[321],
    2,
    0,
    3,
    2
  },
  {
    "*floatsisf2_sse",
    "cvtsi2ss\t{%1, %0|%0, %1}",
    0,
    &operand_data[323],
    2,
    0,
    1,
    1
  },
  {
    "*floatdisf2_i387_only",
    (const PTR) output_170,
    0,
    &operand_data[325],
    2,
    0,
    2,
    2
  },
  {
    "*floatdisf2_i387",
    (const PTR) output_171,
    0,
    &operand_data[327],
    2,
    0,
    3,
    2
  },
  {
    "*floatdisf2_sse",
    "cvtsi2ss{q}\t{%1, %0|%0, %1}",
    0,
    &operand_data[329],
    2,
    0,
    1,
    1
  },
  {
    "floathidf2",
    (const PTR) output_173,
    (insn_gen_fn) gen_floathidf2,
    &operand_data[331],
    2,
    0,
    2,
    2
  },
  {
    "*floatsidf2_i387",
    (const PTR) output_174,
    0,
    &operand_data[333],
    2,
    0,
    3,
    2
  },
  {
    "*floatsidf2_sse",
    "cvtsi2sd\t{%1, %0|%0, %1}",
    0,
    &operand_data[335],
    2,
    0,
    1,
    1
  },
  {
    "*floatdidf2_i387_only",
    (const PTR) output_176,
    0,
    &operand_data[337],
    2,
    0,
    2,
    2
  },
  {
    "*floatdidf2_i387",
    (const PTR) output_177,
    0,
    &operand_data[339],
    2,
    0,
    3,
    2
  },
  {
    "*floatdidf2_sse",
    "cvtsi2sd{q}\t{%1, %0|%0, %1}",
    0,
    &operand_data[341],
    2,
    0,
    1,
    1
  },
  {
    "floathixf2",
    (const PTR) output_179,
    (insn_gen_fn) gen_floathixf2,
    &operand_data[343],
    2,
    0,
    2,
    2
  },
  {
    "floathitf2",
    (const PTR) output_180,
    (insn_gen_fn) gen_floathitf2,
    &operand_data[345],
    2,
    0,
    2,
    2
  },
  {
    "floatsixf2",
    (const PTR) output_181,
    (insn_gen_fn) gen_floatsixf2,
    &operand_data[347],
    2,
    0,
    2,
    2
  },
  {
    "floatsitf2",
    (const PTR) output_182,
    (insn_gen_fn) gen_floatsitf2,
    &operand_data[349],
    2,
    0,
    2,
    2
  },
  {
    "floatdixf2",
    (const PTR) output_183,
    (insn_gen_fn) gen_floatdixf2,
    &operand_data[351],
    2,
    0,
    2,
    2
  },
  {
    "floatditf2",
    (const PTR) output_184,
    (insn_gen_fn) gen_floatditf2,
    &operand_data[353],
    2,
    0,
    2,
    2
  },
  {
    "*adddi3_1",
    "#",
    0,
    &operand_data[355],
    3,
    0,
    2,
    1
  },
  {
    "*adddi3_carry_rex64",
    "adc{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[358],
    3,
    0,
    2,
    1
  },
  {
    "*adddi3_cc_rex64",
    "add{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[358],
    3,
    2,
    2,
    1
  },
  {
    "*addsi3_carry",
    "adc{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[361],
    3,
    0,
    2,
    1
  },
  {
    "*addsi3_carry_zext",
    "adc{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    0,
    1,
    1
  },
  {
    "*addsi3_cc",
    "add{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[361],
    3,
    2,
    2,
    1
  },
  {
    "addqi3_cc",
    "add{b}\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addqi3_cc,
    &operand_data[367],
    3,
    2,
    2,
    1
  },
  {
    "*lea_1",
    "lea{l}\t{%a1, %0|%0, %a1}",
    0,
    &operand_data[370],
    2,
    0,
    1,
    1
  },
  {
    "*lea_1_rex64",
    "lea{l}\t{%a1, %0|%0, %a1}",
    0,
    &operand_data[372],
    2,
    0,
    1,
    1
  },
  {
    "*lea_1_zext",
    "lea{l}\t{%a1, %k0|%k0, %a1}",
    0,
    &operand_data[374],
    2,
    0,
    1,
    1
  },
  {
    "*lea_2_rex64",
    "lea{q}\t{%a1, %0|%0, %a1}",
    0,
    &operand_data[374],
    2,
    0,
    1,
    1
  },
  {
    "*lea_general_1",
    "#",
    0,
    &operand_data[376],
    4,
    0,
    1,
    1
  },
  {
    "*lea_general_1_zext",
    "#",
    0,
    &operand_data[380],
    4,
    0,
    1,
    1
  },
  {
    "*lea_general_2",
    "#",
    0,
    &operand_data[384],
    4,
    0,
    1,
    1
  },
  {
    "*lea_general_2_zext",
    "#",
    0,
    &operand_data[388],
    4,
    0,
    1,
    1
  },
  {
    "*lea_general_3",
    "#",
    0,
    &operand_data[392],
    5,
    0,
    1,
    1
  },
  {
    "*lea_general_3_zext",
    "#",
    0,
    &operand_data[397],
    5,
    0,
    1,
    1
  },
  {
    "*adddi_1_rex64",
    (const PTR) output_202,
    0,
    &operand_data[402],
    3,
    0,
    3,
    3
  },
  {
    "*adddi_2_rex64",
    (const PTR) output_203,
    0,
    &operand_data[405],
    3,
    2,
    2,
    3
  },
  {
    "*adddi_3_rex64",
    (const PTR) output_204,
    0,
    &operand_data[408],
    3,
    0,
    1,
    3
  },
  {
    "*adddi_4_rex64",
    (const PTR) output_205,
    0,
    &operand_data[411],
    3,
    0,
    1,
    3
  },
  {
    "*adddi_5_rex64",
    (const PTR) output_206,
    0,
    &operand_data[414],
    3,
    0,
    1,
    3
  },
  {
    "*addsi_1",
    (const PTR) output_207,
    0,
    &operand_data[417],
    3,
    0,
    3,
    3
  },
  {
    "addsi_1_zext",
    (const PTR) output_208,
    (insn_gen_fn) gen_addsi_1_zext,
    &operand_data[420],
    3,
    0,
    2,
    3
  },
  {
    "*addsi_2",
    (const PTR) output_209,
    0,
    &operand_data[423],
    3,
    2,
    2,
    3
  },
  {
    "*addsi_2_zext",
    (const PTR) output_210,
    0,
    &operand_data[426],
    3,
    2,
    1,
    3
  },
  {
    "*addsi_3",
    (const PTR) output_211,
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  {
    "*addsi_3_zext",
    (const PTR) output_212,
    0,
    &operand_data[426],
    3,
    2,
    1,
    3
  },
  {
    "*addsi_4",
    (const PTR) output_213,
    0,
    &operand_data[432],
    3,
    0,
    1,
    3
  },
  {
    "*addsi_5",
    (const PTR) output_214,
    0,
    &operand_data[429],
    3,
    0,
    1,
    3
  },
  {
    "*addhi_1_lea",
    (const PTR) output_215,
    0,
    &operand_data[435],
    3,
    0,
    3,
    3
  },
  {
    "*addhi_1",
    (const PTR) output_216,
    0,
    &operand_data[438],
    3,
    0,
    2,
    3
  },
  {
    "*addhi_2",
    (const PTR) output_217,
    0,
    &operand_data[441],
    3,
    2,
    2,
    3
  },
  {
    "*addhi_3",
    (const PTR) output_218,
    0,
    &operand_data[444],
    3,
    0,
    1,
    3
  },
  {
    "*addhi_4",
    (const PTR) output_219,
    0,
    &operand_data[447],
    3,
    0,
    1,
    3
  },
  {
    "*addhi_5",
    (const PTR) output_220,
    0,
    &operand_data[444],
    3,
    0,
    1,
    3
  },
  {
    "*addqi_1_lea",
    (const PTR) output_221,
    0,
    &operand_data[450],
    3,
    0,
    4,
    3
  },
  {
    "*addqi_1",
    (const PTR) output_222,
    0,
    &operand_data[453],
    3,
    0,
    3,
    3
  },
  {
    "*addqi_2",
    (const PTR) output_223,
    0,
    &operand_data[456],
    3,
    2,
    2,
    3
  },
  {
    "*addqi_3",
    (const PTR) output_224,
    0,
    &operand_data[459],
    3,
    0,
    1,
    3
  },
  {
    "*addqi_4",
    (const PTR) output_225,
    0,
    &operand_data[462],
    3,
    0,
    1,
    3
  },
  {
    "*addqi_5",
    (const PTR) output_226,
    0,
    &operand_data[459],
    3,
    0,
    1,
    3
  },
  {
    "addqi_ext_1",
    (const PTR) output_227,
    (insn_gen_fn) gen_addqi_ext_1,
    &operand_data[465],
    3,
    0,
    1,
    3
  },
  {
    "*addqi_ext_1_rex64",
    (const PTR) output_228,
    0,
    &operand_data[468],
    3,
    0,
    1,
    3
  },
  {
    "*addqi_ext_2",
    "add{b}\t{%h2, %h0|%h0, %h2}",
    0,
    &operand_data[471],
    3,
    0,
    1,
    1
  },
  {
    "*subdi3_1",
    "#",
    0,
    &operand_data[474],
    3,
    0,
    2,
    1
  },
  {
    "subdi3_carry_rex64",
    "sbb{q}\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subdi3_carry_rex64,
    &operand_data[477],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_1_rex64",
    "sub{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[477],
    3,
    0,
    2,
    1
  },
  {
    "*subdi_2_rex64",
    "sub{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[477],
    3,
    2,
    2,
    1
  },
  {
    "*subdi_3_rex63",
    "sub{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[477],
    3,
    2,
    2,
    1
  },
  {
    "subsi3_carry",
    "sbb{l}\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subsi3_carry,
    &operand_data[480],
    3,
    0,
    2,
    1
  },
  {
    "subsi3_carry_zext",
    "sbb{l}\t{%2, %k0|%k0, %2}",
    (insn_gen_fn) gen_subsi3_carry_zext,
    &operand_data[483],
    3,
    0,
    2,
    1
  },
  {
    "*subsi_1",
    "sub{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[480],
    3,
    0,
    2,
    1
  },
  {
    "*subsi_1_zext",
    "sub{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[486],
    3,
    0,
    1,
    1
  },
  {
    "*subsi_2",
    "sub{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[480],
    3,
    2,
    2,
    1
  },
  {
    "*subsi_2_zext",
    "sub{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[486],
    3,
    2,
    1,
    1
  },
  {
    "*subsi_3",
    "sub{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[480],
    3,
    2,
    2,
    1
  },
  {
    "*subsi_3_zext",
    "sub{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[489],
    3,
    2,
    1,
    1
  },
  {
    "*subhi_1",
    "sub{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[492],
    3,
    0,
    2,
    1
  },
  {
    "*subhi_2",
    "sub{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[492],
    3,
    2,
    2,
    1
  },
  {
    "*subhi_3",
    "sub{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[492],
    3,
    2,
    2,
    1
  },
  {
    "*subqi_1",
    "sub{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[495],
    3,
    0,
    2,
    1
  },
  {
    "*subqi_2",
    "sub{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[498],
    3,
    2,
    2,
    1
  },
  {
    "*subqi_3",
    "sub{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[498],
    3,
    2,
    2,
    1
  },
  {
    "*muldi3_1_rex64",
    (const PTR) output_249,
    0,
    &operand_data[501],
    3,
    0,
    3,
    2
  },
  {
    "*mulsi3_1",
    (const PTR) output_250,
    0,
    &operand_data[504],
    3,
    0,
    3,
    2
  },
  {
    "*mulsi3_1_zext",
    (const PTR) output_251,
    0,
    &operand_data[507],
    3,
    0,
    3,
    2
  },
  {
    "*mulhi3_1",
    (const PTR) output_252,
    0,
    &operand_data[510],
    3,
    0,
    3,
    2
  },
  {
    "*mulqi3_1",
    "mul{b}\t%2",
    0,
    &operand_data[513],
    3,
    0,
    1,
    1
  },
  {
    "*umulqihi3_1",
    "mul{b}\t%2",
    0,
    &operand_data[516],
    3,
    0,
    1,
    1
  },
  {
    "*mulqihi3_insn",
    "imul{b}\t%2",
    0,
    &operand_data[516],
    3,
    0,
    1,
    1
  },
  {
    "*umulditi3_insn",
    "mul{q}\t%2",
    0,
    &operand_data[519],
    3,
    0,
    1,
    1
  },
  {
    "*umulsidi3_insn",
    "mul{l}\t%2",
    0,
    &operand_data[522],
    3,
    0,
    1,
    1
  },
  {
    "*mulditi3_insn",
    "imul{q}\t%2",
    0,
    &operand_data[519],
    3,
    0,
    1,
    1
  },
  {
    "*mulsidi3_insn",
    "imul{l}\t%2",
    0,
    &operand_data[522],
    3,
    0,
    1,
    1
  },
  {
    "*umuldi3_highpart_rex64",
    "mul{q}\t%2",
    0,
    &operand_data[525],
    4,
    0,
    1,
    1
  },
  {
    "*umulsi3_highpart_insn",
    "mul{l}\t%2",
    0,
    &operand_data[529],
    4,
    0,
    1,
    1
  },
  {
    "*umulsi3_highpart_zext",
    "mul{l}\t%2",
    0,
    &operand_data[533],
    4,
    0,
    1,
    1
  },
  {
    "*smuldi3_highpart_rex64",
    "imul{q}\t%2",
    0,
    &operand_data[525],
    4,
    0,
    1,
    1
  },
  {
    "*smulsi3_highpart_insn",
    "imul{l}\t%2",
    0,
    &operand_data[529],
    4,
    0,
    1,
    1
  },
  {
    "*smulsi3_highpart_zext",
    "imul{l}\t%2",
    0,
    &operand_data[533],
    4,
    0,
    1,
    1
  },
  {
    "divqi3",
    "idiv{b}\t%2",
    (insn_gen_fn) gen_divqi3,
    &operand_data[537],
    3,
    0,
    1,
    1
  },
  {
    "udivqi3",
    "div{b}\t%2",
    (insn_gen_fn) gen_udivqi3,
    &operand_data[537],
    3,
    0,
    1,
    1
  },
  {
    "*divmoddi4_nocltd_rex64",
    "#",
    0,
    &operand_data[540],
    4,
    2,
    2,
    1
  },
  {
    "*divmoddi4_cltd_rex64",
    "#",
    0,
    &operand_data[544],
    4,
    2,
    1,
    1
  },
  {
    "*divmoddi_noext_rex64",
    "idiv{q}\t%2",
    0,
    &operand_data[548],
    5,
    2,
    1,
    1
  },
  {
    "*divmodsi4_nocltd",
    "#",
    0,
    &operand_data[553],
    4,
    2,
    2,
    1
  },
  {
    "*divmodsi4_cltd",
    "#",
    0,
    &operand_data[557],
    4,
    2,
    1,
    1
  },
  {
    "*divmodsi_noext",
    "idiv{l}\t%2",
    0,
    &operand_data[561],
    5,
    2,
    1,
    1
  },
  {
    "divmodhi4",
    "cwtd\n\tidiv{w}\t%2",
    (insn_gen_fn) gen_divmodhi4,
    &operand_data[566],
    4,
    2,
    1,
    1
  },
  {
    "udivmoddi4",
    "xor{q}\t%3, %3\n\tdiv{q}\t%2",
    (insn_gen_fn) gen_udivmoddi4,
    &operand_data[570],
    4,
    2,
    1,
    1
  },
  {
    "*udivmoddi4_noext",
    "div{q}\t%2",
    0,
    &operand_data[548],
    4,
    3,
    1,
    1
  },
  {
    "udivmodsi4",
    "xor{l}\t%3, %3\n\tdiv{l}\t%2",
    (insn_gen_fn) gen_udivmodsi4,
    &operand_data[574],
    4,
    2,
    1,
    1
  },
  {
    "*udivmodsi4_noext",
    "div{l}\t%2",
    0,
    &operand_data[561],
    4,
    3,
    1,
    1
  },
  {
    "*udivmodhi_noext",
    "div{w}\t%2",
    0,
    &operand_data[578],
    5,
    2,
    1,
    1
  },
  {
    "*testdi_1_rex64",
    (const PTR) output_280,
    0,
    &operand_data[583],
    2,
    0,
    5,
    2
  },
  {
    "testsi_1",
    "test{l}\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_testsi_1,
    &operand_data[585],
    2,
    0,
    3,
    1
  },
  {
    "*testhi_1",
    "test{w}\t{%1, %0|%0, %1}",
    0,
    &operand_data[587],
    2,
    0,
    3,
    1
  },
  {
    "*testqi_1",
    (const PTR) output_283,
    0,
    &operand_data[589],
    2,
    0,
    4,
    3
  },
  {
    "*testqi_ext_0",
    "test{b}\t{%1, %h0|%h0, %1}",
    0,
    &operand_data[591],
    2,
    0,
    1,
    1
  },
  {
    "*testqi_ext_1",
    "test{b}\t{%1, %h0|%h0, %1}",
    0,
    &operand_data[593],
    2,
    0,
    1,
    1
  },
  {
    "*testqi_ext_1_rex64",
    "test{b}\t{%1, %h0|%h0, %1}",
    0,
    &operand_data[20],
    2,
    0,
    1,
    1
  },
  {
    "*testqi_ext_2",
    "test{b}\t{%h1, %h0|%h0, %h1}",
    0,
    &operand_data[28],
    2,
    0,
    1,
    1
  },
  {
    "*testqi_ext_3",
    "#",
    0,
    &operand_data[595],
    3,
    0,
    1,
    1
  },
  {
    "*testqi_ext_3_rex64",
    "#",
    0,
    &operand_data[598],
    3,
    0,
    1,
    1
  },
  {
    "*anddi_1_rex64",
    (const PTR) output_290,
    0,
    &operand_data[601],
    3,
    0,
    4,
    3
  },
  {
    "*anddi_2",
    (const PTR) output_291,
    0,
    &operand_data[604],
    3,
    2,
    3,
    2
  },
  {
    "*andsi_1",
    (const PTR) output_292,
    0,
    &operand_data[607],
    3,
    0,
    3,
    3
  },
  {
    "*andsi_1_zext",
    "and{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    0,
    1,
    1
  },
  {
    "*andsi_2",
    "and{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[610],
    3,
    2,
    2,
    1
  },
  {
    "*andsi_2_zext",
    "and{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    2,
    1,
    1
  },
  {
    "*andhi_1",
    (const PTR) output_296,
    0,
    &operand_data[613],
    3,
    0,
    3,
    3
  },
  {
    "*andhi_2",
    "and{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[616],
    3,
    2,
    2,
    1
  },
  {
    "*andqi_1",
    (const PTR) output_298,
    0,
    &operand_data[619],
    3,
    0,
    3,
    2
  },
  {
    "*andqi_1_slp",
    "and{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[622],
    2,
    1,
    2,
    1
  },
  {
    "*andqi_2",
    (const PTR) output_300,
    0,
    &operand_data[624],
    3,
    2,
    3,
    3
  },
  {
    "*andqi_2_slp",
    "and{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[627],
    2,
    3,
    2,
    1
  },
  {
    "andqi_ext_0",
    "and{b}\t{%2, %h0|%h0, %2}",
    (insn_gen_fn) gen_andqi_ext_0,
    &operand_data[629],
    3,
    0,
    1,
    1
  },
  {
    "*andqi_ext_0_cc",
    "and{b}\t{%2, %h0|%h0, %2}",
    0,
    &operand_data[629],
    3,
    2,
    1,
    1
  },
  {
    "*andqi_ext_1",
    "and{b}\t{%2, %h0|%h0, %2}",
    0,
    &operand_data[632],
    3,
    0,
    1,
    1
  },
  {
    "*andqi_ext_1_rex64",
    "and{b}\t{%2, %h0|%h0, %2}",
    0,
    &operand_data[635],
    3,
    0,
    1,
    1
  },
  {
    "*andqi_ext_2",
    "and{b}\t{%h2, %h0|%h0, %h2}",
    0,
    &operand_data[471],
    3,
    0,
    1,
    1
  },
  {
    "*iordi_1_rex64",
    "or{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[638],
    3,
    0,
    2,
    1
  },
  {
    "*iordi_2_rex64",
    "or{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[641],
    3,
    2,
    2,
    1
  },
  {
    "*iordi_3_rex64",
    "or{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[644],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi_1",
    "or{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[647],
    3,
    0,
    2,
    1
  },
  {
    "*iorsi_1_zext",
    "or{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[650],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi_1_zext_imm",
    "or{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[653],
    3,
    0,
    1,
    1
  },
  {
    "*iorsi_2",
    "or{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[610],
    3,
    2,
    2,
    1
  },
  {
    "*iorsi_2_zext",
    "or{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    2,
    1,
    1
  },
  {
    "*iorsi_2_zext_imm",
    "or{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[656],
    3,
    2,
    1,
    1
  },
  {
    "*iorsi_3",
    "or{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[659],
    3,
    0,
    1,
    1
  },
  {
    "*iorhi_1",
    "or{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[662],
    3,
    0,
    2,
    1
  },
  {
    "*iorhi_2",
    "or{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[616],
    3,
    2,
    2,
    1
  },
  {
    "*iorhi_3",
    "or{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[665],
    3,
    0,
    1,
    1
  },
  {
    "*iorqi_1",
    (const PTR) output_320,
    0,
    &operand_data[668],
    3,
    0,
    3,
    2
  },
  {
    "*iorqi_1_slp",
    "or{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[671],
    2,
    1,
    2,
    1
  },
  {
    "*iorqi_2",
    "or{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[673],
    3,
    2,
    2,
    1
  },
  {
    "*iorqi_2_slp",
    "or{b}\t{%1, %0|%0, %1}",
    0,
    &operand_data[676],
    2,
    3,
    2,
    1
  },
  {
    "*iorqi_3",
    "or{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[678],
    3,
    0,
    1,
    1
  },
  {
    "*xordi_1_rex64",
    (const PTR) output_325,
    0,
    &operand_data[358],
    3,
    0,
    2,
    2
  },
  {
    "*xordi_2_rex64",
    (const PTR) output_326,
    0,
    &operand_data[641],
    3,
    2,
    2,
    2
  },
  {
    "*xordi_3_rex64",
    "xor{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[644],
    3,
    0,
    1,
    1
  },
  {
    "*xorsi_1",
    "xor{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[361],
    3,
    0,
    2,
    1
  },
  {
    "*xorsi_1_zext",
    "xor{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    0,
    1,
    1
  },
  {
    "*xorsi_1_zext_imm",
    "xor{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[681],
    3,
    0,
    1,
    1
  },
  {
    "*xorsi_2",
    "xor{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[610],
    3,
    2,
    2,
    1
  },
  {
    "*xorsi_2_zext",
    "xor{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[364],
    3,
    2,
    1,
    1
  },
  {
    "*xorsi_2_zext_imm",
    "xor{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[656],
    3,
    2,
    1,
    1
  },
  {
    "*xorsi_3",
    "xor{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[659],
    3,
    0,
    1,
    1
  },
  {
    "*xorhi_1",
    "xor{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[662],
    3,
    0,
    2,
    1
  },
  {
    "*xorhi_2",
    "xor{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[616],
    3,
    2,
    2,
    1
  },
  {
    "*xorhi_3",
    "xor{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[665],
    3,
    0,
    1,
    1
  },
  {
    "*xorqi_1",
    (const PTR) output_338,
    0,
    &operand_data[668],
    3,
    0,
    3,
    2
  },
  {
    "*xorqi_ext_1",
    "xor{b}\t{%h2, %h0|%h0, %h2}",
    0,
    &operand_data[635],
    3,
    0,
    1,
    1
  },
  {
    "*xorqi_cc_1",
    "xor{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[673],
    3,
    2,
    2,
    1
  },
  {
    "*xorqi_cc_2",
    "xor{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[678],
    3,
    0,
    1,
    1
  },
  {
    "*xorqi_cc_ext_1",
    "xor{b}\t{%2, %h0|%h0, %2}",
    0,
    &operand_data[684],
    3,
    2,
    1,
    1
  },
  {
    "*xorqi_cc_ext_1_rex64",
    "xor{b}\t{%2, %h0|%h0, %2}",
    0,
    &operand_data[468],
    3,
    2,
    1,
    1
  },
  {
    "*negdi2_1",
    "#",
    0,
    &operand_data[687],
    2,
    0,
    1,
    1
  },
  {
    "*negdi2_1_rex64",
    "neg{q}\t%0",
    0,
    &operand_data[689],
    2,
    0,
    1,
    1
  },
  {
    "*negdi2_cmpz_rex64",
    "neg{q}\t%0",
    0,
    &operand_data[689],
    2,
    1,
    1,
    1
  },
  {
    "*negsi2_1",
    "neg{l}\t%0",
    0,
    &operand_data[691],
    2,
    0,
    1,
    1
  },
  {
    "*negsi2_1_zext",
    "neg{l}\t%k0",
    0,
    &operand_data[693],
    2,
    0,
    1,
    1
  },
  {
    "*negsi2_cmpz",
    "neg{l}\t%0",
    0,
    &operand_data[691],
    2,
    1,
    1,
    1
  },
  {
    "*negsi2_cmpz_zext",
    "neg{l}\t%k0",
    0,
    &operand_data[693],
    2,
    1,
    1,
    1
  },
  {
    "*neghi2_1",
    "neg{w}\t%0",
    0,
    &operand_data[695],
    2,
    0,
    1,
    1
  },
  {
    "*neghi2_cmpz",
    "neg{w}\t%0",
    0,
    &operand_data[695],
    2,
    1,
    1,
    1
  },
  {
    "*negqi2_1",
    "neg{b}\t%0",
    0,
    &operand_data[697],
    2,
    0,
    1,
    1
  },
  {
    "*negqi2_cmpz",
    "neg{b}\t%0",
    0,
    &operand_data[697],
    2,
    1,
    1,
    1
  },
  {
    "negsf2_memory",
    "#",
    (insn_gen_fn) gen_negsf2_memory,
    &operand_data[699],
    2,
    0,
    1,
    1
  },
  {
    "negsf2_ifs",
    "#",
    (insn_gen_fn) gen_negsf2_ifs,
    &operand_data[701],
    3,
    0,
    4,
    1
  },
  {
    "*negsf2_if",
    "#",
    0,
    &operand_data[704],
    2,
    0,
    2,
    1
  },
  {
    "negdf2_memory",
    "#",
    (insn_gen_fn) gen_negdf2_memory,
    &operand_data[706],
    2,
    0,
    1,
    1
  },
  {
    "negdf2_ifs",
    "#",
    (insn_gen_fn) gen_negdf2_ifs,
    &operand_data[708],
    3,
    0,
    4,
    1
  },
  {
    "*negdf2_ifs_rex64",
    "#",
    0,
    &operand_data[711],
    3,
    0,
    4,
    1
  },
  {
    "*negdf2_if",
    "#",
    0,
    &operand_data[714],
    2,
    0,
    2,
    1
  },
  {
    "*negdf2_if_rex64",
    "#",
    0,
    &operand_data[716],
    2,
    0,
    2,
    1
  },
  {
    "*negxf2_if",
    "#",
    0,
    &operand_data[718],
    2,
    0,
    2,
    1
  },
  {
    "*negtf2_if",
    "#",
    0,
    &operand_data[720],
    2,
    0,
    2,
    1
  },
  {
    "*negsf2_1",
    "fchs",
    0,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  {
    "*negdf2_1",
    "fchs",
    0,
    &operand_data[724],
    2,
    0,
    1,
    1
  },
  {
    "*negextendsfdf2",
    "fchs",
    0,
    &operand_data[726],
    2,
    0,
    1,
    1
  },
  {
    "*negxf2_1",
    "fchs",
    0,
    &operand_data[728],
    2,
    0,
    1,
    1
  },
  {
    "*negextenddfxf2",
    "fchs",
    0,
    &operand_data[730],
    2,
    0,
    1,
    1
  },
  {
    "*negextendsfxf2",
    "fchs",
    0,
    &operand_data[732],
    2,
    0,
    1,
    1
  },
  {
    "*negtf2_1",
    "fchs",
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*negextenddftf2",
    "fchs",
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  {
    "*negextendsftf2",
    "fchs",
    0,
    &operand_data[738],
    2,
    0,
    1,
    1
  },
  {
    "abssf2_memory",
    "#",
    (insn_gen_fn) gen_abssf2_memory,
    &operand_data[699],
    2,
    0,
    1,
    1
  },
  {
    "abssf2_ifs",
    "#",
    (insn_gen_fn) gen_abssf2_ifs,
    &operand_data[740],
    3,
    0,
    3,
    1
  },
  {
    "*abssf2_if",
    "#",
    0,
    &operand_data[704],
    2,
    0,
    2,
    1
  },
  {
    "absdf2_memory",
    "#",
    (insn_gen_fn) gen_absdf2_memory,
    &operand_data[706],
    2,
    0,
    1,
    1
  },
  {
    "absdf2_ifs",
    "#",
    (insn_gen_fn) gen_absdf2_ifs,
    &operand_data[743],
    3,
    0,
    3,
    1
  },
  {
    "*absdf2_ifs_rex64",
    "#",
    0,
    &operand_data[746],
    3,
    0,
    2,
    1
  },
  {
    "*absdf2_if",
    "#",
    0,
    &operand_data[714],
    2,
    0,
    2,
    1
  },
  {
    "*absdf2_if_rex64",
    "#",
    0,
    &operand_data[716],
    2,
    0,
    2,
    1
  },
  {
    "*absxf2_if",
    "#",
    0,
    &operand_data[718],
    2,
    0,
    2,
    1
  },
  {
    "*abstf2_if",
    "#",
    0,
    &operand_data[720],
    2,
    0,
    2,
    1
  },
  {
    "*abssf2_1",
    "fabs",
    0,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  {
    "*absdf2_1",
    "fabs",
    0,
    &operand_data[724],
    2,
    0,
    1,
    1
  },
  {
    "*absextendsfdf2",
    "fabs",
    0,
    &operand_data[726],
    2,
    0,
    1,
    1
  },
  {
    "*absxf2_1",
    "fabs",
    0,
    &operand_data[728],
    2,
    0,
    1,
    1
  },
  {
    "*absextenddfxf2",
    "fabs",
    0,
    &operand_data[730],
    2,
    0,
    1,
    1
  },
  {
    "*absextendsfxf2",
    "fabs",
    0,
    &operand_data[732],
    2,
    0,
    1,
    1
  },
  {
    "*abstf2_1",
    "fabs",
    0,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*absextenddftf2",
    "fabs",
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  {
    "*absextendsftf2",
    "fabs",
    0,
    &operand_data[738],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmpldi2_1_rex64",
    "not{q}\t%0",
    0,
    &operand_data[689],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmpldi2_2_rex64",
    "#",
    0,
    &operand_data[689],
    2,
    1,
    1,
    1
  },
  {
    "*one_cmplsi2_1",
    "not{l}\t%0",
    0,
    &operand_data[691],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmplsi2_1_zext",
    "not{l}\t%k0",
    0,
    &operand_data[486],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmplsi2_2",
    "#",
    0,
    &operand_data[691],
    2,
    1,
    1,
    1
  },
  {
    "*one_cmplsi2_2_zext",
    "#",
    0,
    &operand_data[486],
    2,
    1,
    1,
    1
  },
  {
    "*one_cmplhi2_1",
    "not{w}\t%0",
    0,
    &operand_data[695],
    2,
    0,
    1,
    1
  },
  {
    "*one_cmplhi2_2",
    "#",
    0,
    &operand_data[695],
    2,
    1,
    1,
    1
  },
  {
    "*one_cmplqi2_1",
    (const PTR) output_401,
    0,
    &operand_data[749],
    2,
    0,
    2,
    2
  },
  {
    "*one_cmplqi2_2",
    "#",
    0,
    &operand_data[697],
    2,
    1,
    1,
    1
  },
  {
    "*ashldi3_1_rex64",
    (const PTR) output_403,
    0,
    &operand_data[751],
    3,
    0,
    2,
    3
  },
  {
    "*ashldi3_cmp_rex64",
    (const PTR) output_404,
    0,
    &operand_data[754],
    3,
    2,
    1,
    3
  },
  {
    "ashldi3_1",
    "#",
    (insn_gen_fn) gen_ashldi3_1,
    &operand_data[757],
    4,
    0,
    1,
    1
  },
  {
    "*ashldi3_2",
    "#",
    0,
    &operand_data[757],
    3,
    0,
    1,
    1
  },
  {
    "x86_shld_1",
    (const PTR) output_407,
    (insn_gen_fn) gen_x86_shld_1,
    &operand_data[761],
    3,
    2,
    2,
    2
  },
  {
    "*ashlsi3_1",
    (const PTR) output_408,
    0,
    &operand_data[764],
    3,
    0,
    2,
    3
  },
  {
    "*ashlsi3_1_zext",
    (const PTR) output_409,
    0,
    &operand_data[767],
    3,
    0,
    2,
    3
  },
  {
    "*ashlsi3_cmp",
    (const PTR) output_410,
    0,
    &operand_data[770],
    3,
    2,
    1,
    3
  },
  {
    "*ashlsi3_cmp_zext",
    (const PTR) output_411,
    0,
    &operand_data[773],
    3,
    2,
    1,
    3
  },
  {
    "*ashlhi3_1_lea",
    (const PTR) output_412,
    0,
    &operand_data[776],
    3,
    0,
    2,
    3
  },
  {
    "*ashlhi3_1",
    (const PTR) output_413,
    0,
    &operand_data[779],
    3,
    0,
    1,
    3
  },
  {
    "*ashlhi3_cmp",
    (const PTR) output_414,
    0,
    &operand_data[782],
    3,
    2,
    1,
    3
  },
  {
    "*ashlqi3_1_lea",
    (const PTR) output_415,
    0,
    &operand_data[785],
    3,
    0,
    3,
    3
  },
  {
    "*ashlqi3_1",
    (const PTR) output_416,
    0,
    &operand_data[788],
    3,
    0,
    2,
    3
  },
  {
    "*ashlqi3_cmp",
    (const PTR) output_417,
    0,
    &operand_data[791],
    3,
    2,
    1,
    3
  },
  {
    "ashrdi3_63_rex64",
    (const PTR) output_418,
    (insn_gen_fn) gen_ashrdi3_63_rex64,
    &operand_data[794],
    3,
    0,
    2,
    2
  },
  {
    "*ashrdi3_1_one_bit_rex64",
    "sar{q}\t%0",
    0,
    &operand_data[797],
    3,
    0,
    1,
    1
  },
  {
    "*ashrdi3_1_rex64",
    (const PTR) output_420,
    0,
    &operand_data[800],
    3,
    0,
    2,
    2
  },
  {
    "*ashrdi3_one_bit_cmp_rex64",
    "sar{q}\t%0",
    0,
    &operand_data[797],
    3,
    2,
    1,
    1
  },
  {
    "*ashrdi3_cmp_rex64",
    "sar{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[803],
    3,
    2,
    1,
    1
  },
  {
    "ashrdi3_1",
    "#",
    (insn_gen_fn) gen_ashrdi3_1,
    &operand_data[757],
    4,
    0,
    1,
    1
  },
  {
    "*ashrdi3_2",
    "#",
    0,
    &operand_data[757],
    3,
    0,
    1,
    1
  },
  {
    "x86_shrd_1",
    (const PTR) output_425,
    (insn_gen_fn) gen_x86_shrd_1,
    &operand_data[761],
    3,
    2,
    2,
    2
  },
  {
    "ashrsi3_31",
    (const PTR) output_426,
    (insn_gen_fn) gen_ashrsi3_31,
    &operand_data[806],
    3,
    0,
    2,
    2
  },
  {
    "*ashrsi3_31_zext",
    (const PTR) output_427,
    0,
    &operand_data[809],
    3,
    0,
    2,
    2
  },
  {
    "*ashrsi3_1_one_bit",
    "sar{l}\t%0",
    0,
    &operand_data[812],
    3,
    0,
    1,
    1
  },
  {
    "*ashrsi3_1_one_bit_zext",
    "sar{l}\t%k0",
    0,
    &operand_data[815],
    3,
    0,
    1,
    1
  },
  {
    "*ashrsi3_1",
    (const PTR) output_430,
    0,
    &operand_data[818],
    3,
    0,
    2,
    2
  },
  {
    "*ashrsi3_1_zext",
    (const PTR) output_431,
    0,
    &operand_data[821],
    3,
    0,
    2,
    2
  },
  {
    "*ashrsi3_one_bit_cmp",
    "sar{l}\t%0",
    0,
    &operand_data[812],
    3,
    2,
    1,
    1
  },
  {
    "*ashrsi3_one_bit_cmp_zext",
    "sar{l}\t%k0",
    0,
    &operand_data[815],
    3,
    2,
    1,
    1
  },
  {
    "*ashrsi3_cmp",
    "sar{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[770],
    3,
    2,
    1,
    1
  },
  {
    "*ashrsi3_cmp_zext",
    "sar{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[773],
    3,
    2,
    1,
    1
  },
  {
    "*ashrhi3_1_one_bit",
    "sar{w}\t%0",
    0,
    &operand_data[824],
    3,
    0,
    1,
    1
  },
  {
    "*ashrhi3_1",
    (const PTR) output_437,
    0,
    &operand_data[827],
    3,
    0,
    2,
    2
  },
  {
    "*ashrhi3_one_bit_cmp",
    "sar{w}\t%0",
    0,
    &operand_data[824],
    3,
    2,
    1,
    1
  },
  {
    "*ashrhi3_cmp",
    "sar{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[782],
    3,
    2,
    1,
    1
  },
  {
    "*ashrqi3_1_one_bit",
    "sar{b}\t%0",
    0,
    &operand_data[830],
    3,
    0,
    1,
    1
  },
  {
    "*ashrqi3_1",
    (const PTR) output_441,
    0,
    &operand_data[833],
    3,
    0,
    2,
    2
  },
  {
    "*ashrqi3_one_bit_cmp",
    "sar{b}\t%0",
    0,
    &operand_data[836],
    3,
    2,
    1,
    1
  },
  {
    "*ashrqi3_cmp",
    "sar{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[791],
    3,
    2,
    1,
    1
  },
  {
    "*lshrdi3_1_one_bit_rex64",
    "shr{q}\t%0",
    0,
    &operand_data[797],
    3,
    0,
    1,
    1
  },
  {
    "*lshrdi3_1_rex64",
    (const PTR) output_445,
    0,
    &operand_data[800],
    3,
    0,
    2,
    2
  },
  {
    "*lshrdi3_cmp_one_bit_rex64",
    "shr{q}\t%0",
    0,
    &operand_data[797],
    3,
    2,
    1,
    1
  },
  {
    "*lshrdi3_cmp_rex64",
    "shr{q}\t{%2, %0|%0, %2}",
    0,
    &operand_data[839],
    3,
    2,
    1,
    1
  },
  {
    "lshrdi3_1",
    "#",
    (insn_gen_fn) gen_lshrdi3_1,
    &operand_data[757],
    4,
    0,
    1,
    1
  },
  {
    "*lshrdi3_2",
    "#",
    0,
    &operand_data[757],
    3,
    0,
    1,
    1
  },
  {
    "*lshrsi3_1_one_bit",
    "shr{l}\t%0",
    0,
    &operand_data[812],
    3,
    0,
    1,
    1
  },
  {
    "*lshrsi3_1_one_bit_zext",
    "shr{l}\t%k0",
    0,
    &operand_data[815],
    3,
    0,
    1,
    1
  },
  {
    "*lshrsi3_1",
    (const PTR) output_452,
    0,
    &operand_data[818],
    3,
    0,
    2,
    2
  },
  {
    "*lshrsi3_1_zext",
    (const PTR) output_453,
    0,
    &operand_data[842],
    3,
    0,
    2,
    2
  },
  {
    "*lshrsi3_one_bit_cmp",
    "shr{l}\t%0",
    0,
    &operand_data[812],
    3,
    2,
    1,
    1
  },
  {
    "*lshrsi3_cmp_one_bit_zext",
    "shr{l}\t%k0",
    0,
    &operand_data[815],
    3,
    2,
    1,
    1
  },
  {
    "*lshrsi3_cmp",
    "shr{l}\t{%2, %0|%0, %2}",
    0,
    &operand_data[770],
    3,
    2,
    1,
    1
  },
  {
    "*lshrsi3_cmp_zext",
    "shr{l}\t{%2, %k0|%k0, %2}",
    0,
    &operand_data[773],
    3,
    2,
    1,
    1
  },
  {
    "*lshrhi3_1_one_bit",
    "shr{w}\t%0",
    0,
    &operand_data[824],
    3,
    0,
    1,
    1
  },
  {
    "*lshrhi3_1",
    (const PTR) output_459,
    0,
    &operand_data[827],
    3,
    0,
    2,
    2
  },
  {
    "*lshrhi3_one_bit_cmp",
    "shr{w}\t%0",
    0,
    &operand_data[824],
    3,
    2,
    1,
    1
  },
  {
    "*lshrhi3_cmp",
    "shr{w}\t{%2, %0|%0, %2}",
    0,
    &operand_data[782],
    3,
    2,
    1,
    1
  },
  {
    "*lshrqi3_1_one_bit",
    "shr{b}\t%0",
    0,
    &operand_data[830],
    3,
    0,
    1,
    1
  },
  {
    "*lshrqi3_1",
    (const PTR) output_463,
    0,
    &operand_data[833],
    3,
    0,
    2,
    2
  },
  {
    "*lshrqi2_one_bit_cmp",
    "shr{b}\t%0",
    0,
    &operand_data[830],
    3,
    2,
    1,
    1
  },
  {
    "*lshrqi2_cmp",
    "shr{b}\t{%2, %0|%0, %2}",
    0,
    &operand_data[791],
    3,
    2,
    1,
    1
  },
  {
    "*rotlsi3_1_one_bit_rex64",
    "rol{q}\t%0",
    0,
    &operand_data[797],
    3,
    0,
    1,
    1
  },
  {
    "*rotldi3_1_rex64",
    (const PTR) output_467,
    0,
    &operand_data[845],
    3,
    0,
    2,
    2
  },
  {
    "*rotlsi3_1_one_bit",
    "rol{l}\t%0",
    0,
    &operand_data[812],
    3,
    0,
    1,
    1
  },
  {
    "*rotlsi3_1_one_bit_zext",
    "rol{l}\t%k0",
    0,
    &operand_data[815],
    3,
    0,
    1,
    1
  },
  {
    "*rotlsi3_1",
    (const PTR) output_470,
    0,
    &operand_data[818],
    3,
    0,
    2,
    2
  },
  {
    "*rotlsi3_1_zext",
    (const PTR) output_471,
    0,
    &operand_data[821],
    3,
    0,
    2,
    2
  },
  {
    "*rotlhi3_1_one_bit",
    "rol{w}\t%0",
    0,
    &operand_data[824],
    3,
    0,
    1,
    1
  },
  {
    "*rotlhi3_1",
    (const PTR) output_473,
    0,
    &operand_data[827],
    3,
    0,
    2,
    2
  },
  {
    "*rotlqi3_1_one_bit",
    "rol{b}\t%0",
    0,
    &operand_data[830],
    3,
    0,
    1,
    1
  },
  {
    "*rotlqi3_1",
    (const PTR) output_475,
    0,
    &operand_data[833],
    3,
    0,
    2,
    2
  },
  {
    "*rotrdi3_1_one_bit_rex64",
    "ror{q}\t%0",
    0,
    &operand_data[797],
    3,
    0,
    1,
    1
  },
  {
    "*rotrdi3_1_rex64",
    (const PTR) output_477,
    0,
    &operand_data[800],
    3,
    0,
    2,
    2
  },
  {
    "*rotrsi3_1_one_bit",
    "ror{l}\t%0",
    0,
    &operand_data[812],
    3,
    0,
    1,
    1
  },
  {
    "*rotrsi3_1_one_bit_zext",
    "ror{l}\t%k0",
    0,
    &operand_data[815],
    3,
    0,
    1,
    1
  },
  {
    "*rotrsi3_1",
    (const PTR) output_480,
    0,
    &operand_data[818],
    3,
    0,
    2,
    2
  },
  {
    "*rotrsi3_1_zext",
    (const PTR) output_481,
    0,
    &operand_data[821],
    3,
    0,
    2,
    2
  },
  {
    "*rotrhi3_one_bit",
    "ror{w}\t%0",
    0,
    &operand_data[824],
    3,
    0,
    1,
    1
  },
  {
    "*rotrhi3",
    (const PTR) output_483,
    0,
    &operand_data[827],
    3,
    0,
    2,
    2
  },
  {
    "*rotrqi3_1_one_bit",
    "ror{b}\t%0",
    0,
    &operand_data[830],
    3,
    0,
    1,
    1
  },
  {
    "*rotrqi3_1",
    (const PTR) output_485,
    0,
    &operand_data[833],
    3,
    0,
    2,
    2
  },
  {
    "*setcc_1",
    "set%C1\t%0",
    0,
    &operand_data[848],
    2,
    0,
    1,
    1
  },
  {
    "setcc_2",
    "set%C1\t%0",
    (insn_gen_fn) gen_setcc_2,
    &operand_data[850],
    2,
    0,
    1,
    1
  },
  {
    "*sse_setccsf",
    "cmp%D1ss\t{%3, %0|%0, %3}",
    0,
    &operand_data[852],
    4,
    0,
    1,
    1
  },
  {
    "*sse_setccdf",
    "cmp%D1sd\t{%3, %0|%0, %3}",
    0,
    &operand_data[856],
    4,
    0,
    1,
    1
  },
  {
    "*jcc_1",
    "%+j%C1\t%l0",
    0,
    &operand_data[860],
    2,
    0,
    0,
    1
  },
  {
    "*jcc_2",
    "%+j%c1\t%l0",
    0,
    &operand_data[860],
    2,
    0,
    0,
    1
  },
  {
    "*fp_jcc_1",
    "#",
    0,
    &operand_data[862],
    4,
    0,
    1,
    1
  },
  {
    "*fp_jcc_1_sse",
    "#",
    0,
    &operand_data[866],
    4,
    0,
    2,
    1
  },
  {
    "*fp_jcc_1_sse_only",
    "#",
    0,
    &operand_data[870],
    4,
    0,
    1,
    1
  },
  {
    "*fp_jcc_2",
    "#",
    0,
    &operand_data[862],
    4,
    0,
    1,
    1
  },
  {
    "*fp_jcc_2_sse",
    "#",
    0,
    &operand_data[866],
    4,
    0,
    2,
    1
  },
  {
    "*fp_jcc_2_sse_only",
    "#",
    0,
    &operand_data[870],
    4,
    0,
    1,
    1
  },
  {
    "*fp_jcc_3",
    "#",
    0,
    &operand_data[874],
    5,
    0,
    1,
    1
  },
  {
    "*fp_jcc_4",
    "#",
    0,
    &operand_data[874],
    5,
    0,
    1,
    1
  },
  {
    "*fp_jcc_5",
    "#",
    0,
    &operand_data[879],
    5,
    0,
    1,
    1
  },
  {
    "*fp_jcc_6",
    "#",
    0,
    &operand_data[879],
    5,
    0,
    1,
    1
  },
  {
    "jump",
    "jmp\t%l0",
    (insn_gen_fn) gen_jump,
    &operand_data[860],
    1,
    0,
    0,
    1
  },
  {
    "*indirect_jump",
    "jmp\t%A0",
    0,
    &operand_data[524],
    1,
    0,
    1,
    1
  },
  {
    "*indirect_jump_rtx64",
    "jmp\t%A0",
    0,
    &operand_data[521],
    1,
    0,
    1,
    1
  },
  {
    "*tablejump_1",
    "jmp\t%A0",
    0,
    &operand_data[884],
    2,
    0,
    1,
    1
  },
  {
    "*tablejump_1_rtx64",
    "jmp\t%A0",
    0,
    &operand_data[886],
    2,
    0,
    1,
    1
  },
  {
    "doloop_end_internal",
    (const PTR) output_507,
    (insn_gen_fn) gen_doloop_end_internal,
    &operand_data[887],
    4,
    1,
    3,
    3
  },
  {
    "*call_pop_0",
    (const PTR) output_508,
    0,
    &operand_data[891],
    3,
    0,
    0,
    3
  },
  {
    "*call_pop_1",
    (const PTR) output_509,
    0,
    &operand_data[894],
    3,
    0,
    1,
    3
  },
  {
    "*call_0",
    (const PTR) output_510,
    0,
    &operand_data[897],
    2,
    0,
    0,
    3
  },
  {
    "*call_1",
    (const PTR) output_511,
    0,
    &operand_data[899],
    2,
    0,
    1,
    3
  },
  {
    "*call_1_rex64",
    (const PTR) output_512,
    0,
    &operand_data[901],
    2,
    0,
    1,
    3
  },
  {
    "blockage",
    "",
    (insn_gen_fn) gen_blockage,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "return_internal",
    "ret",
    (insn_gen_fn) gen_return_internal,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "return_pop_internal",
    "ret\t%0",
    (insn_gen_fn) gen_return_pop_internal,
    &operand_data[596],
    1,
    0,
    0,
    1
  },
  {
    "return_indirect_internal",
    "jmp\t%A0",
    (insn_gen_fn) gen_return_indirect_internal,
    &operand_data[381],
    1,
    0,
    1,
    1
  },
  {
    "nop",
    "nop",
    (insn_gen_fn) gen_nop,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "prologue_set_got",
    (const PTR) output_518,
    (insn_gen_fn) gen_prologue_set_got,
    &operand_data[903],
    3,
    1,
    1,
    3
  },
  {
    "prologue_get_pc",
    (const PTR) output_519,
    (insn_gen_fn) gen_prologue_get_pc,
    &operand_data[906],
    2,
    0,
    1,
    3
  },
  {
    "eh_return_si",
    "#",
    (insn_gen_fn) gen_eh_return_si,
    &operand_data[908],
    1,
    0,
    1,
    1
  },
  {
    "eh_return_di",
    "#",
    (insn_gen_fn) gen_eh_return_di,
    &operand_data[909],
    1,
    0,
    1,
    1
  },
  {
    "leave",
    "leave",
    (insn_gen_fn) gen_leave,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "leave_rex64",
    "leave",
    (insn_gen_fn) gen_leave_rex64,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "ffssi_1",
    "bsf{l}\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_ffssi_1,
    &operand_data[910],
    2,
    1,
    1,
    1
  },
  {
    "*fop_sf_comm_nosse",
    (const PTR) output_525,
    0,
    &operand_data[912],
    4,
    0,
    1,
    3
  },
  {
    "*fop_sf_comm",
    (const PTR) output_526,
    0,
    &operand_data[916],
    4,
    0,
    2,
    3
  },
  {
    "*fop_sf_comm_sse",
    (const PTR) output_527,
    0,
    &operand_data[920],
    4,
    0,
    1,
    3
  },
  {
    "*fop_df_comm_nosse",
    (const PTR) output_528,
    0,
    &operand_data[924],
    4,
    0,
    1,
    3
  },
  {
    "*fop_df_comm",
    (const PTR) output_529,
    0,
    &operand_data[928],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_comm_sse",
    (const PTR) output_530,
    0,
    &operand_data[932],
    4,
    0,
    1,
    3
  },
  {
    "*fop_xf_comm",
    (const PTR) output_531,
    0,
    &operand_data[936],
    4,
    0,
    1,
    3
  },
  {
    "*fop_tf_comm",
    (const PTR) output_532,
    0,
    &operand_data[940],
    4,
    0,
    1,
    3
  },
  {
    "*fop_sf_1_nosse",
    (const PTR) output_533,
    0,
    &operand_data[944],
    4,
    0,
    2,
    3
  },
  {
    "*fop_sf_1",
    (const PTR) output_534,
    0,
    &operand_data[948],
    4,
    0,
    3,
    3
  },
  {
    "*fop_sf_1_sse",
    (const PTR) output_535,
    0,
    &operand_data[952],
    4,
    0,
    1,
    3
  },
  {
    "*fop_sf_2",
    (const PTR) output_536,
    0,
    &operand_data[956],
    4,
    0,
    2,
    3
  },
  {
    "*fop_sf_3",
    (const PTR) output_537,
    0,
    &operand_data[960],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_1_nosse",
    (const PTR) output_538,
    0,
    &operand_data[964],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_1",
    (const PTR) output_539,
    0,
    &operand_data[968],
    4,
    0,
    3,
    3
  },
  {
    "*fop_df_1_sse",
    (const PTR) output_540,
    0,
    &operand_data[972],
    4,
    0,
    1,
    3
  },
  {
    "*fop_df_2",
    (const PTR) output_541,
    0,
    &operand_data[976],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_3",
    (const PTR) output_542,
    0,
    &operand_data[980],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_4",
    (const PTR) output_543,
    0,
    &operand_data[984],
    4,
    0,
    2,
    3
  },
  {
    "*fop_df_5",
    (const PTR) output_544,
    0,
    &operand_data[988],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_1",
    (const PTR) output_545,
    0,
    &operand_data[992],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_1",
    (const PTR) output_546,
    0,
    &operand_data[996],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_2",
    (const PTR) output_547,
    0,
    &operand_data[1000],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_2",
    (const PTR) output_548,
    0,
    &operand_data[1004],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_3",
    (const PTR) output_549,
    0,
    &operand_data[1008],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_3",
    (const PTR) output_550,
    0,
    &operand_data[1012],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_4",
    (const PTR) output_551,
    0,
    &operand_data[1016],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_4",
    (const PTR) output_552,
    0,
    &operand_data[1020],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_5",
    (const PTR) output_553,
    0,
    &operand_data[1024],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_5",
    (const PTR) output_554,
    0,
    &operand_data[1028],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_6",
    (const PTR) output_555,
    0,
    &operand_data[1032],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_6",
    (const PTR) output_556,
    0,
    &operand_data[1036],
    4,
    0,
    2,
    3
  },
  {
    "*fop_xf_7",
    (const PTR) output_557,
    0,
    &operand_data[1040],
    4,
    0,
    2,
    3
  },
  {
    "*fop_tf_7",
    (const PTR) output_558,
    0,
    &operand_data[1044],
    4,
    0,
    2,
    3
  },
  {
    "sqrtsf2_1",
    (const PTR) output_559,
    (insn_gen_fn) gen_sqrtsf2_1,
    &operand_data[1048],
    2,
    0,
    2,
    2
  },
  {
    "sqrtsf2_1_sse_only",
    "sqrtss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sqrtsf2_1_sse_only,
    &operand_data[1050],
    2,
    0,
    1,
    1
  },
  {
    "sqrtsf2_i387",
    "fsqrt",
    (insn_gen_fn) gen_sqrtsf2_i387,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  {
    "sqrtdf2_1",
    (const PTR) output_562,
    (insn_gen_fn) gen_sqrtdf2_1,
    &operand_data[1052],
    2,
    0,
    2,
    2
  },
  {
    "sqrtdf2_1_sse_only",
    "sqrtsd\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sqrtdf2_1_sse_only,
    &operand_data[1054],
    2,
    0,
    1,
    1
  },
  {
    "sqrtdf2_i387",
    "fsqrt",
    (insn_gen_fn) gen_sqrtdf2_i387,
    &operand_data[724],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtextendsfdf2",
    "fsqrt",
    0,
    &operand_data[726],
    2,
    0,
    1,
    1
  },
  {
    "sqrtxf2",
    "fsqrt",
    (insn_gen_fn) gen_sqrtxf2,
    &operand_data[728],
    2,
    0,
    1,
    1
  },
  {
    "sqrttf2",
    "fsqrt",
    (insn_gen_fn) gen_sqrttf2,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtextenddfxf2",
    "fsqrt",
    0,
    &operand_data[730],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtextenddftf2",
    "fsqrt",
    0,
    &operand_data[736],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtextendsfxf2",
    "fsqrt",
    0,
    &operand_data[732],
    2,
    0,
    1,
    1
  },
  {
    "*sqrtextendsftf2",
    "fsqrt",
    0,
    &operand_data[738],
    2,
    0,
    1,
    1
  },
  {
    "sindf2",
    "fsin",
    (insn_gen_fn) gen_sindf2,
    &operand_data[724],
    2,
    0,
    1,
    1
  },
  {
    "sinsf2",
    "fsin",
    (insn_gen_fn) gen_sinsf2,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  {
    "*sinextendsfdf2",
    "fsin",
    0,
    &operand_data[726],
    2,
    0,
    1,
    1
  },
  {
    "sinxf2",
    "fsin",
    (insn_gen_fn) gen_sinxf2,
    &operand_data[728],
    2,
    0,
    1,
    1
  },
  {
    "sintf2",
    "fsin",
    (insn_gen_fn) gen_sintf2,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "cosdf2",
    "fcos",
    (insn_gen_fn) gen_cosdf2,
    &operand_data[724],
    2,
    0,
    1,
    1
  },
  {
    "cossf2",
    "fcos",
    (insn_gen_fn) gen_cossf2,
    &operand_data[722],
    2,
    0,
    1,
    1
  },
  {
    "*cosextendsfdf2",
    "fcos",
    0,
    &operand_data[726],
    2,
    0,
    1,
    1
  },
  {
    "cosxf2",
    "fcos",
    (insn_gen_fn) gen_cosxf2,
    &operand_data[728],
    2,
    0,
    1,
    1
  },
  {
    "costf2",
    "fcos",
    (insn_gen_fn) gen_costf2,
    &operand_data[734],
    2,
    0,
    1,
    1
  },
  {
    "cld",
    "cld",
    (insn_gen_fn) gen_cld,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "strmovdi_rex_1",
    "movsq",
    (insn_gen_fn) gen_strmovdi_rex_1,
    &operand_data[1056],
    4,
    2,
    1,
    1
  },
  {
    "strmovsi_1",
    "{movsl|movsd}",
    (insn_gen_fn) gen_strmovsi_1,
    &operand_data[1060],
    4,
    2,
    1,
    1
  },
  {
    "strmovsi_rex_1",
    "{movsl|movsd}",
    (insn_gen_fn) gen_strmovsi_rex_1,
    &operand_data[1056],
    4,
    2,
    1,
    1
  },
  {
    "strmovhi_1",
    "movsw",
    (insn_gen_fn) gen_strmovhi_1,
    &operand_data[1060],
    4,
    2,
    1,
    1
  },
  {
    "strmovhi_rex_1",
    "movsw",
    (insn_gen_fn) gen_strmovhi_rex_1,
    &operand_data[1056],
    4,
    2,
    1,
    1
  },
  {
    "strmovqi_1",
    "movsb",
    (insn_gen_fn) gen_strmovqi_1,
    &operand_data[1060],
    4,
    2,
    1,
    1
  },
  {
    "strmovqi_rex_1",
    "movsb",
    (insn_gen_fn) gen_strmovqi_rex_1,
    &operand_data[1056],
    4,
    2,
    1,
    1
  },
  {
    "rep_movdi_rex64",
    "{rep\n\tmovsq|rep movsq}",
    (insn_gen_fn) gen_rep_movdi_rex64,
    &operand_data[1064],
    6,
    4,
    1,
    1
  },
  {
    "rep_movsi",
    "{rep\n\tmovsl|rep movsd}",
    (insn_gen_fn) gen_rep_movsi,
    &operand_data[1070],
    6,
    4,
    1,
    1
  },
  {
    "rep_movsi_rex64",
    "{rep\n\tmovsl|rep movsd}",
    (insn_gen_fn) gen_rep_movsi_rex64,
    &operand_data[1064],
    6,
    4,
    1,
    1
  },
  {
    "rep_movqi",
    "{rep\n\tmovsb|rep movsb}",
    (insn_gen_fn) gen_rep_movqi,
    &operand_data[1070],
    6,
    4,
    1,
    1
  },
  {
    "rep_movqi_rex64",
    "{rep\n\tmovsb|rep movsb}",
    (insn_gen_fn) gen_rep_movqi_rex64,
    &operand_data[1064],
    6,
    4,
    1,
    1
  },
  {
    "strsetdi_rex_1",
    "stosq",
    (insn_gen_fn) gen_strsetdi_rex_1,
    &operand_data[1076],
    3,
    1,
    1,
    1
  },
  {
    "strsetsi_1",
    "{stosl|stosd}",
    (insn_gen_fn) gen_strsetsi_1,
    &operand_data[1079],
    3,
    1,
    1,
    1
  },
  {
    "strsetsi_rex_1",
    "{stosl|stosd}",
    (insn_gen_fn) gen_strsetsi_rex_1,
    &operand_data[1076],
    3,
    1,
    1,
    1
  },
  {
    "strsethi_1",
    "stosw",
    (insn_gen_fn) gen_strsethi_1,
    &operand_data[1082],
    3,
    1,
    1,
    1
  },
  {
    "strsethi_rex_1",
    "stosw",
    (insn_gen_fn) gen_strsethi_rex_1,
    &operand_data[1085],
    3,
    1,
    1,
    1
  },
  {
    "strsetqi_1",
    "stosb",
    (insn_gen_fn) gen_strsetqi_1,
    &operand_data[1088],
    3,
    1,
    1,
    1
  },
  {
    "strsetqi_rex_1",
    "stosb",
    (insn_gen_fn) gen_strsetqi_rex_1,
    &operand_data[1091],
    3,
    1,
    1,
    1
  },
  {
    "rep_stosdi_rex64",
    "{rep\n\tstosq|rep stosq}",
    (insn_gen_fn) gen_rep_stosdi_rex64,
    &operand_data[1094],
    5,
    2,
    1,
    1
  },
  {
    "rep_stossi",
    "{rep\n\tstosl|rep stosd}",
    (insn_gen_fn) gen_rep_stossi,
    &operand_data[1099],
    5,
    2,
    1,
    1
  },
  {
    "rep_stossi_rex64",
    "{rep\n\tstosl|rep stosd}",
    (insn_gen_fn) gen_rep_stossi_rex64,
    &operand_data[1104],
    5,
    2,
    1,
    1
  },
  {
    "rep_stosqi",
    "{rep\n\tstosb|rep stosb}",
    (insn_gen_fn) gen_rep_stosqi,
    &operand_data[1109],
    5,
    2,
    1,
    1
  },
  {
    "rep_stosqi_rex64",
    "{rep\n\tstosb|rep stosb}",
    (insn_gen_fn) gen_rep_stosqi_rex64,
    &operand_data[1114],
    5,
    2,
    1,
    1
  },
  {
    "cmpstrqi_nz_1",
    "repz{\n\t| }cmpsb",
    (insn_gen_fn) gen_cmpstrqi_nz_1,
    &operand_data[1119],
    7,
    0,
    1,
    1
  },
  {
    "cmpstrqi_nz_rex_1",
    "repz{\n\t| }cmpsb",
    (insn_gen_fn) gen_cmpstrqi_nz_rex_1,
    &operand_data[1126],
    7,
    0,
    1,
    1
  },
  {
    "cmpstrqi_1",
    "repz{\n\t| }cmpsb",
    (insn_gen_fn) gen_cmpstrqi_1,
    &operand_data[1119],
    7,
    0,
    1,
    1
  },
  {
    "cmpstrqi_rex_1",
    "repz{\n\t| }cmpsb",
    (insn_gen_fn) gen_cmpstrqi_rex_1,
    &operand_data[1126],
    7,
    0,
    1,
    1
  },
  {
    "strlenqi_1",
    "repnz{\n\t| }scasb",
    (insn_gen_fn) gen_strlenqi_1,
    &operand_data[1133],
    6,
    0,
    1,
    1
  },
  {
    "strlenqi_rex_1",
    "repnz{\n\t| }scasb",
    (insn_gen_fn) gen_strlenqi_rex_1,
    &operand_data[1139],
    6,
    0,
    1,
    1
  },
  {
    "x86_movdicc_0_m1_rex64",
    "sbb{q}\t%0, %0",
    (insn_gen_fn) gen_x86_movdicc_0_m1_rex64,
    &operand_data[137],
    1,
    0,
    1,
    1
  },
  {
    "*movdicc_c_rex64",
    (const PTR) output_614,
    0,
    &operand_data[1145],
    4,
    0,
    2,
    2
  },
  {
    "x86_movsicc_0_m1",
    "sbb{l}\t%0, %0",
    (insn_gen_fn) gen_x86_movsicc_0_m1,
    &operand_data[70],
    1,
    0,
    1,
    1
  },
  {
    "*movsicc_noc",
    (const PTR) output_616,
    0,
    &operand_data[1149],
    4,
    0,
    2,
    2
  },
  {
    "*movhicc_noc",
    (const PTR) output_617,
    0,
    &operand_data[1153],
    4,
    0,
    2,
    2
  },
  {
    "*movsfcc_1",
    (const PTR) output_618,
    0,
    &operand_data[1157],
    4,
    0,
    4,
    2
  },
  {
    "*movdfcc_1",
    (const PTR) output_619,
    0,
    &operand_data[1161],
    4,
    0,
    4,
    2
  },
  {
    "*movdfcc_1_rex64",
    (const PTR) output_620,
    0,
    &operand_data[1161],
    4,
    0,
    4,
    2
  },
  {
    "*movxfcc_1",
    (const PTR) output_621,
    0,
    &operand_data[1165],
    4,
    0,
    2,
    2
  },
  {
    "*movtfcc_1",
    (const PTR) output_622,
    0,
    &operand_data[1169],
    4,
    0,
    2,
    2
  },
  {
    "*minsf",
    "#",
    0,
    &operand_data[1173],
    3,
    2,
    3,
    1
  },
  {
    "*minsf_nonieee",
    "#",
    0,
    &operand_data[1176],
    3,
    2,
    2,
    1
  },
  {
    "*minsf_sse",
    "minss\t{%2, %0|%0, %2}",
    0,
    &operand_data[952],
    3,
    2,
    1,
    1
  },
  {
    "*mindf",
    "#",
    0,
    &operand_data[1179],
    3,
    2,
    3,
    1
  },
  {
    "*mindf_nonieee",
    "#",
    0,
    &operand_data[1182],
    3,
    2,
    2,
    1
  },
  {
    "*mindf_sse",
    "minsd\t{%2, %0|%0, %2}",
    0,
    &operand_data[972],
    3,
    2,
    1,
    1
  },
  {
    "*maxsf",
    "#",
    0,
    &operand_data[1173],
    3,
    2,
    3,
    1
  },
  {
    "*maxsf_nonieee",
    "#",
    0,
    &operand_data[1176],
    3,
    2,
    2,
    1
  },
  {
    "*maxsf_sse",
    "maxss\t{%2, %0|%0, %2}",
    0,
    &operand_data[952],
    3,
    2,
    1,
    1
  },
  {
    "*maxdf",
    "#",
    0,
    &operand_data[1179],
    3,
    2,
    3,
    1
  },
  {
    "*maxdf_nonieee",
    "#",
    0,
    &operand_data[1182],
    3,
    2,
    2,
    1
  },
  {
    "*maxdf_sse",
    "maxsd\t{%2, %0|%0, %2}",
    0,
    &operand_data[972],
    3,
    2,
    1,
    1
  },
  {
    "*pro_epilogue_adjust_stack_1",
    (const PTR) output_635,
    0,
    &operand_data[1185],
    3,
    0,
    2,
    3
  },
  {
    "pro_epilogue_adjust_stack_rex64",
    (const PTR) output_636,
    (insn_gen_fn) gen_pro_epilogue_adjust_stack_rex64,
    &operand_data[1188],
    3,
    0,
    2,
    3
  },
  {
    "sse_movsfcc",
    "#",
    (insn_gen_fn) gen_sse_movsfcc,
    &operand_data[1191],
    7,
    0,
    10,
    1
  },
  {
    "sse_movsfcc_eq",
    "#",
    (insn_gen_fn) gen_sse_movsfcc_eq,
    &operand_data[1198],
    6,
    0,
    6,
    1
  },
  {
    "sse_movdfcc",
    "#",
    (insn_gen_fn) gen_sse_movdfcc,
    &operand_data[1204],
    7,
    0,
    10,
    1
  },
  {
    "sse_movdfcc_eq",
    "#",
    (insn_gen_fn) gen_sse_movdfcc_eq,
    &operand_data[1211],
    6,
    0,
    6,
    1
  },
  {
    "*sse_movsfcc_const0_1",
    "#",
    0,
    &operand_data[1217],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movsfcc_const0_2",
    "#",
    0,
    &operand_data[1223],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movsfcc_const0_3",
    "#",
    0,
    &operand_data[1229],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movsfcc_const0_4",
    "#",
    0,
    &operand_data[1235],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movdfcc_const0_1",
    "#",
    0,
    &operand_data[1241],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movdfcc_const0_2",
    "#",
    0,
    &operand_data[1247],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movdfcc_const0_3",
    "#",
    0,
    &operand_data[1253],
    6,
    0,
    1,
    1
  },
  {
    "*sse_movdfcc_const0_4",
    "#",
    0,
    &operand_data[1259],
    6,
    0,
    1,
    1
  },
  {
    "allocate_stack_worker_1",
    "call\t__alloca",
    (insn_gen_fn) gen_allocate_stack_worker_1,
    &operand_data[559],
    1,
    2,
    1,
    1
  },
  {
    "allocate_stack_worker_rex64",
    "call\t__alloca",
    (insn_gen_fn) gen_allocate_stack_worker_rex64,
    &operand_data[546],
    1,
    2,
    1,
    1
  },
  {
    "*call_value_pop_0",
    (const PTR) output_651,
    0,
    &operand_data[1265],
    4,
    0,
    0,
    3
  },
  {
    "*call_value_pop_1",
    (const PTR) output_652,
    0,
    &operand_data[1269],
    4,
    0,
    1,
    3
  },
  {
    "*call_value_0",
    (const PTR) output_653,
    0,
    &operand_data[1265],
    3,
    0,
    0,
    3
  },
  {
    "*call_value_0_rex64",
    (const PTR) output_654,
    0,
    &operand_data[1273],
    3,
    0,
    0,
    3
  },
  {
    "*call_value_1",
    (const PTR) output_655,
    0,
    &operand_data[1269],
    3,
    0,
    1,
    3
  },
  {
    "*call_value_1_rex64",
    (const PTR) output_656,
    0,
    &operand_data[1276],
    3,
    0,
    1,
    3
  },
  {
    "trap",
    "int\t$5",
    (insn_gen_fn) gen_trap,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "*conditional_trap_1",
    (const PTR) output_658,
    0,
    &operand_data[1279],
    2,
    0,
    0,
    3
  },
  {
    "movv4sf_internal",
    "movaps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv4sf_internal,
    &operand_data[1281],
    2,
    0,
    2,
    1
  },
  {
    "movv4si_internal",
    "movaps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv4si_internal,
    &operand_data[1283],
    2,
    0,
    2,
    1
  },
  {
    "movv8qi_internal",
    "movq\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv8qi_internal,
    &operand_data[1285],
    2,
    0,
    2,
    1
  },
  {
    "movv4hi_internal",
    "movq\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv4hi_internal,
    &operand_data[1287],
    2,
    0,
    2,
    1
  },
  {
    "movv2si_internal",
    "movq\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv2si_internal,
    &operand_data[1289],
    2,
    0,
    2,
    1
  },
  {
    "movv2sf_internal",
    "movq\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_movv2sf_internal,
    &operand_data[1291],
    2,
    0,
    2,
    1
  },
  {
    "*pushti",
    "#",
    0,
    &operand_data[1293],
    2,
    0,
    1,
    1
  },
  {
    "*pushv4sf",
    "#",
    0,
    &operand_data[1295],
    2,
    0,
    1,
    1
  },
  {
    "*pushv4si",
    "#",
    0,
    &operand_data[1297],
    2,
    0,
    1,
    1
  },
  {
    "*pushv2si",
    "#",
    0,
    &operand_data[1299],
    2,
    0,
    1,
    1
  },
  {
    "*pushv4hi",
    "#",
    0,
    &operand_data[1301],
    2,
    0,
    1,
    1
  },
  {
    "*pushv8qi",
    "#",
    0,
    &operand_data[1303],
    2,
    0,
    1,
    1
  },
  {
    "*pushv2sf",
    "#",
    0,
    &operand_data[1305],
    2,
    0,
    1,
    1
  },
  {
    "movti_internal",
    (const PTR) output_672,
    (insn_gen_fn) gen_movti_internal,
    &operand_data[1307],
    2,
    0,
    3,
    2
  },
  {
    "*movti_rex64",
    (const PTR) output_673,
    0,
    &operand_data[1309],
    2,
    0,
    5,
    2
  },
  {
    "sse_movaps",
    (const PTR) output_674,
    (insn_gen_fn) gen_sse_movaps,
    &operand_data[1281],
    2,
    0,
    2,
    2
  },
  {
    "sse_movups",
    (const PTR) output_675,
    (insn_gen_fn) gen_sse_movups,
    &operand_data[1281],
    2,
    0,
    2,
    2
  },
  {
    "sse_movmskps",
    "movmskps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_movmskps,
    &operand_data[1311],
    2,
    0,
    1,
    1
  },
  {
    "mmx_pmovmskb",
    "pmovmskb\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_mmx_pmovmskb,
    &operand_data[1313],
    2,
    0,
    1,
    1
  },
  {
    "mmx_maskmovq",
    "maskmovq\t{%2, %1|%1, %2}",
    (insn_gen_fn) gen_mmx_maskmovq,
    &operand_data[1315],
    3,
    0,
    1,
    1
  },
  {
    "mmx_maskmovq_rex",
    "maskmovq\t{%2, %1|%1, %2}",
    (insn_gen_fn) gen_mmx_maskmovq_rex,
    &operand_data[1318],
    3,
    0,
    1,
    1
  },
  {
    "sse_movntv4sf",
    "movntps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_movntv4sf,
    &operand_data[1321],
    2,
    0,
    1,
    1
  },
  {
    "sse_movntdi",
    "movntq\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_movntdi,
    &operand_data[1323],
    2,
    0,
    1,
    1
  },
  {
    "sse_movhlps",
    "movhlps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_movhlps,
    &operand_data[1325],
    3,
    0,
    1,
    1
  },
  {
    "sse_movlhps",
    "movlhps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_movlhps,
    &operand_data[1325],
    3,
    0,
    1,
    1
  },
  {
    "sse_movhps",
    "movhps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_movhps,
    &operand_data[1328],
    3,
    0,
    2,
    1
  },
  {
    "sse_movlps",
    "movlps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_movlps,
    &operand_data[1328],
    3,
    0,
    2,
    1
  },
  {
    "sse_loadss",
    "movss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_loadss,
    &operand_data[1331],
    2,
    0,
    1,
    1
  },
  {
    "sse_movss",
    "movss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_movss,
    &operand_data[1325],
    3,
    0,
    1,
    1
  },
  {
    "sse_storess",
    "movss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_storess,
    &operand_data[1333],
    2,
    0,
    1,
    1
  },
  {
    "sse_shufps",
    "shufps\t{%3, %2, %0|%0, %2, %3}",
    (insn_gen_fn) gen_sse_shufps,
    &operand_data[1335],
    4,
    0,
    1,
    1
  },
  {
    "addv4sf3",
    "addps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmaddv4sf3",
    "addss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmaddv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "subv4sf3",
    "subps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmsubv4sf3",
    "subss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmsubv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "mulv4sf3",
    "mulps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mulv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmmulv4sf3",
    "mulss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmmulv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "divv4sf3",
    "divps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_divv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmdivv4sf3",
    "divss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmdivv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "rcpv4sf2",
    "rcpps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_rcpv4sf2,
    &operand_data[1339],
    2,
    0,
    1,
    1
  },
  {
    "vmrcpv4sf2",
    "rcpss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_vmrcpv4sf2,
    &operand_data[1339],
    3,
    0,
    1,
    1
  },
  {
    "rsqrtv4sf2",
    "rsqrtps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_rsqrtv4sf2,
    &operand_data[1339],
    2,
    0,
    1,
    1
  },
  {
    "vmrsqrtv4sf2",
    "rsqrtss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_vmrsqrtv4sf2,
    &operand_data[1339],
    3,
    0,
    1,
    1
  },
  {
    "sqrtv4sf2",
    "sqrtps\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sqrtv4sf2,
    &operand_data[1339],
    2,
    0,
    1,
    1
  },
  {
    "vmsqrtv4sf2",
    "sqrtss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_vmsqrtv4sf2,
    &operand_data[1339],
    3,
    0,
    1,
    1
  },
  {
    "*sse_andti3_df_1",
    "andpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1342],
    3,
    0,
    1,
    1
  },
  {
    "*sse_andti3_df_2",
    "andpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1345],
    3,
    0,
    1,
    1
  },
  {
    "*sse_andti3_sf_1",
    "andps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1348],
    3,
    0,
    1,
    1
  },
  {
    "*sse_andti3_sf_2",
    "andps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1351],
    3,
    0,
    1,
    1
  },
  {
    "sse_andti3",
    "andps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_andti3,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "*sse_andti3_sse2",
    "pand\t{%2, %0|%0, %2}",
    0,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "*sse_nandti3_df",
    "andnpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1345],
    3,
    0,
    1,
    1
  },
  {
    "*sse_nandti3_sf",
    "andnps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1351],
    3,
    0,
    1,
    1
  },
  {
    "sse_nandti3",
    "andnps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_nandti3,
    &operand_data[1357],
    3,
    0,
    1,
    1
  },
  {
    "*sse_nandti3_sse2",
    "pnand\t{%2, %0|%0, %2}",
    0,
    &operand_data[1357],
    3,
    0,
    1,
    1
  },
  {
    "*sse_iorti3_df_1",
    "orpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1342],
    3,
    0,
    1,
    1
  },
  {
    "*sse_iorti3_df_2",
    "orpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1345],
    3,
    0,
    1,
    1
  },
  {
    "*sse_iorti3_sf_1",
    "orps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1348],
    3,
    0,
    1,
    1
  },
  {
    "*sse_iorti3_sf_2",
    "orps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1351],
    3,
    0,
    1,
    1
  },
  {
    "sse_iorti3",
    "orps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_iorti3,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "*sse_iorti3_sse2",
    "por\t{%2, %0|%0, %2}",
    0,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "*sse_xorti3_df_1",
    "xorpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1342],
    3,
    0,
    1,
    1
  },
  {
    "*sse_xorti3_df_2",
    "xorpd\t{%2, %0|%0, %2}",
    0,
    &operand_data[1345],
    3,
    0,
    1,
    1
  },
  {
    "*sse_xorti3_sf_1",
    "xorps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1348],
    3,
    0,
    1,
    1
  },
  {
    "*sse_xorti3_sf_2",
    "xorps\t{%2, %0|%0, %2}",
    0,
    &operand_data[1351],
    3,
    0,
    1,
    1
  },
  {
    "sse_xorti3",
    "xorps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_xorti3,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "*sse_xorti3_sse2",
    "pxor\t{%2, %0|%0, %2}",
    0,
    &operand_data[1354],
    3,
    0,
    1,
    1
  },
  {
    "sse_clrv4sf",
    "xorps\t{%0, %0|%0, %0}",
    (insn_gen_fn) gen_sse_clrv4sf,
    &operand_data[1325],
    1,
    0,
    1,
    1
  },
  {
    "maskcmpv4sf3",
    "cmp%D3ps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_maskcmpv4sf3,
    &operand_data[1360],
    4,
    0,
    1,
    1
  },
  {
    "maskncmpv4sf3",
    (const PTR) output_728,
    (insn_gen_fn) gen_maskncmpv4sf3,
    &operand_data[1360],
    4,
    0,
    1,
    3
  },
  {
    "vmmaskcmpv4sf3",
    "cmp%D3ss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmmaskcmpv4sf3,
    &operand_data[1360],
    4,
    1,
    1,
    1
  },
  {
    "vmmaskncmpv4sf3",
    (const PTR) output_730,
    (insn_gen_fn) gen_vmmaskncmpv4sf3,
    &operand_data[1360],
    4,
    1,
    1,
    3
  },
  {
    "sse_comi",
    "comiss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_comi,
    &operand_data[1364],
    3,
    0,
    1,
    1
  },
  {
    "sse_ucomi",
    "ucomiss\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_sse_ucomi,
    &operand_data[1367],
    3,
    0,
    1,
    1
  },
  {
    "sse_unpckhps",
    "unpckhps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_unpckhps,
    &operand_data[1325],
    3,
    0,
    1,
    1
  },
  {
    "sse_unpcklps",
    "unpcklps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sse_unpcklps,
    &operand_data[1325],
    3,
    0,
    1,
    1
  },
  {
    "smaxv4sf3",
    "maxps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_smaxv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmsmaxv4sf3",
    "maxss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmsmaxv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "sminv4sf3",
    "minps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sminv4sf3,
    &operand_data[1335],
    3,
    0,
    1,
    1
  },
  {
    "vmsminv4sf3",
    "minss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_vmsminv4sf3,
    &operand_data[1335],
    3,
    1,
    1,
    1
  },
  {
    "cvtpi2ps",
    "cvtpi2ps\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_cvtpi2ps,
    &operand_data[1370],
    3,
    0,
    1,
    1
  },
  {
    "cvtps2pi",
    "cvtps2pi\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_cvtps2pi,
    &operand_data[1373],
    2,
    0,
    1,
    1
  },
  {
    "cvttps2pi",
    "cvttps2pi\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_cvttps2pi,
    &operand_data[1373],
    2,
    0,
    1,
    1
  },
  {
    "cvtsi2ss",
    "cvtsi2ss\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_cvtsi2ss,
    &operand_data[1375],
    3,
    0,
    1,
    1
  },
  {
    "cvtss2si",
    "cvtss2si\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_cvtss2si,
    &operand_data[1378],
    2,
    0,
    1,
    1
  },
  {
    "cvttss2si",
    "cvttss2si\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_cvttss2si,
    &operand_data[1378],
    2,
    0,
    1,
    1
  },
  {
    "addv8qi3",
    "paddb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "addv4hi3",
    "paddw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "addv2si3",
    "paddd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addv2si3,
    &operand_data[1386],
    3,
    0,
    1,
    1
  },
  {
    "ssaddv8qi3",
    "paddsb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ssaddv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "ssaddv4hi3",
    "paddsw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ssaddv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "usaddv8qi3",
    "paddusb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_usaddv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "usaddv4hi3",
    "paddusw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_usaddv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "subv8qi3",
    "psubb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "subv4hi3",
    "psubw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "subv2si3",
    "psubd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subv2si3,
    &operand_data[1386],
    3,
    0,
    1,
    1
  },
  {
    "sssubv8qi3",
    "psubsb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sssubv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "sssubv4hi3",
    "psubsw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sssubv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "ussubv8qi3",
    "psubusb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ussubv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "ussubv4hi3",
    "psubusw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ussubv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "mulv4hi3",
    "pmullw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mulv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "smulv4hi3_highpart",
    "pmulhw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_smulv4hi3_highpart,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "umulv4hi3_highpart",
    "pmulhuw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_umulv4hi3_highpart,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "mmx_pmaddwd",
    "pmaddwd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_pmaddwd,
    &operand_data[1389],
    3,
    2,
    1,
    1
  },
  {
    "mmx_iordi3",
    "por\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_iordi3,
    &operand_data[1392],
    3,
    0,
    1,
    1
  },
  {
    "mmx_xordi3",
    "pxor\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_xordi3,
    &operand_data[1392],
    3,
    0,
    1,
    1
  },
  {
    "mmx_clrdi",
    "pxor\t{%0, %0|%0, %0}",
    (insn_gen_fn) gen_mmx_clrdi,
    &operand_data[1392],
    1,
    0,
    1,
    1
  },
  {
    "mmx_anddi3",
    "pand\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_anddi3,
    &operand_data[1392],
    3,
    0,
    1,
    1
  },
  {
    "mmx_nanddi3",
    "pandn\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_nanddi3,
    &operand_data[1392],
    3,
    0,
    1,
    1
  },
  {
    "mmx_uavgv8qi3",
    "pavgb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_uavgv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "mmx_uavgv4hi3",
    "pavgw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_uavgv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "mmx_psadbw",
    "psadbw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_psadbw,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "mmx_pinsrw",
    "pinsrw\t{%3, %2, %0|%0, %2, %3}",
    (insn_gen_fn) gen_mmx_pinsrw,
    &operand_data[1395],
    4,
    0,
    1,
    1
  },
  {
    "mmx_pextrw",
    "pextrw\t{%2, %1, %0|%0, %1, %2}",
    (insn_gen_fn) gen_mmx_pextrw,
    &operand_data[1399],
    3,
    0,
    1,
    1
  },
  {
    "mmx_pshufw",
    "pshufw\t{%2, %1, %0|%0, %1, %2}",
    (insn_gen_fn) gen_mmx_pshufw,
    &operand_data[1402],
    3,
    0,
    1,
    1
  },
  {
    "eqv8qi3",
    "pcmpeqb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_eqv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "eqv4hi3",
    "pcmpeqw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_eqv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "eqv2si3",
    "pcmpeqd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_eqv2si3,
    &operand_data[1386],
    3,
    0,
    1,
    1
  },
  {
    "gtv8qi3",
    "pcmpgtb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_gtv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "gtv4hi3",
    "pcmpgtw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_gtv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "gtv2si3",
    "pcmpgtd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_gtv2si3,
    &operand_data[1386],
    3,
    0,
    1,
    1
  },
  {
    "umaxv8qi3",
    "pmaxub\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_umaxv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "smaxv4hi3",
    "pmaxsw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_smaxv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "uminv8qi3",
    "pminub\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_uminv8qi3,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "sminv4hi3",
    "pminsw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_sminv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "ashrv4hi3",
    "psraw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ashrv4hi3,
    &operand_data[1405],
    3,
    0,
    1,
    1
  },
  {
    "ashrv2si3",
    "psrad\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ashrv2si3,
    &operand_data[1408],
    3,
    0,
    1,
    1
  },
  {
    "lshrv4hi3",
    "psrlw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_lshrv4hi3,
    &operand_data[1405],
    3,
    0,
    1,
    1
  },
  {
    "lshrv2si3",
    "psrld\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_lshrv2si3,
    &operand_data[1408],
    3,
    0,
    1,
    1
  },
  {
    "mmx_lshrdi3",
    "psrlq\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_lshrdi3,
    &operand_data[1411],
    3,
    0,
    1,
    1
  },
  {
    "ashlv4hi3",
    "psllw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ashlv4hi3,
    &operand_data[1405],
    3,
    0,
    1,
    1
  },
  {
    "ashlv2si3",
    "pslld\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_ashlv2si3,
    &operand_data[1408],
    3,
    0,
    1,
    1
  },
  {
    "mmx_ashldi3",
    "psllq\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_ashldi3,
    &operand_data[1411],
    3,
    0,
    1,
    1
  },
  {
    "mmx_packsswb",
    "packsswb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_packsswb,
    &operand_data[1414],
    3,
    0,
    1,
    1
  },
  {
    "mmx_packssdw",
    "packssdw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_packssdw,
    &operand_data[1417],
    3,
    0,
    1,
    1
  },
  {
    "mmx_packuswb",
    "packuswb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_packuswb,
    &operand_data[1414],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpckhbw",
    "punpckhbw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpckhbw,
    &operand_data[1420],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpckhwd",
    "punpckhwd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpckhwd,
    &operand_data[1423],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpckhdq",
    "punpckhdq\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpckhdq,
    &operand_data[1426],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpcklbw",
    "punpcklbw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpcklbw,
    &operand_data[1420],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpcklwd",
    "punpcklwd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpcklwd,
    &operand_data[1423],
    3,
    0,
    1,
    1
  },
  {
    "mmx_punpckldq",
    "punpckldq\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mmx_punpckldq,
    &operand_data[1426],
    3,
    0,
    1,
    1
  },
  {
    "emms",
    "emms",
    (insn_gen_fn) gen_emms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "ldmxcsr",
    "ldmxcsr\t%0",
    (insn_gen_fn) gen_ldmxcsr,
    &operand_data[1429],
    1,
    0,
    1,
    1
  },
  {
    "stmxcsr",
    "stmxcsr\t%0",
    (insn_gen_fn) gen_stmxcsr,
    &operand_data[302],
    1,
    0,
    1,
    1
  },
  {
    "*sfence_insn",
    "sfence",
    0,
    &operand_data[1430],
    1,
    1,
    0,
    1
  },
  {
    "*sse_prologue_save_insn",
    (const PTR) output_805,
    0,
    &operand_data[1431],
    5,
    0,
    1,
    3
  },
  {
    "addv2sf3",
    "pfadd\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_addv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "subv2sf3",
    "pfsub\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "subrv2sf3",
    "pfsubr\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_subrv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "gtv2sf3",
    "pfcmpgt\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_gtv2sf3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  {
    "gev2sf3",
    "pfcmpge\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_gev2sf3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  {
    "eqv2sf3",
    "pfcmpeq\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_eqv2sf3,
    &operand_data[1439],
    3,
    0,
    1,
    1
  },
  {
    "pfmaxv2sf3",
    "pfmax\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfmaxv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "pfminv2sf3",
    "pfmin\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfminv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "mulv2sf3",
    "pfmul\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_mulv2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "femms",
    "femms",
    (insn_gen_fn) gen_femms,
    &operand_data[0],
    0,
    0,
    0,
    1
  },
  {
    "pf2id",
    "pf2id\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pf2id,
    &operand_data[1442],
    2,
    0,
    1,
    1
  },
  {
    "pf2iw",
    "pf2iw\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pf2iw,
    &operand_data[1442],
    2,
    0,
    1,
    1
  },
  {
    "pfacc",
    "pfacc\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfacc,
    &operand_data[1444],
    3,
    2,
    1,
    1
  },
  {
    "pfnacc",
    "pfnacc\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfnacc,
    &operand_data[1444],
    3,
    2,
    1,
    1
  },
  {
    "pfpnacc",
    "pfpnacc\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfpnacc,
    &operand_data[1444],
    3,
    2,
    1,
    1
  },
  {
    "pi2fw",
    "pi2fw\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pi2fw,
    &operand_data[1447],
    2,
    1,
    1,
    1
  },
  {
    "floatv2si2",
    "pi2fd\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_floatv2si2,
    &operand_data[1447],
    2,
    0,
    1,
    1
  },
  {
    "pavgusb",
    "pavgusb\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pavgusb,
    &operand_data[1380],
    3,
    0,
    1,
    1
  },
  {
    "pfrcpv2sf2",
    "pfrcp\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pfrcpv2sf2,
    &operand_data[1449],
    2,
    0,
    1,
    1
  },
  {
    "pfrcpit1v2sf3",
    "pfrcpit1\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfrcpit1v2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "pfrcpit2v2sf3",
    "pfrcpit2\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfrcpit2v2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "pfrsqrtv2sf2",
    "pfrsqrt\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pfrsqrtv2sf2,
    &operand_data[1449],
    2,
    0,
    1,
    1
  },
  {
    "pfrsqit1v2sf3",
    "pfrsqit1\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pfrsqit1v2sf3,
    &operand_data[1436],
    3,
    0,
    1,
    1
  },
  {
    "pmulhrwv4hi3",
    "pmulhrw\t{%2, %0|%0, %2}",
    (insn_gen_fn) gen_pmulhrwv4hi3,
    &operand_data[1383],
    3,
    0,
    1,
    1
  },
  {
    "pswapdv2si2",
    "pswapd\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pswapdv2si2,
    &operand_data[1451],
    2,
    0,
    1,
    1
  },
  {
    "pswapdv2sf2",
    "pswapd\t{%1, %0|%0, %1}",
    (insn_gen_fn) gen_pswapdv2sf2,
    &operand_data[1449],
    2,
    0,
    1,
    1
  },
  {
    "*prefetch_sse",
    (const PTR) output_832,
    0,
    &operand_data[1453],
    2,
    0,
    1,
    3
  },
  {
    "*prefetch_3dnow",
    (const PTR) output_833,
    0,
    &operand_data[1455],
    2,
    0,
    1,
    3
  },
  {
    "cmpdi",
    0,
    (insn_gen_fn) gen_cmpdi,
    &operand_data[1457],
    2,
    0,
    0,
    0
  },
  {
    "cmpsi",
    0,
    (insn_gen_fn) gen_cmpsi,
    &operand_data[1459],
    2,
    0,
    0,
    0
  },
  {
    "cmphi",
    0,
    (insn_gen_fn) gen_cmphi,
    &operand_data[1461],
    2,
    0,
    0,
    0
  },
  {
    "cmpqi",
    0,
    (insn_gen_fn) gen_cmpqi,
    &operand_data[1463],
    2,
    0,
    0,
    0
  },
  {
    "cmpdi_1_rex64",
    0,
    (insn_gen_fn) gen_cmpdi_1_rex64,
    &operand_data[1465],
    2,
    0,
    0,
    0
  },
  {
    "cmpsi_1",
    0,
    (insn_gen_fn) gen_cmpsi_1,
    &operand_data[9],
    2,
    0,
    2,
    0
  },
  {
    "cmpqi_ext_3",
    0,
    (insn_gen_fn) gen_cmpqi_ext_3,
    &operand_data[1467],
    2,
    0,
    0,
    0
  },
  {
    "cmpxf",
    0,
    (insn_gen_fn) gen_cmpxf,
    &operand_data[1469],
    2,
    0,
    0,
    0
  },
  {
    "cmptf",
    0,
    (insn_gen_fn) gen_cmptf,
    &operand_data[1471],
    2,
    0,
    0,
    0
  },
  {
    "cmpdf",
    0,
    (insn_gen_fn) gen_cmpdf,
    &operand_data[1473],
    2,
    0,
    0,
    0
  },
  {
    "cmpsf",
    0,
    (insn_gen_fn) gen_cmpsf,
    &operand_data[1475],
    2,
    0,
    0,
    0
  },
  {
    "cmpsf+1",
    0,
    0,
    &operand_data[1477],
    2,
    0,
    0,
    0
  },
  {
    "movsi",
    0,
    (insn_gen_fn) gen_movsi,
    &operand_data[1479],
    2,
    0,
    0,
    0
  },
  {
    "movhi",
    0,
    (insn_gen_fn) gen_movhi,
    &operand_data[1461],
    2,
    0,
    0,
    0
  },
  {
    "movstricthi",
    0,
    (insn_gen_fn) gen_movstricthi,
    &operand_data[1481],
    2,
    0,
    0,
    0
  },
  {
    "movqi",
    0,
    (insn_gen_fn) gen_movqi,
    &operand_data[1463],
    2,
    0,
    0,
    0
  },
  {
    "reload_outqi",
    0,
    (insn_gen_fn) gen_reload_outqi,
    &operand_data[1483],
    3,
    0,
    1,
    0
  },
  {
    "movstrictqi",
    0,
    (insn_gen_fn) gen_movstrictqi,
    &operand_data[1486],
    2,
    0,
    0,
    0
  },
  {
    "movdi",
    0,
    (insn_gen_fn) gen_movdi,
    &operand_data[1465],
    2,
    0,
    0,
    0
  },
  {
    "movdi+1",
    0,
    0,
    &operand_data[1488],
    3,
    0,
    0,
    0
  },
  {
    "movdi+2",
    0,
    0,
    &operand_data[1488],
    2,
    0,
    0,
    0
  },
  {
    "movdi+3",
    0,
    0,
    &operand_data[1488],
    2,
    0,
    0,
    0
  },
  {
    "movdi+4",
    0,
    0,
    &operand_data[1491],
    2,
    0,
    0,
    0
  },
  {
    "movsf-4",
    0,
    0,
    &operand_data[1465],
    2,
    0,
    0,
    0
  },
  {
    "movsf-3",
    0,
    0,
    &operand_data[1493],
    3,
    0,
    0,
    0
  },
  {
    "movsf-2",
    0,
    0,
    &operand_data[1493],
    2,
    0,
    0,
    0
  },
  {
    "movsf-1",
    0,
    0,
    &operand_data[1493],
    2,
    0,
    0,
    0
  },
  {
    "movsf",
    0,
    (insn_gen_fn) gen_movsf,
    &operand_data[1496],
    2,
    0,
    0,
    0
  },
  {
    "movsf+1",
    0,
    0,
    &operand_data[1498],
    2,
    0,
    0,
    0
  },
  {
    "movsf+2",
    0,
    0,
    &operand_data[1500],
    2,
    0,
    0,
    0
  },
  {
    "movdf-1",
    0,
    0,
    &operand_data[1500],
    2,
    0,
    0,
    0
  },
  {
    "movdf",
    0,
    (insn_gen_fn) gen_movdf,
    &operand_data[1502],
    2,
    0,
    0,
    0
  },
  {
    "movdf+1",
    0,
    0,
    &operand_data[1504],
    2,
    0,
    0,
    0
  },
  {
    "movdf+2",
    0,
    0,
    &operand_data[1504],
    2,
    0,
    0,
    0
  },
  {
    "movxf-2",
    0,
    0,
    &operand_data[1506],
    2,
    0,
    0,
    0
  },
  {
    "movxf-1",
    0,
    0,
    &operand_data[1502],
    2,
    0,
    0,
    0
  },
  {
    "movxf",
    0,
    (insn_gen_fn) gen_movxf,
    &operand_data[1508],
    2,
    0,
    0,
    0
  },
  {
    "movtf",
    0,
    (insn_gen_fn) gen_movtf,
    &operand_data[1510],
    2,
    0,
    0,
    0
  },
  {
    "movtf+1",
    0,
    0,
    &operand_data[1512],
    2,
    0,
    0,
    0
  },
  {
    "movtf+2",
    0,
    0,
    &operand_data[1514],
    2,
    0,
    0,
    0
  },
  {
    "movtf+3",
    0,
    0,
    &operand_data[1516],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2-3",
    0,
    0,
    &operand_data[1516],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2-2",
    0,
    0,
    &operand_data[1518],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2-1",
    0,
    0,
    &operand_data[1520],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2",
    0,
    (insn_gen_fn) gen_zero_extendhisi2,
    &operand_data[1522],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendhisi2+1",
    0,
    0,
    &operand_data[1524],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2",
    0,
    (insn_gen_fn) gen_zero_extendqihi2,
    &operand_data[1525],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2+1",
    0,
    0,
    &operand_data[1525],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqihi2+2",
    0,
    0,
    &operand_data[1525],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2-1",
    0,
    0,
    &operand_data[1527],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2",
    0,
    (insn_gen_fn) gen_zero_extendqisi2,
    &operand_data[1529],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2+1",
    0,
    0,
    &operand_data[1529],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendqisi2+2",
    0,
    0,
    &operand_data[1529],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendsidi2-1",
    0,
    0,
    &operand_data[1531],
    2,
    0,
    0,
    0
  },
  {
    "zero_extendsidi2",
    0,
    (insn_gen_fn) gen_zero_extendsidi2,
    &operand_data[1533],
    2,
    0,
    1,
    0
  },
  {
    "zero_extendsidi2+1",
    0,
    0,
    &operand_data[1493],
    1,
    0,
    0,
    0
  },
  {
    "zero_extendsidi2+2",
    0,
    0,
    &operand_data[1535],
    2,
    0,
    0,
    0
  },
  {
    "extendsidi2-1",
    0,
    0,
    &operand_data[1537],
    2,
    0,
    0,
    0
  },
  {
    "extendsidi2",
    0,
    (insn_gen_fn) gen_extendsidi2,
    &operand_data[1539],
    3,
    0,
    0,
    0
  },
  {
    "extendsidi2+1",
    0,
    0,
    &operand_data[1542],
    3,
    0,
    0,
    0
  },
  {
    "extendsidi2+2",
    0,
    0,
    &operand_data[1542],
    3,
    0,
    0,
    0
  },
  {
    "extendsidi2+3",
    0,
    0,
    &operand_data[1539],
    3,
    0,
    0,
    0
  },
  {
    "extendsidi2+4",
    0,
    0,
    &operand_data[1545],
    2,
    0,
    0,
    0
  },
  {
    "extendsidi2+5",
    0,
    0,
    &operand_data[1545],
    2,
    0,
    0,
    0
  },
  {
    "extendsidi2+6",
    0,
    0,
    &operand_data[1547],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2-5",
    0,
    0,
    &operand_data[1549],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2-4",
    0,
    0,
    &operand_data[1549],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2-3",
    0,
    0,
    &operand_data[1551],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2-2",
    0,
    0,
    &operand_data[1553],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2-1",
    0,
    0,
    &operand_data[1553],
    2,
    0,
    0,
    0
  },
  {
    "extendsfdf2",
    0,
    (insn_gen_fn) gen_extendsfdf2,
    &operand_data[1555],
    2,
    0,
    0,
    0
  },
  {
    "extendsfxf2",
    0,
    (insn_gen_fn) gen_extendsfxf2,
    &operand_data[1557],
    2,
    0,
    0,
    0
  },
  {
    "extendsftf2",
    0,
    (insn_gen_fn) gen_extendsftf2,
    &operand_data[1559],
    2,
    0,
    0,
    0
  },
  {
    "extenddfxf2",
    0,
    (insn_gen_fn) gen_extenddfxf2,
    &operand_data[1561],
    2,
    0,
    0,
    0
  },
  {
    "extenddftf2",
    0,
    (insn_gen_fn) gen_extenddftf2,
    &operand_data[1563],
    2,
    0,
    0,
    0
  },
  {
    "truncdfsf2",
    0,
    (insn_gen_fn) gen_truncdfsf2,
    &operand_data[1565],
    2,
    1,
    0,
    0
  },
  {
    "truncdfsf2+1",
    0,
    0,
    &operand_data[1567],
    3,
    0,
    0,
    0
  },
  {
    "truncdfsf2+2",
    0,
    0,
    &operand_data[1570],
    3,
    0,
    0,
    0
  },
  {
    "truncxfsf2-1",
    0,
    0,
    &operand_data[1573],
    3,
    0,
    0,
    0
  },
  {
    "truncxfsf2",
    0,
    (insn_gen_fn) gen_truncxfsf2,
    &operand_data[1576],
    2,
    1,
    0,
    0
  },
  {
    "truncxfsf2+1",
    0,
    0,
    &operand_data[1578],
    3,
    0,
    0,
    0
  },
  {
    "trunctfsf2-1",
    0,
    0,
    &operand_data[1581],
    3,
    0,
    0,
    0
  },
  {
    "trunctfsf2",
    0,
    (insn_gen_fn) gen_trunctfsf2,
    &operand_data[1584],
    2,
    1,
    0,
    0
  },
  {
    "trunctfsf2+1",
    0,
    0,
    &operand_data[1586],
    3,
    0,
    0,
    0
  },
  {
    "truncxfdf2-1",
    0,
    0,
    &operand_data[1589],
    3,
    0,
    0,
    0
  },
  {
    "truncxfdf2",
    0,
    (insn_gen_fn) gen_truncxfdf2,
    &operand_data[1592],
    2,
    1,
    0,
    0
  },
  {
    "truncxfdf2+1",
    0,
    0,
    &operand_data[1594],
    3,
    0,
    0,
    0
  },
  {
    "trunctfdf2-1",
    0,
    0,
    &operand_data[1597],
    3,
    0,
    0,
    0
  },
  {
    "trunctfdf2",
    0,
    (insn_gen_fn) gen_trunctfdf2,
    &operand_data[1600],
    2,
    1,
    0,
    0
  },
  {
    "trunctfdf2+1",
    0,
    0,
    &operand_data[1602],
    3,
    0,
    0,
    0
  },
  {
    "fix_truncxfdi2-1",
    0,
    0,
    &operand_data[1605],
    3,
    0,
    0,
    0
  },
  {
    "fix_truncxfdi2",
    0,
    (insn_gen_fn) gen_fix_truncxfdi2,
    &operand_data[1608],
    2,
    0,
    0,
    0
  },
  {
    "fix_trunctfdi2",
    0,
    (insn_gen_fn) gen_fix_trunctfdi2,
    &operand_data[1610],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncdfdi2",
    0,
    (insn_gen_fn) gen_fix_truncdfdi2,
    &operand_data[1612],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfdi2",
    0,
    (insn_gen_fn) gen_fix_truncsfdi2,
    &operand_data[1614],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfdi2+1",
    0,
    0,
    &operand_data[1616],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfdi2+2",
    0,
    0,
    &operand_data[1618],
    6,
    0,
    0,
    0
  },
  {
    "fix_truncxfsi2-1",
    0,
    0,
    &operand_data[1624],
    6,
    0,
    0,
    0
  },
  {
    "fix_truncxfsi2",
    0,
    (insn_gen_fn) gen_fix_truncxfsi2,
    &operand_data[1630],
    2,
    0,
    0,
    0
  },
  {
    "fix_trunctfsi2",
    0,
    (insn_gen_fn) gen_fix_trunctfsi2,
    &operand_data[1632],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncdfsi2",
    0,
    (insn_gen_fn) gen_fix_truncdfsi2,
    &operand_data[1634],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfsi2",
    0,
    (insn_gen_fn) gen_fix_truncsfsi2,
    &operand_data[1636],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfsi2+1",
    0,
    0,
    &operand_data[1638],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfsi2+2",
    0,
    0,
    &operand_data[1640],
    5,
    0,
    0,
    0
  },
  {
    "fix_truncxfhi2-1",
    0,
    0,
    &operand_data[1644],
    5,
    0,
    0,
    0
  },
  {
    "fix_truncxfhi2",
    0,
    (insn_gen_fn) gen_fix_truncxfhi2,
    &operand_data[1649],
    2,
    0,
    0,
    0
  },
  {
    "fix_trunctfhi2",
    0,
    (insn_gen_fn) gen_fix_trunctfhi2,
    &operand_data[1651],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncdfhi2",
    0,
    (insn_gen_fn) gen_fix_truncdfhi2,
    &operand_data[1653],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfhi2",
    0,
    (insn_gen_fn) gen_fix_truncsfhi2,
    &operand_data[1655],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfhi2+1",
    0,
    0,
    &operand_data[1657],
    2,
    0,
    0,
    0
  },
  {
    "fix_truncsfhi2+2",
    0,
    0,
    &operand_data[1659],
    5,
    0,
    0,
    0
  },
  {
    "floatsisf2-1",
    0,
    0,
    &operand_data[1664],
    5,
    0,
    0,
    0
  },
  {
    "floatsisf2",
    0,
    (insn_gen_fn) gen_floatsisf2,
    &operand_data[1637],
    2,
    0,
    0,
    0
  },
  {
    "floatdisf2",
    0,
    (insn_gen_fn) gen_floatdisf2,
    &operand_data[1615],
    2,
    0,
    0,
    0
  },
  {
    "floatsidf2",
    0,
    (insn_gen_fn) gen_floatsidf2,
    &operand_data[1635],
    2,
    0,
    0,
    0
  },
  {
    "floatdidf2",
    0,
    (insn_gen_fn) gen_floatdidf2,
    &operand_data[1613],
    2,
    0,
    0,
    0
  },
  {
    "floatdidf2+1",
    0,
    0,
    &operand_data[1669],
    2,
    0,
    0,
    0
  },
  {
    "adddi3",
    0,
    (insn_gen_fn) gen_adddi3,
    &operand_data[1671],
    3,
    0,
    0,
    0
  },
  {
    "adddi3+1",
    0,
    0,
    &operand_data[1674],
    3,
    0,
    0,
    0
  },
  {
    "addsi3",
    0,
    (insn_gen_fn) gen_addsi3,
    &operand_data[1677],
    3,
    0,
    0,
    0
  },
  {
    "addsi3+1",
    0,
    0,
    &operand_data[1680],
    4,
    0,
    0,
    0
  },
  {
    "addsi3+2",
    0,
    0,
    &operand_data[1684],
    4,
    0,
    0,
    0
  },
  {
    "addsi3+3",
    0,
    0,
    &operand_data[1688],
    4,
    0,
    0,
    0
  },
  {
    "addsi3+4",
    0,
    0,
    &operand_data[1692],
    4,
    0,
    0,
    0
  },
  {
    "addsi3+5",
    0,
    0,
    &operand_data[1696],
    5,
    0,
    0,
    0
  },
  {
    "addhi3-4",
    0,
    0,
    &operand_data[1701],
    5,
    0,
    0,
    0
  },
  {
    "addhi3-3",
    0,
    0,
    &operand_data[1706],
    3,
    0,
    0,
    0
  },
  {
    "addhi3-2",
    0,
    0,
    &operand_data[1709],
    3,
    0,
    0,
    0
  },
  {
    "addhi3-1",
    0,
    0,
    &operand_data[1712],
    3,
    0,
    0,
    0
  },
  {
    "addhi3",
    0,
    (insn_gen_fn) gen_addhi3,
    &operand_data[1715],
    3,
    0,
    0,
    0
  },
  {
    "addqi3",
    0,
    (insn_gen_fn) gen_addqi3,
    &operand_data[1718],
    3,
    0,
    0,
    0
  },
  {
    "addxf3",
    0,
    (insn_gen_fn) gen_addxf3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  {
    "addtf3",
    0,
    (insn_gen_fn) gen_addtf3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  {
    "adddf3",
    0,
    (insn_gen_fn) gen_adddf3,
    &operand_data[1727],
    3,
    0,
    0,
    0
  },
  {
    "addsf3",
    0,
    (insn_gen_fn) gen_addsf3,
    &operand_data[1730],
    3,
    0,
    0,
    0
  },
  {
    "subdi3",
    0,
    (insn_gen_fn) gen_subdi3,
    &operand_data[1671],
    3,
    0,
    0,
    0
  },
  {
    "subdi3+1",
    0,
    0,
    &operand_data[1674],
    3,
    0,
    0,
    0
  },
  {
    "subsi3",
    0,
    (insn_gen_fn) gen_subsi3,
    &operand_data[1677],
    3,
    0,
    0,
    0
  },
  {
    "subhi3",
    0,
    (insn_gen_fn) gen_subhi3,
    &operand_data[1715],
    3,
    0,
    0,
    0
  },
  {
    "subqi3",
    0,
    (insn_gen_fn) gen_subqi3,
    &operand_data[1718],
    3,
    0,
    0,
    0
  },
  {
    "subxf3",
    0,
    (insn_gen_fn) gen_subxf3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  {
    "subtf3",
    0,
    (insn_gen_fn) gen_subtf3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  {
    "subdf3",
    0,
    (insn_gen_fn) gen_subdf3,
    &operand_data[1727],
    3,
    0,
    0,
    0
  },
  {
    "subsf3",
    0,
    (insn_gen_fn) gen_subsf3,
    &operand_data[1730],
    3,
    0,
    0,
    0
  },
  {
    "muldi3",
    0,
    (insn_gen_fn) gen_muldi3,
    &operand_data[1733],
    3,
    0,
    0,
    0
  },
  {
    "mulsi3",
    0,
    (insn_gen_fn) gen_mulsi3,
    &operand_data[1736],
    3,
    0,
    0,
    0
  },
  {
    "mulhi3",
    0,
    (insn_gen_fn) gen_mulhi3,
    &operand_data[1739],
    3,
    0,
    0,
    0
  },
  {
    "mulqi3",
    0,
    (insn_gen_fn) gen_mulqi3,
    &operand_data[1742],
    3,
    0,
    0,
    0
  },
  {
    "umulqihi3",
    0,
    (insn_gen_fn) gen_umulqihi3,
    &operand_data[1745],
    3,
    0,
    0,
    0
  },
  {
    "mulqihi3",
    0,
    (insn_gen_fn) gen_mulqihi3,
    &operand_data[1745],
    3,
    0,
    0,
    0
  },
  {
    "umulditi3",
    0,
    (insn_gen_fn) gen_umulditi3,
    &operand_data[1748],
    3,
    0,
    0,
    0
  },
  {
    "umulsidi3",
    0,
    (insn_gen_fn) gen_umulsidi3,
    &operand_data[1750],
    3,
    0,
    0,
    0
  },
  {
    "mulditi3",
    0,
    (insn_gen_fn) gen_mulditi3,
    &operand_data[1748],
    3,
    0,
    0,
    0
  },
  {
    "mulsidi3",
    0,
    (insn_gen_fn) gen_mulsidi3,
    &operand_data[1750],
    3,
    0,
    0,
    0
  },
  {
    "umuldi3_highpart",
    0,
    (insn_gen_fn) gen_umuldi3_highpart,
    &operand_data[1753],
    4,
    0,
    0,
    0
  },
  {
    "umulsi3_highpart",
    0,
    (insn_gen_fn) gen_umulsi3_highpart,
    &operand_data[1757],
    4,
    0,
    0,
    0
  },
  {
    "smuldi3_highpart",
    0,
    (insn_gen_fn) gen_smuldi3_highpart,
    &operand_data[1761],
    4,
    0,
    1,
    0
  },
  {
    "smulsi3_highpart",
    0,
    (insn_gen_fn) gen_smulsi3_highpart,
    &operand_data[1757],
    4,
    0,
    0,
    0
  },
  {
    "mulxf3",
    0,
    (insn_gen_fn) gen_mulxf3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  {
    "multf3",
    0,
    (insn_gen_fn) gen_multf3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  {
    "muldf3",
    0,
    (insn_gen_fn) gen_muldf3,
    &operand_data[1727],
    3,
    0,
    0,
    0
  },
  {
    "mulsf3",
    0,
    (insn_gen_fn) gen_mulsf3,
    &operand_data[1730],
    3,
    0,
    0,
    0
  },
  {
    "divxf3",
    0,
    (insn_gen_fn) gen_divxf3,
    &operand_data[1721],
    3,
    0,
    0,
    0
  },
  {
    "divtf3",
    0,
    (insn_gen_fn) gen_divtf3,
    &operand_data[1724],
    3,
    0,
    0,
    0
  },
  {
    "divdf3",
    0,
    (insn_gen_fn) gen_divdf3,
    &operand_data[1727],
    3,
    0,
    0,
    0
  },
  {
    "divsf3",
    0,
    (insn_gen_fn) gen_divsf3,
    &operand_data[1730],
    3,
    0,
    0,
    0
  },
  {
    "divmoddi4",
    0,
    (insn_gen_fn) gen_divmoddi4,
    &operand_data[1765],
    4,
    2,
    0,
    0
  },
  {
    "divmoddi4+1",
    0,
    0,
    &operand_data[1765],
    4,
    0,
    0,
    0
  },
  {
    "divmodsi4",
    0,
    (insn_gen_fn) gen_divmodsi4,
    &operand_data[1769],
    4,
    2,
    0,
    0
  },
  {
    "divmodsi4+1",
    0,
    0,
    &operand_data[1769],
    4,
    0,
    0,
    0
  },
  {
    "divmodsi4+2",
    0,
    0,
    &operand_data[1765],
    4,
    0,
    0,
    0
  },
  {
    "udivmodhi4-1",
    0,
    0,
    &operand_data[1769],
    4,
    0,
    0,
    0
  },
  {
    "udivmodhi4",
    0,
    (insn_gen_fn) gen_udivmodhi4,
    &operand_data[1773],
    4,
    4,
    0,
    0
  },
  {
    "testsi_ccno_1",
    0,
    (insn_gen_fn) gen_testsi_ccno_1,
    &operand_data[1777],
    2,
    0,
    0,
    0
  },
  {
    "testqi_ccz_1",
    0,
    (insn_gen_fn) gen_testqi_ccz_1,
    &operand_data[1779],
    2,
    0,
    0,
    0
  },
  {
    "testqi_ext_ccno_0",
    0,
    (insn_gen_fn) gen_testqi_ext_ccno_0,
    &operand_data[1781],
    2,
    0,
    0,
    0
  },
  {
    "testqi_ext_ccno_0+1",
    0,
    0,
    &operand_data[1783],
    3,
    0,
    0,
    0
  },
  {
    "anddi3",
    0,
    (insn_gen_fn) gen_anddi3,
    &operand_data[1786],
    3,
    0,
    0,
    0
  },
  {
    "andsi3",
    0,
    (insn_gen_fn) gen_andsi3,
    &operand_data[1677],
    3,
    0,
    0,
    0
  },
  {
    "andsi3+1",
    0,
    0,
    &operand_data[1520],
    1,
    0,
    0,
    0
  },
  {
    "andsi3+2",
    0,
    0,
    &operand_data[1467],
    1,
    0,
    0,
    0
  },
  {
    "andhi3-1",
    0,
    0,
    &operand_data[1467],
    1,
    0,
    0,
    0
  },
  {
    "andhi3",
    0,
    (insn_gen_fn) gen_andhi3,
    &operand_data[1715],
    3,
    0,
    0,
    0
  },
  {
    "andqi3",
    0,
    (insn_gen_fn) gen_andqi3,
    &operand_data[1718],
    3,
    0,
    0,
    0
  },
  {
    "iordi3",
    0,
    (insn_gen_fn) gen_iordi3,
    &operand_data[1671],
    3,
    0,
    0,
    0
  },
  {
    "iorsi3",
    0,
    (insn_gen_fn) gen_iorsi3,
    &operand_data[1677],
    3,
    0,
    0,
    0
  },
  {
    "iorhi3",
    0,
    (insn_gen_fn) gen_iorhi3,
    &operand_data[1715],
    3,
    0,
    0,
    0
  },
  {
    "iorqi3",
    0,
    (insn_gen_fn) gen_iorqi3,
    &operand_data[1718],
    3,
    0,
    0,
    0
  },
  {
    "xordi3",
    0,
    (insn_gen_fn) gen_xordi3,
    &operand_data[1671],
    3,
    0,
    0,
    0
  },
  {
    "xorsi3",
    0,
    (insn_gen_fn) gen_xorsi3,
    &operand_data[1677],
    3,
    0,
    0,
    0
  },
  {
    "xorhi3",
    0,
    (insn_gen_fn) gen_xorhi3,
    &operand_data[1715],
    3,
    0,
    0,
    0
  },
  {
    "xorqi3",
    0,
    (insn_gen_fn) gen_xorqi3,
    &operand_data[1718],
    3,
    0,
    0,
    0
  },
  {
    "xorqi_cc_ext_1",
    0,
    (insn_gen_fn) gen_xorqi_cc_ext_1,
    &operand_data[1789],
    3,
    2,
    0,
    0
  },
  {
    "negdi2",
    0,
    (insn_gen_fn) gen_negdi2,
    &operand_data[1671],
    2,
    0,
    0,
    0
  },
  {
    "negdi2+1",
    0,
    0,
    &operand_data[1465],
    2,
    0,
    0,
    0
  },
  {
    "negsi2",
    0,
    (insn_gen_fn) gen_negsi2,
    &operand_data[1677],
    2,
    0,
    0,
    0
  },
  {
    "neghi2",
    0,
    (insn_gen_fn) gen_neghi2,
    &operand_data[1715],
    2,
    0,
    0,
    0
  },
  {
    "negqi2",
    0,
    (insn_gen_fn) gen_negqi2,
    &operand_data[1718],
    2,
    0,
    0,
    0
  },
  {
    "negsf2",
    0,
    (insn_gen_fn) gen_negsf2,
    &operand_data[1792],
    2,
    0,
    0,
    0
  },
  {
    "negsf2+1",
    0,
    0,
    &operand_data[1794],
    3,
    0,
    0,
    0
  },
  {
    "negsf2+2",
    0,
    0,
    &operand_data[1797],
    3,
    0,
    0,
    0
  },
  {
    "negsf2+3",
    0,
    0,
    &operand_data[1800],
    3,
    0,
    0,
    0
  },
  {
    "negdf2-3",
    0,
    0,
    &operand_data[1730],
    2,
    0,
    0,
    0
  },
  {
    "negdf2-2",
    0,
    0,
    &operand_data[1730],
    2,
    0,
    0,
    0
  },
  {
    "negdf2-1",
    0,
    0,
    &operand_data[1803],
    2,
    0,
    0,
    0
  },
  {
    "negdf2",
    0,
    (insn_gen_fn) gen_negdf2,
    &operand_data[1805],
    2,
    0,
    0,
    0
  },
  {
    "negdf2+1",
    0,
    0,
    &operand_data[1807],
    3,
    0,
    0,
    0
  },
  {
    "negdf2+2",
    0,
    0,
    &operand_data[1810],
    3,
    0,
    0,
    0
  },
  {
    "negdf2+3",
    0,
    0,
    &operand_data[1810],
    3,
    0,
    0,
    0
  },
  {
    "negxf2-3",
    0,
    0,
    &operand_data[1813],
    3,
    0,
    0,
    0
  },
  {
    "negxf2-2",
    0,
    0,
    &operand_data[1727],
    2,
    0,
    0,
    0
  },
  {
    "negxf2-1",
    0,
    0,
    &operand_data[1727],
    2,
    0,
    0,
    0
  },
  {
    "negxf2",
    0,
    (insn_gen_fn) gen_negxf2,
    &operand_data[1816],
    2,
    0,
    0,
    0
  },
  {
    "negtf2",
    0,
    (insn_gen_fn) gen_negtf2,
    &operand_data[1818],
    2,
    0,
    0,
    0
  },
  {
    "negtf2+1",
    0,
    0,
    &operand_data[1721],
    2,
    0,
    0,
    0
  },
  {
    "negtf2+2",
    0,
    0,
    &operand_data[1721],
    2,
    0,
    0,
    0
  },
  {
    "abssf2-2",
    0,
    0,
    &operand_data[1724],
    2,
    0,
    0,
    0
  },
  {
    "abssf2-1",
    0,
    0,
    &operand_data[1724],
    2,
    0,
    0,
    0
  },
  {
    "abssf2",
    0,
    (insn_gen_fn) gen_abssf2,
    &operand_data[1792],
    2,
    0,
    0,
    0
  },
  {
    "abssf2+1",
    0,
    0,
    &operand_data[1794],
    3,
    0,
    0,
    0
  },
  {
    "abssf2+2",
    0,
    0,
    &operand_data[1797],
    3,
    0,
    0,
    0
  },
  {
    "abssf2+3",
    0,
    0,
    &operand_data[1800],
    3,
    0,
    0,
    0
  },
  {
    "absdf2-3",
    0,
    0,
    &operand_data[1730],
    2,
    0,
    0,
    0
  },
  {
    "absdf2-2",
    0,
    0,
    &operand_data[1730],
    2,
    0,
    0,
    0
  },
  {
    "absdf2-1",
    0,
    0,
    &operand_data[1803],
    2,
    0,
    0,
    0
  },
  {
    "absdf2",
    0,
    (insn_gen_fn) gen_absdf2,
    &operand_data[1805],
    2,
    0,
    0,
    0
  },
  {
    "absdf2+1",
    0,
    0,
    &operand_data[1807],
    3,
    0,
    0,
    0
  },
  {
    "absdf2+2",
    0,
    0,
    &operand_data[1810],
    3,
    0,
    0,
    0
  },
  {
    "absdf2+3",
    0,
    0,
    &operand_data[1813],
    3,
    0,
    0,
    0
  },
  {
    "absxf2-2",
    0,
    0,
    &operand_data[1727],
    2,
    0,
    0,
    0
  },
  {
    "absxf2-1",
    0,
    0,
    &operand_data[1727],
    2,
    0,
    0,
    0
  },
  {
    "absxf2",
    0,
    (insn_gen_fn) gen_absxf2,
    &operand_data[1816],
    2,
    0,
    0,
    0
  },
  {
    "abstf2",
    0,
    (insn_gen_fn) gen_abstf2,
    &operand_data[1818],
    2,
    0,
    0,
    0
  },
  {
    "abstf2+1",
    0,
    0,
    &operand_data[1721],
    2,
    0,
    0,
    0
  },
  {
    "abstf2+2",
    0,
    0,
    &operand_data[1721],
    2,
    0,
    0,
    0
  },
  {
    "one_cmpldi2-2",
    0,
    0,
    &operand_data[1724],
    2,
    0,
    0,
    0
  },
  {
    "one_cmpldi2-1",
    0,
    0,
    &operand_data[1724],
    2,
    0,
    0,
    0
  },
  {
    "one_cmpldi2",
    0,
    (insn_gen_fn) gen_one_cmpldi2,
    &operand_data[1671],
    2,
    0,
    0,
    0
  },
  {
    "one_cmpldi2+1",
    0,
    0,
    &operand_data[1671],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplsi2",
    0,
    (insn_gen_fn) gen_one_cmplsi2,
    &operand_data[1677],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplsi2+1",
    0,
    0,
    &operand_data[1677],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplhi2-1",
    0,
    0,
    &operand_data[1535],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplhi2",
    0,
    (insn_gen_fn) gen_one_cmplhi2,
    &operand_data[1715],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplhi2+1",
    0,
    0,
    &operand_data[1715],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplqi2",
    0,
    (insn_gen_fn) gen_one_cmplqi2,
    &operand_data[1718],
    2,
    0,
    0,
    0
  },
  {
    "one_cmplqi2+1",
    0,
    0,
    &operand_data[1718],
    2,
    0,
    0,
    0
  },
  {
    "ashldi3",
    0,
    (insn_gen_fn) gen_ashldi3,
    &operand_data[1820],
    3,
    0,
    0,
    0
  },
  {
    "ashldi3+1",
    0,
    0,
    &operand_data[1823],
    3,
    0,
    0,
    0
  },
  {
    "ashldi3+2",
    0,
    0,
    &operand_data[1826],
    4,
    0,
    0,
    0
  },
  {
    "x86_shift_adj_1-1",
    0,
    0,
    &operand_data[1826],
    3,
    0,
    0,
    0
  },
  {
    "x86_shift_adj_1",
    0,
    (insn_gen_fn) gen_x86_shift_adj_1,
    &operand_data[1830],
    4,
    3,
    1,
    0
  },
  {
    "x86_shift_adj_2",
    0,
    (insn_gen_fn) gen_x86_shift_adj_2,
    &operand_data[1830],
    3,
    0,
    0,
    0
  },
  {
    "ashlsi3",
    0,
    (insn_gen_fn) gen_ashlsi3,
    &operand_data[1834],
    3,
    0,
    0,
    0
  },
  {
    "ashlsi3+1",
    0,
    0,
    &operand_data[1837],
    3,
    0,
    0,
    0
  },
  {
    "ashlhi3-1",
    0,
    0,
    &operand_data[1840],
    3,
    0,
    0,
    0
  },
  {
    "ashlhi3",
    0,
    (insn_gen_fn) gen_ashlhi3,
    &operand_data[1843],
    3,
    0,
    0,
    0
  },
  {
    "ashlqi3",
    0,
    (insn_gen_fn) gen_ashlqi3,
    &operand_data[1846],
    3,
    0,
    0,
    0
  },
  {
    "ashrdi3",
    0,
    (insn_gen_fn) gen_ashrdi3,
    &operand_data[1820],
    3,
    0,
    0,
    0
  },
  {
    "ashrdi3+1",
    0,
    0,
    &operand_data[1826],
    4,
    0,
    0,
    0
  },
  {
    "x86_shift_adj_3-1",
    0,
    0,
    &operand_data[1826],
    3,
    0,
    0,
    0
  },
  {
    "x86_shift_adj_3",
    0,
    (insn_gen_fn) gen_x86_shift_adj_3,
    &operand_data[1830],
    3,
    0,
    0,
    0
  },
  {
    "ashrsi3",
    0,
    (insn_gen_fn) gen_ashrsi3,
    &operand_data[1834],
    3,
    0,
    0,
    0
  },
  {
    "ashrhi3",
    0,
    (insn_gen_fn) gen_ashrhi3,
    &operand_data[1843],
    3,
    0,
    0,
    0
  },
  {
    "ashrqi3",
    0,
    (insn_gen_fn) gen_ashrqi3,
    &operand_data[1846],
    3,
    0,
    0,
    0
  },
  {
    "lshrdi3",
    0,
    (insn_gen_fn) gen_lshrdi3,
    &operand_data[1820],
    3,
    0,
    0,
    0
  },
  {
    "lshrdi3+1",
    0,
    0,
    &operand_data[1826],
    4,
    0,
    0,
    0
  },
  {
    "lshrsi3-1",
    0,
    0,
    &operand_data[1826],
    3,
    0,
    0,
    0
  },
  {
    "lshrsi3",
    0,
    (insn_gen_fn) gen_lshrsi3,
    &operand_data[1834],
    3,
    0,
    0,
    0
  },
  {
    "lshrhi3",
    0,
    (insn_gen_fn) gen_lshrhi3,
    &operand_data[1843],
    3,
    0,
    0,
    0
  },
  {
    "lshrqi3",
    0,
    (insn_gen_fn) gen_lshrqi3,
    &operand_data[1846],
    3,
    0,
    0,
    0
  },
  {
    "rotldi3",
    0,
    (insn_gen_fn) gen_rotldi3,
    &operand_data[1849],
    3,
    0,
    0,
    0
  },
  {
    "rotlsi3",
    0,
    (insn_gen_fn) gen_rotlsi3,
    &operand_data[1834],
    3,
    0,
    0,
    0
  },
  {
    "rotlhi3",
    0,
    (insn_gen_fn) gen_rotlhi3,
    &operand_data[1843],
    3,
    0,
    0,
    0
  },
  {
    "rotlqi3",
    0,
    (insn_gen_fn) gen_rotlqi3,
    &operand_data[1846],
    3,
    0,
    0,
    0
  },
  {
    "rotrdi3",
    0,
    (insn_gen_fn) gen_rotrdi3,
    &operand_data[1849],
    3,
    0,
    0,
    0
  },
  {
    "rotrsi3",
    0,
    (insn_gen_fn) gen_rotrsi3,
    &operand_data[1834],
    3,
    0,
    0,
    0
  },
  {
    "rotrhi3",
    0,
    (insn_gen_fn) gen_rotrhi3,
    &operand_data[1843],
    3,
    0,
    0,
    0
  },
  {
    "rotrqi3",
    0,
    (insn_gen_fn) gen_rotrqi3,
    &operand_data[1846],
    3,
    0,
    0,
    0
  },
  {
    "extv",
    0,
    (insn_gen_fn) gen_extv,
    &operand_data[1852],
    4,
    0,
    0,
    0
  },
  {
    "extzv",
    0,
    (insn_gen_fn) gen_extzv,
    &operand_data[1856],
    4,
    0,
    0,
    0
  },
  {
    "insv",
    0,
    (insn_gen_fn) gen_insv,
    &operand_data[1857],
    4,
    0,
    0,
    0
  },
  {
    "seq",
    0,
    (insn_gen_fn) gen_seq,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sne",
    0,
    (insn_gen_fn) gen_sne,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sgt",
    0,
    (insn_gen_fn) gen_sgt,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sgtu",
    0,
    (insn_gen_fn) gen_sgtu,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "slt",
    0,
    (insn_gen_fn) gen_slt,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sltu",
    0,
    (insn_gen_fn) gen_sltu,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sge",
    0,
    (insn_gen_fn) gen_sge,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sgeu",
    0,
    (insn_gen_fn) gen_sgeu,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sle",
    0,
    (insn_gen_fn) gen_sle,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sleu",
    0,
    (insn_gen_fn) gen_sleu,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sunordered",
    0,
    (insn_gen_fn) gen_sunordered,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sordered",
    0,
    (insn_gen_fn) gen_sordered,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "suneq",
    0,
    (insn_gen_fn) gen_suneq,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sunge",
    0,
    (insn_gen_fn) gen_sunge,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sungt",
    0,
    (insn_gen_fn) gen_sungt,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sunle",
    0,
    (insn_gen_fn) gen_sunle,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sunlt",
    0,
    (insn_gen_fn) gen_sunlt,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sltgt",
    0,
    (insn_gen_fn) gen_sltgt,
    &operand_data[1528],
    1,
    0,
    0,
    0
  },
  {
    "sltgt+1",
    0,
    0,
    &operand_data[1861],
    2,
    0,
    0,
    0
  },
  {
    "sltgt+2",
    0,
    0,
    &operand_data[1863],
    2,
    0,
    0,
    0
  },
  {
    "beq-2",
    0,
    0,
    &operand_data[1861],
    2,
    0,
    0,
    0
  },
  {
    "beq-1",
    0,
    0,
    &operand_data[1863],
    2,
    0,
    0,
    0
  },
  {
    "beq",
    0,
    (insn_gen_fn) gen_beq,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bne",
    0,
    (insn_gen_fn) gen_bne,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bgt",
    0,
    (insn_gen_fn) gen_bgt,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bgtu",
    0,
    (insn_gen_fn) gen_bgtu,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "blt",
    0,
    (insn_gen_fn) gen_blt,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bltu",
    0,
    (insn_gen_fn) gen_bltu,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bge",
    0,
    (insn_gen_fn) gen_bge,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bgeu",
    0,
    (insn_gen_fn) gen_bgeu,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "ble",
    0,
    (insn_gen_fn) gen_ble,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bleu",
    0,
    (insn_gen_fn) gen_bleu,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bunordered",
    0,
    (insn_gen_fn) gen_bunordered,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bordered",
    0,
    (insn_gen_fn) gen_bordered,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "buneq",
    0,
    (insn_gen_fn) gen_buneq,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bunge",
    0,
    (insn_gen_fn) gen_bunge,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bungt",
    0,
    (insn_gen_fn) gen_bungt,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bunle",
    0,
    (insn_gen_fn) gen_bunle,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bunlt",
    0,
    (insn_gen_fn) gen_bunlt,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bltgt",
    0,
    (insn_gen_fn) gen_bltgt,
    &operand_data[860],
    1,
    1,
    0,
    0
  },
  {
    "bltgt+1",
    0,
    0,
    &operand_data[1864],
    2,
    0,
    0,
    0
  },
  {
    "bltgt+2",
    0,
    0,
    &operand_data[1864],
    2,
    0,
    0,
    0
  },
  {
    "indirect_jump-2",
    0,
    0,
    &operand_data[1866],
    5,
    0,
    0,
    0
  },
  {
    "indirect_jump-1",
    0,
    0,
    &operand_data[1866],
    6,
    0,
    0,
    0
  },
  {
    "indirect_jump",
    0,
    (insn_gen_fn) gen_indirect_jump,
    &operand_data[595],
    1,
    0,
    1,
    0
  },
  {
    "tablejump",
    0,
    (insn_gen_fn) gen_tablejump,
    &operand_data[1872],
    2,
    0,
    1,
    0
  },
  {
    "doloop_end",
    0,
    (insn_gen_fn) gen_doloop_end,
    &operand_data[1873],
    5,
    0,
    0,
    0
  },
  {
    "doloop_end+1",
    0,
    0,
    &operand_data[1877],
    3,
    0,
    0,
    0
  },
  {
    "doloop_end+2",
    0,
    0,
    &operand_data[1880],
    4,
    0,
    0,
    0
  },
  {
    "call_pop-2",
    0,
    0,
    &operand_data[1884],
    4,
    0,
    0,
    0
  },
  {
    "call_pop-1",
    0,
    0,
    &operand_data[1884],
    4,
    0,
    0,
    0
  },
  {
    "call_pop",
    0,
    (insn_gen_fn) gen_call_pop,
    &operand_data[1888],
    4,
    0,
    0,
    0
  },
  {
    "call",
    0,
    (insn_gen_fn) gen_call,
    &operand_data[1892],
    3,
    0,
    0,
    0
  },
  {
    "call_exp",
    0,
    (insn_gen_fn) gen_call_exp,
    &operand_data[1892],
    2,
    0,
    0,
    0
  },
  {
    "call_value_pop",
    0,
    (insn_gen_fn) gen_call_value_pop,
    &operand_data[1894],
    5,
    0,
    0,
    0
  },
  {
    "call_value",
    0,
    (insn_gen_fn) gen_call_value,
    &operand_data[1899],
    4,
    0,
    0,
    0
  },
  {
    "call_value_exp",
    0,
    (insn_gen_fn) gen_call_value_exp,
    &operand_data[1894],
    3,
    0,
    0,
    0
  },
  {
    "untyped_call",
    0,
    (insn_gen_fn) gen_untyped_call,
    &operand_data[1873],
    3,
    0,
    0,
    0
  },
  {
    "return",
    0,
    (insn_gen_fn) gen_return,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "prologue",
    0,
    (insn_gen_fn) gen_prologue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "epilogue",
    0,
    (insn_gen_fn) gen_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "sibcall_epilogue",
    0,
    (insn_gen_fn) gen_sibcall_epilogue,
    &operand_data[0],
    0,
    0,
    0,
    0
  },
  {
    "eh_return",
    0,
    (insn_gen_fn) gen_eh_return,
    &operand_data[1669],
    2,
    0,
    0,
    0
  },
  {
    "eh_return+1",
    0,
    0,
    &operand_data[1478],
    1,
    0,
    0,
    0
  },
  {
    "ffssi2-1",
    0,
    0,
    &operand_data[1535],
    1,
    0,
    0,
    0
  },
  {
    "ffssi2",
    0,
    (insn_gen_fn) gen_ffssi2,
    &operand_data[1479],
    2,
    0,
    0,
    0
  },
  {
    "ffssi2+1",
    0,
    0,
    &operand_data[1903],
    4,
    0,
    0,
    0
  },
  {
    "sqrtsf2-1",
    0,
    0,
    &operand_data[1907],
    4,
    0,
    0,
    0
  },
  {
    "sqrtsf2",
    0,
    (insn_gen_fn) gen_sqrtsf2,
    &operand_data[1731],
    2,
    0,
    0,
    0
  },
  {
    "sqrtdf2",
    0,
    (insn_gen_fn) gen_sqrtdf2,
    &operand_data[1554],
    2,
    0,
    0,
    0
  },
  {
    "movstrsi",
    0,
    (insn_gen_fn) gen_movstrsi,
    &operand_data[1911],
    4,
    0,
    0,
    0
  },
  {
    "movstrdi",
    0,
    (insn_gen_fn) gen_movstrdi,
    &operand_data[1915],
    4,
    0,
    0,
    0
  },
  {
    "strmovdi_rex64",
    0,
    (insn_gen_fn) gen_strmovdi_rex64,
    &operand_data[1706],
    2,
    6,
    0,
    0
  },
  {
    "strmovsi",
    0,
    (insn_gen_fn) gen_strmovsi,
    &operand_data[1543],
    2,
    6,
    0,
    0
  },
  {
    "strmovsi_rex64",
    0,
    (insn_gen_fn) gen_strmovsi_rex64,
    &operand_data[1706],
    2,
    6,
    0,
    0
  },
  {
    "strmovhi",
    0,
    (insn_gen_fn) gen_strmovhi,
    &operand_data[1543],
    2,
    6,
    0,
    0
  },
  {
    "strmovhi_rex64",
    0,
    (insn_gen_fn) gen_strmovhi_rex64,
    &operand_data[1706],
    2,
    6,
    0,
    0
  },
  {
    "strmovqi",
    0,
    (insn_gen_fn) gen_strmovqi,
    &operand_data[1543],
    2,
    6,
    0,
    0
  },
  {
    "strmovqi_rex64",
    0,
    (insn_gen_fn) gen_strmovqi_rex64,
    &operand_data[1706],
    2,
    6,
    0,
    0
  },
  {
    "clrstrsi",
    0,
    (insn_gen_fn) gen_clrstrsi,
    &operand_data[1919],
    3,
    0,
    0,
    0
  },
  {
    "clrstrdi",
    0,
    (insn_gen_fn) gen_clrstrdi,
    &operand_data[1922],
    3,
    0,
    0,
    0
  },
  {
    "strsetdi_rex64",
    0,
    (insn_gen_fn) gen_strsetdi_rex64,
    &operand_data[1706],
    2,
    2,
    0,
    0
  },
  {
    "strsetsi",
    0,
    (insn_gen_fn) gen_strsetsi,
    &operand_data[1543],
    2,
    2,
    0,
    0
  },
  {
    "strsetsi_rex64",
    0,
    (insn_gen_fn) gen_strsetsi_rex64,
    &operand_data[1535],
    2,
    2,
    0,
    0
  },
  {
    "strsethi",
    0,
    (insn_gen_fn) gen_strsethi,
    &operand_data[1524],
    2,
    2,
    0,
    0
  },
  {
    "strsethi_rex64",
    0,
    (insn_gen_fn) gen_strsethi_rex64,
    &operand_data[1925],
    2,
    2,
    0,
    0
  },
  {
    "strsetqi",
    0,
    (insn_gen_fn) gen_strsetqi,
    &operand_data[1531],
    2,
    2,
    0,
    0
  },
  {
    "strsetqi_rex64",
    0,
    (insn_gen_fn) gen_strsetqi_rex64,
    &operand_data[1927],
    2,
    2,
    0,
    0
  },
  {
    "cmpstrsi",
    0,
    (insn_gen_fn) gen_cmpstrsi,
    &operand_data[1929],
    5,
    0,
    0,
    0
  },
  {
    "cmpintqi",
    0,
    (insn_gen_fn) gen_cmpintqi,
    &operand_data[1528],
    1,
    4,
    0,
    0
  },
  {
    "strlensi",
    0,
    (insn_gen_fn) gen_strlensi,
    &operand_data[1934],
    4,
    0,
    0,
    0
  },
  {
    "strlendi",
    0,
    (insn_gen_fn) gen_strlendi,
    &operand_data[1938],
    4,
    0,
    0,
    0
  },
  {
    "strlendi+1",
    0,
    0,
    &operand_data[1942],
    9,
    0,
    0,
    0
  },
  {
    "movdicc-1",
    0,
    0,
    &operand_data[1942],
    9,
    0,
    0,
    0
  },
  {
    "movdicc",
    0,
    (insn_gen_fn) gen_movdicc,
    &operand_data[1951],
    4,
    0,
    0,
    0
  },
  {
    "movsicc",
    0,
    (insn_gen_fn) gen_movsicc,
    &operand_data[1955],
    4,
    0,
    0,
    0
  },
  {
    "movhicc",
    0,
    (insn_gen_fn) gen_movhicc,
    &operand_data[1959],
    4,
    0,
    0,
    0
  },
  {
    "movsfcc",
    0,
    (insn_gen_fn) gen_movsfcc,
    &operand_data[1963],
    4,
    0,
    0,
    0
  },
  {
    "movdfcc",
    0,
    (insn_gen_fn) gen_movdfcc,
    &operand_data[1967],
    4,
    0,
    0,
    0
  },
  {
    "movdfcc+1",
    0,
    0,
    &operand_data[1970],
    5,
    0,
    0,
    0
  },
  {
    "movxfcc",
    0,
    (insn_gen_fn) gen_movxfcc,
    &operand_data[1975],
    4,
    0,
    0,
    0
  },
  {
    "movtfcc",
    0,
    (insn_gen_fn) gen_movtfcc,
    &operand_data[1979],
    4,
    0,
    0,
    0
  },
  {
    "minsf3",
    0,
    (insn_gen_fn) gen_minsf3,
    &operand_data[1730],
    3,
    2,
    0,
    0
  },
  {
    "minsf3+1",
    0,
    0,
    &operand_data[1983],
    5,
    0,
    0,
    0
  },
  {
    "mindf3-1",
    0,
    0,
    &operand_data[1988],
    5,
    0,
    0,
    0
  },
  {
    "mindf3",
    0,
    (insn_gen_fn) gen_mindf3,
    &operand_data[1727],
    3,
    2,
    0,
    0
  },
  {
    "mindf3+1",
    0,
    0,
    &operand_data[1993],
    5,
    0,
    0,
    0
  },
  {
    "maxsf3-1",
    0,
    0,
    &operand_data[1998],
    5,
    0,
    0,
    0
  },
  {
    "maxsf3",
    0,
    (insn_gen_fn) gen_maxsf3,
    &operand_data[1730],
    3,
    2,
    0,
    0
  },
  {
    "maxsf3+1",
    0,
    0,
    &operand_data[1983],
    5,
    0,
    0,
    0
  },
  {
    "maxdf3-1",
    0,
    0,
    &operand_data[1988],
    5,
    0,
    0,
    0
  },
  {
    "maxdf3",
    0,
    (insn_gen_fn) gen_maxdf3,
    &operand_data[1727],
    3,
    2,
    0,
    0
  },
  {
    "maxdf3+1",
    0,
    0,
    &operand_data[1993],
    5,
    0,
    0,
    0
  },
  {
    "pro_epilogue_adjust_stack-1",
    0,
    0,
    &operand_data[1998],
    5,
    0,
    0,
    0
  },
  {
    "pro_epilogue_adjust_stack",
    0,
    (insn_gen_fn) gen_pro_epilogue_adjust_stack,
    &operand_data[1185],
    3,
    0,
    2,
    0
  },
  {
    "pro_epilogue_adjust_stack+1",
    0,
    0,
    &operand_data[2003],
    7,
    0,
    0,
    0
  },
  {
    "pro_epilogue_adjust_stack+2",
    0,
    0,
    &operand_data[2010],
    7,
    0,
    0,
    0
  },
  {
    "allocate_stack_worker-1",
    0,
    0,
    &operand_data[2017],
    6,
    0,
    0,
    0
  },
  {
    "allocate_stack_worker",
    0,
    (insn_gen_fn) gen_allocate_stack_worker,
    &operand_data[1478],
    1,
    0,
    0,
    0
  },
  {
    "allocate_stack",
    0,
    (insn_gen_fn) gen_allocate_stack,
    &operand_data[2023],
    2,
    1,
    1,
    0
  },
  {
    "builtin_setjmp_receiver",
    0,
    (insn_gen_fn) gen_builtin_setjmp_receiver,
    &operand_data[860],
    1,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+1",
    0,
    0,
    &operand_data[2025],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+2",
    0,
    0,
    &operand_data[2029],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+3",
    0,
    0,
    &operand_data[2030],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+4",
    0,
    0,
    &operand_data[1669],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+5",
    0,
    0,
    &operand_data[1669],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+6",
    0,
    0,
    &operand_data[2032],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+7",
    0,
    0,
    &operand_data[2036],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+8",
    0,
    0,
    &operand_data[2039],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+9",
    0,
    0,
    &operand_data[2042],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+10",
    0,
    0,
    &operand_data[2045],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+11",
    0,
    0,
    &operand_data[2048],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+12",
    0,
    0,
    &operand_data[2037],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+13",
    0,
    0,
    &operand_data[2046],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+14",
    0,
    0,
    &operand_data[2049],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+15",
    0,
    0,
    &operand_data[2051],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+16",
    0,
    0,
    &operand_data[2054],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+17",
    0,
    0,
    &operand_data[2057],
    3,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+18",
    0,
    0,
    &operand_data[2060],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+19",
    0,
    0,
    &operand_data[1677],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+20",
    0,
    0,
    &operand_data[1715],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+21",
    0,
    0,
    &operand_data[1718],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+22",
    0,
    0,
    &operand_data[1686],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+23",
    0,
    0,
    &operand_data[2064],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+24",
    0,
    0,
    &operand_data[1781],
    2,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+25",
    0,
    0,
    &operand_data[2066],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+26",
    0,
    0,
    &operand_data[2066],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+27",
    0,
    0,
    &operand_data[2070],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+28",
    0,
    0,
    &operand_data[2070],
    4,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+29",
    0,
    0,
    &operand_data[1520],
    1,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+30",
    0,
    0,
    &operand_data[2074],
    1,
    0,
    0,
    0
  },
  {
    "builtin_setjmp_receiver+31",
    0,
    0,
    &operand_data[1520],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-31",
    0,
    0,
    &operand_data[1713],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-30",
    0,
    0,
    &operand_data[2075],
    3,
    0,
    0,
    0
  },
  {
    "conditional_trap-29",
    0,
    0,
    &operand_data[1734],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-28",
    0,
    0,
    &operand_data[2078],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-27",
    0,
    0,
    &operand_data[2080],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-26",
    0,
    0,
    &operand_data[2082],
    3,
    0,
    0,
    0
  },
  {
    "conditional_trap-25",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-24",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-23",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-22",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-21",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-20",
    0,
    0,
    &operand_data[2085],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-19",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-18",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-17",
    0,
    0,
    &operand_data[2085],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-16",
    0,
    0,
    &operand_data[2038],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-15",
    0,
    0,
    &operand_data[2087],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-14",
    0,
    0,
    &operand_data[2089],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-13",
    0,
    0,
    &operand_data[2091],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-12",
    0,
    0,
    &operand_data[1478],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-11",
    0,
    0,
    &operand_data[1525],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-10",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-9",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-8",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-7",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-6",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-5",
    0,
    0,
    &operand_data[2093],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-4",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-3",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap-2",
    0,
    0,
    &operand_data[2093],
    2,
    0,
    0,
    0
  },
  {
    "conditional_trap-1",
    0,
    0,
    &operand_data[1490],
    1,
    0,
    0,
    0
  },
  {
    "conditional_trap",
    0,
    (insn_gen_fn) gen_conditional_trap,
    &operand_data[1279],
    2,
    1,
    0,
    0
  },
  {
    "movti",
    0,
    (insn_gen_fn) gen_movti,
    &operand_data[2095],
    2,
    0,
    0,
    0
  },
  {
    "movv4sf",
    0,
    (insn_gen_fn) gen_movv4sf,
    &operand_data[2097],
    2,
    0,
    0,
    0
  },
  {
    "movv4si",
    0,
    (insn_gen_fn) gen_movv4si,
    &operand_data[2099],
    2,
    0,
    0,
    0
  },
  {
    "movv2si",
    0,
    (insn_gen_fn) gen_movv2si,
    &operand_data[2101],
    2,
    0,
    0,
    0
  },
  {
    "movv4hi",
    0,
    (insn_gen_fn) gen_movv4hi,
    &operand_data[2103],
    2,
    0,
    0,
    0
  },
  {
    "movv8qi",
    0,
    (insn_gen_fn) gen_movv8qi,
    &operand_data[2105],
    2,
    0,
    0,
    0
  },
  {
    "movv2sf",
    0,
    (insn_gen_fn) gen_movv2sf,
    &operand_data[2107],
    2,
    0,
    0,
    0
  },
  {
    "movv2sf+1",
    0,
    0,
    &operand_data[2109],
    2,
    0,
    0,
    0
  },
  {
    "movv2sf+2",
    0,
    0,
    &operand_data[2111],
    2,
    0,
    0,
    0
  },
  {
    "movv2sf+3",
    0,
    0,
    &operand_data[2113],
    2,
    0,
    0,
    0
  },
  {
    "movv2sf+4",
    0,
    0,
    &operand_data[2115],
    2,
    0,
    0,
    0
  },
  {
    "sfence-4",
    0,
    0,
    &operand_data[2117],
    2,
    0,
    0,
    0
  },
  {
    "sfence-3",
    0,
    0,
    &operand_data[2119],
    2,
    0,
    0,
    0
  },
  {
    "sfence-2",
    0,
    0,
    &operand_data[2121],
    2,
    0,
    0,
    0
  },
  {
    "sfence-1",
    0,
    0,
    &operand_data[2123],
    2,
    0,
    0,
    0
  },
  {
    "sfence",
    0,
    (insn_gen_fn) gen_sfence,
    &operand_data[0],
    0,
    2,
    0,
    0
  },
  {
    "sse_prologue_save",
    0,
    (insn_gen_fn) gen_sse_prologue_save,
    &operand_data[2125],
    4,
    0,
    0,
    0
  },
  {
    "prefetch",
    0,
    (insn_gen_fn) gen_prefetch,
    &operand_data[2129],
    3,
    0,
    0,
    0
  },
};


const char *
get_insn_name (code)
     int code;
{
  return insn_data[code].name;
}
