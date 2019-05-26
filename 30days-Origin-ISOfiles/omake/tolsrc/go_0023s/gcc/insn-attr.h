/* Generated automatically by the program `genattr'
   from the machine description file `md'.  */

#ifndef GCC_INSN_ATTR_H
#define GCC_INSN_ATTR_H

#define HAVE_ATTR_alternative
#define get_attr_alternative(insn) which_alternative
#define HAVE_ATTR_cpu
enum attr_cpu {CPU_I386, CPU_I486, CPU_PENTIUM, CPU_PENTIUMPRO, CPU_K6, CPU_ATHLON, CPU_PENTIUM4};
extern enum attr_cpu get_attr_cpu PARAMS ((void));

#define HAVE_ATTR_type
enum attr_type {TYPE_OTHER, TYPE_MULTI, TYPE_ALU1, TYPE_NEGNOT, TYPE_ALU, TYPE_ICMP, TYPE_TEST, TYPE_IMOV, TYPE_IMOVX, TYPE_LEA, TYPE_INCDEC, TYPE_ISHIFT, TYPE_IMUL, TYPE_IDIV, TYPE_IBR, TYPE_SETCC, TYPE_PUSH, TYPE_POP, TYPE_CALL, TYPE_CALLV, TYPE_ICMOV, TYPE_FMOV, TYPE_FOP, TYPE_FOP1, TYPE_FSGN, TYPE_FMUL, TYPE_FDIV, TYPE_FPSPC, TYPE_FCMOV, TYPE_FCMP, TYPE_FXCH, TYPE_STR, TYPE_CLD, TYPE_SSE, TYPE_MMX, TYPE_FISTP};
extern enum attr_type get_attr_type PARAMS ((rtx));

#define HAVE_ATTR_mode
enum attr_mode {MODE_UNKNOWN, MODE_NONE, MODE_QI, MODE_HI, MODE_SI, MODE_DI, MODE_UNKNOWNFP, MODE_SF, MODE_DF, MODE_XF, MODE_TI};
extern enum attr_mode get_attr_mode PARAMS ((rtx));

#define HAVE_ATTR_i387
extern int get_attr_i387 PARAMS ((rtx));
#define HAVE_ATTR_length_immediate
extern int get_attr_length_immediate PARAMS ((rtx));
#define HAVE_ATTR_length_address
extern int get_attr_length_address PARAMS ((rtx));
#define HAVE_ATTR_prefix_data16
extern int get_attr_prefix_data16 PARAMS ((rtx));
#define HAVE_ATTR_prefix_rep
extern int get_attr_prefix_rep PARAMS ((rtx));
#define HAVE_ATTR_prefix_0f
extern int get_attr_prefix_0f PARAMS ((rtx));
#define HAVE_ATTR_modrm
extern int get_attr_modrm PARAMS ((rtx));
#define HAVE_ATTR_length
extern int get_attr_length PARAMS ((rtx));
extern void shorten_branches PARAMS ((rtx));
extern int insn_default_length PARAMS ((rtx));
extern int insn_variable_length_p PARAMS ((rtx));
extern int insn_current_length PARAMS ((rtx));

#include "insn-addr.h"

#define HAVE_ATTR_memory
enum attr_memory {MEMORY_NONE, MEMORY_LOAD, MEMORY_STORE, MEMORY_BOTH, MEMORY_UNKNOWN};
extern enum attr_memory get_attr_memory PARAMS ((rtx));

#define HAVE_ATTR_imm_disp
enum attr_imm_disp {IMM_DISP_FALSE, IMM_DISP_TRUE, IMM_DISP_UNKNOWN};
extern enum attr_imm_disp get_attr_imm_disp PARAMS ((rtx));

#define HAVE_ATTR_fp_int_src
enum attr_fp_int_src {FP_INT_SRC_FALSE, FP_INT_SRC_TRUE};
extern enum attr_fp_int_src get_attr_fp_int_src PARAMS ((rtx));

#define HAVE_ATTR_pent_prefix
enum attr_pent_prefix {PENT_PREFIX_FALSE, PENT_PREFIX_TRUE};
extern enum attr_pent_prefix get_attr_pent_prefix PARAMS ((rtx));

#define HAVE_ATTR_pent_pair
enum attr_pent_pair {PENT_PAIR_UV, PENT_PAIR_PU, PENT_PAIR_PV, PENT_PAIR_NP};
extern enum attr_pent_pair get_attr_pent_pair PARAMS ((rtx));

#define HAVE_ATTR_ppro_uops
enum attr_ppro_uops {PPRO_UOPS_ONE, PPRO_UOPS_FEW, PPRO_UOPS_MANY};
extern enum attr_ppro_uops get_attr_ppro_uops PARAMS ((rtx));

#define HAVE_ATTR_athlon_decode
enum attr_athlon_decode {ATHLON_DECODE_DIRECT, ATHLON_DECODE_VECTOR};
extern enum attr_athlon_decode get_attr_athlon_decode PARAMS ((rtx));

#define HAVE_ATTR_athlon_fpunits
enum attr_athlon_fpunits {ATHLON_FPUNITS_NONE, ATHLON_FPUNITS_STORE, ATHLON_FPUNITS_MUL, ATHLON_FPUNITS_ADD, ATHLON_FPUNITS_MULADD, ATHLON_FPUNITS_ANY};
extern enum attr_athlon_fpunits get_attr_athlon_fpunits PARAMS ((rtx));

#define INSN_SCHEDULING

extern int result_ready_cost PARAMS ((rtx));
extern int function_units_used PARAMS ((rtx));

extern const struct function_unit_desc
{
  const char *const name;
  const int bitmask;
  const int multiplicity;
  const int simultaneity;
  const int default_cost;
  const int max_issue_delay;
  int (*const ready_cost_function) PARAMS ((rtx));
  int (*const conflict_cost_function) PARAMS ((rtx, rtx));
  const int max_blockage;
  unsigned int (*const blockage_range_function) PARAMS ((rtx));
  int (*const blockage_function) PARAMS ((rtx, rtx));
} function_units[];

#define FUNCTION_UNITS_SIZE 26
#define MIN_MULTIPLICITY 1
#define MAX_MULTIPLICITY 3
#define MIN_SIMULTANEITY 0
#define MAX_SIMULTANEITY 1
#define MIN_READY_COST 1
#define MAX_READY_COST 100
#define MIN_ISSUE_DELAY 1
#define MAX_ISSUE_DELAY 70
#define MIN_BLOCKAGE 1
#define MAX_BLOCKAGE 99
#define BLOCKAGE_BITS 8
#define INSN_QUEUE_SIZE 128

#define ATTR_FLAG_forward	0x1
#define ATTR_FLAG_backward	0x2
#define ATTR_FLAG_likely	0x4
#define ATTR_FLAG_very_likely	0x8
#define ATTR_FLAG_unlikely	0x10
#define ATTR_FLAG_very_unlikely	0x20

#endif /* GCC_INSN_ATTR_H */
