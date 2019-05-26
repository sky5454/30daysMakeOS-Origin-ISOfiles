/* Generated automatically by the program `genattrtab'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "tm_p.h"
#include "insn-config.h"
#include "recog.h"
#include "regs.h"
#include "real.h"
#include "output.h"
#include "insn-attr.h"
#include "toplev.h"
#include "flags.h"

#define operands recog_data.operand

extern int insn_current_length PARAMS ((rtx));
int
insn_current_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_variable_length_p PARAMS ((rtx));
int
insn_variable_length_p (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int insn_default_length PARAMS ((rtx));
int
insn_default_length (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 507:
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 484:
    case 482:
    case 474:
    case 472:
    case 462:
    case 458:
    case 442:
    case 440:
    case 438:
    case 436:
      extract_insn_cached (insn);
      if (register_operand (operands[0], VOIDmode))
        {
	  return 2;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 479:
    case 478:
    case 468:
    case 464:
    case 460:
    case 454:
    case 450:
    case 432:
    case 428:
      extract_insn_cached (insn);
      if (register_operand (operands[0], SImode))
        {
	  return 2;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 476:
    case 466:
    case 446:
    case 444:
    case 421:
    case 419:
      extract_insn_cached (insn);
      if (register_operand (operands[0], DImode))
        {
	  return 2;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 673:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 16 /* 0x10 */;
        }
      else
        {
	  return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);
        }

    case 658:
    case 657:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 524:
    case 521:
    case 520:
    case 519:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 76:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      return 16 /* 0x10 */;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
      return 128 /* 0x80 */;

    case 805:
      return 135 /* 0x87 */;

    case 650:
    case 649:
      return 5;

    case 523:
    case 522:
    case 517:
    case 514:
    case 31:
      return 1;

    case 515:
      return 3;

    case 513:
      return 0;

    case 469:
    case 455:
    case 451:
    case 433:
    case 429:
    case 166:
    case 165:
    case 30:
      return 2;

    default:
      return get_attr_modrm (insn) + get_attr_prefix_0f (insn) + get_attr_i387 (insn) + 1 + get_attr_prefix_rep (insn) + get_attr_prefix_data16 (insn) + get_attr_length_immediate (insn) + get_attr_length_address (insn);

    }
}

extern int result_ready_cost PARAMS ((rtx));
int
result_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (constant_call_address_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 636:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 7;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 10 /* 0xa */;
        }
      else
        {
	  return 1;
        }

    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 10 /* 0xa */;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 582:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 100 /* 0x64 */;
        }
      else if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 70 /* 0x46 */;
        }
      else if ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 56 /* 0x38 */;
        }
      else
        {
	  return 1;
        }

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0))
        {
	  return 100 /* 0x64 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  return 70 /* 0x46 */;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((mult_operator (operands[3], TFmode)) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((mult_operator (operands[3], XFmode)) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], DFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((mult_operator (operands[3], DFmode)) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_K6))) && (get_attr_type (insn) == TYPE_FDIV)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 56 /* 0x38 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 39 /* 0x27 */;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (get_attr_type (insn) == TYPE_FOP))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_FOP))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 532:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], TFmode))))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 531:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], XFmode))))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  return 5;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)) || (! (mult_operator (operands[3], SFmode))))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (constant_call_address_operand (operands[0], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[0], VOIDmode)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 2)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 1)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 1)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 401:
    case 399:
    case 396:
    case 395:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[1], VOIDmode))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 46 /* 0x2e */;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 42 /* 0x2a */;
        }
      else if ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 1;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 11 /* 0xb */;
        }
      else if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], QImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], QImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 3)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], HImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], HImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 2)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((((get_attr_pent_pair (insn) == PENT_PAIR_PU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], SImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], SImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], DImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((! (incdec_operand (operands[2], DImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 425:
    case 407:
    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 3;
        }
      else if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) || ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative != 0)) || ((which_alternative == 1) && ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_ATHLON))) || ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_LOAD) && (which_alternative == 1))))
        {
	  return 10 /* 0xa */;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || (which_alternative == 1))) || (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || (which_alternative == 1))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) || (which_alternative == 1)))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_ATHLON))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  return 10 /* 0xa */;
        }
      else if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_ATHLON))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || (((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))) || ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) && (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[1], VOIDmode))) || ((((ix86_cpu) == (CPU_PENTIUM))) && (memory_operand (operands[1], VOIDmode))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_memory (insn) == MEMORY_STORE))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 802:
    case 487:
    case 486:
    case 86:
    case 80:
    case 79:
    case 69:
    case 53:
    case 47:
    case 42:
    case 41:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (memory_operand (operands[1], VOIDmode)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_ATHLON))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if (((((ix86_cpu) == (CPU_K6))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if ((((ix86_cpu) == (CPU_ATHLON))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH))))
        {
	  return 3;
        }
      else if ((((ix86_cpu) == (CPU_K6))) || (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 1;
        }

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 804:
    case 803:
    case 801:
    case 765:
    case 764:
    case 726:
    case 664:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
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
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 85:
    case 76:
    case 68:
    case 52:
    case 46:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      return 1;

    default:
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return 3;
        }
      else
        {
	  return 1;
        }

    }
}

extern int athlon_load_unit_ready_cost PARAMS ((rtx));
int
athlon_load_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_store_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_store_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_muladd_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_muladd_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_add_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_add_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_mul_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_mul_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_fp_unit_ready_cost PARAMS ((rtx));
int
athlon_fp_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 7;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], TFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], XFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], DFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if ((((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 24 /* 0x18 */;
        }
      else if (((mult_operator (operands[3], SFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((get_attr_type (insn) == TYPE_FOP) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 532:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], TFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 531:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], XFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (mult_operator (operands[3], SFmode))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else if ((which_alternative == 0) && (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 4;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) && ((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative == 3) || ((which_alternative == 4) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative == 3) || ((which_alternative == 4) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) && ((((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((ix86_cpu) == (CPU_ATHLON))))))))
        {
	  return 2;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 10 /* 0xa */;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 2;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 3;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 3;
        }
      else
        {
	  return 100 /* 0x64 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 100 /* 0x64 */;

    }
}

extern int athlon_muldiv_unit_ready_cost PARAMS ((rtx));
int
athlon_muldiv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 42 /* 0x2a */;

    }
}

extern unsigned int athlon_muldiv_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_muldiv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65578 /* min 1, max 42 */;

    }
}

extern int athlon_ieu_unit_ready_cost PARAMS ((rtx));
int
athlon_ieu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (! (const0_operand (operands[2], DImode)))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 1) && (const0_operand (operands[2], DImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (which_alternative == 3)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 15 /* 0xf */;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 507:
      if ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 2) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if ((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 5;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], QImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], QImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 3) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], HImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], HImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative == 2) && (((ix86_cpu) == (CPU_ATHLON)))) || (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], SImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_INCDEC) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_INCDEC) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], DImode)) && (((ix86_cpu) == (CPU_ATHLON)))) || ((! (incdec_operand (operands[2], DImode))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_INCDEC) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_ALU) && (((ix86_cpu) == (CPU_ATHLON))))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && (((ix86_cpu) == (CPU_ATHLON)))) || (((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 71:
    case 67:
    case 66:
      if (((get_attr_type (insn) == TYPE_IMOVX) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_IMOV) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((get_attr_type (insn) == TYPE_IMOV) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((ix86_cpu) == (CPU_ATHLON)))) || ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 617:
    case 616:
    case 615:
    case 614:
    case 613:
    case 582:
    case 518:
    case 516:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 487:
    case 486:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 112:
    case 111:
    case 109:
    case 108:
    case 107:
    case 87:
    case 86:
    case 85:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 75:
    case 74:
    case 73:
    case 70:
    case 69:
    case 68:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 59:
    case 58:
    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case 116:
    case 113:
    case 110:
    case 9:
    case 6:
    case 3:
    case 0:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON)))) || ((which_alternative == 1) && (((ix86_cpu) == (CPU_ATHLON)))))
        {
	  return 1;
        }
      else
        {
	  return 42 /* 0x2a */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 42 /* 0x2a */;

    }
}

extern unsigned int athlon_ieu_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_ieu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65551 /* min 1, max 15 */;

    }
}

extern int athlon_directdec_unit_ready_cost PARAMS ((rtx));
int
athlon_directdec_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int athlon_vectordec_unit_ready_cost PARAMS ((rtx));
int
athlon_vectordec_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern unsigned int athlon_vectordec_unit_blockage_range PARAMS ((rtx));
unsigned int
athlon_vectordec_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 507:
      if ((! (get_attr_type (insn) == TYPE_MULTI)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE)))))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 4) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 673:
    case 620:
    case 618:
    case 83:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_ATHLON))))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 407:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 87:
    case 80:
    case 79:
    case 76:
    case 48:
    case 42:
    case 41:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      return 65537 /* min 1, max 1 */;

    default:
      if (((ix86_cpu) == (CPU_ATHLON)))
        {
	  return 1 /* min 0, max 1 */;
        }
      else
        {
	  return 65537 /* min 1, max 1 */;
        }

    }
}

extern int k6_fpu_unit_ready_cost PARAMS ((rtx));
int
k6_fpu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 532:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], TFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 531:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], XFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))) || (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 56 /* 0x38 */;

    }
}

extern unsigned int k6_fpu_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_fpu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 131128 /* min 2, max 56 */;

    }
}

extern int k6_store_unit_ready_cost PARAMS ((rtx));
int
k6_store_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], DImode)))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 1) || (const0_operand (operands[2], DImode))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 1) || (const0_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 412:
    case 409:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative != 3) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 415:
    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((which_alternative != 2) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative == 0) && (! (pic_symbolic_operand (operands[2], SImode)))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 2) && (! (pic_symbolic_operand (operands[2], SImode)))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if (((which_alternative != 2) && (! (pic_symbolic_operand (operands[2], DImode)))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((((which_alternative == 5) || (which_alternative == 6)) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 4) || ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 805:
    case 803:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 85:
    case 68:
    case 52:
    case 46:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && ((((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))) || ((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 2;
        }
      else if ((((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6))) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6))))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 487:
    case 486:
    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 804:
    case 802:
    case 801:
    case 765:
    case 764:
    case 726:
    case 664:
    case 658:
    case 657:
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 615:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 516:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
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
    case 491:
    case 490:
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 86:
    case 76:
    case 69:
    case 53:
    case 47:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      return 10 /* 0xa */;

    default:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    }
}

extern unsigned int k6_store_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_store_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65546 /* min 1, max 10 */;

    }
}

extern int k6_load_unit_ready_cost PARAMS ((rtx));
int
k6_load_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if ((! (constant_call_address_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if ((! (constant_call_address_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 802:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 86:
    case 69:
    case 53:
    case 47:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 487:
    case 486:
    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_K6)))) || ((! (memory_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 78:
    case 63:
    case 59:
    case 58:
    case 57:
    case 50:
    case 49:
    case 44:
    case 43:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if ((memory_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 804:
    case 803:
    case 801:
    case 765:
    case 764:
    case 726:
    case 664:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 615:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 85:
    case 76:
    case 68:
    case 52:
    case 46:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      return 10 /* 0xa */;

    default:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((ix86_cpu) == (CPU_K6)))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 10 /* 0xa */;
        }

    }
}

extern unsigned int k6_load_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_load_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65546 /* min 1, max 10 */;

    }
}

extern int k6_branch_unit_ready_cost PARAMS ((rtx));
int
k6_branch_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int k6_alu_unit_ready_cost PARAMS ((rtx));
int
k6_alu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], DImode))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative == 1) && (! (const0_operand (operands[2], DImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 2;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], QImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], QImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], HImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], HImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], SImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_INCDEC) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_INCDEC) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if (((incdec_operand (operands[2], DImode)) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((! (incdec_operand (operands[2], DImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || (((get_attr_type (insn) == TYPE_INCDEC) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6))))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 615:
    case 613:
    case 487:
    case 486:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || (((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 71:
    case 67:
    case 66:
      if (((get_attr_type (insn) == TYPE_IMOV) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((get_attr_type (insn) == TYPE_IMOVX) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_IMOV) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 87:
    case 75:
    case 74:
    case 73:
    case 62:
    case 61:
    case 56:
    case 55:
    case 54:
    case 48:
      if ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6))))) || ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 112:
    case 111:
    case 109:
    case 108:
    case 107:
    case 82:
    case 81:
    case 70:
    case 65:
    case 64:
    case 63:
    case 57:
    case 44:
    case 43:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      if (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 427:
    case 426:
    case 418:
    case 113:
    case 110:
    case 9:
    case 6:
    case 3:
    case 0:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))) || ((which_alternative == 1) && (((get_attr_memory (insn) == MEMORY_NONE) && (((ix86_cpu) == (CPU_K6)))) || ((! (get_attr_memory (insn) == MEMORY_NONE)) && (((ix86_cpu) == (CPU_K6)))))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 17 /* 0x11 */;

    }
}

extern unsigned int k6_alu_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_alu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int k6_alux_unit_ready_cost PARAMS ((rtx));
int
k6_alux_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 411:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (general_operand (operands[0], QImode)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (general_operand (operands[0], QImode)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) && (general_operand (operands[0], QImode)))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 2;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 3) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 2) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 208:
    case 207:
    case 202:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 636:
    case 635:
    case 116:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative == 0) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 427:
    case 426:
    case 418:
    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((which_alternative != 0) || (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 71:
    case 67:
    case 66:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) && (general_operand (operands[0], QImode))))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 582:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      if (((ix86_cpu) == (CPU_K6)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case 615:
    case 613:
    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 111:
    case 108:
    case 70:
    case 65:
    case 64:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) && (general_operand (operands[0], QImode)))
        {
	  return 1;
        }
      else
        {
	  return 17 /* 0x11 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 17 /* 0x11 */;

    }
}

extern unsigned int k6_alux_unit_blockage_range PARAMS ((rtx));
unsigned int
k6_alux_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int ppro_p34_unit_ready_cost PARAMS ((rtx));
int
ppro_p34_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int ppro_p2_unit_ready_cost PARAMS ((rtx));
int
ppro_p2_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

extern int ppro_p01_unit_ready_cost PARAMS ((rtx));
int
ppro_p01_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int ppro_p0_unit_ready_cost PARAMS ((rtx));
int
ppro_p0_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], DImode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (const0_operand (operands[2], SImode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 2;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((get_attr_type (insn) == TYPE_FOP) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 532:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], TFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 531:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], XFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if (((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 5;
        }
      else if ((! (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 507:
      if ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) && (((ix86_cpu) == (CPU_PENTIUMPRO)))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO)))) || (((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO)))) || ((get_attr_type (insn) == TYPE_ISHIFT) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 17 /* 0x11 */;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 3;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 427:
    case 426:
    case 418:
    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case 582:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 1;
        }
      else
        {
	  return 56 /* 0x38 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 56 /* 0x38 */;

    }
}

extern unsigned int ppro_p0_unit_blockage_range PARAMS ((rtx));
unsigned int
ppro_p0_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65553 /* min 1, max 17 */;

    }
}

extern int pent_v_unit_ready_cost PARAMS ((rtx));
int
pent_v_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern int pent_uv_unit_ready_cost PARAMS ((rtx));
int
pent_uv_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if ((constant_call_address_operand (operands[1], VOIDmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((which_alternative == 1) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if ((constant_call_address_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 507:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((get_attr_type (insn) == TYPE_IBR) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if (((memory_operand (operands[0], VOIDmode)) && (((ix86_cpu) == (CPU_PENTIUM)))) || ((! (memory_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((get_attr_type (insn) == TYPE_ISHIFT) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && (((get_attr_type (insn) == TYPE_ISHIFT) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((((get_attr_type (insn) == TYPE_ISHIFT) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 0) || (which_alternative == 2)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((which_alternative == 0) || (which_alternative == 2)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 282:
    case 281:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((which_alternative != 1) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 1) && (which_alternative != 3)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (((which_alternative != 1) && (which_alternative != 3)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((incdec_operand (operands[2], QImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((incdec_operand (operands[2], QImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((incdec_operand (operands[2], QImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((incdec_operand (operands[2], QImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative == 3) || (incdec_operand (operands[2], QImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 3) || (incdec_operand (operands[2], QImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 3) || (incdec_operand (operands[2], QImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 3) || (incdec_operand (operands[2], QImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((incdec_operand (operands[2], SImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((incdec_operand (operands[2], SImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((incdec_operand (operands[2], SImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((incdec_operand (operands[2], SImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((incdec_operand (operands[2], DImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((incdec_operand (operands[2], DImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((incdec_operand (operands[2], DImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((incdec_operand (operands[2], DImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 208:
    case 207:
    case 202:
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((get_attr_type (insn) == TYPE_ALU) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_type (insn) == TYPE_ALU)) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 615:
    case 613:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if (((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_PENTIUM)))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 75:
    case 74:
    case 73:
    case 62:
    case 56:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 71:
    case 67:
    case 66:
    case 51:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 86:
    case 85:
    case 69:
    case 68:
    case 53:
    case 52:
    case 47:
    case 46:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 84:
    case 45:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_PENTIUM)))) || (((! (memory_operand (operands[1], VOIDmode))) && (! (get_attr_memory (insn) == MEMORY_STORE))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if ((! (memory_operand (operands[0], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 287:
    case 286:
    case 285:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

extern unsigned int pent_uv_unit_blockage_range PARAMS ((rtx));
unsigned int
pent_uv_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65539 /* min 1, max 3 */;

    }
}

extern int pent_u_unit_ready_cost PARAMS ((rtx));
int
pent_u_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) && (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((get_attr_type (insn) == TYPE_ISHIFT) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && (((get_attr_type (insn) == TYPE_ISHIFT) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((((get_attr_type (insn) == TYPE_ISHIFT) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((! (get_attr_type (insn) == TYPE_ISHIFT)) && ((! (get_attr_type (insn) == TYPE_ALU)) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 245:
    case 244:
    case 243:
      if (((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 220:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((incdec_operand (operands[2], HImode)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_BOTH) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if ((get_attr_memory (insn) == MEMORY_STORE) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 2;
        }
      else if (((get_attr_memory (insn) == MEMORY_LOAD) && (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM)))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((which_alternative == 2) || (incdec_operand (operands[2], HImode))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_PENTIUM)))) || ((get_attr_memory (insn) == MEMORY_LOAD) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 2;
        }
      else if (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 110:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUM)))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_BOTH) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))) && (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 400:
    case 109:
    case 57:
      extract_insn_cached (insn);
      if (((get_attr_memory (insn) == MEMORY_STORE) && (((ix86_cpu) == (CPU_PENTIUM)))) || (((! (memory_operand (operands[1], VOIDmode))) && (! (get_attr_memory (insn) == MEMORY_STORE))) && (((ix86_cpu) == (CPU_PENTIUM)))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 56:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 53:
    case 52:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 51:
      if (((get_attr_memory (insn) == MEMORY_BOTH) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_STORE) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((get_attr_memory (insn) == MEMORY_LOAD) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))) || (((! (get_attr_memory (insn) == MEMORY_BOTH)) && ((! (get_attr_memory (insn) == MEMORY_STORE)) && (! (get_attr_memory (insn) == MEMORY_LOAD)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_PU) && (((ix86_cpu) == (CPU_PENTIUM))))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 58:
    case 49:
      extract_insn_cached (insn);
      if ((! (memory_operand (operands[1], VOIDmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case 8:
    case 7:
    case 6:
      if (((get_attr_memory (insn) == MEMORY_LOAD) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((ix86_cpu) == (CPU_PENTIUM))))))
        {
	  return 1;
        }
      else
        {
	  return 3;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 3;

    }
}

extern unsigned int pent_u_unit_blockage_range PARAMS ((rtx));
unsigned int
pent_u_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65539 /* min 1, max 3 */;

    }
}

extern int fpu_unit_ready_cost PARAMS ((rtx));
int
fpu_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 1;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  return 1;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if (((ix86_cpu) == (CPU_PENTIUM)))
	    {
	      return 70 /* 0x46 */;
	    }
	  else
	    {
	      return 56 /* 0x38 */;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
	    {
	      return 70 /* 0x46 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
	    {
	      return 56 /* 0x38 */;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], DFmode)))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 56 /* 0x38 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
	    {
	      return 39 /* 0x27 */;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode))))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 532:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
	    {
	      return 5;
	    }
	  else if (((ix86_cpu) == (CPU_PENTIUM)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 531:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
	    {
	      return 5;
	    }
	  else if (((ix86_cpu) == (CPU_PENTIUM)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
	    {
	      return 5;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
	    {
	      return 5;
	    }
	  else if (((ix86_cpu) == (CPU_PENTIUM)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  return 4;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 3;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if (((ix86_cpu) == (CPU_PENTIUM)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      extract_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && (((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO)))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && ((((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 3;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1))))
	    {
	      return 3;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) || ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 3;
	    }
	  else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 106:
    case 105:
    case 96:
    case 91:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)) || ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0)) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0)))
        {
	  return 1;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if ((((ix86_cpu) == (CPU_PENTIUM))) || (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  return 1;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 70 /* 0x46 */;

    }
}

extern unsigned int fpu_unit_blockage_range PARAMS ((rtx));
unsigned int
fpu_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65604 /* min 1, max 68 */;

    }
}

extern int pent_mul_unit_ready_cost PARAMS ((rtx));
int
pent_mul_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((mult_operator (operands[3], DFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FDIV) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 39 /* 0x27 */;
        }
      else if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 532:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], TFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 531:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], XFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (mult_operator (operands[3], SFmode))) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((mult_operator (operands[3], SFmode)) && (((ix86_cpu) == (CPU_PENTIUM))))
        {
	  return 2;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 70 /* 0x46 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 70 /* 0x46 */;

    }
}

extern unsigned int pent_mul_unit_blockage_range PARAMS ((rtx));
unsigned int
pent_mul_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 131142 /* min 2, max 70 */;

    }
}

extern int pent_np_unit_ready_cost PARAMS ((rtx));
int
pent_np_unit_ready_cost (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((which_alternative == 0) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 0) || (which_alternative == 1))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 12 /* 0xc */;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], TFmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], XFmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], DFmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_FOP) || (mult_operator (operands[3], SFmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode)))))
        {
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH)))
	    {
	      return 3;
	    }
	  else if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode))))))
        {
	  if (((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
	    {
	      return 3;
	    }
	  else if (((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))) || (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 401:
    case 399:
    case 396:
    case 395:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1)))))
        {
	  if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((which_alternative == 0) || (which_alternative == 1)) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 46 /* 0x2e */;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 11 /* 0xb */;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (incdec_operand (operands[2], QImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((! (incdec_operand (operands[2], QImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (incdec_operand (operands[2], HImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((! (incdec_operand (operands[2], HImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (incdec_operand (operands[2], SImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((! (incdec_operand (operands[2], SImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (incdec_operand (operands[2], DImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((! (incdec_operand (operands[2], DImode))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 208:
    case 207:
    case 202:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && (get_attr_memory (insn) == MEMORY_BOTH))))
	    {
	      return 3;
	    }
	  else if ((get_attr_type (insn) == TYPE_ALU) && (((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_pent_pair (insn) == PENT_PAIR_NP)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
	    {
	      return 3;
	    }
	  else if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 425:
    case 407:
    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (get_attr_memory (insn) == MEMORY_BOTH)
	    {
	      return 3;
	    }
	  else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 3;
	    }
	  else if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative == 1)
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 2;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
	    {
	      return 3;
	    }
	  else if ((which_alternative == 0) || (which_alternative == 1))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return 3;
	    }
	  else if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
	    {
	      return 3;
	    }
	  else if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode))))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 71:
    case 67:
    case 66:
    case 51:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV))))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 3;
	    }
	  else if (get_attr_memory (insn) == MEMORY_STORE)
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 562:
    case 559:
    case 529:
    case 526:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case 622:
    case 621:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 532:
    case 531:
    case 528:
    case 525:
    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 2;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 1;
        }
      else
        {
	  return 46 /* 0x2e */;
        }

    }
}

extern unsigned int pent_np_unit_blockage_range PARAMS ((rtx));
unsigned int
pent_np_unit_blockage_range (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], TFmode))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], XFmode))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], DFmode)))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], DFmode))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], SFmode)))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], SFmode))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 507:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode)))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode))))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1)))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2))))
        {
	  if ((which_alternative != 0) && (which_alternative != 2))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 282:
    case 281:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative == 1)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3))))
        {
	  if ((which_alternative == 1) || (which_alternative == 3))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative == 0)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 620:
    case 619:
    case 618:
    case 133:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative != 0) && (which_alternative != 1))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)))))
        {
	  if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative == 0)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
        {
	  if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	    {
	      if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 3) || (which_alternative == 4))))
	        {
		  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4)))
		    {
		      return 65582 /* min 1, max 46 */;
		    }
		  else
		    {
		      return 46 /* min 0, max 46 */;
		    }
	        }
	      else
	        {
		  if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))
		    {
		      return 65582 /* min 1, max 46 */;
		    }
		  else
		    {
		      return 46 /* min 0, max 46 */;
		    }
	        }
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))))
        {
	  if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode))))))
        {
	  if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 71:
    case 67:
    case 66:
    case 51:
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV))))
        {
	  if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 411:
    case 410:
    case 409:
    case 408:
    case 404:
    case 403:
    case 221:
    case 215:
    case 208:
    case 207:
    case 202:
    case 84:
    case 45:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 615:
    case 613:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 236:
    case 235:
    case 231:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 189:
    case 188:
    case 186:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 46 /* min 0, max 46 */;
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 562:
    case 559:
    case 529:
    case 526:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (which_alternative != 0)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 622:
    case 621:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 532:
    case 531:
    case 528:
    case 525:
    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  return 46 /* min 0, max 46 */;
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case 636:
    case 635:
    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 287:
    case 286:
    case 285:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 187:
    case 86:
    case 85:
    case 75:
    case 74:
    case 73:
    case 69:
    case 68:
    case 62:
    case 56:
    case 53:
    case 52:
    case 47:
    case 46:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 65582 /* min 1, max 46 */;
	    }
	  else
	    {
	      return 46 /* min 0, max 46 */;
	    }
        }
      else
        {
	  return 65582 /* min 1, max 46 */;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 65582 /* min 1, max 46 */;

    }
}

extern int function_units_used PARAMS ((rtx));
int
function_units_used (insn)
     rtx insn;
{
  enum attr_athlon_fpunits attr_athlon_fpunits = get_attr_athlon_fpunits (insn);
  enum attr_athlon_decode attr_athlon_decode = get_attr_athlon_decode (insn);
  enum attr_memory attr_memory = get_attr_memory (insn);
  enum attr_mode attr_mode = get_attr_mode (insn);
  enum attr_pent_pair attr_pent_pair = get_attr_pent_pair (insn);
  enum attr_type attr_type = get_attr_type (insn);
  unsigned long accum = 0;

  accum |= (((((ix86_cpu) == (CPU_PENTIUM))) && (((((((((attr_type == TYPE_IMUL) || (attr_type == TYPE_STR)) || (attr_type == TYPE_IDIV)) || ((attr_type == TYPE_FMOV) && (((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_STORE)) && (attr_mode == MODE_XF)))) || ((attr_type == TYPE_FMOV) && ((immediate_operand (operands[1], VOIDmode)) || (attr_memory == MEMORY_STORE)))) || (attr_type == TYPE_CLD)) || (attr_pent_pair == PENT_PAIR_NP)) || (! (attr_pent_pair == PENT_PAIR_NP))) || ((attr_type == TYPE_FMOV) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || ((attr_type == TYPE_FSGN) || ((attr_type == TYPE_FMUL) || ((attr_type == TYPE_FPSPC) || ((attr_type == TYPE_FCMOV) || ((attr_type == TYPE_FCMP) || (attr_type == TYPE_FISTP))))))))))) ? (1) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUM))) && ((((attr_type == TYPE_IMUL) || (attr_type == TYPE_FMUL)) || (attr_type == TYPE_FDIV)) || (attr_type == TYPE_FPSPC))) ? (2) : (0));
  accum |= ((((((ix86_cpu) == (CPU_PENTIUM))) && (((((((attr_type == TYPE_FMOV) && (((((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_STORE)) && (attr_mode == MODE_XF)) || ((immediate_operand (operands[1], VOIDmode)) || (attr_memory == MEMORY_STORE))) || ((attr_memory == MEMORY_NONE) || (attr_memory == MEMORY_LOAD)))) || ((attr_type == TYPE_FCMP) || ((attr_type == TYPE_FXCH) || (attr_type == TYPE_FSGN)))) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || (attr_type == TYPE_FISTP)))) || (attr_type == TYPE_FMUL)) || (attr_type == TYPE_FDIV)) || (attr_type == TYPE_FPSPC))) || ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (((((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || ((attr_type == TYPE_FSGN) || ((attr_type == TYPE_FMOV) || ((attr_type == TYPE_FCMP) || ((attr_type == TYPE_FCMOV) || (attr_type == TYPE_FISTP))))))) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC))) || (attr_type == TYPE_IMUL)))) ? (4) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUM))) && (attr_pent_pair == PENT_PAIR_PU)) ? (8) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUM))) && (! (attr_pent_pair == PENT_PAIR_NP))) ? (16) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUM))) && (attr_pent_pair == PENT_PAIR_PV)) ? (32) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((((((((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_LEA) || ((attr_type == TYPE_IBR) || (attr_type == TYPE_CLD)))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV)) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || ((attr_type == TYPE_FSGN) || (attr_type == TYPE_FISTP))))) || (attr_type == TYPE_FCMOV)) || (attr_type == TYPE_FCMP)) || (attr_type == TYPE_FMOV)) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC)))) ? (64) : (0));
  accum |= ((((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! ((attr_type == TYPE_IMOV) || (attr_type == TYPE_FMOV)))) || (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_IMOV) || (attr_type == TYPE_FMOV))) && (attr_memory == MEMORY_NONE))) ? (128) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_POP) || ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH)))) ? (256) : (0));
  accum |= (((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((attr_type == TYPE_PUSH) || ((attr_memory == MEMORY_STORE) || (attr_memory == MEMORY_BOTH)))) ? (512) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || (attr_type == TYPE_CLD)))) || (((attr_type == TYPE_ALU) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOVX) || (attr_type == TYPE_INCDEC))))))) && (general_operand (operands[0], QImode)))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (1024) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ALU) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOVX) || ((attr_type == TYPE_INCDEC) || ((attr_type == TYPE_SETCC) || (attr_type == TYPE_LEA)))))))))) || ((attr_type == TYPE_IMOV) && (attr_memory == MEMORY_NONE))) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (2048) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && ((attr_type == TYPE_CALL) || ((attr_type == TYPE_CALLV) || (attr_type == TYPE_IBR)))) ? (4096) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((attr_type == TYPE_POP) || ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))) || ((attr_type == TYPE_STR) && ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))))) ? (8192) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && (((attr_type == TYPE_LEA) || (attr_type == TYPE_STR)) || ((attr_type == TYPE_PUSH) || ((attr_memory == MEMORY_STORE) || (attr_memory == MEMORY_BOTH))))) ? (16384) : (0));
  accum |= (((((ix86_cpu) == (CPU_K6))) && ((((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || ((attr_type == TYPE_FMOV) || ((attr_type == TYPE_FCMP) || (attr_type == TYPE_FISTP))))) || (attr_type == TYPE_FMUL)) || ((attr_type == TYPE_FDIV) || (attr_type == TYPE_FPSPC)))) ? (32768) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_athlon_decode == ATHLON_DECODE_VECTOR) || (attr_athlon_decode == ATHLON_DECODE_DIRECT))) ? (65536) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_decode == ATHLON_DECODE_DIRECT)) ? (131072) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (((((attr_type == TYPE_ALU1) || ((attr_type == TYPE_NEGNOT) || ((attr_type == TYPE_ALU) || ((attr_type == TYPE_ICMP) || ((attr_type == TYPE_TEST) || ((attr_type == TYPE_IMOV) || ((attr_type == TYPE_IMOVX) || ((attr_type == TYPE_LEA) || ((attr_type == TYPE_INCDEC) || ((attr_type == TYPE_ISHIFT) || ((attr_type == TYPE_IBR) || ((attr_type == TYPE_CALL) || ((attr_type == TYPE_CALLV) || ((attr_type == TYPE_ICMOV) || ((attr_type == TYPE_CLD) || ((attr_type == TYPE_POP) || ((attr_type == TYPE_SETCC) || (attr_type == TYPE_PUSH)))))))))))))))))) || (attr_type == TYPE_STR)) || (attr_type == TYPE_IMUL)) || (attr_type == TYPE_IDIV))) ? (262144) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_type == TYPE_IMUL) || (attr_type == TYPE_IDIV))) ? (524288) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((((((((attr_type == TYPE_FPSPC) || (attr_type == TYPE_FDIV)) || ((attr_type == TYPE_FOP) || ((attr_type == TYPE_FOP1) || ((attr_type == TYPE_FMUL) || (attr_type == TYPE_FISTP))))) || ((attr_type == TYPE_FMOV) && ((attr_memory == MEMORY_LOAD) && (attr_mode == MODE_XF)))) || ((attr_type == TYPE_FMOV) || (attr_type == TYPE_FSGN))) || ((attr_type == TYPE_FCMP) && (attr_athlon_decode == ATHLON_DECODE_DIRECT))) || ((attr_type == TYPE_FCMP) && (attr_athlon_decode == ATHLON_DECODE_VECTOR))) || (attr_type == TYPE_FCMOV))) ? (1048576) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_MUL)) ? (2097152) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_ADD)) ? (4194304) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_athlon_fpunits == ATHLON_FPUNITS_MULADD) || ((attr_athlon_fpunits == ATHLON_FPUNITS_MUL) || (attr_athlon_fpunits == ATHLON_FPUNITS_ADD)))) ? (8388608) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && ((attr_memory == MEMORY_LOAD) || (attr_memory == MEMORY_BOTH))) ? (33554432) : (0));
  accum |= (((((ix86_cpu) == (CPU_ATHLON))) && (attr_athlon_fpunits == ATHLON_FPUNITS_STORE)) ? (16777216) : (0));

  if (accum && accum == (accum & -accum))
    {
      int i;
      for (i = 0; accum >>= 1; ++i) continue;
      accum = i;
    }
  else
    accum = ~accum;
  return accum;
}

extern enum attr_athlon_fpunits get_attr_athlon_fpunits PARAMS ((rtx));
enum attr_athlon_fpunits
get_attr_athlon_fpunits (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], TFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], XFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], DFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_FDIV))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 532:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 531:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  return ATHLON_FPUNITS_MUL;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_MUL;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((which_alternative == 1) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (which_alternative != 0)
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((which_alternative == 0) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
      extract_insn_cached (insn);
      if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else
        {
	  return ATHLON_FPUNITS_MULADD;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (get_attr_memory (insn) == MEMORY_LOAD))
        {
	  return ATHLON_FPUNITS_ANY;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((register_operand (operands[1], SImode)) || (immediate_operand (operands[1], VOIDmode))))
        {
	  return ATHLON_FPUNITS_STORE;
        }
      else if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return ATHLON_FPUNITS_MULADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_FPUNITS_ADD;
        }
      else
        {
	  return ATHLON_FPUNITS_NONE;
        }

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      return ATHLON_FPUNITS_ADD;

    case 622:
    case 621:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
      return ATHLON_FPUNITS_MUL;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return ATHLON_FPUNITS_NONE;

    }
}

extern enum attr_athlon_decode get_attr_athlon_decode PARAMS ((rtx));
enum attr_athlon_decode
get_attr_athlon_decode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ATHLON_DECODE_DIRECT;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 507:
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 673:
    case 620:
    case 618:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return ATHLON_DECODE_VECTOR;
        }
      else
        {
	  return ATHLON_DECODE_DIRECT;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 524:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
    case 230:
    case 185:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 80:
    case 79:
    case 76:
    case 42:
    case 41:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
    case 31:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
    case 48:
    case 87:
    case 166:
    case 407:
    case 522:
    case 523:
      return ATHLON_DECODE_VECTOR;

    default:
      return ATHLON_DECODE_DIRECT;

    }
}

extern enum attr_fp_int_src get_attr_fp_int_src PARAMS ((rtx));
enum attr_fp_int_src
get_attr_fp_int_src (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 536:
    case 537:
    case 541:
    case 542:
    case 547:
    case 548:
    case 549:
    case 550:
      return FP_INT_SRC_TRUE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return FP_INT_SRC_FALSE;

    }
}

extern enum attr_imm_disp get_attr_imm_disp PARAMS ((rtx));
enum attr_imm_disp
get_attr_imm_disp (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], DImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))) || ((which_alternative == 0) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode)))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))) || ((which_alternative == 0) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode)))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 507:
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], DImode))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 208:
    case 207:
    case 202:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
      extract_insn_cached (insn);
      if ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[2], VOIDmode)))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode))))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 673:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return IMM_DISP_UNKNOWN;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if (((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 71:
    case 67:
    case 66:
    case 51:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 87:
    case 86:
    case 85:
    case 75:
    case 74:
    case 73:
    case 69:
    case 68:
    case 62:
    case 61:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 48:
    case 47:
    case 46:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((memory_displacement_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))
        {
	  return IMM_DISP_TRUE;
        }
      else
        {
	  return IMM_DISP_FALSE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 76:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      return IMM_DISP_UNKNOWN;

    default:
      return IMM_DISP_FALSE;

    }
}

extern int get_attr_i387 PARAMS ((rtx));
int
get_attr_i387 (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], TFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], XFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || (((which_alternative != 2) && (mult_operator (operands[3], DFmode))) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], DFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || (((which_alternative != 2) && (mult_operator (operands[3], SFmode))) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_FOP) || ((mult_operator (operands[3], SFmode)) || (get_attr_type (insn) == TYPE_FDIV)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 620:
    case 619:
    case 618:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 562:
    case 559:
    case 529:
    case 526:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 622:
    case 621:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 532:
    case 531:
    case 528:
    case 525:
    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 106:
    case 105:
    case 96:
    case 91:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
    case 30:
    case 165:
    case 166:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int get_attr_length_address PARAMS ((rtx));
int
get_attr_length_address (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_constrain_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 507:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 673:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_address_default (insn);
        }

    case 46:
    case 52:
    case 68:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else if (which_alternative == 1)
        {
	  return 0;
        }
      else
        {
	  return 0;
        }

    case 47:
    case 53:
    case 69:
    case 85:
    case 86:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 8;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 106:
    case 105:
    case 100:
    case 99:
    case 98:
    case 97:
    case 96:
    case 93:
    case 92:
    case 91:
    case 76:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
    case 805:
      return 0;

    default:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_address_default (insn);

    }
}

extern int get_attr_length_immediate PARAMS ((rtx));
int
get_attr_length_immediate (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 673:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) || (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative != 2) && (which_alternative != 3)))))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  return 0;
        }
      else if (which_alternative == 0)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  return 0;
        }
      else if (which_alternative == 0)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 539:
    case 534:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (get_attr_i387 (insn) == 1))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 558:
    case 557:
    case 556:
    case 555:
    case 554:
    case 553:
    case 552:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
    case 537:
    case 536:
    case 533:
      extract_constrain_insn_cached (insn);
      if (get_attr_i387 (insn) == 1)
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return 4;
        }
      else
        {
	  return 0;
        }

    case 507:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IBR) || (get_attr_type (insn) == TYPE_MULTI))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else if ((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return 0;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return 0;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], QImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if ((incdec_operand (operands[2], QImode)) || (which_alternative == 3))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], HImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((incdec_operand (operands[2], HImode)) || (which_alternative == 2))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], SImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))))
        {
	  return 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))))
        {
	  return 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_constrain_insn_cached (insn);
      if (incdec_operand (operands[2], DImode))
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))))
        {
	  return 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))) || ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))) || ((which_alternative == 8) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 9) || (which_alternative == 10))) || ((which_alternative == 11) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))))
        {
	  return 0;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))
	    {
	      return 0;
	    }
	  else
	    {
	      return ix86_attr_length_immediate_default(insn,0);
	    }
        }
      else if (which_alternative == 1)
        {
	  return 4;
        }
      else if (which_alternative == 2)
        {
	  return 8;
        }
      else
        {
	  if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))) || ((which_alternative == 4) || ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative == 7) || (which_alternative == 8))) || ((which_alternative == 5) || (which_alternative == 6)))))
	    {
	      return 0;
	    }
	  else if ((which_alternative != 7) && ((which_alternative != 8) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode))))))
	    {
	      return ix86_attr_length_immediate_default(insn,0);
	    }
	  else
	    {
	      return /* Update immediate_length and other attributes! */ abort(),1;
	    }
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) || (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || (which_alternative == 6)) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 2) || (which_alternative == 3)))))
        {
	  return 0;
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 71:
    case 67:
    case 66:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4))))))
        {
	  return ix86_attr_length_immediate_default(insn,1);
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

    case 287:
    case 286:
    case 285:
    case 283:
    case 282:
    case 281:
    case 280:
    case 87:
    case 75:
    case 74:
    case 73:
    case 62:
    case 61:
    case 56:
    case 55:
    case 54:
    case 48:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_immediate_default(insn,0);

    case 85:
    case 68:
    case 52:
    case 46:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) || ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))) || ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6)))))
        {
	  return 0;
        }
      else if ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))
        {
	  return ix86_attr_length_immediate_default(insn,0);
        }
      else
        {
	  return /* Update immediate_length and other attributes! */ abort(),1;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 265:
    case 264:
    case 263:
    case 252:
    case 251:
    case 250:
    case 249:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 80:
    case 79:
    case 78:
    case 70:
    case 65:
    case 64:
    case 59:
    case 58:
    case 50:
    case 49:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 17:
    case 16:
    case 15:
    case 13:
    case 12:
    case 11:
    case 10:
    case 8:
    case 7:
    case 5:
    case 4:
    case 2:
    case 1:
      extract_constrain_insn_cached (insn);
      return ix86_attr_length_immediate_default(insn,1);

    case 0:
    case 3:
    case 6:
    case 9:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 44:
    case 82:
    case 284:
    case 302:
    case 303:
      return 1;

    case 515:
      return 2;

    case 518:
      return 4;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern enum attr_memory get_attr_memory PARAMS ((rtx));
enum attr_memory
get_attr_memory (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 673:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((((which_alternative != 2) && (which_alternative != 3)) && ((which_alternative == 2) || (which_alternative == 3))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return MEMORY_NONE;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative != 1) || (! (const0_operand (operands[2], DImode)))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative != 1) || (! (const0_operand (operands[2], SImode)))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return MEMORY_UNKNOWN;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((memory_operand (operands[2], VOIDmode)) || (((which_alternative == 2) || (which_alternative == 3)) && (memory_operand (operands[3], VOIDmode)))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 617:
    case 616:
    case 614:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((memory_operand (operands[2], VOIDmode)) || (memory_operand (operands[3], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 539:
    case 534:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((which_alternative != 2) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((which_alternative == 0) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return MEMORY_NONE;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 507:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  return MEMORY_UNKNOWN;
        }
      else if (get_attr_type (insn) == TYPE_IBR)
        {
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return MEMORY_LOAD;
	    }
	  else
	    {
	      return MEMORY_NONE;
	    }
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((which_alternative == 1) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 412:
    case 409:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative == 0) || (which_alternative == 1)) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 415:
    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 176:
    case 173:
    case 170:
    case 167:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (memory_operand (operands[1], VOIDmode))) || ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode))))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 5) && ((which_alternative != 6) && (which_alternative != 7)))) && (which_alternative != 8))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 558:
    case 557:
    case 556:
    case 555:
    case 554:
    case 553:
    case 552:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
    case 537:
    case 536:
    case 533:
    case 532:
    case 531:
    case 528:
    case 525:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 417:
    case 416:
    case 414:
    case 413:
    case 411:
    case 410:
    case 407:
    case 404:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 106:
    case 105:
    case 96:
    case 91:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (memory_operand (operands[2], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 5) && ((which_alternative != 6) && ((which_alternative != 7) && (which_alternative != 8))))) && ((((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 9) && (which_alternative != 10))) && (which_alternative != 11))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return MEMORY_UNKNOWN;
        }
      else
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return MEMORY_BOTH;
	    }
	  else
	    {
	      return MEMORY_STORE;
	    }
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return MEMORY_UNKNOWN;
        }
      else if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative == 5) || (which_alternative == 6)) || ((which_alternative == 7) || ((which_alternative == 8) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))) && ((((which_alternative == 5) || (which_alternative == 6)) || ((which_alternative != 7) && (which_alternative != 8))) && ((which_alternative != 5) && (which_alternative != 6)))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MEMORY_UNKNOWN;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative != 4) && (which_alternative != 5)) && (which_alternative != 6)) && ((which_alternative != 2) && (which_alternative != 3))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return MEMORY_UNKNOWN;
        }
      else
        {
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return MEMORY_BOTH;
	    }
	  else
	    {
	      return MEMORY_STORE;
	    }
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || ((((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 71:
    case 67:
    case 66:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((! (get_attr_type (insn) == TYPE_IMOV)) && (! (get_attr_type (insn) == TYPE_IMOVX))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((! (get_attr_type (insn) == TYPE_IMOV)) && (((((which_alternative == 0) || (which_alternative == 1)) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0)))) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && (aligned_operand (operands[1], HImode)))) || ((! ((TARGET_MOVX) != (0))) || ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 3) && (which_alternative != 4))))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  return MEMORY_NONE;
        }
      else if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if ((memory_operand (operands[1], VOIDmode)) || (((((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6))) || ((which_alternative == 7) || ((which_alternative == 8) || ((which_alternative == 9) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))) && ((((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6))) || ((which_alternative != 7) && ((which_alternative != 8) && (which_alternative != 9)))) && ((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))))) && (memory_operand (operands[2], VOIDmode))))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case 487:
    case 486:
    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else
        {
	  return MEMORY_LOAD;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_BOTH;
        }
      else
        {
	  return MEMORY_STORE;
        }

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) || (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 76:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
    case 801:
    case 804:
      return MEMORY_UNKNOWN;

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 583:
    case 584:
    case 585:
    case 586:
    case 587:
    case 588:
    case 589:
    case 590:
    case 591:
    case 592:
    case 593:
    case 594:
      return MEMORY_BOTH;

    case 46:
    case 52:
    case 68:
    case 85:
    case 595:
    case 596:
    case 597:
    case 598:
    case 599:
    case 600:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 606:
    case 803:
    case 805:
      return MEMORY_STORE;

    case 47:
    case 53:
    case 69:
    case 86:
    case 802:
      return MEMORY_LOAD;

    case 622:
    case 621:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 613:
    case 615:
    case 664:
    case 726:
    case 764:
    case 765:
      return MEMORY_NONE;

    default:
      extract_insn_cached (insn);
      if ((memory_operand (operands[0], VOIDmode)) && (memory_operand (operands[1], VOIDmode)))
        {
	  return MEMORY_BOTH;
        }
      else if (memory_operand (operands[0], VOIDmode))
        {
	  return MEMORY_STORE;
        }
      else if (memory_operand (operands[1], VOIDmode))
        {
	  return MEMORY_LOAD;
        }
      else
        {
	  return MEMORY_NONE;
        }

    }
}

extern int get_attr_modrm PARAMS ((rtx));
int
get_attr_modrm (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (const0_operand (operands[2], DImode))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 1) && (const0_operand (operands[2], SImode))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 558:
    case 557:
    case 556:
    case 555:
    case 554:
    case 553:
    case 552:
    case 551:
    case 550:
    case 549:
    case 548:
    case 547:
    case 546:
    case 545:
    case 544:
    case 543:
    case 542:
    case 541:
    case 539:
    case 538:
    case 537:
    case 536:
    case 534:
    case 533:
      if (get_attr_i387 (insn) == 1)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], QImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (incdec_operand (operands[2], QImode))) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], HImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (incdec_operand (operands[2], HImode))) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], SImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((incdec_operand (operands[2], DImode)) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 208:
    case 207:
    case 202:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_INCDEC) && ((register_operand (operands[1], SImode)) || (register_operand (operands[1], HImode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 620:
    case 619:
    case 618:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 125:
    case 124:
    case 123:
      extract_constrain_insn_cached (insn);
      if ((! (((ix86_cpu) == (CPU_K6)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (((which_alternative == 3) || (which_alternative == 4)) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  if (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return 0;
        }
      else
        {
	  if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if (((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 71:
    case 67:
    case 66:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 75:
    case 74:
    case 73:
    case 62:
    case 56:
      extract_insn_cached (insn);
      if ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  if ((get_attr_type (insn) == TYPE_IMOV) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if (which_alternative == 3)
        {
	  return 0;
        }
      else
        {
	  if ((get_attr_type (insn) == TYPE_IMOV) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 86:
    case 85:
    case 69:
    case 68:
    case 53:
    case 52:
    case 47:
    case 46:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  if ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  if (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }
      else if (which_alternative == 2)
        {
	  return 0;
        }
      else
        {
	  if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && ((register_operand (operands[0], VOIDmode)) && (immediate_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }
        }

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[0], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else if (which_alternative == 2)
        {
	  return 0;
        }
      else if (which_alternative == 3)
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 281:
    case 282:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 1;
        }

    case 562:
    case 559:
    case 529:
    case 526:
    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
    case 120:
    case 418:
    case 426:
    case 427:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 622:
    case 621:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 532:
    case 531:
    case 528:
    case 525:
    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 166:
    case 165:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 106:
    case 105:
    case 96:
    case 91:
    case 35:
    case 32:
    case 30:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
    case 48:
    case 54:
    case 55:
    case 61:
    case 87:
    case 514:
    case 515:
    case 517:
    case 522:
    case 523:
    case 805:
      return 0;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 1;

    }
}

extern enum attr_mode get_attr_mode PARAMS ((rtx));
enum attr_mode
get_attr_mode (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_SI;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 338:
    case 320:
    case 300:
    case 298:
    case 222:
    case 221:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 296:
    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return MODE_HI;
        }
      else
        {
	  return MODE_SI;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_DF;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_SI;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_DF;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_DF;
        }

    case 92:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DF;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return MODE_SF;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else if ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8)))
        {
	  return MODE_SF;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SI;
        }
      else if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return MODE_DI;
        }
      else if (which_alternative == 4)
        {
	  return MODE_SI;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return MODE_DI;
        }
      else if (which_alternative == 8)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_DI;
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4)))))
        {
	  return MODE_DI;
        }
      else if (which_alternative == 5)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_DI;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_QI;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5)))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 6)
        {
	  return MODE_QI;
        }
      else if ((((TARGET_MOVX) != (0)) && (which_alternative == 2)) || (((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((TARGET_PARTIAL_REG_DEPENDENCY) != (0)) || (((TARGET_PARTIAL_REG_STALL) != (0)) && ((TARGET_QIMODE_MATH) == (0)))))))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_QI;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) || ((((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && (aligned_operand (operands[1], HImode))) || (((which_alternative == 0) || (which_alternative == 1)) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0))))))
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_HI;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 2) || ((which_alternative == 3) || ((which_alternative == 4) || (which_alternative == 5))))))
        {
	  return MODE_SI;
        }
      else if (which_alternative == 6)
        {
	  return MODE_DI;
        }
      else if (which_alternative == 7)
        {
	  return MODE_TI;
        }
      else
        {
	  return MODE_SI;
        }

    case 66:
    case 67:
    case 71:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_QI;
        }

    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_SF;
        }

    case 89:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_DI;
        }
      else
        {
	  return MODE_SF;
        }

    case 93:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DF;
        }

    case 98:
    case 97:
    case 99:
    case 100:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_SI;
        }

    case 291:
    case 290:
    case 116:
    case 117:
    case 118:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SI;
        }
      else
        {
	  return MODE_DI;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else if (which_alternative == 1)
        {
	  return MODE_XF;
        }
      else
        {
	  return MODE_DF;
        }

    case 135:
    case 136:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_SF;
        }
      else
        {
	  return MODE_XF;
        }

    case 137:
    case 138:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else
        {
	  return MODE_XF;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_DF;
        }
      else
        {
	  return MODE_SF;
        }

    case 412:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_HI;
        }
      else
        {
	  return MODE_SI;
        }

    case 415:
    case 401:
    case 416:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return MODE_QI;
        }
      else
        {
	  return MODE_SI;
        }

    case 673:
      return MODE_TI;

    case 23:
    case 24:
    case 25:
    case 26:
    case 105:
    case 106:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 388:
    case 389:
    case 391:
    case 392:
    case 531:
    case 532:
    case 545:
    case 546:
    case 566:
    case 567:
    case 568:
    case 569:
    case 570:
    case 571:
    case 575:
    case 576:
    case 580:
    case 581:
    case 621:
    case 622:
      return MODE_XF;

    case 21:
    case 22:
    case 96:
    case 134:
    case 143:
    case 148:
    case 149:
    case 150:
    case 151:
    case 173:
    case 174:
    case 175:
    case 176:
    case 177:
    case 178:
    case 366:
    case 367:
    case 385:
    case 386:
    case 387:
    case 390:
    case 489:
    case 528:
    case 529:
    case 530:
    case 538:
    case 539:
    case 555:
    case 556:
    case 557:
    case 558:
    case 562:
    case 563:
    case 564:
    case 565:
    case 572:
    case 574:
    case 577:
    case 579:
    case 619:
    case 620:
    case 628:
    case 634:
      return MODE_DF;

    case 19:
    case 20:
    case 91:
    case 139:
    case 142:
    case 144:
    case 145:
    case 146:
    case 147:
    case 167:
    case 168:
    case 169:
    case 170:
    case 171:
    case 172:
    case 365:
    case 384:
    case 488:
    case 525:
    case 526:
    case 527:
    case 533:
    case 534:
    case 535:
    case 543:
    case 544:
    case 551:
    case 552:
    case 553:
    case 554:
    case 559:
    case 560:
    case 561:
    case 573:
    case 578:
    case 625:
    case 631:
      return MODE_SF;

    case 18:
    case 27:
    case 28:
    case 32:
    case 33:
    case 34:
    case 35:
    case 36:
    case 37:
      return MODE_UNKNOWNFP;

    case 0:
    case 1:
    case 2:
    case 77:
    case 78:
    case 79:
    case 80:
    case 82:
    case 85:
    case 86:
    case 87:
    case 120:
    case 121:
    case 122:
    case 186:
    case 187:
    case 195:
    case 202:
    case 203:
    case 204:
    case 205:
    case 206:
    case 231:
    case 232:
    case 233:
    case 234:
    case 242:
    case 249:
    case 256:
    case 258:
    case 260:
    case 263:
    case 270:
    case 275:
    case 276:
    case 307:
    case 308:
    case 309:
    case 325:
    case 326:
    case 327:
    case 345:
    case 346:
    case 393:
    case 394:
    case 403:
    case 404:
    case 418:
    case 420:
    case 422:
    case 445:
    case 447:
    case 467:
    case 477:
    case 583:
    case 590:
    case 595:
    case 602:
    case 613:
    case 614:
    case 636:
    case 805:
      return MODE_DI;

    case 3:
    case 4:
    case 5:
    case 30:
    case 31:
    case 38:
    case 39:
    case 40:
    case 41:
    case 42:
    case 43:
    case 44:
    case 46:
    case 47:
    case 48:
    case 55:
    case 64:
    case 65:
    case 70:
    case 81:
    case 107:
    case 108:
    case 112:
    case 113:
    case 114:
    case 115:
    case 123:
    case 124:
    case 126:
    case 127:
    case 188:
    case 189:
    case 190:
    case 192:
    case 193:
    case 194:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
    case 207:
    case 208:
    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
    case 219:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 250:
    case 251:
    case 257:
    case 259:
    case 261:
    case 262:
    case 264:
    case 265:
    case 273:
    case 274:
    case 277:
    case 278:
    case 281:
    case 292:
    case 293:
    case 294:
    case 295:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 328:
    case 329:
    case 330:
    case 331:
    case 332:
    case 333:
    case 334:
    case 347:
    case 348:
    case 349:
    case 350:
    case 395:
    case 396:
    case 397:
    case 398:
    case 407:
    case 408:
    case 409:
    case 410:
    case 411:
    case 425:
    case 426:
    case 427:
    case 430:
    case 431:
    case 434:
    case 435:
    case 452:
    case 453:
    case 456:
    case 457:
    case 470:
    case 471:
    case 480:
    case 481:
    case 518:
    case 536:
    case 537:
    case 541:
    case 542:
    case 547:
    case 548:
    case 549:
    case 550:
    case 584:
    case 585:
    case 591:
    case 592:
    case 593:
    case 594:
    case 596:
    case 597:
    case 603:
    case 604:
    case 615:
    case 616:
    case 635:
      return MODE_SI;

    case 6:
    case 7:
    case 8:
    case 49:
    case 52:
    case 53:
    case 54:
    case 56:
    case 57:
    case 58:
    case 109:
    case 110:
    case 111:
    case 125:
    case 165:
    case 166:
    case 216:
    case 217:
    case 218:
    case 220:
    case 243:
    case 244:
    case 245:
    case 252:
    case 279:
    case 282:
    case 297:
    case 317:
    case 318:
    case 319:
    case 335:
    case 336:
    case 337:
    case 351:
    case 352:
    case 399:
    case 400:
    case 413:
    case 414:
    case 437:
    case 439:
    case 459:
    case 461:
    case 473:
    case 483:
    case 586:
    case 587:
    case 598:
    case 599:
    case 617:
      return MODE_HI;

    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 50:
    case 59:
    case 61:
    case 62:
    case 63:
    case 68:
    case 69:
    case 73:
    case 74:
    case 75:
    case 191:
    case 223:
    case 224:
    case 225:
    case 226:
    case 227:
    case 228:
    case 229:
    case 246:
    case 247:
    case 248:
    case 253:
    case 254:
    case 255:
    case 266:
    case 267:
    case 284:
    case 285:
    case 286:
    case 287:
    case 299:
    case 301:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 321:
    case 322:
    case 323:
    case 324:
    case 339:
    case 340:
    case 341:
    case 342:
    case 343:
    case 353:
    case 354:
    case 402:
    case 417:
    case 441:
    case 443:
    case 463:
    case 465:
    case 475:
    case 485:
    case 486:
    case 487:
    case 588:
    case 589:
    case 600:
    case 601:
    case 605:
    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
      return MODE_QI;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return MODE_UNKNOWN;

    }
}

extern enum attr_ppro_uops get_attr_ppro_uops PARAMS ((rtx));
enum attr_ppro_uops
get_attr_ppro_uops (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (const0_operand (operands[2], DImode)))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (const0_operand (operands[2], SImode)))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return PPRO_UOPS_MANY;
        }
      else
        {
	  return PPRO_UOPS_FEW;
        }

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 1)
        {
	  return PPRO_UOPS_MANY;
        }
      else
        {
	  return PPRO_UOPS_FEW;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  return PPRO_UOPS_MANY;
        }
      else if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 673:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PPRO_UOPS_MANY;
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PPRO_UOPS_MANY;
        }
      else
        {
	  return PPRO_UOPS_FEW;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 75:
    case 74:
    case 73:
    case 62:
    case 56:
      if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 71:
    case 67:
    case 66:
    case 51:
      if (get_attr_type (insn) == TYPE_IMOV)
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode))))))))
        {
	  if ((get_attr_memory (insn) == MEMORY_STORE) || (get_attr_memory (insn) == MEMORY_BOTH))
	    {
	      return PPRO_UOPS_FEW;
	    }
	  else
	    {
	      return PPRO_UOPS_ONE;
	    }
        }
      else if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 658:
    case 657:
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 521:
    case 520:
    case 519:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 185:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 76:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
    case 507:
    case 536:
    case 537:
    case 541:
    case 542:
    case 547:
    case 548:
    case 549:
    case 550:
      return PPRO_UOPS_MANY;

    case 804:
    case 803:
    case 802:
    case 801:
    case 622:
    case 621:
    case 620:
    case 618:
    case 617:
    case 616:
    case 614:
    case 582:
    case 487:
    case 486:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 85:
    case 80:
    case 79:
    case 78:
    case 68:
    case 59:
    case 58:
    case 52:
    case 50:
    case 49:
    case 46:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 30:
    case 48:
    case 54:
    case 55:
    case 61:
    case 87:
    case 165:
    case 166:
    case 186:
    case 188:
    case 189:
    case 231:
    case 235:
    case 236:
    case 256:
    case 257:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
    case 266:
    case 267:
    case 270:
    case 273:
    case 276:
    case 278:
    case 279:
    case 365:
    case 366:
    case 367:
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 407:
    case 425:
    case 522:
    case 523:
    case 524:
      return PPRO_UOPS_FEW;

    case 765:
    case 764:
    case 726:
    case 664:
    case 615:
    case 613:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 86:
    case 69:
    case 53:
    case 47:
    case 31:
    case 517:
      return PPRO_UOPS_ONE;

    default:
      if (! (get_attr_memory (insn) == MEMORY_NONE))
        {
	  return PPRO_UOPS_FEW;
        }
      else
        {
	  return PPRO_UOPS_ONE;
        }

    }
}

extern enum attr_pent_pair get_attr_pent_pair PARAMS ((rtx));
enum attr_pent_pair
get_attr_pent_pair (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[1], VOIDmode))
        {
	  return PENT_PAIR_PV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (constant_call_address_operand (operands[0], VOIDmode))
        {
	  return PENT_PAIR_PV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 507:
      if (get_attr_type (insn) == TYPE_IBR)
        {
	  return PENT_PAIR_PV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (const_int_operand (operands[2], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2))
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 414:
    case 413:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode))))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 412:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))
        {
	  if (which_alternative == 0)
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_UV;
        }
      else if (const_int_operand (operands[2], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))))
        {
	  return PENT_PAIR_UV;
        }
      else if (const_int_operand (operands[2], VOIDmode))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 417:
    case 416:
    case 410:
    case 404:
      extract_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU))
        {
	  return PENT_PAIR_UV;
        }
      else if ((get_attr_type (insn) == TYPE_ISHIFT) && (const_int_operand (operands[2], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 296:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 292:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  if ((which_alternative == 0) || (which_alternative == 1))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative != 0)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 113:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 71:
    case 67:
    case 66:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))
        {
	  if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (get_attr_type (insn) == TYPE_IMOV)
        {
	  if ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) || (get_attr_mode (insn) == MODE_HI))
	    {
	      return PENT_PAIR_PU;
	    }
	  else
	    {
	      return PENT_PAIR_UV;
	    }
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 58:
    case 49:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return PENT_PAIR_PU;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[0], VOIDmode)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 78:
    case 59:
    case 50:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (! (memory_operand (operands[1], VOIDmode)))
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 245:
    case 244:
    case 243:
    case 220:
    case 218:
    case 217:
    case 216:
    case 56:
    case 53:
    case 52:
    case 8:
    case 7:
    case 6:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_PU;
        }

    case 636:
    case 635:
    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 295:
    case 294:
    case 293:
    case 291:
    case 287:
    case 286:
    case 285:
    case 248:
    case 247:
    case 246:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 219:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 187:
    case 86:
    case 85:
    case 75:
    case 74:
    case 73:
    case 69:
    case 68:
    case 62:
    case 47:
    case 46:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_UV;
        }

    case 280:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 1)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative == 2)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 3)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_UV;
        }

    case 281:
    case 282:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 1)
        {
	  return PENT_PAIR_NP;
        }
      else
        {
	  return PENT_PAIR_UV;
        }

    case 283:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PAIR_UV;
        }
      else if (which_alternative == 1)
        {
	  return PENT_PAIR_NP;
        }
      else if (which_alternative == 2)
        {
	  return PENT_PAIR_UV;
        }
      else
        {
	  return PENT_PAIR_NP;
        }

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      return PENT_PAIR_PV;

    case 400:
    case 109:
    case 57:
    case 186:
    case 188:
    case 189:
    case 231:
    case 235:
    case 236:
      return PENT_PAIR_PU;

    case 615:
    case 613:
    case 402:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 112:
    case 107:
    case 82:
    case 81:
    case 63:
    case 44:
    case 43:
      return PENT_PAIR_UV;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return PENT_PAIR_NP;

    }
}

extern enum attr_pent_prefix get_attr_pent_prefix PARAMS ((rtx));
enum attr_pent_prefix
get_attr_pent_prefix (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 673:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 539:
    case 534:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 491:
    case 490:
      if (get_attr_prefix_0f (insn) == 1)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 292:
    case 251:
    case 250:
    case 249:
    case 177:
    case 174:
    case 171:
    case 168:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 124:
    case 123:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_K6))) || (which_alternative != 0))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 412:
    case 141:
    case 116:
    case 113:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))) || (which_alternative == 8))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 9) || (which_alternative == 10))) || (which_alternative == 11)))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative == 7) || (which_alternative == 8))) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || (which_alternative == 6)) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 71:
    case 67:
    case 66:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) || (get_attr_mode (insn) == MODE_HI))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))) || ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6))))
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 562:
    case 559:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return PENT_PREFIX_TRUE;
        }
      else
        {
	  return PENT_PREFIX_FALSE;
        }

    case 833:
    case 832:
    case 831:
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 813:
    case 812:
    case 811:
    case 810:
    case 809:
    case 808:
    case 807:
    case 806:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 795:
    case 794:
    case 793:
    case 792:
    case 791:
    case 790:
    case 789:
    case 788:
    case 787:
    case 786:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 780:
    case 779:
    case 778:
    case 777:
    case 776:
    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 769:
    case 768:
    case 767:
    case 766:
    case 765:
    case 764:
    case 763:
    case 762:
    case 761:
    case 760:
    case 759:
    case 758:
    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 743:
    case 742:
    case 741:
    case 740:
    case 739:
    case 738:
    case 737:
    case 736:
    case 735:
    case 734:
    case 733:
    case 732:
    case 731:
    case 730:
    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 723:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 709:
    case 708:
    case 707:
    case 706:
    case 705:
    case 704:
    case 703:
    case 702:
    case 701:
    case 700:
    case 699:
    case 698:
    case 697:
    case 696:
    case 695:
    case 694:
    case 693:
    case 692:
    case 691:
    case 690:
    case 689:
    case 688:
    case 687:
    case 686:
    case 685:
    case 684:
    case 683:
    case 682:
    case 681:
    case 680:
    case 679:
    case 678:
    case 677:
    case 676:
    case 675:
    case 674:
    case 672:
    case 671:
    case 670:
    case 669:
    case 668:
    case 667:
    case 666:
    case 665:
    case 664:
    case 663:
    case 662:
    case 661:
    case 660:
    case 659:
    case 634:
    case 631:
    case 628:
    case 625:
    case 617:
    case 616:
    case 614:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 599:
    case 598:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 587:
    case 586:
    case 563:
    case 560:
    case 540:
    case 535:
    case 530:
    case 527:
    case 524:
    case 489:
    case 488:
    case 487:
    case 486:
    case 483:
    case 473:
    case 461:
    case 459:
    case 439:
    case 437:
    case 425:
    case 414:
    case 413:
    case 407:
    case 400:
    case 399:
    case 352:
    case 351:
    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 296:
    case 282:
    case 279:
    case 252:
    case 245:
    case 244:
    case 243:
    case 220:
    case 218:
    case 217:
    case 216:
    case 178:
    case 175:
    case 172:
    case 169:
    case 166:
    case 165:
    case 161:
    case 160:
    case 156:
    case 155:
    case 143:
    case 134:
    case 127:
    case 126:
    case 125:
    case 122:
    case 121:
    case 118:
    case 117:
    case 114:
    case 111:
    case 110:
    case 109:
    case 108:
    case 70:
    case 65:
    case 64:
    case 58:
    case 57:
    case 56:
    case 54:
    case 53:
    case 52:
    case 49:
    case 37:
    case 34:
    case 8:
    case 7:
    case 6:
      return PENT_PREFIX_TRUE;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return PENT_PREFIX_FALSE;

    }
}

extern int get_attr_prefix_0f PARAMS ((rtx));
int
get_attr_prefix_0f (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 673:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && (which_alternative != 1)) && (((which_alternative == 2) || (which_alternative == 3)) || ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 539:
    case 534:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 0;
        }
      else
        {
	  return 0;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 252:
    case 251:
    case 250:
    case 249:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 296:
    case 292:
    case 177:
    case 174:
    case 171:
    case 168:
    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 141:
    case 116:
    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))) || (which_alternative == 8))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))) || ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 9) || (which_alternative == 10))) || (which_alternative == 11)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative == 7) || (which_alternative == 8))) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 4) || (which_alternative == 5))) || (which_alternative == 6)) || (((which_alternative != 0) && (which_alternative != 1)) && ((which_alternative == 2) || (which_alternative == 3))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 71:
    case 67:
    case 66:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4))))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))) || ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6))))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 562:
    case 559:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 123:
    case 124:
    case 125:
      extract_constrain_insn_cached (insn);
      if ((! (((ix86_cpu) == (CPU_K6)))) && (which_alternative == 0))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 490:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-128)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (124)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 491:
      extract_insn_cached (insn);
      if ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-128)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (124)))
        {
	  return 0;
        }
      else
        {
	  return 1;
        }

    case 833:
    case 832:
    case 831:
    case 830:
    case 829:
    case 828:
    case 827:
    case 826:
    case 825:
    case 824:
    case 823:
    case 822:
    case 821:
    case 820:
    case 819:
    case 818:
    case 817:
    case 816:
    case 815:
    case 814:
    case 813:
    case 812:
    case 811:
    case 810:
    case 809:
    case 808:
    case 807:
    case 806:
    case 804:
    case 803:
    case 802:
    case 801:
    case 800:
    case 799:
    case 798:
    case 797:
    case 796:
    case 795:
    case 794:
    case 793:
    case 792:
    case 791:
    case 790:
    case 789:
    case 788:
    case 787:
    case 786:
    case 785:
    case 784:
    case 783:
    case 782:
    case 781:
    case 780:
    case 779:
    case 778:
    case 777:
    case 776:
    case 775:
    case 774:
    case 773:
    case 772:
    case 771:
    case 770:
    case 769:
    case 768:
    case 767:
    case 766:
    case 765:
    case 764:
    case 763:
    case 762:
    case 761:
    case 760:
    case 759:
    case 758:
    case 757:
    case 756:
    case 755:
    case 754:
    case 753:
    case 752:
    case 751:
    case 750:
    case 749:
    case 748:
    case 747:
    case 746:
    case 745:
    case 744:
    case 743:
    case 742:
    case 741:
    case 740:
    case 739:
    case 738:
    case 737:
    case 736:
    case 735:
    case 734:
    case 733:
    case 732:
    case 731:
    case 730:
    case 729:
    case 728:
    case 727:
    case 726:
    case 725:
    case 724:
    case 723:
    case 722:
    case 721:
    case 720:
    case 719:
    case 718:
    case 717:
    case 716:
    case 715:
    case 714:
    case 713:
    case 712:
    case 711:
    case 710:
    case 709:
    case 708:
    case 707:
    case 706:
    case 705:
    case 704:
    case 703:
    case 702:
    case 701:
    case 700:
    case 699:
    case 698:
    case 697:
    case 696:
    case 695:
    case 694:
    case 693:
    case 692:
    case 691:
    case 690:
    case 689:
    case 688:
    case 687:
    case 686:
    case 685:
    case 684:
    case 683:
    case 682:
    case 681:
    case 680:
    case 679:
    case 678:
    case 677:
    case 676:
    case 675:
    case 674:
    case 672:
    case 671:
    case 670:
    case 669:
    case 668:
    case 667:
    case 666:
    case 665:
    case 664:
    case 663:
    case 662:
    case 661:
    case 660:
    case 659:
    case 634:
    case 631:
    case 628:
    case 625:
    case 617:
    case 616:
    case 614:
    case 563:
    case 560:
    case 540:
    case 535:
    case 530:
    case 527:
    case 489:
    case 488:
    case 487:
    case 486:
    case 178:
    case 175:
    case 172:
    case 169:
    case 161:
    case 160:
    case 156:
    case 155:
    case 143:
    case 134:
    case 127:
    case 126:
    case 122:
    case 121:
    case 118:
    case 117:
    case 114:
    case 111:
    case 108:
    case 70:
    case 65:
    case 64:
    case 37:
    case 34:
    case 407:
    case 425:
    case 524:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int get_attr_prefix_rep PARAMS ((rtx));
int
get_attr_prefix_rep (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 590:
    case 591:
    case 592:
    case 593:
    case 594:
    case 602:
    case 603:
    case 604:
    case 605:
    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
      return 1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern int get_attr_prefix_data16 PARAMS ((rtx));
int
get_attr_prefix_data16 (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 412:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 296:
    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case 617:
    case 599:
    case 598:
    case 587:
    case 586:
    case 483:
    case 473:
    case 461:
    case 459:
    case 439:
    case 437:
    case 414:
    case 413:
    case 400:
    case 399:
    case 352:
    case 351:
    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 282:
    case 279:
    case 252:
    case 245:
    case 244:
    case 243:
    case 220:
    case 218:
    case 217:
    case 216:
    case 166:
    case 165:
    case 125:
    case 111:
    case 110:
    case 109:
    case 58:
    case 57:
    case 56:
    case 54:
    case 53:
    case 52:
    case 49:
    case 8:
    case 7:
    case 6:
      return 1;

    case 51:
      if (get_attr_mode (insn) == MODE_HI)
        {
	  return 1;
        }
      else
        {
	  return 0;
        }

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      return 0;

    }
}

extern enum attr_type get_attr_type PARAMS ((rtx));
enum attr_type
get_attr_type (insn)
     rtx insn;
{
  switch (recog_memoized (insn))
    {
    case 673:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_OTHER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_SSE;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 619:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FCMOV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FCMOV;
        }
      else if (which_alternative == 2)
        {
	  return TYPE_ICMOV;
        }
      else
        {
	  return TYPE_ICMOV;
        }

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_IMOVX;
        }

    case 290:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_IMOVX;
        }

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return TYPE_LEA;
        }
      else if (incdec_operand (operands[2], SImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  return TYPE_LEA;
        }
      else if (incdec_operand (operands[2], SImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  return TYPE_LEA;
        }
      else if (incdec_operand (operands[2], DImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 140:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 1) || (which_alternative == 2))
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_FMOV;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if (which_alternative == 3)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_MULTI;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || (which_alternative == 7)))
        {
	  return TYPE_SSE;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  return TYPE_FMOV;
        }
      else if ((which_alternative == 3) || (which_alternative == 4))
        {
	  return TYPE_IMOV;
        }
      else if ((which_alternative == 5) || ((which_alternative == 6) || ((which_alternative == 7) || (which_alternative == 8))))
        {
	  return TYPE_SSE;
        }
      else if ((which_alternative == 9) || (which_alternative == 10))
        {
	  return TYPE_MMX;
        }
      else
        {
	  return TYPE_MMX;
        }

    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  return TYPE_OTHER;
        }
      else if ((which_alternative == 2) || (which_alternative == 3))
        {
	  return TYPE_MMX;
        }
      else if ((which_alternative == 4) || (which_alternative == 5))
        {
	  return TYPE_SSE;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 60:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0))))
        {
	  return TYPE_IMOV;
        }
      else if ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 0) || (which_alternative == 1)) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_HIMODE_MATH) == (0)))) || (((which_alternative == 2) || ((which_alternative == 3) || (which_alternative == 4))) && (aligned_operand (operands[1], HImode))))
        {
	  return TYPE_IMOV;
        }
      else if (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 0:
    case 3:
    case 6:
    case 9:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_TEST;
        }
      else
        {
	  return TYPE_ICMP;
        }

    case 33:
    case 36:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FCMP;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 45:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 4) || ((which_alternative == 5) || (which_alternative == 6)))
        {
	  return TYPE_MMX;
        }
      else if ((which_alternative == 7) || ((which_alternative == 8) || (which_alternative == 9)))
        {
	  return TYPE_SSE;
        }
      else if (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))
        {
	  return TYPE_LEA;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 66:
      extract_constrain_insn_cached (insn);
      if ((register_operand (operands[0], QImode)) && ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 67:
      extract_constrain_insn_cached (insn);
      if ((register_operand (operands[0], QImode)) && ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 71:
      extract_constrain_insn_cached (insn);
      if ((register_operand (operands[0], QImode)) && ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_PUSH;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 84:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 5) || (which_alternative == 6))
        {
	  return TYPE_MMX;
        }
      else if ((which_alternative == 7) || (which_alternative == 8))
        {
	  return TYPE_SSE;
        }
      else if (which_alternative == 4)
        {
	  return TYPE_MULTI;
        }
      else if (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))
        {
	  return TYPE_LEA;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 88:
    case 89:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_MULTI;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_PUSH;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 110:
    case 113:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_ALU1;
        }

    case 116:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_IMOV;
        }

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_SSE;
        }
      else
        {
	  return TYPE_FMOV;
        }

    case 168:
    case 171:
    case 174:
    case 177:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else if (which_alternative == 1)
        {
	  return TYPE_MULTI;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 167:
    case 170:
    case 173:
    case 176:
    case 179:
    case 180:
    case 181:
    case 182:
    case 183:
    case 184:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FMOV;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 203:
    case 204:
    case 205:
    case 206:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], DImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 209:
    case 210:
    case 211:
    case 212:
    case 213:
    case 214:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], SImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LEA;
        }
      else
        {
	  if (incdec_operand (operands[2], HImode))
	    {
	      return TYPE_INCDEC;
	    }
	  else
	    {
	      return TYPE_ALU;
	    }
        }

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  return TYPE_LEA;
        }
      else
        {
	  if (incdec_operand (operands[2], QImode))
	    {
	      return TYPE_INCDEC;
	    }
	  else
	    {
	      return TYPE_ALU;
	    }
        }

    case 216:
    case 217:
    case 218:
    case 219:
    case 220:
    case 225:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], HImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 222:
    case 223:
    case 224:
    case 226:
    case 227:
    case 228:
      extract_insn_cached (insn);
      if (incdec_operand (operands[2], QImode))
        {
	  return TYPE_INCDEC;
        }
      else
        {
	  return TYPE_ALU;
        }

    case 403:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 404:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 408:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 409:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 410:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 411:
      extract_constrain_insn_cached (insn);
      if (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 412:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 413:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 414:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 415:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_LEA;
        }
      else if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 416:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 417:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (register_operand (operands[0], VOIDmode))) && (const1_operand (operands[2], VOIDmode)))
        {
	  return TYPE_ALU;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 418:
    case 426:
    case 427:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_IMOVX;
        }
      else
        {
	  return TYPE_ISHIFT;
        }

    case 507:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) >= (-128)) && (((INSN_ADDRESSES_SET_P () ? INSN_ADDRESSES (INSN_UID (GET_CODE (operands[0]) == LABEL_REF ? XEXP (operands[0], 0) : operands[0])) : 0) - (insn_current_reference_address (insn))) < (124))))
        {
	  return TYPE_IBR;
        }
      else
        {
	  return TYPE_MULTI;
        }

    case 525:
    case 528:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 526:
    case 529:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  return TYPE_SSE;
        }
      else
        {
	  if (mult_operator (operands[3], SFmode))
	    {
	      return TYPE_FMUL;
	    }
	  else
	    {
	      return TYPE_FOP;
	    }
        }

    case 531:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 532:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  return TYPE_FMUL;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 534:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_SSE;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], SFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 533:
    case 536:
    case 537:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], SFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 539:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  return TYPE_SSE;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], DFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 538:
    case 541:
    case 542:
    case 543:
    case 544:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], DFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], DFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 545:
    case 547:
    case 549:
    case 551:
    case 553:
    case 555:
    case 557:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], XFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 546:
    case 548:
    case 550:
    case 552:
    case 554:
    case 556:
    case 558:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  return TYPE_FMUL;
        }
      else if (div_operator (operands[3], TFmode))
        {
	  return TYPE_FDIV;
        }
      else
        {
	  return TYPE_FOP;
        }

    case 559:
    case 562:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_FPSPC;
        }
      else
        {
	  return TYPE_SSE;
        }

    case 635:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU;
        }
      else if (const0_operand (operands[2], SImode))
        {
	  return TYPE_IMOV;
        }
      else
        {
	  return TYPE_LEA;
        }

    case 636:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  return TYPE_ALU;
        }
      else if (const0_operand (operands[2], DImode))
        {
	  return TYPE_IMOV;
        }
      else
        {
	  return TYPE_LEA;
        }

    case 152:
    case 153:
    case 154:
    case 157:
    case 158:
    case 159:
    case 162:
    case 163:
    case 164:
      return TYPE_FISTP;

    case 661:
    case 662:
    case 663:
    case 664:
    case 668:
    case 669:
    case 670:
    case 671:
    case 745:
    case 746:
    case 747:
    case 748:
    case 749:
    case 750:
    case 751:
    case 752:
    case 753:
    case 754:
    case 755:
    case 756:
    case 757:
    case 758:
    case 759:
    case 760:
    case 761:
    case 762:
    case 763:
    case 764:
    case 765:
    case 766:
    case 767:
    case 774:
    case 775:
    case 776:
    case 777:
    case 778:
    case 779:
    case 784:
    case 785:
    case 786:
    case 787:
    case 788:
    case 789:
    case 790:
    case 791:
    case 792:
    case 793:
    case 794:
    case 795:
    case 796:
    case 797:
    case 798:
    case 799:
    case 800:
    case 801:
    case 802:
    case 803:
    case 806:
    case 807:
    case 808:
    case 809:
    case 810:
    case 811:
    case 812:
    case 813:
    case 814:
    case 815:
    case 816:
    case 817:
    case 818:
    case 819:
    case 820:
    case 821:
    case 822:
    case 823:
    case 824:
    case 825:
    case 826:
    case 827:
    case 828:
    case 829:
    case 830:
    case 831:
    case 833:
      return TYPE_MMX;

    case 582:
      return TYPE_CLD;

    case 583:
    case 584:
    case 585:
    case 586:
    case 587:
    case 588:
    case 589:
    case 590:
    case 591:
    case 592:
    case 593:
    case 594:
    case 595:
    case 596:
    case 597:
    case 598:
    case 599:
    case 600:
    case 601:
    case 602:
    case 603:
    case 604:
    case 605:
    case 606:
    case 607:
    case 608:
    case 609:
    case 610:
    case 611:
    case 612:
      return TYPE_STR;

    case 91:
    case 96:
    case 105:
    case 106:
      return TYPE_FXCH;

    case 19:
    case 20:
    case 21:
    case 23:
    case 24:
    case 27:
    case 32:
    case 35:
      return TYPE_FCMP;

    case 621:
    case 622:
      return TYPE_FCMOV;

    case 561:
    case 564:
    case 565:
    case 566:
    case 567:
    case 568:
    case 569:
    case 570:
    case 571:
    case 572:
    case 573:
    case 574:
    case 575:
    case 576:
    case 577:
    case 578:
    case 579:
    case 580:
    case 581:
      return TYPE_FPSPC;

    case 365:
    case 366:
    case 367:
    case 368:
    case 369:
    case 370:
    case 371:
    case 372:
    case 373:
    case 384:
    case 385:
    case 386:
    case 387:
    case 388:
    case 389:
    case 390:
    case 391:
    case 392:
      return TYPE_FSGN;

    case 135:
    case 136:
    case 137:
    case 138:
    case 142:
    case 145:
    case 147:
    case 149:
    case 151:
      return TYPE_FMOV;

    case 614:
    case 616:
    case 617:
      return TYPE_ICMOV;

    case 651:
    case 652:
    case 653:
    case 654:
    case 655:
    case 656:
      return TYPE_CALLV;

    case 508:
    case 509:
    case 510:
    case 511:
    case 512:
      return TYPE_CALL;

    case 41:
    case 42:
    case 79:
    case 80:
      return TYPE_POP;

    case 38:
    case 39:
    case 40:
    case 49:
    case 50:
    case 58:
    case 59:
    case 78:
      return TYPE_PUSH;

    case 486:
    case 487:
      return TYPE_SETCC;

    case 490:
    case 491:
    case 502:
    case 503:
    case 504:
    case 505:
    case 506:
    case 516:
      return TYPE_IBR;

    case 266:
    case 267:
    case 270:
    case 273:
    case 276:
    case 278:
    case 279:
      return TYPE_IDIV;

    case 249:
    case 250:
    case 251:
    case 252:
    case 253:
    case 254:
    case 255:
    case 256:
    case 257:
    case 258:
    case 259:
    case 260:
    case 261:
    case 262:
    case 263:
    case 264:
    case 265:
      return TYPE_IMUL;

    case 407:
    case 419:
    case 420:
    case 421:
    case 422:
    case 425:
    case 428:
    case 429:
    case 430:
    case 431:
    case 432:
    case 433:
    case 434:
    case 435:
    case 436:
    case 437:
    case 438:
    case 439:
    case 440:
    case 441:
    case 442:
    case 443:
    case 444:
    case 445:
    case 446:
    case 447:
    case 450:
    case 451:
    case 452:
    case 453:
    case 454:
    case 455:
    case 456:
    case 457:
    case 458:
    case 459:
    case 460:
    case 461:
    case 462:
    case 463:
    case 464:
    case 465:
    case 466:
    case 467:
    case 468:
    case 469:
    case 470:
    case 471:
    case 472:
    case 473:
    case 474:
    case 475:
    case 476:
    case 477:
    case 478:
    case 479:
    case 480:
    case 481:
    case 482:
    case 483:
    case 484:
    case 485:
      return TYPE_ISHIFT;

    case 192:
    case 193:
    case 194:
    case 195:
    case 196:
    case 197:
    case 198:
    case 199:
    case 200:
    case 201:
      return TYPE_LEA;

    case 64:
    case 65:
    case 70:
    case 108:
    case 111:
    case 114:
    case 117:
    case 118:
    case 120:
    case 121:
    case 122:
    case 123:
    case 124:
    case 125:
    case 126:
    case 127:
      return TYPE_IMOVX;

    case 46:
    case 47:
    case 48:
    case 52:
    case 53:
    case 54:
    case 55:
    case 56:
    case 61:
    case 62:
    case 68:
    case 69:
    case 73:
    case 74:
    case 75:
    case 85:
    case 86:
    case 87:
      return TYPE_IMOV;

    case 14:
    case 280:
    case 281:
    case 282:
    case 283:
    case 284:
    case 285:
    case 286:
    case 287:
      return TYPE_TEST;

    case 1:
    case 2:
    case 4:
    case 5:
    case 7:
    case 8:
    case 10:
    case 11:
    case 12:
    case 13:
    case 15:
    case 16:
    case 17:
      return TYPE_ICMP;

    case 186:
    case 187:
    case 188:
    case 189:
    case 190:
    case 191:
    case 229:
    case 231:
    case 232:
    case 233:
    case 234:
    case 235:
    case 236:
    case 237:
    case 238:
    case 239:
    case 240:
    case 241:
    case 242:
    case 243:
    case 244:
    case 245:
    case 246:
    case 247:
    case 248:
    case 291:
    case 293:
    case 294:
    case 295:
    case 297:
    case 298:
    case 300:
    case 302:
    case 303:
    case 304:
    case 305:
    case 306:
    case 307:
    case 308:
    case 309:
    case 310:
    case 311:
    case 312:
    case 313:
    case 314:
    case 315:
    case 316:
    case 317:
    case 318:
    case 319:
    case 320:
    case 322:
    case 324:
    case 325:
    case 326:
    case 327:
    case 328:
    case 329:
    case 330:
    case 331:
    case 332:
    case 333:
    case 334:
    case 335:
    case 336:
    case 337:
    case 338:
    case 339:
    case 340:
    case 341:
    case 342:
    case 343:
    case 518:
    case 613:
    case 615:
      return TYPE_ALU;

    case 345:
    case 346:
    case 347:
    case 348:
    case 349:
    case 350:
    case 351:
    case 352:
    case 353:
    case 354:
    case 393:
    case 395:
    case 396:
    case 399:
    case 401:
      return TYPE_NEGNOT;

    case 43:
    case 44:
    case 57:
    case 63:
    case 81:
    case 82:
    case 107:
    case 109:
    case 112:
    case 299:
    case 301:
    case 321:
    case 323:
    case 394:
    case 397:
    case 398:
    case 400:
    case 402:
      return TYPE_ALU1;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 18:
    case 22:
    case 25:
    case 26:
    case 28:
    case 92:
    case 93:
    case 97:
    case 98:
    case 99:
    case 100:
    case 268:
    case 269:
    case 271:
    case 272:
    case 274:
    case 275:
    case 277:
    case 405:
    case 406:
    case 423:
    case 424:
    case 448:
    case 449:
    case 519:
    case 649:
    case 650:
      return TYPE_MULTI;

    case 29:
    case 30:
    case 31:
    case 76:
    case 115:
    case 119:
    case 128:
    case 129:
    case 130:
    case 131:
    case 132:
    case 165:
    case 166:
    case 185:
    case 230:
    case 288:
    case 289:
    case 344:
    case 355:
    case 356:
    case 357:
    case 358:
    case 359:
    case 360:
    case 361:
    case 362:
    case 363:
    case 364:
    case 374:
    case 375:
    case 376:
    case 377:
    case 378:
    case 379:
    case 380:
    case 381:
    case 382:
    case 383:
    case 492:
    case 493:
    case 494:
    case 495:
    case 496:
    case 497:
    case 498:
    case 499:
    case 500:
    case 501:
    case 513:
    case 514:
    case 515:
    case 517:
    case 520:
    case 521:
    case 522:
    case 523:
    case 524:
    case 623:
    case 624:
    case 626:
    case 627:
    case 629:
    case 630:
    case 632:
    case 633:
    case 637:
    case 638:
    case 639:
    case 640:
    case 641:
    case 642:
    case 643:
    case 644:
    case 645:
    case 646:
    case 647:
    case 648:
    case 657:
    case 658:
    case 805:
      return TYPE_OTHER;

    default:
      return TYPE_SSE;

    }
}

static int athlon_muldiv_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_muldiv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 42 /* 0x2a */;

    default:
      abort ();
    }
}

static int athlon_muldiv_unit_conflict_cost PARAMS ((rtx, rtx));
static int
athlon_muldiv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 42 /* 0x2a */;

    default:
      abort ();
    }
}

static int athlon_ieu_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_ieu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 507:
      if (get_attr_type (insn) == TYPE_IBR)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative == 2) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) || ((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if (((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      if ((get_attr_type (insn) == TYPE_IMOV) || (get_attr_type (insn) == TYPE_IMOVX))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) || (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 636:
    case 635:
    case 617:
    case 616:
    case 615:
    case 614:
    case 613:
    case 582:
    case 518:
    case 516:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 487:
    case 486:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 116:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 87:
    case 86:
    case 85:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 75:
    case 74:
    case 73:
    case 70:
    case 69:
    case 68:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 59:
    case 58:
    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 15 /* 0xf */;

    case 2:
      return 1;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int athlon_ieu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
athlon_ieu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 620:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (which_alternative == 3))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 507:
      if (get_attr_type (insn) == TYPE_IBR)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative == 2) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) || ((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if ((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((which_alternative == 3) || (incdec_operand (operands[2], QImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((which_alternative == 2) || (incdec_operand (operands[2], HImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || (((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode))) || (get_attr_type (insn) == TYPE_INCDEC)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if (((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0)))) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      if ((get_attr_type (insn) == TYPE_IMOV) || (get_attr_type (insn) == TYPE_IMOVX))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOV) || (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))) || (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode))))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
    case 636:
    case 635:
    case 617:
    case 616:
    case 615:
    case 614:
    case 613:
    case 582:
    case 518:
    case 516:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 487:
    case 486:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 116:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 87:
    case 86:
    case 85:
    case 82:
    case 81:
    case 80:
    case 79:
    case 78:
    case 75:
    case 74:
    case 73:
    case 70:
    case 69:
    case 68:
    case 65:
    case 64:
    case 63:
    case 62:
    case 61:
    case 59:
    case 58:
    case 57:
    case 56:
    case 55:
    case 54:
    case 53:
    case 52:
    case 50:
    case 49:
    case 48:
    case 47:
    case 46:
    case 44:
    case 43:
    case 42:
    case 41:
    case 40:
    case 39:
    case 38:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 15 /* 0xf */;

    case 2:
      return 1;

    case 3:
      return 1;

    default:
      abort ();
    }
}

static int athlon_vectordec_unit_blockage PARAMS ((rtx, rtx));
static int
athlon_vectordec_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 507:
      if (get_attr_type (insn) == TYPE_MULTI)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 177:
    case 174:
    case 171:
    case 168:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 140:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || ((which_alternative == 2) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 176:
    case 173:
    case 170:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative != 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 3) || ((which_alternative == 4) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 4)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 673:
    case 620:
    case 618:
    case 83:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 407:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 279:
    case 278:
    case 277:
    case 276:
    case 275:
    case 274:
    case 273:
    case 272:
    case 271:
    case 270:
    case 269:
    case 268:
    case 267:
    case 266:
    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
    case 230:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 87:
    case 80:
    case 79:
    case 76:
    case 48:
    case 42:
    case 41:
    case 37:
    case 36:
    case 35:
    case 34:
    case 33:
    case 32:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      casenum = 0;
      break;

    default:
      casenum = 1;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      switch (recog_memoized (insn))
	{
        case 507:
	  if (! (get_attr_type (insn) == TYPE_MULTI))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 184:
        case 183:
        case 182:
        case 181:
        case 180:
        case 179:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 0) && ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 177:
        case 174:
        case 171:
        case 168:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 1)
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 140:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 1) && ((which_alternative != 2) && (which_alternative != 3)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 176:
        case 173:
        case 170:
        case 167:
        case 150:
        case 148:
        case 146:
        case 144:
        case 139:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 138:
        case 137:
        case 136:
        case 135:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 1) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 133:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 1)) || (((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))) || (which_alternative != 1)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 104:
        case 103:
        case 102:
        case 101:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 3) && ((which_alternative != 4) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) || ((! (get_attr_memory (insn) == MEMORY_LOAD)) && (! (get_attr_memory (insn) == MEMORY_STORE))))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 95:
        case 94:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 84:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 4)
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 673:
        case 620:
        case 618:
        case 83:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && (which_alternative != 1))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode))))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (! (memory_operand (operands[1], VOIDmode)))
	    {
	      return 0;
	    }
	  else
	    {
	      return 1;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        case 805:
        case 658:
        case 657:
        case 650:
        case 649:
        case 648:
        case 647:
        case 646:
        case 645:
        case 644:
        case 643:
        case 642:
        case 641:
        case 640:
        case 639:
        case 638:
        case 637:
        case 633:
        case 632:
        case 630:
        case 629:
        case 627:
        case 626:
        case 624:
        case 623:
        case 622:
        case 621:
        case 619:
        case 612:
        case 611:
        case 610:
        case 609:
        case 608:
        case 607:
        case 606:
        case 605:
        case 604:
        case 603:
        case 602:
        case 601:
        case 600:
        case 599:
        case 598:
        case 597:
        case 596:
        case 595:
        case 594:
        case 593:
        case 592:
        case 591:
        case 590:
        case 589:
        case 588:
        case 587:
        case 586:
        case 585:
        case 584:
        case 583:
        case 582:
        case 581:
        case 580:
        case 579:
        case 578:
        case 577:
        case 576:
        case 575:
        case 574:
        case 573:
        case 572:
        case 524:
        case 523:
        case 522:
        case 521:
        case 520:
        case 519:
        case 517:
        case 515:
        case 514:
        case 513:
        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
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
        case 449:
        case 448:
        case 424:
        case 423:
        case 407:
        case 406:
        case 405:
        case 383:
        case 382:
        case 381:
        case 380:
        case 379:
        case 378:
        case 377:
        case 376:
        case 375:
        case 374:
        case 364:
        case 363:
        case 362:
        case 361:
        case 360:
        case 359:
        case 358:
        case 357:
        case 356:
        case 355:
        case 344:
        case 289:
        case 288:
        case 279:
        case 278:
        case 277:
        case 276:
        case 275:
        case 274:
        case 273:
        case 272:
        case 271:
        case 270:
        case 269:
        case 268:
        case 267:
        case 266:
        case 265:
        case 264:
        case 263:
        case 262:
        case 261:
        case 260:
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
        case 230:
        case 185:
        case 166:
        case 165:
        case 132:
        case 131:
        case 130:
        case 129:
        case 128:
        case 119:
        case 115:
        case 100:
        case 99:
        case 98:
        case 97:
        case 93:
        case 92:
        case 87:
        case 80:
        case 79:
        case 76:
        case 48:
        case 42:
        case 41:
        case 37:
        case 36:
        case 35:
        case 34:
        case 33:
        case 32:
        case 31:
        case 30:
        case 29:
        case 28:
        case 26:
        case 25:
        case 22:
        case 18:
	  return 1;

        default:
	  return 0;

      }

    default:
      abort ();
    }
}

static int k6_fpu_unit_blockage PARAMS ((rtx, rtx));
static int
k6_fpu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 2;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    default:
      abort ();
    }
}

static int k6_fpu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_fpu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 0;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 2;

    case 1:
      return 2;

    case 2:
      return 56 /* 0x38 */;

    default:
      abort ();
    }
}

static int k6_store_unit_blockage PARAMS ((rtx, rtx));
static int
k6_store_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 412:
    case 409:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 415:
    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 0;
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int k6_store_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_store_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 412:
    case 409:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 415:
    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 0;
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int k6_load_unit_blockage PARAMS ((rtx, rtx));
static int
k6_load_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 802:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 487:
    case 486:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 86:
    case 80:
    case 79:
    case 69:
    case 53:
    case 47:
    case 42:
    case 41:
      casenum = 0;
      break;

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 78:
    case 63:
    case 59:
    case 58:
    case 57:
    case 50:
    case 49:
    case 44:
    case 43:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 804:
    case 803:
    case 801:
    case 765:
    case 764:
    case 726:
    case 664:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 615:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 85:
    case 76:
    case 68:
    case 52:
    case 46:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      casenum = 1;
      break;

    default:
      casenum = 0;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    default:
      abort ();
    }
}

static int k6_load_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_load_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 802:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
    case 487:
    case 486:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
    case 86:
    case 80:
    case 79:
    case 69:
    case 53:
    case 47:
    case 42:
    case 41:
      casenum = 0;
      break;

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 78:
    case 63:
    case 59:
    case 58:
    case 57:
    case 50:
    case 49:
    case 44:
    case 43:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_memory (insn) == MEMORY_LOAD)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 1;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    case 805:
    case 804:
    case 803:
    case 801:
    case 765:
    case 764:
    case 726:
    case 664:
    case 658:
    case 657:
    case 650:
    case 649:
    case 648:
    case 647:
    case 646:
    case 645:
    case 644:
    case 643:
    case 642:
    case 641:
    case 640:
    case 639:
    case 638:
    case 637:
    case 633:
    case 632:
    case 630:
    case 629:
    case 627:
    case 626:
    case 624:
    case 623:
    case 622:
    case 621:
    case 619:
    case 615:
    case 613:
    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 582:
    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
    case 524:
    case 523:
    case 522:
    case 521:
    case 520:
    case 519:
    case 517:
    case 515:
    case 514:
    case 513:
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
    case 449:
    case 448:
    case 424:
    case 423:
    case 406:
    case 405:
    case 383:
    case 382:
    case 381:
    case 380:
    case 379:
    case 378:
    case 377:
    case 376:
    case 375:
    case 374:
    case 364:
    case 363:
    case 362:
    case 361:
    case 360:
    case 359:
    case 358:
    case 357:
    case 356:
    case 355:
    case 344:
    case 289:
    case 288:
    case 277:
    case 275:
    case 274:
    case 272:
    case 271:
    case 269:
    case 268:
    case 230:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 185:
    case 166:
    case 165:
    case 132:
    case 131:
    case 130:
    case 129:
    case 128:
    case 119:
    case 115:
    case 100:
    case 99:
    case 98:
    case 97:
    case 93:
    case 92:
    case 85:
    case 76:
    case 68:
    case 52:
    case 46:
    case 31:
    case 30:
    case 29:
    case 28:
    case 26:
    case 25:
    case 22:
    case 18:
      casenum = 1;
      break;

    default:
      casenum = 0;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 10 /* 0xa */;

    default:
      abort ();
    }
}

static int k6_alu_unit_blockage PARAMS ((rtx, rtx));
static int
k6_alu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) || ((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (get_attr_type (insn) == TYPE_ALU))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((incdec_operand (operands[2], QImode)) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((incdec_operand (operands[2], HImode)) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 116:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4))))))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 87:
    case 75:
    case 74:
    case 73:
    case 62:
    case 61:
    case 56:
    case 55:
    case 54:
    case 48:
      if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 615:
    case 613:
    case 518:
    case 487:
    case 486:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 82:
    case 81:
    case 70:
    case 65:
    case 64:
    case 63:
    case 57:
    case 44:
    case 43:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_alu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((get_attr_type (insn) == TYPE_ALU) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) || ((which_alternative != 0) || (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (get_attr_type (insn) == TYPE_ALU))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ALU)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) || ((incdec_operand (operands[2], QImode)) || (which_alternative == 3)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) || ((incdec_operand (operands[2], HImode)) || (which_alternative == 2)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ALU) || ((get_attr_type (insn) == TYPE_INCDEC) || ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 116:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], DImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))
        {
	  casenum = 0;
        }
      else if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      if (get_attr_type (insn) == TYPE_IMOVX)
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2)))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if (((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4))))))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_IMOV) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 87:
    case 75:
    case 74:
    case 73:
    case 62:
    case 61:
    case 56:
    case 55:
    case 54:
    case 48:
      if (get_attr_memory (insn) == MEMORY_NONE)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else if ((((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && ((! ((flag_pic) != (0))) || (! (symbolic_operand (operands[1], SImode)))))))) && (get_attr_memory (insn) == MEMORY_NONE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 615:
    case 613:
    case 518:
    case 487:
    case 486:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 427:
    case 426:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 418:
    case 407:
    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 323:
    case 322:
    case 321:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 301:
    case 300:
    case 299:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 113:
    case 112:
    case 111:
    case 110:
    case 109:
    case 108:
    case 107:
    case 82:
    case 81:
    case 70:
    case 65:
    case 64:
    case 63:
    case 57:
    case 44:
    case 43:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alux_unit_blockage PARAMS ((rtx, rtx));
static int
k6_alux_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 582:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
      casenum = 0;
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 3) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
    case 207:
    case 202:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 636:
    case 635:
    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if (((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      casenum = 0;
      break;

    case 615:
    case 613:
    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 111:
    case 108:
    case 70:
    case 65:
    case 64:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int k6_alux_unit_conflict_cost PARAMS ((rtx, rtx));
static int
k6_alux_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && (((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode)))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 582:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
      casenum = 0;
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else if (get_attr_type (insn) == TYPE_ALU)
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 2;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 3) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 208:
    case 207:
    case 202:
      extract_insn_cached (insn);
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_INCDEC)) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 636:
    case 635:
    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if (((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 71:
    case 67:
    case 66:
      extract_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_IMOVX) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 51:
      extract_constrain_insn_cached (insn);
      if ((((((which_alternative != 0) && (which_alternative != 1)) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_HIMODE_MATH) == (0))))) && (((which_alternative != 2) && ((which_alternative != 3) && (which_alternative != 4))) || (! (aligned_operand (operands[1], HImode))))) && (((TARGET_MOVX) != (0)) && ((which_alternative == 0) || ((which_alternative == 1) || ((which_alternative == 3) || (which_alternative == 4)))))) && (general_operand (operands[0], QImode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 402:
    case 401:
    case 400:
    case 399:
    case 398:
    case 397:
    case 396:
    case 395:
    case 394:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      casenum = 0;
      break;

    case 615:
    case 613:
    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 296:
    case 295:
    case 294:
    case 293:
    case 292:
    case 291:
    case 290:
    case 287:
    case 286:
    case 285:
    case 284:
    case 283:
    case 282:
    case 281:
    case 280:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 236:
    case 235:
    case 234:
    case 233:
    case 232:
    case 231:
    case 229:
    case 228:
    case 227:
    case 226:
    case 225:
    case 224:
    case 223:
    case 222:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
    case 206:
    case 205:
    case 204:
    case 203:
    case 191:
    case 190:
    case 189:
    case 188:
    case 187:
    case 186:
    case 127:
    case 126:
    case 125:
    case 124:
    case 123:
    case 122:
    case 121:
    case 120:
    case 118:
    case 117:
    case 114:
    case 111:
    case 108:
    case 70:
    case 65:
    case 64:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      extract_insn_cached (insn);
      if (general_operand (operands[0], QImode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 2;

    case 3:
      return 17 /* 0x11 */;

    default:
      abort ();
    }
}

static int ppro_p0_unit_blockage PARAMS ((rtx, rtx));
static int
ppro_p0_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 622:
    case 621:
      casenum = 4;
      break;

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 507:
      if (get_attr_type (insn) == TYPE_IBR)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (which_alternative == 2))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      casenum = 2;
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 1;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 582:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 0;
      break;

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      casenum = 3;
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
      casenum = 6;
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 17 /* 0x11 */;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 1;

    case 7:
      return 1;

    case 8:
      return 1;

    default:
      abort ();
    }
}

static int ppro_p0_unit_conflict_cost PARAMS ((rtx, rtx));
static int
ppro_p0_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], DImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (! (const0_operand (operands[2], SImode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 622:
    case 621:
      casenum = 4;
      break;

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], TFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], XFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], DFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (get_attr_type (insn) == TYPE_FOP)
        {
	  casenum = 3;
        }
      else if (mult_operator (operands[3], SFmode))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], TFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], XFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (! (mult_operator (operands[3], SFmode)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 7;
        }
      break;

    case 507:
      if (get_attr_type (insn) == TYPE_IBR)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 415:
      extract_constrain_insn_cached (insn);
      if ((get_attr_type (insn) == TYPE_ISHIFT) || (which_alternative == 2))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 417:
    case 416:
    case 414:
    case 413:
    case 410:
    case 404:
      if (get_attr_type (insn) == TYPE_ISHIFT)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 412:
    case 408:
    case 403:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (get_attr_type (insn) == TYPE_ISHIFT))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      casenum = 2;
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 1;
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 3)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 2)
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 208:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 207:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], SImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 202:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 2) || (pic_symbolic_operand (operands[2], DImode)))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 582:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 425:
    case 422:
    case 421:
    case 420:
    case 419:
    case 407:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 0;
      break;

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      casenum = 3;
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
    case 138:
    case 137:
    case 136:
    case 135:
      casenum = 6;
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || (which_alternative == 1))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 84:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 5) && (which_alternative != 6)) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 4) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], DImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 45:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 4) && ((which_alternative != 5) && (which_alternative != 6))) && ((which_alternative != 7) && ((which_alternative != 8) && ((which_alternative != 9) && (((flag_pic) != (0)) && (symbolic_operand (operands[1], SImode)))))))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 5;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      casenum = 5;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 1;

    case 1:
      return 1;

    case 2:
      return 17 /* 0x11 */;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 1;

    case 7:
      return 1;

    case 8:
      return 1;

    default:
      abort ();
    }
}

static int pent_uv_unit_blockage PARAMS ((rtx, rtx));
static int
pent_uv_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 208:
    case 207:
    case 202:
      if ((get_attr_type (insn) == TYPE_ALU) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 0;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int pent_uv_unit_conflict_cost PARAMS ((rtx, rtx));
static int
pent_uv_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((which_alternative == 0) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 208:
    case 207:
    case 202:
      if ((get_attr_type (insn) == TYPE_ALU) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 0;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int pent_u_unit_blockage PARAMS ((rtx, rtx));
static int
pent_u_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 296:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 245:
    case 244:
    case 243:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 220:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 0;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 110:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 400:
    case 109:
    case 57:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int pent_u_unit_conflict_cost PARAMS ((rtx, rtx));
static int
pent_u_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 296:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 337:
    case 336:
    case 335:
    case 319:
    case 318:
    case 317:
    case 297:
    case 245:
    case 244:
    case 243:
      if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 220:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 0;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 0;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 110:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 400:
    case 109:
    case 57:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 0;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 2;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    default:
      abort ();
    }
}

static int fpu_unit_blockage PARAMS ((rtx, rtx));
static int
fpu_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 10 /* 0xa */;
        }
      break;

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  casenum = 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], TFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], TFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], XFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], XFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  casenum = 2;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  casenum = 2;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 106:
    case 105:
    case 96:
    case 91:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  casenum = 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 11 /* 0xb */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 37 /* 0x25 */;

    case 7:
      return 68 /* 0x44 */;

    case 8:
      return 1;

    case 9:
      return 2;

    case 10:
      return 56 /* 0x38 */;

    case 11:
      return 1;

    default:
      abort ();
    }
}

static int fpu_unit_conflict_cost PARAMS ((rtx, rtx));
static int
fpu_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 622:
    case 621:
      if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 620:
    case 619:
    case 618:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 581:
    case 580:
    case 579:
    case 578:
    case 577:
    case 576:
    case 575:
    case 574:
    case 573:
    case 572:
    case 571:
    case 570:
    case 569:
    case 568:
    case 567:
    case 566:
    case 565:
    case 564:
    case 561:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 10 /* 0xa */;
        }
      break;

    case 562:
    case 559:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  casenum = 7;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], DFmode))))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative != 2) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 6;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FOP))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 9;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (get_attr_type (insn) == TYPE_FDIV))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], TFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], TFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], TFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], XFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], XFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], XFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (! (mult_operator (operands[3], SFmode)))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) && (mult_operator (operands[3], SFmode))))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 4;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 5;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (! (mult_operator (operands[3], SFmode))))
        {
	  casenum = 8;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 9;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 164:
    case 163:
    case 162:
    case 159:
    case 158:
    case 157:
    case 154:
    case 153:
    case 152:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      extract_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  casenum = 2;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((which_alternative == 1) && (((ix86_cpu) == (CPU_PENTIUMPRO))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD)))
        {
	  casenum = 2;
        }
      else if (((ix86_cpu) == (CPU_PENTIUMPRO)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || (which_alternative == 1)) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || (which_alternative == 1)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 0;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 106:
    case 105:
    case 96:
    case 91:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 95:
    case 94:
    case 90:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 1;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUM))) && (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_NONE) || (get_attr_memory (insn) == MEMORY_LOAD))))
        {
	  casenum = 2;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 36:
    case 33:
      extract_constrain_insn_cached (insn);
      if ((((ix86_cpu) == (CPU_PENTIUM))) && (which_alternative == 0))
        {
	  casenum = 3;
        }
      else if ((((ix86_cpu) == (CPU_PENTIUMPRO))) && (which_alternative == 0))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 392:
    case 391:
    case 390:
    case 389:
    case 388:
    case 387:
    case 386:
    case 385:
    case 384:
    case 373:
    case 372:
    case 371:
    case 370:
    case 369:
    case 368:
    case 367:
    case 366:
    case 365:
    case 35:
    case 32:
    case 27:
    case 24:
    case 23:
    case 21:
    case 20:
    case 19:
      if (((ix86_cpu) == (CPU_PENTIUM)))
        {
	  casenum = 3;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 11 /* 0xb */;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 3;

    case 1:
      return 2;

    case 2:
      return 1;

    case 3:
      return 1;

    case 4:
      return 1;

    case 5:
      return 1;

    case 6:
      return 37 /* 0x25 */;

    case 7:
      return 68 /* 0x44 */;

    case 8:
      return 1;

    case 9:
      return 2;

    case 10:
      return 56 /* 0x38 */;

    case 11:
      return 1;

    default:
      abort ();
    }
}

static int pent_mul_unit_blockage PARAMS ((rtx, rtx));
static int
pent_mul_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 11 /* 0xb */;

    case 1:
      return 2;

    case 2:
      return 39 /* 0x27 */;

    case 3:
      return 70 /* 0x46 */;

    default:
      abort ();
    }
}

static int pent_mul_unit_conflict_cost PARAMS ((rtx, rtx));
static int
pent_mul_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 558:
    case 556:
    case 554:
    case 552:
    case 550:
    case 548:
    case 546:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 557:
    case 555:
    case 553:
    case 551:
    case 549:
    case 547:
    case 545:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 539:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (mult_operator (operands[3], DFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 544:
    case 543:
    case 542:
    case 541:
    case 538:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], DFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 534:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 2) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else if (get_attr_type (insn) == TYPE_FDIV)
        {
	  casenum = 2;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 537:
    case 536:
    case 533:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 2;
        }
      break;

    case 532:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], TFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 531:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], XFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 529:
    case 526:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && (mult_operator (operands[3], SFmode)))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 528:
    case 525:
      extract_insn_cached (insn);
      if (mult_operator (operands[3], SFmode))
        {
	  casenum = 1;
        }
      else
        {
	  casenum = 3;
        }
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 3;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 11 /* 0xb */;

    case 1:
      return 2;

    case 2:
      return 39 /* 0x27 */;

    case 3:
      return 70 /* 0x46 */;

    default:
      abort ();
    }
}

static int pent_np_unit_blockage PARAMS ((rtx, rtx));
static int
pent_np_unit_blockage (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 0) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 582:
      casenum = 5;
      break;

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 507:
      if (! (get_attr_type (insn) == TYPE_IBR))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 6;
        }
      else if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 425:
    case 407:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 6;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 401:
    case 399:
    case 396:
    case 395:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 283:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 2))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 282:
    case 281:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 280:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      casenum = 2;
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 208:
    case 207:
    case 202:
      if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 615:
    case 613:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 11 /* 0xb */;
      break;

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 6;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      extract_insn_cached (insn);
      if ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  casenum = 3;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 8;
        }
      else if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 71:
    case 67:
    case 66:
    case 51:
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 84:
    case 45:
      if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 9;
        }
      else if (get_attr_memory (insn) == MEMORY_STORE)
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 287:
    case 286:
    case 285:
    case 86:
    case 85:
    case 75:
    case 74:
    case 73:
    case 69:
    case 68:
    case 62:
    case 56:
    case 53:
    case 52:
    case 47:
    case 46:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 11 /* 0xb */;

    case 1:
      return 12 /* 0xc */;

    case 2:
      return 46 /* 0x2e */;

    case 3:
      return 3;

    case 4:
      return 2;

    case 5:
      return 2;

    case 6:
      return 3;

    case 7:
      return 2;

    case 8:
      return 1;

    case 9:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 10:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 11:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 1;

      }

    case 12:
      switch (recog_memoized (insn))
	{
        case 558:
        case 556:
        case 554:
        case 552:
        case 550:
        case 548:
        case 546:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], TFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 557:
        case 555:
        case 553:
        case 551:
        case 549:
        case 547:
        case 545:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], XFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 539:
	  extract_constrain_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], DFmode)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 544:
        case 543:
        case 542:
        case 541:
        case 538:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], DFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 534:
	  extract_constrain_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], SFmode)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 537:
        case 536:
        case 533:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], SFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 141:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 620:
        case 619:
        case 618:
        case 133:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && (which_alternative != 1))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
        case 103:
        case 102:
        case 101:
        case 95:
        case 94:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 562:
        case 559:
        case 529:
        case 526:
        case 184:
        case 183:
        case 182:
        case 181:
        case 180:
        case 179:
        case 177:
        case 176:
        case 174:
        case 173:
        case 171:
        case 170:
        case 168:
        case 167:
        case 150:
        case 148:
        case 146:
        case 144:
        case 140:
        case 139:
        case 36:
        case 33:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 622:
        case 621:
        case 581:
        case 580:
        case 579:
        case 578:
        case 577:
        case 576:
        case 575:
        case 574:
        case 573:
        case 572:
        case 571:
        case 570:
        case 569:
        case 568:
        case 567:
        case 566:
        case 565:
        case 564:
        case 561:
        case 532:
        case 531:
        case 528:
        case 525:
        case 392:
        case 391:
        case 390:
        case 389:
        case 388:
        case 387:
        case 386:
        case 385:
        case 384:
        case 373:
        case 372:
        case 371:
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 164:
        case 163:
        case 162:
        case 159:
        case 158:
        case 157:
        case 154:
        case 153:
        case 152:
        case 151:
        case 149:
        case 147:
        case 145:
        case 142:
        case 138:
        case 137:
        case 136:
        case 135:
        case 35:
        case 32:
        case 27:
        case 24:
        case 23:
        case 21:
        case 20:
        case 19:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    default:
      abort ();
    }
}

static int pent_np_unit_conflict_cost PARAMS ((rtx, rtx));
static int
pent_np_unit_conflict_cost (executing_insn, candidate_insn)
     rtx executing_insn;
     rtx candidate_insn;
{
  rtx insn;
  int casenum;

  insn = executing_insn;
  switch (recog_memoized (insn))
    {
    case 656:
    case 655:
    case 654:
    case 653:
    case 652:
    case 651:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 636:
    case 635:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 0) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((which_alternative == 0) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 612:
    case 611:
    case 610:
    case 609:
    case 608:
    case 607:
    case 606:
    case 605:
    case 604:
    case 603:
    case 602:
    case 601:
    case 600:
    case 599:
    case 598:
    case 597:
    case 596:
    case 595:
    case 594:
    case 593:
    case 592:
    case 591:
    case 590:
    case 589:
    case 588:
    case 587:
    case 586:
    case 585:
    case 584:
    case 583:
      casenum = 1;
      break;

    case 582:
      casenum = 5;
      break;

    case 512:
    case 511:
    case 510:
    case 509:
    case 508:
      extract_insn_cached (insn);
      if (! (constant_call_address_operand (operands[0], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 507:
      if (! (get_attr_type (insn) == TYPE_IBR))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

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
    case 465:
    case 464:
    case 463:
    case 462:
    case 461:
    case 460:
    case 459:
    case 458:
    case 457:
    case 456:
    case 455:
    case 454:
    case 453:
    case 452:
    case 451:
    case 450:
    case 447:
    case 446:
    case 445:
    case 444:
    case 443:
    case 442:
    case 441:
    case 440:
    case 439:
    case 438:
    case 437:
    case 436:
    case 435:
    case 434:
    case 433:
    case 432:
    case 431:
    case 430:
    case 429:
    case 428:
    case 422:
    case 421:
    case 420:
    case 419:
      extract_insn_cached (insn);
      if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 6;
        }
      else if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 427:
    case 426:
    case 418:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((which_alternative == 1) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 411:
      extract_constrain_insn_cached (insn);
      if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 409:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative == 0) && ((((TARGET_DOUBLE_WITH_ADD) != (0)) && (const1_operand (operands[2], VOIDmode))) || ((! ((TARGET_DOUBLE_WITH_ADD) != (0))) || (! (const1_operand (operands[2], VOIDmode)))))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 425:
    case 407:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 6;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 7;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 417:
    case 416:
    case 415:
    case 414:
    case 413:
    case 412:
    case 410:
    case 408:
    case 404:
    case 403:
      if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((get_attr_type (insn) == TYPE_ALU) || (get_attr_type (insn) == TYPE_ISHIFT)) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 401:
    case 399:
    case 396:
    case 395:
    case 393:
    case 354:
    case 353:
    case 352:
    case 351:
    case 350:
    case 349:
    case 348:
    case 347:
    case 346:
    case 345:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 6;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 296:
    case 292:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 290:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 283:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) && (which_alternative != 2))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 282:
    case 281:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 1)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 280:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) || (which_alternative == 3))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 279:
    case 278:
    case 276:
    case 273:
    case 270:
    case 267:
    case 266:
      casenum = 2;
      break;

    case 265:
    case 264:
    case 263:
    case 262:
    case 261:
    case 260:
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
      casenum = 0;
      break;

    case 228:
    case 227:
    case 226:
    case 224:
    case 223:
    case 222:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], QImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 221:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative != 3) && (! (incdec_operand (operands[2], QImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 225:
    case 220:
    case 219:
    case 218:
    case 217:
    case 216:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], HImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 215:
      extract_constrain_insn_cached (insn);
      if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if (((which_alternative != 2) && (! (incdec_operand (operands[2], HImode)))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 214:
    case 213:
    case 212:
    case 211:
    case 210:
    case 209:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], SImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 206:
    case 205:
    case 204:
    case 203:
      extract_insn_cached (insn);
      if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((! (incdec_operand (operands[2], DImode))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 208:
    case 207:
    case 202:
      if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && (get_attr_memory (insn) == MEMORY_BOTH)))
        {
	  casenum = 6;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_pent_pair (insn) == PENT_PAIR_NP) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))))
        {
	  casenum = 7;
        }
      else if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((get_attr_type (insn) == TYPE_ALU) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 615:
    case 613:
    case 516:
    case 506:
    case 505:
    case 504:
    case 503:
    case 502:
    case 491:
    case 490:
    case 201:
    case 200:
    case 199:
    case 198:
    case 197:
    case 196:
    case 195:
    case 194:
    case 193:
    case 192:
      casenum = 11 /* 0xb */;
      break;

    case 518:
    case 343:
    case 342:
    case 341:
    case 340:
    case 339:
    case 338:
    case 337:
    case 336:
    case 335:
    case 334:
    case 333:
    case 332:
    case 331:
    case 330:
    case 329:
    case 328:
    case 327:
    case 326:
    case 325:
    case 324:
    case 322:
    case 320:
    case 319:
    case 318:
    case 317:
    case 316:
    case 315:
    case 314:
    case 313:
    case 312:
    case 311:
    case 310:
    case 309:
    case 308:
    case 307:
    case 306:
    case 305:
    case 304:
    case 303:
    case 302:
    case 300:
    case 298:
    case 297:
    case 295:
    case 294:
    case 293:
    case 291:
    case 248:
    case 247:
    case 246:
    case 245:
    case 244:
    case 243:
    case 242:
    case 241:
    case 240:
    case 239:
    case 238:
    case 237:
    case 234:
    case 233:
    case 232:
    case 229:
    case 191:
    case 190:
    case 187:
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 6;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 7;
        }
      else if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 236:
    case 235:
    case 231:
    case 189:
    case 188:
    case 186:
      if (get_attr_memory (insn) == MEMORY_BOTH)
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 184:
    case 183:
    case 182:
    case 181:
    case 180:
    case 179:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 151:
    case 149:
    case 147:
    case 145:
    case 142:
      extract_insn_cached (insn);
      if ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 141:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 177:
    case 176:
    case 174:
    case 173:
    case 171:
    case 170:
    case 168:
    case 167:
    case 150:
    case 148:
    case 146:
    case 144:
    case 140:
    case 139:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 0) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 138:
    case 137:
    case 136:
    case 135:
      extract_constrain_insn_cached (insn);
      if ((which_alternative == 1) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 133:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || (which_alternative == 1)) && (((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)) && (which_alternative == 1)))
        {
	  casenum = 3;
        }
      else if (((which_alternative == 0) || (which_alternative == 1)) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 116:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 113:
    case 110:
      extract_constrain_insn_cached (insn);
      if (which_alternative == 0)
        {
	  casenum = 8;
        }
      else if ((which_alternative == 1) && (get_attr_memory (insn) == MEMORY_BOTH))
        {
	  casenum = 9;
        }
      else if ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE))
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 104:
    case 103:
    case 102:
    case 101:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((get_attr_memory (insn) == MEMORY_LOAD) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 3;
        }
      else if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 95:
    case 94:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else
        {
	  casenum = 8;
        }
      break;

    case 90:
      extract_constrain_insn_cached (insn);
      if (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) && ((immediate_operand (operands[1], VOIDmode)) || (get_attr_memory (insn) == MEMORY_STORE)))
        {
	  casenum = 4;
        }
      else if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 89:
    case 88:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 77:
      extract_constrain_insn_cached (insn);
      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 72:
      extract_constrain_insn_cached (insn);
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 60:
      extract_constrain_insn_cached (insn);
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 71:
    case 67:
    case 66:
    case 51:
      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 84:
    case 45:
      if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 402:
    case 400:
    case 398:
    case 397:
    case 394:
    case 323:
    case 321:
    case 301:
    case 299:
    case 112:
    case 109:
    case 107:
    case 82:
    case 81:
    case 63:
    case 57:
    case 44:
    case 43:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 9;
        }
      else if (get_attr_memory (insn) == MEMORY_STORE)
        {
	  casenum = 10 /* 0xa */;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 80:
    case 79:
    case 42:
    case 41:
      extract_insn_cached (insn);
      if (memory_operand (operands[0], VOIDmode))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 78:
    case 59:
    case 58:
    case 50:
    case 49:
    case 40:
    case 39:
    case 38:
      extract_insn_cached (insn);
      if (memory_operand (operands[1], VOIDmode))
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case 287:
    case 286:
    case 285:
    case 86:
    case 85:
    case 75:
    case 74:
    case 73:
    case 69:
    case 68:
    case 62:
    case 56:
    case 53:
    case 52:
    case 47:
    case 46:
    case 17:
    case 16:
    case 15:
    case 14:
    case 13:
    case 12:
    case 11:
    case 10:
    case 9:
    case 8:
    case 7:
    case 6:
    case 5:
    case 4:
    case 3:
    case 2:
    case 1:
    case 0:
      if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
        {
	  casenum = 8;
        }
      else
        {
	  casenum = 11 /* 0xb */;
        }
      break;

    case -1:
      if (GET_CODE (PATTERN (insn)) != ASM_INPUT
          && asm_noperands (PATTERN (insn)) < 0)
        fatal_insn_not_found (insn);
    default:
      casenum = 8;
      break;

    }

  insn = candidate_insn;
  switch (casenum)
    {
    case 0:
      return 11 /* 0xb */;

    case 1:
      return 12 /* 0xc */;

    case 2:
      return 46 /* 0x2e */;

    case 3:
      return 3;

    case 4:
      return 2;

    case 5:
      return 2;

    case 6:
      return 3;

    case 7:
      return 2;

    case 8:
      return 1;

    case 9:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 3;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 3;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 3;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 3;

      }

    case 10:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    case 11:
      switch (recog_memoized (insn))
	{
        case 656:
        case 655:
        case 654:
        case 653:
        case 652:
        case 651:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[1], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 512:
        case 511:
        case 510:
        case 509:
        case 508:
	  extract_insn_cached (insn);
	  if (! (constant_call_address_operand (operands[0], VOIDmode)))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 507:
	  if (! (get_attr_type (insn) == TYPE_IBR))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

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
        case 465:
        case 464:
        case 463:
        case 462:
        case 461:
        case 460:
        case 459:
        case 458:
        case 457:
        case 456:
        case 455:
        case 454:
        case 453:
        case 452:
        case 451:
        case 450:
        case 447:
        case 446:
        case 445:
        case 444:
        case 443:
        case 442:
        case 441:
        case 440:
        case 439:
        case 438:
        case 437:
        case 436:
        case 435:
        case 434:
        case 433:
        case 432:
        case 431:
        case 430:
        case 429:
        case 428:
        case 422:
        case 421:
        case 420:
        case 419:
	  extract_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (const_int_operand (operands[2], VOIDmode))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (const_int_operand (operands[2], VOIDmode))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 427:
        case 426:
        case 418:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 1) && (const_int_operand (operands[2], VOIDmode)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 1) || (! (const_int_operand (operands[2], VOIDmode)))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 296:
        case 292:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || (which_alternative == 1))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && (which_alternative != 1)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 290:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2)))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 283:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) && (which_alternative != 2)) || ((which_alternative == 0) || (which_alternative == 2)))
	    {
	      if ((which_alternative != 0) && (which_alternative != 2))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 282:
        case 281:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 1)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 280:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative == 1) || (which_alternative == 3)) || ((which_alternative != 1) && (which_alternative != 3)))
	    {
	      if ((which_alternative == 1) || (which_alternative == 3))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 116:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) || ((which_alternative == 1) && (! (get_attr_imm_disp (insn) == IMM_DISP_TRUE))))
	    {
	      if ((which_alternative != 1) || (get_attr_imm_disp (insn) == IMM_DISP_TRUE))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 113:
        case 110:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))) || ((which_alternative != 3) && (which_alternative != 4))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 89:
        case 88:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 1) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 1) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 1) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 77:
	  extract_constrain_insn_cached (insn);
	  if (((which_alternative != 0) || (memory_operand (operands[1], VOIDmode))) || ((which_alternative == 0) && (! (memory_operand (operands[1], VOIDmode)))))
	    {
	      if ((which_alternative != 0) || (memory_operand (operands[1], VOIDmode)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 72:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0)))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && ((q_regs_operand (operands[0], QImode)) && (! ((TARGET_MOVX) != (0))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((! (q_regs_operand (operands[0], QImode))) || ((TARGET_MOVX) != (0))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 60:
	  extract_constrain_insn_cached (insn);
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2))))))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && ((which_alternative != 3) && ((which_alternative != 5) && ((! ((TARGET_MOVX) != (0))) || (which_alternative != 2))))))))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (((which_alternative != 3) || ((! ((TARGET_PARTIAL_REG_STALL) == (0))) && (! ((TARGET_QIMODE_MATH) == (0))))) && (((which_alternative == 3) && (((TARGET_PARTIAL_REG_STALL) == (0)) || ((TARGET_QIMODE_MATH) == (0)))) || ((which_alternative == 3) || ((which_alternative == 5) || (((TARGET_MOVX) != (0)) && (which_alternative == 2)))))))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 71:
        case 67:
        case 66:
        case 51:
	  if (((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (get_attr_type (insn) == TYPE_IMOV)))
	    {
	      if ((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || (! (get_attr_type (insn) == TYPE_IMOV)))
	        {
		  return 1;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 1;
	    }

        case 417:
        case 416:
        case 415:
        case 414:
        case 413:
        case 412:
        case 411:
        case 410:
        case 409:
        case 408:
        case 404:
        case 403:
        case 221:
        case 215:
        case 208:
        case 207:
        case 202:
        case 84:
        case 45:
	  if (get_attr_pent_pair (insn) == PENT_PAIR_NP)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 615:
        case 613:
        case 516:
        case 506:
        case 505:
        case 504:
        case 503:
        case 502:
        case 491:
        case 490:
        case 402:
        case 400:
        case 398:
        case 397:
        case 394:
        case 323:
        case 321:
        case 301:
        case 299:
        case 236:
        case 235:
        case 231:
        case 201:
        case 200:
        case 199:
        case 198:
        case 197:
        case 196:
        case 195:
        case 194:
        case 193:
        case 192:
        case 189:
        case 188:
        case 186:
        case 112:
        case 109:
        case 107:
        case 82:
        case 81:
        case 63:
        case 57:
        case 44:
        case 43:
	  return 0;

        case 80:
        case 79:
        case 42:
        case 41:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[0], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 78:
        case 59:
        case 58:
        case 50:
        case 49:
        case 40:
        case 39:
        case 38:
	  extract_insn_cached (insn);
	  if (memory_operand (operands[1], VOIDmode))
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case 636:
        case 635:
        case 518:
        case 343:
        case 342:
        case 341:
        case 340:
        case 339:
        case 338:
        case 337:
        case 336:
        case 335:
        case 334:
        case 333:
        case 332:
        case 331:
        case 330:
        case 329:
        case 328:
        case 327:
        case 326:
        case 325:
        case 324:
        case 322:
        case 320:
        case 319:
        case 318:
        case 317:
        case 316:
        case 315:
        case 314:
        case 313:
        case 312:
        case 311:
        case 310:
        case 309:
        case 308:
        case 307:
        case 306:
        case 305:
        case 304:
        case 303:
        case 302:
        case 300:
        case 298:
        case 297:
        case 295:
        case 294:
        case 293:
        case 291:
        case 287:
        case 286:
        case 285:
        case 248:
        case 247:
        case 246:
        case 245:
        case 244:
        case 243:
        case 242:
        case 241:
        case 240:
        case 239:
        case 238:
        case 237:
        case 234:
        case 233:
        case 232:
        case 229:
        case 228:
        case 227:
        case 226:
        case 225:
        case 224:
        case 223:
        case 222:
        case 220:
        case 219:
        case 218:
        case 217:
        case 216:
        case 214:
        case 213:
        case 212:
        case 211:
        case 210:
        case 209:
        case 206:
        case 205:
        case 204:
        case 203:
        case 191:
        case 190:
        case 187:
        case 86:
        case 85:
        case 75:
        case 74:
        case 73:
        case 69:
        case 68:
        case 62:
        case 56:
        case 53:
        case 52:
        case 47:
        case 46:
        case 17:
        case 16:
        case 15:
        case 14:
        case 13:
        case 12:
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
	  if (get_attr_imm_disp (insn) == IMM_DISP_TRUE)
	    {
	      return 1;
	    }
	  else
	    {
	      return 0;
	    }

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 1;

      }

    case 12:
      switch (recog_memoized (insn))
	{
        case 558:
        case 556:
        case 554:
        case 552:
        case 550:
        case 548:
        case 546:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], TFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 557:
        case 555:
        case 553:
        case 551:
        case 549:
        case 547:
        case 545:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], XFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 539:
	  extract_constrain_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], DFmode)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 544:
        case 543:
        case 542:
        case 541:
        case 538:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], DFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 534:
	  extract_constrain_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && ((which_alternative == 2) || (! (mult_operator (operands[3], SFmode)))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 537:
        case 536:
        case 533:
	  extract_insn_cached (insn);
	  if ((! (get_attr_type (insn) == TYPE_FOP)) && (! (mult_operator (operands[3], SFmode))))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 141:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative == 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 620:
        case 619:
        case 618:
        case 133:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && (which_alternative != 1))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 104:
        case 103:
        case 102:
        case 101:
        case 95:
        case 94:
	  extract_constrain_insn_cached (insn);
	  if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 90:
	  extract_constrain_insn_cached (insn);
	  if ((((get_attr_imm_disp (insn) == IMM_DISP_TRUE) || ((which_alternative != 3) && (which_alternative != 4))) || ((! (get_attr_imm_disp (insn) == IMM_DISP_TRUE)) && (((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2))) && ((which_alternative == 3) || (which_alternative == 4))))) || ((which_alternative == 0) || ((which_alternative == 1) || (which_alternative == 2))))
	    {
	      if ((which_alternative != 0) && ((which_alternative != 1) && (which_alternative != 2)))
	        {
		  return 2;
	        }
	      else
	        {
		  return 0;
	        }
	    }
	  else
	    {
	      return 2;
	    }

        case 562:
        case 559:
        case 529:
        case 526:
        case 184:
        case 183:
        case 182:
        case 181:
        case 180:
        case 179:
        case 177:
        case 176:
        case 174:
        case 173:
        case 171:
        case 170:
        case 168:
        case 167:
        case 150:
        case 148:
        case 146:
        case 144:
        case 140:
        case 139:
        case 36:
        case 33:
	  extract_constrain_insn_cached (insn);
	  if (which_alternative != 0)
	    {
	      return 2;
	    }
	  else
	    {
	      return 0;
	    }

        case 622:
        case 621:
        case 581:
        case 580:
        case 579:
        case 578:
        case 577:
        case 576:
        case 575:
        case 574:
        case 573:
        case 572:
        case 571:
        case 570:
        case 569:
        case 568:
        case 567:
        case 566:
        case 565:
        case 564:
        case 561:
        case 532:
        case 531:
        case 528:
        case 525:
        case 392:
        case 391:
        case 390:
        case 389:
        case 388:
        case 387:
        case 386:
        case 385:
        case 384:
        case 373:
        case 372:
        case 371:
        case 370:
        case 369:
        case 368:
        case 367:
        case 366:
        case 365:
        case 164:
        case 163:
        case 162:
        case 159:
        case 158:
        case 157:
        case 154:
        case 153:
        case 152:
        case 151:
        case 149:
        case 147:
        case 145:
        case 142:
        case 138:
        case 137:
        case 136:
        case 135:
        case 35:
        case 32:
        case 27:
        case 24:
        case 23:
        case 21:
        case 20:
        case 19:
	  return 0;

        case -1:
	  if (GET_CODE (PATTERN (insn)) != ASM_INPUT
	      && asm_noperands (PATTERN (insn)) < 0)
	    fatal_insn_not_found (insn);
        default:
	  return 2;

      }

    default:
      abort ();
    }
}

const struct function_unit_desc function_units[] = {
  {"pent_np", 1, 1, 0, 0, 46, pent_np_unit_ready_cost, pent_np_unit_conflict_cost, 46, pent_np_unit_blockage_range, pent_np_unit_blockage}, 
  {"pent_mul", 2, 1, 1, 0, 70, pent_mul_unit_ready_cost, pent_mul_unit_conflict_cost, 70, pent_mul_unit_blockage_range, pent_mul_unit_blockage}, 
  {"fpu", 4, 1, 0, 0, 68, fpu_unit_ready_cost, fpu_unit_conflict_cost, 68, fpu_unit_blockage_range, fpu_unit_blockage}, 
  {"pent_u", 8, 1, 0, 0, 3, pent_u_unit_ready_cost, pent_u_unit_conflict_cost, 3, pent_u_unit_blockage_range, pent_u_unit_blockage}, 
  {"pent_uv", 16, 2, 0, 0, 3, pent_uv_unit_ready_cost, pent_uv_unit_conflict_cost, 3, pent_uv_unit_blockage_range, pent_uv_unit_blockage}, 
  {"pent_v", 32, 1, 0, 1, 1, pent_v_unit_ready_cost, 0, 1, 0, 0}, 
  {"ppro_p0", 64, 1, 0, 0, 17, ppro_p0_unit_ready_cost, ppro_p0_unit_conflict_cost, 17, ppro_p0_unit_blockage_range, ppro_p0_unit_blockage}, 
  {"ppro_p01", 128, 2, 0, 1, 1, ppro_p01_unit_ready_cost, 0, 1, 0, 0}, 
  {"ppro_p2", 256, 1, 0, 1, 1, ppro_p2_unit_ready_cost, 0, 1, 0, 0}, 
  {"ppro_p34", 512, 1, 0, 1, 1, ppro_p34_unit_ready_cost, 0, 1, 0, 0}, 
  {"k6_alux", 1024, 1, 0, 0, 17, k6_alux_unit_ready_cost, k6_alux_unit_conflict_cost, 17, k6_alux_unit_blockage_range, k6_alux_unit_blockage}, 
  {"k6_alu", 2048, 2, 0, 0, 17, k6_alu_unit_ready_cost, k6_alu_unit_conflict_cost, 17, k6_alu_unit_blockage_range, k6_alu_unit_blockage}, 
  {"k6_branch", 4096, 1, 0, 1, 1, k6_branch_unit_ready_cost, 0, 1, 0, 0}, 
  {"k6_load", 8192, 1, 0, 0, 10, k6_load_unit_ready_cost, k6_load_unit_conflict_cost, 10, k6_load_unit_blockage_range, k6_load_unit_blockage}, 
  {"k6_store", 16384, 1, 0, 0, 10, k6_store_unit_ready_cost, k6_store_unit_conflict_cost, 10, k6_store_unit_blockage_range, k6_store_unit_blockage}, 
  {"k6_fpu", 32768, 1, 1, 0, 56, k6_fpu_unit_ready_cost, k6_fpu_unit_conflict_cost, 56, k6_fpu_unit_blockage_range, k6_fpu_unit_blockage}, 
  {"athlon_vectordec", 65536, 1, 0, 1, 1, athlon_vectordec_unit_ready_cost, 0, 1, athlon_vectordec_unit_blockage_range, athlon_vectordec_unit_blockage}, 
  {"athlon_directdec", 131072, 3, 0, 1, 1, athlon_directdec_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_ieu", 262144, 3, 0, 0, 15, athlon_ieu_unit_ready_cost, athlon_ieu_unit_conflict_cost, 15, athlon_ieu_unit_blockage_range, athlon_ieu_unit_blockage}, 
  {"athlon_muldiv", 524288, 1, 0, 0, 42, athlon_muldiv_unit_ready_cost, athlon_muldiv_unit_conflict_cost, 42, athlon_muldiv_unit_blockage_range, athlon_muldiv_unit_blockage}, 
  {"athlon_fp", 1048576, 3, 0, 1, 1, athlon_fp_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_mul", 2097152, 1, 0, 1, 1, athlon_fp_mul_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_add", 4194304, 1, 0, 1, 1, athlon_fp_add_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_muladd", 8388608, 2, 0, 1, 1, athlon_fp_muladd_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_fp_store", 16777216, 1, 0, 1, 1, athlon_fp_store_unit_ready_cost, 0, 1, 0, 0}, 
  {"athlon_load", 33554432, 2, 0, 1, 1, athlon_load_unit_ready_cost, 0, 1, 0, 0}, 
};

int length_unit_log = 0;
