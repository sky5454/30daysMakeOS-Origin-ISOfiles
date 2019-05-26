/* Generated automatically by the program `genflags'
   from the machine description file `md'.  */

#ifndef GCC_INSN_FLAGS_H
#define GCC_INSN_FLAGS_H

#define HAVE_cmpdi_ccno_1_rex64 (TARGET_64BIT && ix86_match_ccmode (insn, CCNOmode))
#define HAVE_cmpdi_1_insn_rex64 (TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
#define HAVE_cmpqi_ext_3_insn (!TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
#define HAVE_cmpqi_ext_3_insn_rex64 (TARGET_64BIT && ix86_match_ccmode (insn, CCmode))
#define HAVE_x86_fnstsw_1 (TARGET_80387)
#define HAVE_x86_sahf_1 (!TARGET_64BIT)
#define HAVE_popsi1 (!TARGET_64BIT)
#define HAVE_movsi_insv_1 (!TARGET_64BIT)
#define HAVE_pushdi2_rex64 (TARGET_64BIT)
#define HAVE_popdi1 (TARGET_64BIT)
#define HAVE_swapxf 1
#define HAVE_swaptf 1
#define HAVE_zero_extendhisi2_and (TARGET_ZERO_EXTEND_WITH_AND && !optimize_size)
#define HAVE_zero_extendsidi2_32 (!TARGET_64BIT)
#define HAVE_zero_extendsidi2_rex64 (TARGET_64BIT)
#define HAVE_zero_extendhidi2 (TARGET_64BIT)
#define HAVE_zero_extendqidi2 (TARGET_64BIT)
#define HAVE_extendsidi2_rex64 (TARGET_64BIT)
#define HAVE_extendhidi2 (TARGET_64BIT)
#define HAVE_extendqidi2 (TARGET_64BIT)
#define HAVE_extendhisi2 1
#define HAVE_extendqihi2 1
#define HAVE_extendqisi2 1
#define HAVE_truncdfsf2_3 (TARGET_80387)
#define HAVE_truncdfsf2_sse_only (!TARGET_80387 && TARGET_SSE2)
#define HAVE_fix_truncdi_nomemory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
#define HAVE_fix_truncdi_memory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && (!SSE_FLOAT_MODE_P (GET_MODE (operands[1])) || !TARGET_64BIT))
#define HAVE_fix_truncsfdi_sse (TARGET_64BIT && TARGET_SSE)
#define HAVE_fix_truncdfdi_sse (TARGET_64BIT && TARGET_SSE2)
#define HAVE_fix_truncsi_nomemory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
#define HAVE_fix_truncsi_memory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
#define HAVE_fix_truncsfsi_sse (TARGET_SSE)
#define HAVE_fix_truncdfsi_sse (TARGET_SSE2)
#define HAVE_fix_trunchi_nomemory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
#define HAVE_fix_trunchi_memory (TARGET_80387 && FLOAT_MODE_P (GET_MODE (operands[1])) \
   && !SSE_FLOAT_MODE_P (GET_MODE (operands[1])))
#define HAVE_x86_fnstcw_1 (TARGET_80387)
#define HAVE_x86_fldcw_1 (TARGET_80387)
#define HAVE_floathisf2 (TARGET_80387 && !TARGET_SSE)
#define HAVE_floathidf2 (TARGET_80387 && !TARGET_SSE2)
#define HAVE_floathixf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_floathitf2 (TARGET_80387)
#define HAVE_floatsixf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_floatsitf2 (TARGET_80387)
#define HAVE_floatdixf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_floatditf2 (TARGET_80387)
#define HAVE_addqi3_cc (ix86_binary_operator_ok (PLUS, QImode, operands))
#define HAVE_addsi_1_zext (TARGET_64BIT && ix86_binary_operator_ok (PLUS, SImode, operands))
#define HAVE_addqi_ext_1 (!TARGET_64BIT)
#define HAVE_subdi3_carry_rex64 (TARGET_64BIT && ix86_binary_operator_ok (MINUS, DImode, operands))
#define HAVE_subsi3_carry (ix86_binary_operator_ok (MINUS, SImode, operands))
#define HAVE_subsi3_carry_zext (TARGET_64BIT && ix86_binary_operator_ok (MINUS, SImode, operands))
#define HAVE_divqi3 (TARGET_QIMODE_MATH)
#define HAVE_udivqi3 (TARGET_QIMODE_MATH)
#define HAVE_divmodhi4 (TARGET_HIMODE_MATH)
#define HAVE_udivmoddi4 (TARGET_64BIT)
#define HAVE_udivmodsi4 1
#define HAVE_testsi_1 (ix86_match_ccmode (insn, CCNOmode))
#define HAVE_andqi_ext_0 ((unsigned HOST_WIDE_INT)INTVAL (operands[2]) <= 0xff)
#define HAVE_negsf2_memory (ix86_unary_operator_ok (NEG, SFmode, operands))
#define HAVE_negsf2_ifs (TARGET_SSE \
   && (reload_in_progress || reload_completed \
       || (register_operand (operands[0], VOIDmode) \
	   && register_operand (operands[1], VOIDmode))))
#define HAVE_negdf2_memory (ix86_unary_operator_ok (NEG, DFmode, operands))
#define HAVE_negdf2_ifs (!TARGET_64BIT && TARGET_SSE2 \
   && (reload_in_progress || reload_completed \
       || (register_operand (operands[0], VOIDmode) \
	   && register_operand (operands[1], VOIDmode))))
#define HAVE_abssf2_memory (ix86_unary_operator_ok (ABS, SFmode, operands))
#define HAVE_abssf2_ifs (TARGET_SSE \
   && (reload_in_progress || reload_completed \
       || (register_operand (operands[0], VOIDmode) \
	   && register_operand (operands[1], VOIDmode))))
#define HAVE_absdf2_memory (ix86_unary_operator_ok (ABS, DFmode, operands))
#define HAVE_absdf2_ifs (!TARGET_64BIT && TARGET_SSE2 \
   && (reload_in_progress || reload_completed \
       || (register_operand (operands[0], VOIDmode) \
	   && register_operand (operands[1], VOIDmode))))
#define HAVE_ashldi3_1 (!TARGET_64BIT && TARGET_CMOVE)
#define HAVE_x86_shld_1 1
#define HAVE_ashrdi3_63_rex64 (TARGET_64BIT && INTVAL (operands[2]) == 63 && (TARGET_USE_CLTD || optimize_size) \
   && ix86_binary_operator_ok (ASHIFTRT, DImode, operands))
#define HAVE_ashrdi3_1 (!TARGET_64BIT && TARGET_CMOVE)
#define HAVE_x86_shrd_1 1
#define HAVE_ashrsi3_31 (INTVAL (operands[2]) == 31 && (TARGET_USE_CLTD || optimize_size) \
   && ix86_binary_operator_ok (ASHIFTRT, SImode, operands))
#define HAVE_lshrdi3_1 (!TARGET_64BIT && TARGET_CMOVE)
#define HAVE_setcc_2 1
#define HAVE_jump 1
#define HAVE_doloop_end_internal (!TARGET_64BIT && TARGET_USE_LOOP)
#define HAVE_blockage 1
#define HAVE_return_internal (reload_completed)
#define HAVE_return_pop_internal (reload_completed)
#define HAVE_return_indirect_internal (reload_completed)
#define HAVE_nop 1
#define HAVE_prologue_set_got (!TARGET_64BIT)
#define HAVE_prologue_get_pc (!TARGET_64BIT)
#define HAVE_eh_return_si (!TARGET_64BIT)
#define HAVE_eh_return_di (TARGET_64BIT)
#define HAVE_leave (!TARGET_64BIT)
#define HAVE_leave_rex64 (TARGET_64BIT)
#define HAVE_ffssi_1 1
#define HAVE_sqrtsf2_1 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && (TARGET_SSE_MATH && TARGET_MIX_SSE_I387))
#define HAVE_sqrtsf2_1_sse_only (TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387))
#define HAVE_sqrtsf2_i387 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && !TARGET_SSE_MATH)
#define HAVE_sqrtdf2_1 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && (TARGET_SSE2 && TARGET_SSE_MATH && TARGET_MIX_SSE_I387))
#define HAVE_sqrtdf2_1_sse_only (TARGET_SSE2 && TARGET_SSE_MATH && (!TARGET_80387 || !TARGET_MIX_SSE_I387))
#define HAVE_sqrtdf2_i387 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && (!TARGET_SSE2 || !TARGET_SSE_MATH))
#define HAVE_sqrtxf2 (!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387  \
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) )
#define HAVE_sqrttf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && (TARGET_IEEE_FP || flag_unsafe_math_optimizations) )
#define HAVE_sindf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_sinsf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_sinxf2 (!TARGET_64BIT && TARGET_80387 && !TARGET_NO_FANCY_MATH_387 \
   && flag_unsafe_math_optimizations)
#define HAVE_sintf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_cosdf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_cossf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_cosxf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387 \
   && flag_unsafe_math_optimizations)
#define HAVE_costf2 (! TARGET_NO_FANCY_MATH_387 && TARGET_80387  \
   && flag_unsafe_math_optimizations)
#define HAVE_cld 1
#define HAVE_strmovdi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovsi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovsi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovhi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovhi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovqi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strmovqi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_rep_movdi_rex64 (TARGET_64BIT)
#define HAVE_rep_movsi (!TARGET_64BIT)
#define HAVE_rep_movsi_rex64 (TARGET_64BIT)
#define HAVE_rep_movqi (!TARGET_64BIT)
#define HAVE_rep_movqi_rex64 (TARGET_64BIT)
#define HAVE_strsetdi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsetsi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsetsi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsethi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsethi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsetqi_1 (!TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_strsetqi_rex_1 (TARGET_64BIT && (TARGET_SINGLE_STRINGOP || optimize_size))
#define HAVE_rep_stosdi_rex64 (TARGET_64BIT)
#define HAVE_rep_stossi (!TARGET_64BIT)
#define HAVE_rep_stossi_rex64 (TARGET_64BIT)
#define HAVE_rep_stosqi (!TARGET_64BIT)
#define HAVE_rep_stosqi_rex64 (TARGET_64BIT)
#define HAVE_cmpstrqi_nz_1 (!TARGET_64BIT)
#define HAVE_cmpstrqi_nz_rex_1 (TARGET_64BIT)
#define HAVE_cmpstrqi_1 (!TARGET_64BIT)
#define HAVE_cmpstrqi_rex_1 (TARGET_64BIT)
#define HAVE_strlenqi_1 (!TARGET_64BIT)
#define HAVE_strlenqi_rex_1 (TARGET_64BIT)
#define HAVE_x86_movdicc_0_m1_rex64 (TARGET_64BIT)
#define HAVE_x86_movsicc_0_m1 1
#define HAVE_pro_epilogue_adjust_stack_rex64 (TARGET_64BIT)
#define HAVE_sse_movsfcc (TARGET_SSE \
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM) \
   && (!TARGET_IEEE_FP \
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
#define HAVE_sse_movsfcc_eq (TARGET_SSE \
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
#define HAVE_sse_movdfcc (TARGET_SSE2 \
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM) \
   && (!TARGET_IEEE_FP \
       || (GET_CODE (operands[1]) != EQ && GET_CODE (operands[1]) != NE)))
#define HAVE_sse_movdfcc_eq (TARGET_SSE \
   && (GET_CODE (operands[2]) != MEM || GET_CODE (operands[3]) != MEM))
#define HAVE_allocate_stack_worker_1 (!TARGET_64BIT && TARGET_STACK_PROBE)
#define HAVE_allocate_stack_worker_rex64 (TARGET_64BIT && TARGET_STACK_PROBE)
#define HAVE_trap 1
#define HAVE_movv4sf_internal (TARGET_SSE)
#define HAVE_movv4si_internal (TARGET_SSE)
#define HAVE_movv8qi_internal (TARGET_MMX)
#define HAVE_movv4hi_internal (TARGET_MMX)
#define HAVE_movv2si_internal (TARGET_MMX)
#define HAVE_movv2sf_internal (TARGET_3DNOW)
#define HAVE_movti_internal (TARGET_SSE && !TARGET_64BIT)
#define HAVE_sse_movaps (TARGET_SSE)
#define HAVE_sse_movups (TARGET_SSE)
#define HAVE_sse_movmskps (TARGET_SSE)
#define HAVE_mmx_pmovmskb (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_maskmovq ((TARGET_SSE || TARGET_3DNOW_A) && !TARGET_64BIT)
#define HAVE_mmx_maskmovq_rex ((TARGET_SSE || TARGET_3DNOW_A) && TARGET_64BIT)
#define HAVE_sse_movntv4sf (TARGET_SSE)
#define HAVE_sse_movntdi (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_sse_movhlps (TARGET_SSE)
#define HAVE_sse_movlhps (TARGET_SSE)
#define HAVE_sse_movhps (TARGET_SSE \
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM))
#define HAVE_sse_movlps (TARGET_SSE \
   && (GET_CODE (operands[1]) == MEM || GET_CODE (operands[2]) == MEM))
#define HAVE_sse_loadss (TARGET_SSE)
#define HAVE_sse_movss (TARGET_SSE)
#define HAVE_sse_storess (TARGET_SSE)
#define HAVE_sse_shufps (TARGET_SSE)
#define HAVE_addv4sf3 (TARGET_SSE)
#define HAVE_vmaddv4sf3 (TARGET_SSE)
#define HAVE_subv4sf3 (TARGET_SSE)
#define HAVE_vmsubv4sf3 (TARGET_SSE)
#define HAVE_mulv4sf3 (TARGET_SSE)
#define HAVE_vmmulv4sf3 (TARGET_SSE)
#define HAVE_divv4sf3 (TARGET_SSE)
#define HAVE_vmdivv4sf3 (TARGET_SSE)
#define HAVE_rcpv4sf2 (TARGET_SSE)
#define HAVE_vmrcpv4sf2 (TARGET_SSE)
#define HAVE_rsqrtv4sf2 (TARGET_SSE)
#define HAVE_vmrsqrtv4sf2 (TARGET_SSE)
#define HAVE_sqrtv4sf2 (TARGET_SSE)
#define HAVE_vmsqrtv4sf2 (TARGET_SSE)
#define HAVE_sse_andti3 (TARGET_SSE && !TARGET_SSE2 \
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
#define HAVE_sse_nandti3 (TARGET_SSE && !TARGET_SSE2)
#define HAVE_sse_iorti3 (TARGET_SSE && !TARGET_SSE2 \
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
#define HAVE_sse_xorti3 (TARGET_SSE && !TARGET_SSE2 \
   && (GET_CODE (operands[1]) != MEM || GET_CODE (operands[2]) != MEM))
#define HAVE_sse_clrv4sf (TARGET_SSE)
#define HAVE_maskcmpv4sf3 (TARGET_SSE)
#define HAVE_maskncmpv4sf3 (TARGET_SSE)
#define HAVE_vmmaskcmpv4sf3 (TARGET_SSE)
#define HAVE_vmmaskncmpv4sf3 (TARGET_SSE)
#define HAVE_sse_comi (TARGET_SSE)
#define HAVE_sse_ucomi (TARGET_SSE)
#define HAVE_sse_unpckhps (TARGET_SSE)
#define HAVE_sse_unpcklps (TARGET_SSE)
#define HAVE_smaxv4sf3 (TARGET_SSE)
#define HAVE_vmsmaxv4sf3 (TARGET_SSE)
#define HAVE_sminv4sf3 (TARGET_SSE)
#define HAVE_vmsminv4sf3 (TARGET_SSE)
#define HAVE_cvtpi2ps (TARGET_SSE)
#define HAVE_cvtps2pi (TARGET_SSE)
#define HAVE_cvttps2pi (TARGET_SSE)
#define HAVE_cvtsi2ss (TARGET_SSE)
#define HAVE_cvtss2si (TARGET_SSE)
#define HAVE_cvttss2si (TARGET_SSE)
#define HAVE_addv8qi3 (TARGET_MMX)
#define HAVE_addv4hi3 (TARGET_MMX)
#define HAVE_addv2si3 (TARGET_MMX)
#define HAVE_ssaddv8qi3 (TARGET_MMX)
#define HAVE_ssaddv4hi3 (TARGET_MMX)
#define HAVE_usaddv8qi3 (TARGET_MMX)
#define HAVE_usaddv4hi3 (TARGET_MMX)
#define HAVE_subv8qi3 (TARGET_MMX)
#define HAVE_subv4hi3 (TARGET_MMX)
#define HAVE_subv2si3 (TARGET_MMX)
#define HAVE_sssubv8qi3 (TARGET_MMX)
#define HAVE_sssubv4hi3 (TARGET_MMX)
#define HAVE_ussubv8qi3 (TARGET_MMX)
#define HAVE_ussubv4hi3 (TARGET_MMX)
#define HAVE_mulv4hi3 (TARGET_MMX)
#define HAVE_smulv4hi3_highpart (TARGET_MMX)
#define HAVE_umulv4hi3_highpart (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_pmaddwd (TARGET_MMX)
#define HAVE_mmx_iordi3 (TARGET_MMX)
#define HAVE_mmx_xordi3 (TARGET_MMX)
#define HAVE_mmx_clrdi (TARGET_MMX)
#define HAVE_mmx_anddi3 (TARGET_MMX)
#define HAVE_mmx_nanddi3 (TARGET_MMX)
#define HAVE_mmx_uavgv8qi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_uavgv4hi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_psadbw (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_pinsrw (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_pextrw (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_mmx_pshufw (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_eqv8qi3 (TARGET_MMX)
#define HAVE_eqv4hi3 (TARGET_MMX)
#define HAVE_eqv2si3 (TARGET_MMX)
#define HAVE_gtv8qi3 (TARGET_MMX)
#define HAVE_gtv4hi3 (TARGET_MMX)
#define HAVE_gtv2si3 (TARGET_MMX)
#define HAVE_umaxv8qi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_smaxv4hi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_uminv8qi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_sminv4hi3 (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_ashrv4hi3 (TARGET_MMX)
#define HAVE_ashrv2si3 (TARGET_MMX)
#define HAVE_lshrv4hi3 (TARGET_MMX)
#define HAVE_lshrv2si3 (TARGET_MMX)
#define HAVE_mmx_lshrdi3 (TARGET_MMX)
#define HAVE_ashlv4hi3 (TARGET_MMX)
#define HAVE_ashlv2si3 (TARGET_MMX)
#define HAVE_mmx_ashldi3 (TARGET_MMX)
#define HAVE_mmx_packsswb (TARGET_MMX)
#define HAVE_mmx_packssdw (TARGET_MMX)
#define HAVE_mmx_packuswb (TARGET_MMX)
#define HAVE_mmx_punpckhbw (TARGET_MMX)
#define HAVE_mmx_punpckhwd (TARGET_MMX)
#define HAVE_mmx_punpckhdq (TARGET_MMX)
#define HAVE_mmx_punpcklbw (TARGET_MMX)
#define HAVE_mmx_punpcklwd (TARGET_MMX)
#define HAVE_mmx_punpckldq (TARGET_MMX)
#define HAVE_emms (TARGET_MMX)
#define HAVE_ldmxcsr (TARGET_MMX)
#define HAVE_stmxcsr (TARGET_MMX)
#define HAVE_addv2sf3 (TARGET_3DNOW)
#define HAVE_subv2sf3 (TARGET_3DNOW)
#define HAVE_subrv2sf3 (TARGET_3DNOW)
#define HAVE_gtv2sf3 (TARGET_3DNOW)
#define HAVE_gev2sf3 (TARGET_3DNOW)
#define HAVE_eqv2sf3 (TARGET_3DNOW)
#define HAVE_pfmaxv2sf3 (TARGET_3DNOW)
#define HAVE_pfminv2sf3 (TARGET_3DNOW)
#define HAVE_mulv2sf3 (TARGET_3DNOW)
#define HAVE_femms (TARGET_3DNOW)
#define HAVE_pf2id (TARGET_3DNOW)
#define HAVE_pf2iw (TARGET_3DNOW_A)
#define HAVE_pfacc (TARGET_3DNOW)
#define HAVE_pfnacc (TARGET_3DNOW_A)
#define HAVE_pfpnacc (TARGET_3DNOW_A)
#define HAVE_pi2fw (TARGET_3DNOW_A)
#define HAVE_floatv2si2 (TARGET_3DNOW)
#define HAVE_pavgusb (TARGET_3DNOW)
#define HAVE_pfrcpv2sf2 (TARGET_3DNOW)
#define HAVE_pfrcpit1v2sf3 (TARGET_3DNOW)
#define HAVE_pfrcpit2v2sf3 (TARGET_3DNOW)
#define HAVE_pfrsqrtv2sf2 (TARGET_3DNOW)
#define HAVE_pfrsqit1v2sf3 (TARGET_3DNOW)
#define HAVE_pmulhrwv4hi3 (TARGET_3DNOW)
#define HAVE_pswapdv2si2 (TARGET_3DNOW_A)
#define HAVE_pswapdv2sf2 (TARGET_3DNOW_A)
#define HAVE_cmpdi 1
#define HAVE_cmpsi 1
#define HAVE_cmphi 1
#define HAVE_cmpqi (TARGET_QIMODE_MATH)
#define HAVE_cmpdi_1_rex64 (TARGET_64BIT)
#define HAVE_cmpsi_1 1
#define HAVE_cmpqi_ext_3 1
#define HAVE_cmpxf (!TARGET_64BIT && TARGET_80387)
#define HAVE_cmptf (TARGET_80387)
#define HAVE_cmpdf (TARGET_80387 || TARGET_SSE2)
#define HAVE_cmpsf (TARGET_80387 || TARGET_SSE)
#define HAVE_movsi 1
#define HAVE_movhi 1
#define HAVE_movstricthi (! TARGET_PARTIAL_REG_STALL || optimize_size)
#define HAVE_movqi 1
#define HAVE_reload_outqi 1
#define HAVE_movstrictqi (! TARGET_PARTIAL_REG_STALL)
#define HAVE_movdi 1
#define HAVE_movsf 1
#define HAVE_movdf 1
#define HAVE_movxf (!TARGET_64BIT)
#define HAVE_movtf 1
#define HAVE_zero_extendhisi2 1
#define HAVE_zero_extendqihi2 1
#define HAVE_zero_extendqisi2 1
#define HAVE_zero_extendsidi2 1
#define HAVE_extendsidi2 1
#define HAVE_extendsfdf2 (TARGET_80387 || TARGET_SSE2)
#define HAVE_extendsfxf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_extendsftf2 (TARGET_80387)
#define HAVE_extenddfxf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_extenddftf2 (TARGET_80387)
#define HAVE_truncdfsf2 (TARGET_80387 || TARGET_SSE2)
#define HAVE_truncxfsf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_trunctfsf2 (TARGET_80387)
#define HAVE_truncxfdf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_trunctfdf2 (TARGET_80387)
#define HAVE_fix_truncxfdi2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_fix_trunctfdi2 (TARGET_80387)
#define HAVE_fix_truncdfdi2 (TARGET_80387 || (TARGET_SSE2 && TARGET_64BIT))
#define HAVE_fix_truncsfdi2 (TARGET_80387 || (TARGET_SSE && TARGET_64BIT))
#define HAVE_fix_truncxfsi2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_fix_trunctfsi2 (TARGET_80387)
#define HAVE_fix_truncdfsi2 (TARGET_80387 || TARGET_SSE2)
#define HAVE_fix_truncsfsi2 (TARGET_80387 || TARGET_SSE)
#define HAVE_fix_truncxfhi2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_fix_trunctfhi2 (TARGET_80387)
#define HAVE_fix_truncdfhi2 (TARGET_80387 && !TARGET_SSE2)
#define HAVE_fix_truncsfhi2 (TARGET_80387 && !TARGET_SSE)
#define HAVE_floatsisf2 (TARGET_SSE || TARGET_80387)
#define HAVE_floatdisf2 ((TARGET_64BIT && TARGET_SSE) || TARGET_80387)
#define HAVE_floatsidf2 (TARGET_80387 || TARGET_SSE2)
#define HAVE_floatdidf2 ((TARGET_64BIT && TARGET_SSE2) || TARGET_80387)
#define HAVE_adddi3 1
#define HAVE_addsi3 1
#define HAVE_addhi3 (TARGET_HIMODE_MATH)
#define HAVE_addqi3 (TARGET_QIMODE_MATH)
#define HAVE_addxf3 (!TARGET_64BIT && TARGET_80387)
#define HAVE_addtf3 (TARGET_80387)
#define HAVE_adddf3 (TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
#define HAVE_addsf3 (TARGET_80387 || TARGET_SSE_MATH)
#define HAVE_subdi3 1
#define HAVE_subsi3 1
#define HAVE_subhi3 (TARGET_HIMODE_MATH)
#define HAVE_subqi3 (TARGET_QIMODE_MATH)
#define HAVE_subxf3 (!TARGET_64BIT && TARGET_80387)
#define HAVE_subtf3 (TARGET_80387)
#define HAVE_subdf3 (TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
#define HAVE_subsf3 (TARGET_80387 || TARGET_SSE_MATH)
#define HAVE_muldi3 (TARGET_64BIT)
#define HAVE_mulsi3 1
#define HAVE_mulhi3 (TARGET_HIMODE_MATH)
#define HAVE_mulqi3 (TARGET_QIMODE_MATH)
#define HAVE_umulqihi3 (TARGET_QIMODE_MATH)
#define HAVE_mulqihi3 (TARGET_QIMODE_MATH)
#define HAVE_umulditi3 (TARGET_64BIT)
#define HAVE_umulsidi3 (!TARGET_64BIT)
#define HAVE_mulditi3 (TARGET_64BIT)
#define HAVE_mulsidi3 (!TARGET_64BIT)
#define HAVE_umuldi3_highpart (TARGET_64BIT)
#define HAVE_umulsi3_highpart 1
#define HAVE_smuldi3_highpart (TARGET_64BIT)
#define HAVE_smulsi3_highpart 1
#define HAVE_mulxf3 (!TARGET_64BIT && TARGET_80387)
#define HAVE_multf3 (TARGET_80387)
#define HAVE_muldf3 (TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
#define HAVE_mulsf3 (TARGET_80387 || TARGET_SSE_MATH)
#define HAVE_divxf3 (!TARGET_64BIT && TARGET_80387)
#define HAVE_divtf3 (TARGET_80387)
#define HAVE_divdf3 (TARGET_80387 || (TARGET_SSE2 && TARGET_SSE_MATH))
#define HAVE_divsf3 (TARGET_80387 || TARGET_SSE_MATH)
#define HAVE_divmoddi4 (TARGET_64BIT)
#define HAVE_divmodsi4 1
#define HAVE_udivmodhi4 (TARGET_HIMODE_MATH)
#define HAVE_testsi_ccno_1 1
#define HAVE_testqi_ccz_1 1
#define HAVE_testqi_ext_ccno_0 1
#define HAVE_anddi3 (TARGET_64BIT)
#define HAVE_andsi3 1
#define HAVE_andhi3 (TARGET_HIMODE_MATH)
#define HAVE_andqi3 (TARGET_QIMODE_MATH)
#define HAVE_iordi3 (TARGET_64BIT)
#define HAVE_iorsi3 1
#define HAVE_iorhi3 (TARGET_HIMODE_MATH)
#define HAVE_iorqi3 (TARGET_QIMODE_MATH)
#define HAVE_xordi3 (TARGET_64BIT)
#define HAVE_xorsi3 1
#define HAVE_xorhi3 (TARGET_HIMODE_MATH)
#define HAVE_xorqi3 (TARGET_QIMODE_MATH)
#define HAVE_xorqi_cc_ext_1 1
#define HAVE_negdi2 1
#define HAVE_negsi2 1
#define HAVE_neghi2 (TARGET_HIMODE_MATH)
#define HAVE_negqi2 (TARGET_QIMODE_MATH)
#define HAVE_negsf2 (TARGET_80387)
#define HAVE_negdf2 (TARGET_80387)
#define HAVE_negxf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_negtf2 (TARGET_80387)
#define HAVE_abssf2 (TARGET_80387)
#define HAVE_absdf2 (TARGET_80387)
#define HAVE_absxf2 (!TARGET_64BIT && TARGET_80387)
#define HAVE_abstf2 (TARGET_80387)
#define HAVE_one_cmpldi2 (TARGET_64BIT)
#define HAVE_one_cmplsi2 1
#define HAVE_one_cmplhi2 (TARGET_HIMODE_MATH)
#define HAVE_one_cmplqi2 (TARGET_QIMODE_MATH)
#define HAVE_ashldi3 1
#define HAVE_x86_shift_adj_1 (TARGET_CMOVE)
#define HAVE_x86_shift_adj_2 1
#define HAVE_ashlsi3 1
#define HAVE_ashlhi3 (TARGET_HIMODE_MATH)
#define HAVE_ashlqi3 (TARGET_QIMODE_MATH)
#define HAVE_ashrdi3 1
#define HAVE_x86_shift_adj_3 1
#define HAVE_ashrsi3 1
#define HAVE_ashrhi3 (TARGET_HIMODE_MATH)
#define HAVE_ashrqi3 (TARGET_QIMODE_MATH)
#define HAVE_lshrdi3 1
#define HAVE_lshrsi3 1
#define HAVE_lshrhi3 (TARGET_HIMODE_MATH)
#define HAVE_lshrqi3 (TARGET_QIMODE_MATH)
#define HAVE_rotldi3 (TARGET_64BIT)
#define HAVE_rotlsi3 1
#define HAVE_rotlhi3 (TARGET_HIMODE_MATH)
#define HAVE_rotlqi3 (TARGET_QIMODE_MATH)
#define HAVE_rotrdi3 (TARGET_64BIT)
#define HAVE_rotrsi3 1
#define HAVE_rotrhi3 (TARGET_HIMODE_MATH)
#define HAVE_rotrqi3 (TARGET_QIMODE_MATH)
#define HAVE_extv 1
#define HAVE_extzv 1
#define HAVE_insv 1
#define HAVE_seq 1
#define HAVE_sne 1
#define HAVE_sgt 1
#define HAVE_sgtu 1
#define HAVE_slt 1
#define HAVE_sltu 1
#define HAVE_sge 1
#define HAVE_sgeu 1
#define HAVE_sle 1
#define HAVE_sleu 1
#define HAVE_sunordered (TARGET_80387 || TARGET_SSE)
#define HAVE_sordered (TARGET_80387)
#define HAVE_suneq (TARGET_80387 || TARGET_SSE)
#define HAVE_sunge (TARGET_80387 || TARGET_SSE)
#define HAVE_sungt (TARGET_80387 || TARGET_SSE)
#define HAVE_sunle (TARGET_80387 || TARGET_SSE)
#define HAVE_sunlt (TARGET_80387 || TARGET_SSE)
#define HAVE_sltgt (TARGET_80387 || TARGET_SSE)
#define HAVE_beq 1
#define HAVE_bne 1
#define HAVE_bgt 1
#define HAVE_bgtu 1
#define HAVE_blt 1
#define HAVE_bltu 1
#define HAVE_bge 1
#define HAVE_bgeu 1
#define HAVE_ble 1
#define HAVE_bleu 1
#define HAVE_bunordered (TARGET_80387 || TARGET_SSE)
#define HAVE_bordered (TARGET_80387 || TARGET_SSE)
#define HAVE_buneq (TARGET_80387 || TARGET_SSE)
#define HAVE_bunge (TARGET_80387 || TARGET_SSE)
#define HAVE_bungt (TARGET_80387 || TARGET_SSE)
#define HAVE_bunle (TARGET_80387 || TARGET_SSE)
#define HAVE_bunlt (TARGET_80387 || TARGET_SSE)
#define HAVE_bltgt (TARGET_80387 || TARGET_SSE)
#define HAVE_indirect_jump 1
#define HAVE_tablejump 1
#define HAVE_doloop_end (!TARGET_64BIT && TARGET_USE_LOOP)
#define HAVE_call_pop (!TARGET_64BIT)
#define HAVE_call 1
#define HAVE_call_exp 1
#define HAVE_call_value_pop (!TARGET_64BIT)
#define HAVE_call_value 1
#define HAVE_call_value_exp 1
#define HAVE_untyped_call 1
#define HAVE_return (ix86_can_use_return_insn_p ())
#define HAVE_prologue 1
#define HAVE_epilogue 1
#define HAVE_sibcall_epilogue 1
#define HAVE_eh_return 1
#define HAVE_ffssi2 1
#define HAVE_sqrtsf2 ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387) || TARGET_SSE_MATH)
#define HAVE_sqrtdf2 ((! TARGET_NO_FANCY_MATH_387 && TARGET_80387) \
   || (TARGET_SSE2 && TARGET_SSE_MATH))
#define HAVE_movstrsi 1
#define HAVE_movstrdi (TARGET_64BIT)
#define HAVE_strmovdi_rex64 (TARGET_64BIT)
#define HAVE_strmovsi 1
#define HAVE_strmovsi_rex64 (TARGET_64BIT)
#define HAVE_strmovhi 1
#define HAVE_strmovhi_rex64 (TARGET_64BIT)
#define HAVE_strmovqi 1
#define HAVE_strmovqi_rex64 (TARGET_64BIT)
#define HAVE_clrstrsi 1
#define HAVE_clrstrdi (TARGET_64BIT)
#define HAVE_strsetdi_rex64 (TARGET_64BIT)
#define HAVE_strsetsi 1
#define HAVE_strsetsi_rex64 (TARGET_64BIT)
#define HAVE_strsethi 1
#define HAVE_strsethi_rex64 (TARGET_64BIT)
#define HAVE_strsetqi 1
#define HAVE_strsetqi_rex64 (TARGET_64BIT)
#define HAVE_cmpstrsi 1
#define HAVE_cmpintqi 1
#define HAVE_strlensi 1
#define HAVE_strlendi 1
#define HAVE_movdicc (TARGET_64BIT)
#define HAVE_movsicc 1
#define HAVE_movhicc (TARGET_CMOVE && TARGET_HIMODE_MATH)
#define HAVE_movsfcc (TARGET_CMOVE)
#define HAVE_movdfcc (TARGET_CMOVE)
#define HAVE_movxfcc (!TARGET_64BIT && TARGET_CMOVE)
#define HAVE_movtfcc (TARGET_CMOVE)
#define HAVE_minsf3 (TARGET_SSE)
#define HAVE_mindf3 (TARGET_SSE2 && TARGET_SSE_MATH)
#define HAVE_maxsf3 (TARGET_SSE)
#define HAVE_maxdf3 (TARGET_SSE2 && TARGET_SSE_MATH)
#define HAVE_pro_epilogue_adjust_stack 1
#define HAVE_allocate_stack_worker (TARGET_STACK_PROBE)
#define HAVE_allocate_stack (TARGET_STACK_PROBE)
#define HAVE_builtin_setjmp_receiver (!TARGET_64BIT && flag_pic)
#define HAVE_conditional_trap 1
#define HAVE_movti (TARGET_SSE || TARGET_64BIT)
#define HAVE_movv4sf (TARGET_SSE)
#define HAVE_movv4si (TARGET_MMX)
#define HAVE_movv2si (TARGET_MMX)
#define HAVE_movv4hi (TARGET_MMX)
#define HAVE_movv8qi (TARGET_MMX)
#define HAVE_movv2sf (TARGET_3DNOW)
#define HAVE_sfence (TARGET_SSE || TARGET_3DNOW_A)
#define HAVE_sse_prologue_save (TARGET_64BIT)
#define HAVE_prefetch (TARGET_PREFETCH_SSE || TARGET_3DNOW)
struct rtx_def;
extern struct rtx_def *gen_cmpdi_ccno_1_rex64              PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpdi_1_insn_rex64              PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpqi_ext_3_insn                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpqi_ext_3_insn_rex64          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_fnstsw_1                    PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_x86_sahf_1                      PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_popsi1                          PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_movsi_insv_1                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pushdi2_rex64                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_popdi1                          PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_swapxf                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_swaptf                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendhisi2_and            PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendsidi2_32             PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendsidi2_rex64          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendhidi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendqidi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendsidi2_rex64               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendhidi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendqidi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendhisi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendqihi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendqisi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_truncdfsf2_3                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_truncdfsf2_sse_only             PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdi_nomemory            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdi_memory              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsfdi_sse               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdfdi_sse               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsi_nomemory            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsi_memory              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsfsi_sse               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdfsi_sse               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_trunchi_nomemory            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_trunchi_memory              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_fnstcw_1                    PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_x86_fldcw_1                     PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_floathisf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floathidf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floathixf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floathitf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatsixf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatsitf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatdixf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatditf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addqi3_cc                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addsi_1_zext                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addqi_ext_1                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subdi3_carry_rex64              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subsi3_carry                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subsi3_carry_zext               PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_udivqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divmodhi4                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_udivmoddi4                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_udivmodsi4                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_testsi_1                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_andqi_ext_0                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negsf2_memory                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negsf2_ifs                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negdf2_memory                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negdf2_ifs                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_abssf2_memory                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_abssf2_ifs                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_absdf2_memory                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_absdf2_ifs                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashldi3_1                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_shld_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrdi3_63_rex64                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrdi3_1                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_shrd_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrsi3_31                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrdi3_1                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_setcc_2                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_jump                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_doloop_end_internal             PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_blockage                        PARAMS ((void));
extern struct rtx_def *gen_return_internal                 PARAMS ((void));
extern struct rtx_def *gen_return_pop_internal             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_return_indirect_internal        PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_nop                             PARAMS ((void));
extern struct rtx_def *gen_prologue_set_got                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_prologue_get_pc                 PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_eh_return_si                    PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_eh_return_di                    PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_leave                           PARAMS ((void));
extern struct rtx_def *gen_leave_rex64                     PARAMS ((void));
extern struct rtx_def *gen_ffssi_1                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtsf2_1                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtsf2_1_sse_only              PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtsf2_i387                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtdf2_1                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtdf2_1_sse_only              PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtdf2_i387                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtxf2                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrttf2                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sindf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sinsf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sinxf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sintf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cosdf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cossf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cosxf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_costf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cld                             PARAMS ((void));
extern struct rtx_def *gen_strmovdi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovsi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovsi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovhi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovhi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovqi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovqi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_movdi_rex64                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_movsi                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_movsi_rex64                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_movqi                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_movqi_rex64                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetdi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetsi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetsi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsethi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsethi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetqi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetqi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_stosdi_rex64                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_stossi                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_stossi_rex64                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_stosqi                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rep_stosqi_rex64                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpstrqi_nz_1                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpstrqi_nz_rex_1               PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpstrqi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpstrqi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strlenqi_1                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strlenqi_rex_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_movdicc_0_m1_rex64          PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_x86_movsicc_0_m1                PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_pro_epilogue_adjust_stack_rex64 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movsfcc                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movsfcc_eq                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movdfcc                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movdfcc_eq                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_allocate_stack_worker_1         PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_allocate_stack_worker_rex64     PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_trap                            PARAMS ((void));
extern struct rtx_def *gen_movv4sf_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv4si_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv8qi_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv4hi_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv2si_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv2sf_internal                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movti_internal                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movaps                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movups                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movmskps                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_pmovmskb                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_maskmovq                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_maskmovq_rex                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movntv4sf                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movntdi                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movhlps                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movlhps                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movhps                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movlps                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_loadss                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_movss                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_storess                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_shufps                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addv4sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmaddv4sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subv4sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmsubv4sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulv4sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmmulv4sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divv4sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmdivv4sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rcpv4sf2                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmrcpv4sf2                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rsqrtv4sf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmrsqrtv4sf2                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtv4sf2                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmsqrtv4sf2                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_andti3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_nandti3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_iorti3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_xorti3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_clrv4sf                     PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_maskcmpv4sf3                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_maskncmpv4sf3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmmaskcmpv4sf3                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmmaskncmpv4sf3                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_comi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_ucomi                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_unpckhps                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sse_unpcklps                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_smaxv4sf3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmsmaxv4sf3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sminv4sf3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_vmsminv4sf3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvtpi2ps                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvtps2pi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvttps2pi                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvtsi2ss                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvtss2si                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cvttss2si                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addv8qi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addv4hi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addv2si3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ssaddv8qi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ssaddv4hi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_usaddv8qi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_usaddv4hi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subv8qi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subv4hi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subv2si3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sssubv8qi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sssubv4hi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ussubv8qi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ussubv4hi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulv4hi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_smulv4hi3_highpart              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umulv4hi3_highpart              PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_pmaddwd                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_iordi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_xordi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_clrdi                       PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_mmx_anddi3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_nanddi3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_uavgv8qi3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_uavgv4hi3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_psadbw                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_pinsrw                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_pextrw                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_pshufw                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_eqv8qi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_eqv4hi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_eqv2si3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_gtv8qi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_gtv4hi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_gtv2si3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umaxv8qi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_smaxv4hi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_uminv8qi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sminv4hi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrv4hi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrv2si3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrv4hi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrv2si3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_lshrdi3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashlv4hi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashlv2si3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_ashldi3                     PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_packsswb                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_packssdw                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_packuswb                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpckhbw                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpckhwd                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpckhdq                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpcklbw                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpcklwd                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mmx_punpckldq                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_emms                            PARAMS ((void));
extern struct rtx_def *gen_ldmxcsr                         PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_stmxcsr                         PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_addv2sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subv2sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subrv2sf3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_gtv2sf3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_gev2sf3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_eqv2sf3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfmaxv2sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfminv2sf3                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulv2sf3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_femms                           PARAMS ((void));
extern struct rtx_def *gen_pf2id                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pf2iw                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfacc                           PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfnacc                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfpnacc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pi2fw                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatv2si2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pavgusb                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfrcpv2sf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfrcpit1v2sf3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfrcpit2v2sf3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfrsqrtv2sf2                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pfrsqit1v2sf3                   PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pmulhrwv4hi3                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pswapdv2si2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pswapdv2sf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpdi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpsi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmphi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpqi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpdi_1_rex64                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpsi_1                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpqi_ext_3                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpxf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmptf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpdf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpsf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movsi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movhi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movstricthi                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movqi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_reload_outqi                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movstrictqi                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movdi                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movsf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movdf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movxf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movtf                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendhisi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendqihi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendqisi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_zero_extendsidi2                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendsidi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendsfdf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendsfxf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extendsftf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extenddfxf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extenddftf2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_truncdfsf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_truncxfsf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_trunctfsf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_truncxfdf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_trunctfdf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncxfdi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_trunctfdi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdfdi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsfdi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncxfsi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_trunctfsi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdfsi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsfsi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncxfhi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_trunctfhi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncdfhi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_fix_truncsfhi2                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatsisf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatdisf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatsidf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_floatdidf2                      PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_adddi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addxf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addtf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_adddf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_addsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subdi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subxf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subtf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subdf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_subsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_muldi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umulqihi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulqihi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umulditi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umulsidi3                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulditi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulsidi3                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umuldi3_highpart                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_umulsi3_highpart                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_smuldi3_highpart                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_smulsi3_highpart                PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulxf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_multf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_muldf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mulsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divxf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divtf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divdf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divmoddi4                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_divmodsi4                       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_udivmodhi4                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_testsi_ccno_1                   PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_testqi_ccz_1                    PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_testqi_ext_ccno_0               PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_anddi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_andsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_andhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_andqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_iordi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_iorsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_iorhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_iorqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_xordi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_xorsi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_xorhi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_xorqi3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_xorqi_cc_ext_1                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negdi2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negsi2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_neghi2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negqi2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negsf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negdf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negxf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_negtf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_abssf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_absdf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_absxf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_abstf2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_one_cmpldi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_one_cmplsi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_one_cmplhi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_one_cmplqi2                     PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashldi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_shift_adj_1                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_shift_adj_2                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashlsi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashlhi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashlqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrdi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_x86_shift_adj_3                 PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrsi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrhi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ashrqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrdi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrsi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrhi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_lshrqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotldi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotlsi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotlhi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotlqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotrdi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotrsi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotrhi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_rotrqi3                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extv                            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_extzv                           PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_insv                            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_seq                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sne                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sgt                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sgtu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_slt                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sltu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sge                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sgeu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sle                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sleu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sunordered                      PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sordered                        PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_suneq                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sunge                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sungt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sunle                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sunlt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_sltgt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_beq                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bne                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bgt                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bgtu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_blt                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bltu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bge                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bgeu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_ble                             PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bleu                            PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bunordered                      PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bordered                        PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_buneq                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bunge                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bungt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bunle                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bunlt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_bltgt                           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_indirect_jump                   PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_tablejump                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_doloop_end                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
#define GEN_CALL_POP(A, B, C, D) gen_call_pop ((A), (B), (C), (D))
extern struct rtx_def *gen_call_pop                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
#define GEN_CALL(A, B, C, D) gen_call ((A), (B), (C))
extern struct rtx_def *gen_call                            PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_call_exp                        PARAMS ((struct rtx_def *, struct rtx_def *));
#define GEN_CALL_VALUE_POP(A, B, C, D, E) gen_call_value_pop ((A), (B), (C), (D), (E))
extern struct rtx_def *gen_call_value_pop                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
#define GEN_CALL_VALUE(A, B, C, D, E) gen_call_value ((A), (B), (C), (D))
extern struct rtx_def *gen_call_value                      PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_call_value_exp                  PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_untyped_call                    PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_return                          PARAMS ((void));
extern struct rtx_def *gen_prologue                        PARAMS ((void));
extern struct rtx_def *gen_epilogue                        PARAMS ((void));
extern struct rtx_def *gen_sibcall_epilogue                PARAMS ((void));
extern struct rtx_def *gen_eh_return                       PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_ffssi2                          PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtsf2                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sqrtdf2                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movstrsi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movstrdi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovdi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovsi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovsi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovhi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovhi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovqi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strmovqi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_clrstrsi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_clrstrdi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetdi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetsi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetsi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsethi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsethi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetqi                        PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strsetqi_rex64                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpstrsi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_cmpintqi                        PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_strlensi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_strlendi                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movdicc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movsicc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movhicc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movsfcc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movdfcc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movxfcc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movtfcc                         PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_minsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_mindf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_maxsf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_maxdf3                          PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_pro_epilogue_adjust_stack       PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_allocate_stack_worker           PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_allocate_stack                  PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_builtin_setjmp_receiver         PARAMS ((struct rtx_def *));
extern struct rtx_def *gen_conditional_trap                PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movti                           PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv4sf                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv4si                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv2si                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv4hi                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv8qi                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_movv2sf                         PARAMS ((struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_sfence                          PARAMS ((void));
extern struct rtx_def *gen_sse_prologue_save               PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *, struct rtx_def *));
extern struct rtx_def *gen_prefetch                        PARAMS ((struct rtx_def *, struct rtx_def *, struct rtx_def *));

#endif /* GCC_INSN_FLAGS_H */
