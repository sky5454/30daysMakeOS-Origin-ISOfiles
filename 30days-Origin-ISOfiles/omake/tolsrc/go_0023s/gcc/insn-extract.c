/* Generated automatically by the program `genextract'
from the machine description file `md'.  */

#include "config.h"
#include "system.h"
#include "rtl.h"
#include "insn-config.h"
#include "recog.h"
#include "toplev.h"

static rtx junk ATTRIBUTE_UNUSED;
void
insn_extract (insn)
     rtx insn;
{
  rtx *ro = recog_data.operand;
  rtx **ro_loc = recog_data.operand_loc;
  rtx pat = PATTERN (insn);
  int i ATTRIBUTE_UNUSED;

  memset (ro, 0, sizeof (*ro) * MAX_RECOG_OPERANDS);
  memset (ro_loc, 0, sizeof (*ro_loc) * MAX_RECOG_OPERANDS);
  switch (INSN_CODE (insn))
    {
    case -1:
      fatal_insn_not_found (insn);

    case 832:  /* *prefetch_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 2));
      break;

    case 829:  /* pmulhrwv4hi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1), 0));
      break;

    case 821:  /* pi2fw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 820:  /* pfpnacc */
    case 819:  /* pfnacc */
    case 818:  /* pfacc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 817:  /* pf2iw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      break;

    case 808:  /* subrv2sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 805:  /* *sse_prologue_save_insn */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0), 1));
      break;

    case 804:  /* *sfence_insn */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0);
      recog_data.dup_num[0] = 0;
      break;

    case 828:  /* pfrsqit1v2sf3 */
    case 826:  /* pfrcpit2v2sf3 */
    case 825:  /* pfrcpit1v2sf3 */
    case 823:  /* pavgusb */
    case 773:  /* mmx_pshufw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 772:  /* mmx_pextrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0, 0));
      break;

    case 771:  /* mmx_pinsrw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 770:  /* mmx_psadbw */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 769:  /* mmx_uavgv4hi3 */
    case 768:  /* mmx_uavgv8qi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      break;

    case 767:  /* mmx_nanddi3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 762:  /* mmx_pmaddwd */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 1), 0), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 761:  /* umulv4hi3_highpart */
    case 760:  /* smulv4hi3_highpart */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1), 0));
      break;

    case 744:  /* cvttss2si */
    case 741:  /* cvttps2pi */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      break;

    case 742:  /* cvtsi2ss */
    case 739:  /* cvtpi2ps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 800:  /* mmx_punpckldq */
    case 799:  /* mmx_punpcklwd */
    case 798:  /* mmx_punpcklbw */
    case 797:  /* mmx_punpckhdq */
    case 796:  /* mmx_punpckhwd */
    case 795:  /* mmx_punpckhbw */
    case 794:  /* mmx_packuswb */
    case 793:  /* mmx_packssdw */
    case 792:  /* mmx_packsswb */
    case 734:  /* sse_unpcklps */
    case 733:  /* sse_unpckhps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 732:  /* sse_ucomi */
    case 731:  /* sse_comi */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (pat, 1));
      break;

    case 730:  /* vmmaskncmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 729:  /* vmmaskcmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 728:  /* maskncmpv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 711:  /* *sse_nandti3_sf */
    case 710:  /* *sse_nandti3_df */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 723:  /* *sse_xorti3_sf_2 */
    case 721:  /* *sse_xorti3_df_2 */
    case 717:  /* *sse_iorti3_sf_2 */
    case 715:  /* *sse_iorti3_df_2 */
    case 707:  /* *sse_andti3_sf_2 */
    case 705:  /* *sse_andti3_df_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 722:  /* *sse_xorti3_sf_1 */
    case 720:  /* *sse_xorti3_df_1 */
    case 716:  /* *sse_iorti3_sf_1 */
    case 714:  /* *sse_iorti3_df_1 */
    case 706:  /* *sse_andti3_sf_1 */
    case 704:  /* *sse_andti3_df_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 701:  /* vmrsqrtv4sf2 */
    case 699:  /* vmrcpv4sf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XEXP (pat, 1), 0), 0, 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 738:  /* vmsminv4sf3 */
    case 736:  /* vmsmaxv4sf3 */
    case 697:  /* vmdivv4sf3 */
    case 695:  /* vmmulv4sf3 */
    case 693:  /* vmsubv4sf3 */
    case 691:  /* vmaddv4sf3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      break;

    case 689:  /* sse_shufps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (pat, 1), 0, 2));
      break;

    case 814:  /* mulv2sf3 */
    case 813:  /* pfminv2sf3 */
    case 812:  /* pfmaxv2sf3 */
    case 811:  /* eqv2sf3 */
    case 810:  /* gev2sf3 */
    case 809:  /* gtv2sf3 */
    case 807:  /* subv2sf3 */
    case 806:  /* addv2sf3 */
    case 790:  /* ashlv2si3 */
    case 789:  /* ashlv4hi3 */
    case 787:  /* lshrv2si3 */
    case 786:  /* lshrv4hi3 */
    case 785:  /* ashrv2si3 */
    case 784:  /* ashrv4hi3 */
    case 783:  /* sminv4hi3 */
    case 782:  /* uminv8qi3 */
    case 781:  /* smaxv4hi3 */
    case 780:  /* umaxv8qi3 */
    case 779:  /* gtv2si3 */
    case 778:  /* gtv4hi3 */
    case 777:  /* gtv8qi3 */
    case 776:  /* eqv2si3 */
    case 775:  /* eqv4hi3 */
    case 774:  /* eqv8qi3 */
    case 759:  /* mulv4hi3 */
    case 758:  /* ussubv4hi3 */
    case 757:  /* ussubv8qi3 */
    case 756:  /* sssubv4hi3 */
    case 755:  /* sssubv8qi3 */
    case 754:  /* subv2si3 */
    case 753:  /* subv4hi3 */
    case 752:  /* subv8qi3 */
    case 751:  /* usaddv4hi3 */
    case 750:  /* usaddv8qi3 */
    case 749:  /* ssaddv4hi3 */
    case 748:  /* ssaddv8qi3 */
    case 747:  /* addv2si3 */
    case 746:  /* addv4hi3 */
    case 745:  /* addv8qi3 */
    case 737:  /* sminv4sf3 */
    case 735:  /* smaxv4sf3 */
    case 725:  /* *sse_xorti3_sse2 */
    case 724:  /* sse_xorti3 */
    case 719:  /* *sse_iorti3_sse2 */
    case 718:  /* sse_iorti3 */
    case 709:  /* *sse_andti3_sse2 */
    case 708:  /* sse_andti3 */
    case 696:  /* divv4sf3 */
    case 694:  /* mulv4sf3 */
    case 692:  /* subv4sf3 */
    case 690:  /* addv4sf3 */
    case 687:  /* sse_movss */
    case 685:  /* sse_movlps */
    case 684:  /* sse_movhps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 683:  /* sse_movlhps */
    case 682:  /* sse_movhlps */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 679:  /* mmx_maskmovq_rex */
    case 678:  /* mmx_maskmovq */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (pat, 1), 0, 1));
      break;

    case 713:  /* *sse_nandti3_sse2 */
    case 712:  /* sse_nandti3 */
    case 703:  /* vmsqrtv4sf2 */
    case 656:  /* *call_value_1_rex64 */
    case 655:  /* *call_value_1 */
    case 654:  /* *call_value_0_rex64 */
    case 653:  /* *call_value_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 652:  /* *call_value_pop_1 */
    case 651:  /* *call_value_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 650:  /* allocate_stack_worker_rex64 */
    case 649:  /* allocate_stack_worker_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XVECEXP (pat, 0, 0), 0, 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 648:  /* *sse_movdfcc_const0_4 */
    case 647:  /* *sse_movdfcc_const0_3 */
    case 646:  /* *sse_movdfcc_const0_2 */
    case 645:  /* *sse_movdfcc_const0_1 */
    case 644:  /* *sse_movsfcc_const0_4 */
    case 643:  /* *sse_movsfcc_const0_3 */
    case 642:  /* *sse_movsfcc_const0_2 */
    case 641:  /* *sse_movsfcc_const0_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 640:  /* sse_movdfcc_eq */
    case 638:  /* sse_movsfcc_eq */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 639:  /* sse_movdfcc */
    case 637:  /* sse_movsfcc */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 634:  /* *maxdf_sse */
    case 631:  /* *maxsf_sse */
    case 628:  /* *mindf_sse */
    case 625:  /* *minsf_sse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (pat, 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (pat, 1), 2);
      recog_data.dup_num[1] = 2;
      break;

    case 633:  /* *maxdf_nonieee */
    case 632:  /* *maxdf */
    case 630:  /* *maxsf_nonieee */
    case 629:  /* *maxsf */
    case 627:  /* *mindf_nonieee */
    case 626:  /* *mindf */
    case 624:  /* *minsf_nonieee */
    case 623:  /* *minsf */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2);
      recog_data.dup_num[1] = 2;
      break;

    case 622:  /* *movtfcc_1 */
    case 621:  /* *movxfcc_1 */
    case 620:  /* *movdfcc_1_rex64 */
    case 619:  /* *movdfcc_1 */
    case 618:  /* *movsfcc_1 */
    case 617:  /* *movhicc_noc */
    case 616:  /* *movsicc_noc */
    case 614:  /* *movdicc_c_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 2));
      break;

    case 612:  /* strlenqi_rex_1 */
    case 611:  /* strlenqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      ro[3] = *(ro_loc[3] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 2));
      ro[4] = *(ro_loc[4] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 3));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0));
      break;

    case 610:  /* cmpstrqi_rex_1 */
    case 609:  /* cmpstrqi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 608:  /* cmpstrqi_nz_rex_1 */
    case 607:  /* cmpstrqi_nz_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 5), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 6), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[6] = *(ro_loc[6] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 606:  /* rep_stosqi_rex64 */
    case 605:  /* rep_stosqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 604:  /* rep_stossi_rex64 */
    case 603:  /* rep_stossi */
    case 602:  /* rep_stosdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 4;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 0), 0);
      recog_data.dup_num[1] = 3;
      break;

    case 601:  /* strsetqi_rex_1 */
    case 600:  /* strsetqi_1 */
    case 599:  /* strsethi_rex_1 */
    case 598:  /* strsethi_1 */
    case 597:  /* strsetsi_rex_1 */
    case 596:  /* strsetsi_1 */
    case 595:  /* strsetdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 594:  /* rep_movqi_rex64 */
    case 593:  /* rep_movqi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1);
      recog_data.dup_num[3] = 5;
      break;

    case 592:  /* rep_movsi_rex64 */
    case 591:  /* rep_movsi */
    case 590:  /* rep_movdi_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 1));
      ro[5] = *(ro_loc[5] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 4), 0);
      recog_data.dup_num[0] = 5;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 0), 0);
      recog_data.dup_num[1] = 3;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 3), 1), 0);
      recog_data.dup_num[2] = 4;
      recog_data.dup_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0), 0);
      recog_data.dup_num[3] = 5;
      break;

    case 589:  /* strmovqi_rex_1 */
    case 588:  /* strmovqi_1 */
    case 587:  /* strmovhi_rex_1 */
    case 586:  /* strmovhi_1 */
    case 585:  /* strmovsi_rex_1 */
    case 584:  /* strmovsi_1 */
    case 583:  /* strmovdi_rex_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 2), 1), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 2;
      break;

    case 579:  /* *cosextendsfdf2 */
    case 574:  /* *sinextendsfdf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      break;

    case 827:  /* pfrsqrtv2sf2 */
    case 824:  /* pfrcpv2sf2 */
    case 700:  /* rsqrtv4sf2 */
    case 698:  /* rcpv4sf2 */
    case 681:  /* sse_movntdi */
    case 680:  /* sse_movntv4sf */
    case 677:  /* mmx_pmovmskb */
    case 676:  /* sse_movmskps */
    case 675:  /* sse_movups */
    case 674:  /* sse_movaps */
    case 581:  /* costf2 */
    case 580:  /* cosxf2 */
    case 578:  /* cossf2 */
    case 577:  /* cosdf2 */
    case 576:  /* sintf2 */
    case 575:  /* sinxf2 */
    case 573:  /* sinsf2 */
    case 572:  /* sindf2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 558:  /* *fop_tf_7 */
    case 557:  /* *fop_xf_7 */
    case 554:  /* *fop_tf_5 */
    case 553:  /* *fop_xf_5 */
    case 550:  /* *fop_tf_3 */
    case 549:  /* *fop_xf_3 */
    case 544:  /* *fop_df_5 */
    case 542:  /* *fop_df_3 */
    case 537:  /* *fop_sf_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 556:  /* *fop_tf_6 */
    case 555:  /* *fop_xf_6 */
    case 552:  /* *fop_tf_4 */
    case 551:  /* *fop_xf_4 */
    case 548:  /* *fop_tf_2 */
    case 547:  /* *fop_xf_2 */
    case 543:  /* *fop_df_4 */
    case 541:  /* *fop_df_2 */
    case 536:  /* *fop_sf_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 727:  /* maskcmpv4sf3 */
    case 546:  /* *fop_tf_1 */
    case 545:  /* *fop_xf_1 */
    case 540:  /* *fop_df_1_sse */
    case 539:  /* *fop_df_1 */
    case 538:  /* *fop_df_1_nosse */
    case 535:  /* *fop_sf_1_sse */
    case 534:  /* *fop_sf_1 */
    case 533:  /* *fop_sf_1_nosse */
    case 532:  /* *fop_tf_comm */
    case 531:  /* *fop_xf_comm */
    case 530:  /* *fop_df_comm_sse */
    case 529:  /* *fop_df_comm */
    case 528:  /* *fop_df_comm_nosse */
    case 527:  /* *fop_sf_comm_sse */
    case 526:  /* *fop_sf_comm */
    case 525:  /* *fop_sf_comm_nosse */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (pat, 1));
      break;

    case 524:  /* ffssi_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      recog_data.dup_loc[0] = &XVECEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0, 0);
      recog_data.dup_num[0] = 1;
      break;

    case 802:  /* ldmxcsr */
    case 521:  /* eh_return_di */
    case 520:  /* eh_return_si */
      ro[0] = *(ro_loc[0] = &XVECEXP (pat, 0, 0));
      break;

    case 519:  /* prologue_get_pc */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 518:  /* prologue_set_got */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 1), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 516:  /* return_indirect_internal */
    case 515:  /* return_pop_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 815:  /* femms */
    case 801:  /* emms */
    case 657:  /* trap */
    case 582:  /* cld */
    case 523:  /* leave_rex64 */
    case 522:  /* leave */
    case 517:  /* nop */
    case 514:  /* return_internal */
    case 513:  /* blockage */
      break;

    case 509:  /* *call_pop_1 */
    case 508:  /* *call_pop_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1));
      break;

    case 507:  /* doloop_end_internal */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 506:  /* *tablejump_1_rtx64 */
    case 505:  /* *tablejump_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 1));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      break;

    case 504:  /* *indirect_jump_rtx64 */
    case 503:  /* *indirect_jump */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 1));
      break;

    case 502:  /* jump */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 501:  /* *fp_jcc_6 */
    case 499:  /* *fp_jcc_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 500:  /* *fp_jcc_5 */
    case 498:  /* *fp_jcc_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 497:  /* *fp_jcc_2_sse_only */
    case 496:  /* *fp_jcc_2_sse */
    case 495:  /* *fp_jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 2), 0));
      break;

    case 494:  /* *fp_jcc_1_sse_only */
    case 493:  /* *fp_jcc_1_sse */
    case 492:  /* *fp_jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 491:  /* *jcc_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 2), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 490:  /* *jcc_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 489:  /* *sse_setccdf */
    case 488:  /* *sse_setccsf */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (pat, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 425:  /* x86_shrd_1 */
    case 407:  /* x86_shld_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 448:  /* lshrdi3_1 */
    case 423:  /* ashrdi3_1 */
    case 405:  /* ashldi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 398:  /* *one_cmplsi2_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 350:  /* *negsi2_cmpz_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 348:  /* *negsi2_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      break;

    case 402:  /* *one_cmplqi2_2 */
    case 400:  /* *one_cmplhi2_2 */
    case 397:  /* *one_cmplsi2_2 */
    case 394:  /* *one_cmpldi2_2_rex64 */
    case 354:  /* *negqi2_cmpz */
    case 352:  /* *neghi2_cmpz */
    case 349:  /* *negsi2_cmpz */
    case 346:  /* *negdi2_cmpz_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      break;

    case 457:  /* *lshrsi3_cmp_zext */
    case 455:  /* *lshrsi3_cmp_one_bit_zext */
    case 333:  /* *xorsi_2_zext_imm */
    case 315:  /* *iorsi_2_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 451:  /* *lshrsi3_1_one_bit_zext */
    case 330:  /* *xorsi_1_zext_imm */
    case 312:  /* *iorsi_1_zext_imm */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 343:  /* *xorqi_cc_ext_1_rex64 */
    case 342:  /* *xorqi_cc_ext_1 */
    case 303:  /* *andqi_ext_0_cc */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 323:  /* *iorqi_2_slp */
    case 301:  /* *andqi_2_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 0), 0);
      recog_data.dup_num[0] = 0;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 0;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 1;
      break;

    case 321:  /* *iorqi_1_slp */
    case 299:  /* *andqi_1_slp */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0);
      recog_data.dup_num[0] = 0;
      break;

    case 289:  /* *testqi_ext_3_rex64 */
    case 288:  /* *testqi_ext_3 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 2));
      break;

    case 287:  /* *testqi_ext_2 */
    case 286:  /* *testqi_ext_1_rex64 */
    case 285:  /* *testqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 1), 0));
      break;

    case 284:  /* *testqi_ext_0 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 278:  /* *udivmodsi4_noext */
    case 276:  /* *udivmoddi4_noext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 2), 0);
      recog_data.dup_num[0] = 3;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[1] = 1;
      recog_data.dup_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[2] = 2;
      break;

    case 277:  /* udivmodsi4 */
    case 275:  /* udivmoddi4 */
    case 274:  /* divmodhi4 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 279:  /* *udivmodhi_noext */
    case 273:  /* *divmodsi_noext */
    case 270:  /* *divmoddi_noext_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 2), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 272:  /* *divmodsi4_cltd */
    case 271:  /* *divmodsi4_nocltd */
    case 269:  /* *divmoddi4_cltd_rex64 */
    case 268:  /* *divmoddi4_nocltd_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 2;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 3;
      break;

    case 265:  /* *smulsi3_highpart_zext */
    case 262:  /* *umulsi3_highpart_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 264:  /* *smulsi3_highpart_insn */
    case 263:  /* *smuldi3_highpart_rex64 */
    case 261:  /* *umulsi3_highpart_insn */
    case 260:  /* *umuldi3_highpart_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 259:  /* *mulsidi3_insn */
    case 258:  /* *mulditi3_insn */
    case 257:  /* *umulsidi3_insn */
    case 256:  /* *umulditi3_insn */
    case 255:  /* *mulqihi3_insn */
    case 254:  /* *umulqihi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 242:  /* *subsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 236:  /* subsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1), 1));
      break;

    case 248:  /* *subqi_3 */
    case 245:  /* *subhi_3 */
    case 241:  /* *subsi_3 */
    case 234:  /* *subdi_3_rex63 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 235:  /* subsi3_carry */
    case 231:  /* subdi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 1));
      break;

    case 339:  /* *xorqi_ext_1 */
    case 306:  /* *andqi_ext_2 */
    case 305:  /* *andqi_ext_1_rex64 */
    case 304:  /* *andqi_ext_1 */
    case 229:  /* *addqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1), 0));
      break;

    case 302:  /* andqi_ext_0 */
    case 228:  /* *addqi_ext_1_rex64 */
    case 227:  /* addqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 212:  /* *addsi_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 435:  /* *ashrsi3_cmp_zext */
    case 433:  /* *ashrsi3_one_bit_cmp_zext */
    case 411:  /* *ashlsi3_cmp_zext */
    case 332:  /* *xorsi_2_zext */
    case 314:  /* *iorsi_2_zext */
    case 295:  /* *andsi_2_zext */
    case 240:  /* *subsi_2_zext */
    case 210:  /* *addsi_2_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 481:  /* *rotrsi3_1_zext */
    case 479:  /* *rotrsi3_1_one_bit_zext */
    case 471:  /* *rotlsi3_1_zext */
    case 469:  /* *rotlsi3_1_one_bit_zext */
    case 453:  /* *lshrsi3_1_zext */
    case 431:  /* *ashrsi3_1_zext */
    case 429:  /* *ashrsi3_1_one_bit_zext */
    case 427:  /* *ashrsi3_31_zext */
    case 409:  /* *ashlsi3_1_zext */
    case 329:  /* *xorsi_1_zext */
    case 311:  /* *iorsi_1_zext */
    case 293:  /* *andsi_1_zext */
    case 251:  /* *mulsi3_1_zext */
    case 238:  /* *subsi_1_zext */
    case 208:  /* addsi_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 341:  /* *xorqi_cc_2 */
    case 337:  /* *xorhi_3 */
    case 334:  /* *xorsi_3 */
    case 327:  /* *xordi_3_rex64 */
    case 324:  /* *iorqi_3 */
    case 319:  /* *iorhi_3 */
    case 316:  /* *iorsi_3 */
    case 309:  /* *iordi_3_rex64 */
    case 226:  /* *addqi_5 */
    case 220:  /* *addhi_5 */
    case 214:  /* *addsi_5 */
    case 206:  /* *adddi_5_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 225:  /* *addqi_4 */
    case 219:  /* *addhi_4 */
    case 213:  /* *addsi_4 */
    case 205:  /* *adddi_4_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 224:  /* *addqi_3 */
    case 218:  /* *addhi_3 */
    case 211:  /* *addsi_3 */
    case 204:  /* *adddi_3_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      break;

    case 465:  /* *lshrqi2_cmp */
    case 464:  /* *lshrqi2_one_bit_cmp */
    case 461:  /* *lshrhi3_cmp */
    case 460:  /* *lshrhi3_one_bit_cmp */
    case 456:  /* *lshrsi3_cmp */
    case 454:  /* *lshrsi3_one_bit_cmp */
    case 447:  /* *lshrdi3_cmp_rex64 */
    case 446:  /* *lshrdi3_cmp_one_bit_rex64 */
    case 443:  /* *ashrqi3_cmp */
    case 442:  /* *ashrqi3_one_bit_cmp */
    case 439:  /* *ashrhi3_cmp */
    case 438:  /* *ashrhi3_one_bit_cmp */
    case 434:  /* *ashrsi3_cmp */
    case 432:  /* *ashrsi3_one_bit_cmp */
    case 422:  /* *ashrdi3_cmp_rex64 */
    case 421:  /* *ashrdi3_one_bit_cmp_rex64 */
    case 417:  /* *ashlqi3_cmp */
    case 414:  /* *ashlhi3_cmp */
    case 410:  /* *ashlsi3_cmp */
    case 404:  /* *ashldi3_cmp_rex64 */
    case 340:  /* *xorqi_cc_1 */
    case 336:  /* *xorhi_2 */
    case 331:  /* *xorsi_2 */
    case 326:  /* *xordi_2_rex64 */
    case 322:  /* *iorqi_2 */
    case 318:  /* *iorhi_2 */
    case 313:  /* *iorsi_2 */
    case 308:  /* *iordi_2_rex64 */
    case 300:  /* *andqi_2 */
    case 297:  /* *andhi_2 */
    case 294:  /* *andsi_2 */
    case 291:  /* *anddi_2 */
    case 247:  /* *subqi_2 */
    case 244:  /* *subhi_2 */
    case 239:  /* *subsi_2 */
    case 233:  /* *subdi_2_rex64 */
    case 223:  /* *addqi_2 */
    case 217:  /* *addhi_2 */
    case 209:  /* *addsi_2 */
    case 203:  /* *adddi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 201:  /* *lea_general_3_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 200:  /* *lea_general_3 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[4] = *(ro_loc[4] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 199:  /* *lea_general_2_zext */
    case 197:  /* *lea_general_1_zext */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 198:  /* *lea_general_2 */
    case 196:  /* *lea_general_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      ro[3] = *(ro_loc[3] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 189:  /* *addsi3_carry_zext */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      break;

    case 191:  /* addqi3_cc */
    case 190:  /* *addsi3_cc */
    case 187:  /* *adddi3_cc_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[1] = *(ro_loc[1] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 0));
      ro[2] = *(ro_loc[2] = &XVECEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0, 1));
      recog_data.dup_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 1), 1), 1);
      recog_data.dup_num[1] = 2;
      break;

    case 188:  /* *addsi3_carry */
    case 186:  /* *adddi3_carry_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0), 1));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 636:  /* pro_epilogue_adjust_stack_rex64 */
    case 635:  /* *pro_epilogue_adjust_stack_1 */
    case 485:  /* *rotrqi3_1 */
    case 484:  /* *rotrqi3_1_one_bit */
    case 483:  /* *rotrhi3 */
    case 482:  /* *rotrhi3_one_bit */
    case 480:  /* *rotrsi3_1 */
    case 478:  /* *rotrsi3_1_one_bit */
    case 477:  /* *rotrdi3_1_rex64 */
    case 476:  /* *rotrdi3_1_one_bit_rex64 */
    case 475:  /* *rotlqi3_1 */
    case 474:  /* *rotlqi3_1_one_bit */
    case 473:  /* *rotlhi3_1 */
    case 472:  /* *rotlhi3_1_one_bit */
    case 470:  /* *rotlsi3_1 */
    case 468:  /* *rotlsi3_1_one_bit */
    case 467:  /* *rotldi3_1_rex64 */
    case 466:  /* *rotlsi3_1_one_bit_rex64 */
    case 463:  /* *lshrqi3_1 */
    case 462:  /* *lshrqi3_1_one_bit */
    case 459:  /* *lshrhi3_1 */
    case 458:  /* *lshrhi3_1_one_bit */
    case 452:  /* *lshrsi3_1 */
    case 450:  /* *lshrsi3_1_one_bit */
    case 449:  /* *lshrdi3_2 */
    case 445:  /* *lshrdi3_1_rex64 */
    case 444:  /* *lshrdi3_1_one_bit_rex64 */
    case 441:  /* *ashrqi3_1 */
    case 440:  /* *ashrqi3_1_one_bit */
    case 437:  /* *ashrhi3_1 */
    case 436:  /* *ashrhi3_1_one_bit */
    case 430:  /* *ashrsi3_1 */
    case 428:  /* *ashrsi3_1_one_bit */
    case 426:  /* ashrsi3_31 */
    case 424:  /* *ashrdi3_2 */
    case 420:  /* *ashrdi3_1_rex64 */
    case 419:  /* *ashrdi3_1_one_bit_rex64 */
    case 418:  /* ashrdi3_63_rex64 */
    case 416:  /* *ashlqi3_1 */
    case 415:  /* *ashlqi3_1_lea */
    case 413:  /* *ashlhi3_1 */
    case 412:  /* *ashlhi3_1_lea */
    case 408:  /* *ashlsi3_1 */
    case 406:  /* *ashldi3_2 */
    case 403:  /* *ashldi3_1_rex64 */
    case 338:  /* *xorqi_1 */
    case 335:  /* *xorhi_1 */
    case 328:  /* *xorsi_1 */
    case 325:  /* *xordi_1_rex64 */
    case 320:  /* *iorqi_1 */
    case 317:  /* *iorhi_1 */
    case 310:  /* *iorsi_1 */
    case 307:  /* *iordi_1_rex64 */
    case 298:  /* *andqi_1 */
    case 296:  /* *andhi_1 */
    case 292:  /* *andsi_1 */
    case 290:  /* *anddi_1_rex64 */
    case 267:  /* udivqi3 */
    case 266:  /* divqi3 */
    case 253:  /* *mulqi3_1 */
    case 252:  /* *mulhi3_1 */
    case 250:  /* *mulsi3_1 */
    case 249:  /* *muldi3_1_rex64 */
    case 246:  /* *subqi_1 */
    case 243:  /* *subhi_1 */
    case 237:  /* *subsi_1 */
    case 232:  /* *subdi_1_rex64 */
    case 230:  /* *subdi3_1 */
    case 222:  /* *addqi_1 */
    case 221:  /* *addqi_1_lea */
    case 216:  /* *addhi_1 */
    case 215:  /* *addhi_1_lea */
    case 207:  /* *addsi_1 */
    case 202:  /* *adddi_1_rex64 */
    case 185:  /* *adddi3_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 1));
      break;

    case 164:  /* fix_trunchi_memory */
    case 159:  /* fix_truncsi_memory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 163:  /* fix_trunchi_nomemory */
    case 158:  /* fix_truncsi_nomemory */
    case 154:  /* fix_truncdi_memory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      break;

    case 153:  /* fix_truncdi_nomemory */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      ro[3] = *(ro_loc[3] = &XEXP (XVECEXP (pat, 0, 2), 0));
      ro[4] = *(ro_loc[4] = &XEXP (XVECEXP (pat, 0, 3), 0));
      ro[5] = *(ro_loc[5] = &XEXP (XVECEXP (pat, 0, 4), 0));
      break;

    case 379:  /* *absdf2_ifs_rex64 */
    case 378:  /* absdf2_ifs */
    case 375:  /* abssf2_ifs */
    case 360:  /* *negdf2_ifs_rex64 */
    case 359:  /* negdf2_ifs */
    case 356:  /* negsf2_ifs */
    case 150:  /* *trunctfdf2_1 */
    case 148:  /* *truncxfdf2_1 */
    case 146:  /* *trunctfsf2_1 */
    case 144:  /* *truncxfsf2_1 */
    case 140:  /* *truncdfsf2_1_sse */
    case 139:  /* *truncdfsf2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 1), 0));
      break;

    case 119:  /* *extendsidi2_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (pat, 0, 2), 0));
      break;

    case 383:  /* *abstf2_if */
    case 382:  /* *absxf2_if */
    case 381:  /* *absdf2_if_rex64 */
    case 380:  /* *absdf2_if */
    case 377:  /* absdf2_memory */
    case 376:  /* *abssf2_if */
    case 374:  /* abssf2_memory */
    case 364:  /* *negtf2_if */
    case 363:  /* *negxf2_if */
    case 362:  /* *negdf2_if_rex64 */
    case 361:  /* *negdf2_if */
    case 358:  /* negdf2_memory */
    case 357:  /* *negsf2_if */
    case 355:  /* negsf2_memory */
    case 353:  /* *negqi2_1 */
    case 351:  /* *neghi2_1 */
    case 347:  /* *negsi2_1 */
    case 345:  /* *negdi2_1_rex64 */
    case 344:  /* *negdi2_1 */
    case 115:  /* zero_extendsidi2_32 */
    case 113:  /* *zero_extendqisi2_movzbw_and */
    case 112:  /* *zero_extendqisi2_and */
    case 110:  /* *zero_extendqihi2_movzbw_and */
    case 109:  /* *zero_extendqihi2_and */
    case 107:  /* zero_extendhisi2_and */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 1), 0));
      break;

    case 75:  /* *movqi_insv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 743:  /* cvtss2si */
    case 740:  /* cvtps2pi */
    case 571:  /* *sqrtextendsftf2 */
    case 570:  /* *sqrtextendsfxf2 */
    case 569:  /* *sqrtextenddftf2 */
    case 568:  /* *sqrtextenddfxf2 */
    case 565:  /* *sqrtextendsfdf2 */
    case 396:  /* *one_cmplsi2_1_zext */
    case 392:  /* *absextendsftf2 */
    case 391:  /* *absextenddftf2 */
    case 389:  /* *absextendsfxf2 */
    case 388:  /* *absextenddfxf2 */
    case 386:  /* *absextendsfdf2 */
    case 373:  /* *negextendsftf2 */
    case 372:  /* *negextenddftf2 */
    case 370:  /* *negextendsfxf2 */
    case 369:  /* *negextenddfxf2 */
    case 367:  /* *negextendsfdf2 */
    case 194:  /* *lea_1_zext */
    case 127:  /* *extendqisi2_zext */
    case 124:  /* *extendhisi2_zext */
    case 72:  /* *movqi_extzv_2_rex64 */
    case 71:  /* *movqi_extzv_2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      break;

    case 63:  /* *movstrictqi_xor */
    case 57:  /* *movstricthi_xor */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XVECEXP (pat, 0, 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 106:  /* swaptf */
    case 105:  /* swapxf */
    case 96:  /* *swapdf */
    case 91:  /* *swapsf */
    case 87:  /* *swapdi_rex64 */
    case 61:  /* *swapqi */
    case 55:  /* *swaphi_2 */
    case 54:  /* *swaphi_1 */
    case 48:  /* *swapsi */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      recog_data.dup_loc[0] = &XEXP (XVECEXP (pat, 0, 1), 0);
      recog_data.dup_num[0] = 1;
      recog_data.dup_loc[1] = &XEXP (XVECEXP (pat, 0, 1), 1);
      recog_data.dup_num[1] = 0;
      break;

    case 831:  /* pswapdv2sf2 */
    case 830:  /* pswapdv2si2 */
    case 822:  /* floatv2si2 */
    case 816:  /* pf2id */
    case 702:  /* sqrtv4sf2 */
    case 688:  /* sse_storess */
    case 686:  /* sse_loadss */
    case 567:  /* sqrttf2 */
    case 566:  /* sqrtxf2 */
    case 564:  /* sqrtdf2_i387 */
    case 563:  /* sqrtdf2_1_sse_only */
    case 562:  /* sqrtdf2_1 */
    case 561:  /* sqrtsf2_i387 */
    case 560:  /* sqrtsf2_1_sse_only */
    case 559:  /* sqrtsf2_1 */
    case 401:  /* *one_cmplqi2_1 */
    case 399:  /* *one_cmplhi2_1 */
    case 395:  /* *one_cmplsi2_1 */
    case 393:  /* *one_cmpldi2_1_rex64 */
    case 390:  /* *abstf2_1 */
    case 387:  /* *absxf2_1 */
    case 385:  /* *absdf2_1 */
    case 384:  /* *abssf2_1 */
    case 371:  /* *negtf2_1 */
    case 368:  /* *negxf2_1 */
    case 366:  /* *negdf2_1 */
    case 365:  /* *negsf2_1 */
    case 193:  /* *lea_1_rex64 */
    case 184:  /* floatditf2 */
    case 183:  /* floatdixf2 */
    case 182:  /* floatsitf2 */
    case 181:  /* floatsixf2 */
    case 180:  /* floathitf2 */
    case 179:  /* floathixf2 */
    case 178:  /* *floatdidf2_sse */
    case 177:  /* *floatdidf2_i387 */
    case 176:  /* *floatdidf2_i387_only */
    case 175:  /* *floatsidf2_sse */
    case 174:  /* *floatsidf2_i387 */
    case 173:  /* floathidf2 */
    case 172:  /* *floatdisf2_sse */
    case 171:  /* *floatdisf2_i387 */
    case 170:  /* *floatdisf2_i387_only */
    case 169:  /* *floatsisf2_sse */
    case 168:  /* *floatsisf2_i387 */
    case 167:  /* floathisf2 */
    case 162:  /* *fix_trunchi_1 */
    case 161:  /* fix_truncdfsi_sse */
    case 160:  /* fix_truncsfsi_sse */
    case 157:  /* *fix_truncsi_1 */
    case 156:  /* fix_truncdfdi_sse */
    case 155:  /* fix_truncsfdi_sse */
    case 152:  /* *fix_truncdi_1 */
    case 151:  /* *trunctfdf2_2 */
    case 149:  /* *truncxfdf2_2 */
    case 147:  /* *trunctfsf2_2 */
    case 145:  /* *truncxfsf2_2 */
    case 143:  /* truncdfsf2_sse_only */
    case 142:  /* truncdfsf2_3 */
    case 141:  /* *truncdfsf2_2 */
    case 138:  /* *extenddftf2_1 */
    case 137:  /* *extenddfxf2_1 */
    case 136:  /* *extendsftf2_1 */
    case 135:  /* *extendsfxf2_1 */
    case 134:  /* *extendsfdf2_1_sse_only */
    case 133:  /* *extendsfdf2_1 */
    case 132:  /* *dummy_extenddftf2 */
    case 131:  /* *dummy_extenddfxf2 */
    case 130:  /* *dummy_extendsftf2 */
    case 129:  /* *dummy_extendsfxf2 */
    case 128:  /* *dummy_extendsfdf2 */
    case 126:  /* extendqisi2 */
    case 125:  /* extendqihi2 */
    case 123:  /* extendhisi2 */
    case 122:  /* extendqidi2 */
    case 121:  /* extendhidi2 */
    case 120:  /* extendsidi2_rex64 */
    case 118:  /* zero_extendqidi2 */
    case 117:  /* zero_extendhidi2 */
    case 116:  /* zero_extendsidi2_rex64 */
    case 114:  /* *zero_extendqisi2_movzbw */
    case 111:  /* *zero_extendqihi2_movzbw */
    case 108:  /* *zero_extendhisi2_movzwl */
    case 86:  /* *movabsdi_2_rex64 */
    case 70:  /* *movsi_extzv_1 */
    case 69:  /* *movabsqi_2_rex64 */
    case 67:  /* *movqi_extv_1_rex64 */
    case 66:  /* *movqi_extv_1 */
    case 65:  /* *movhi_extv_1 */
    case 64:  /* *movsi_extv_1 */
    case 53:  /* *movabshi_2_rex64 */
    case 47:  /* *movabssi_2_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 0));
      break;

    case 512:  /* *call_1_rex64 */
    case 511:  /* *call_1 */
    case 510:  /* *call_0 */
    case 487:  /* setcc_2 */
    case 85:  /* *movabsdi_1_rex64 */
    case 74:  /* *movsi_insv_1_rex64 */
    case 73:  /* movsi_insv_1 */
    case 68:  /* *movabsqi_1_rex64 */
    case 62:  /* *movstrictqi_1 */
    case 56:  /* *movstricthi_1 */
    case 52:  /* *movabshi_1_rex64 */
    case 46:  /* *movabssi_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 615:  /* x86_movsicc_0_m1 */
    case 613:  /* x86_movdicc_0_m1_rex64 */
    case 80:  /* popdi1 */
    case 79:  /* *popdi1_epilogue_rex64 */
    case 42:  /* popsi1 */
    case 41:  /* *popsi1_epilogue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      break;

    case 82:  /* *movdi_or_rex64 */
    case 81:  /* *movdi_xor_rex64 */
    case 78:  /* *pushdi2_prologue_rex64 */
    case 44:  /* *movsi_or */
    case 43:  /* *movsi_xor */
    case 40:  /* *pushsi2_prologue */
      ro[0] = *(ro_loc[0] = &XEXP (XVECEXP (pat, 0, 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (pat, 0, 0), 1));
      break;

    case 833:  /* *prefetch_3dnow */
    case 673:  /* *movti_rex64 */
    case 672:  /* movti_internal */
    case 671:  /* *pushv2sf */
    case 670:  /* *pushv8qi */
    case 669:  /* *pushv4hi */
    case 668:  /* *pushv2si */
    case 667:  /* *pushv4si */
    case 666:  /* *pushv4sf */
    case 665:  /* *pushti */
    case 664:  /* movv2sf_internal */
    case 663:  /* movv2si_internal */
    case 662:  /* movv4hi_internal */
    case 661:  /* movv8qi_internal */
    case 660:  /* movv4si_internal */
    case 659:  /* movv4sf_internal */
    case 658:  /* *conditional_trap_1 */
    case 486:  /* *setcc_1 */
    case 195:  /* *lea_2_rex64 */
    case 192:  /* *lea_1 */
    case 104:  /* *movtf_integer */
    case 103:  /* *movxf_integer */
    case 102:  /* *movtf_nointeger */
    case 101:  /* *movxf_nointeger */
    case 100:  /* *pushtf_integer */
    case 99:  /* *pushxf_integer */
    case 98:  /* *pushtf_nointeger */
    case 97:  /* *pushxf_nointeger */
    case 95:  /* *movdf_integer */
    case 94:  /* *movdf_nointeger */
    case 93:  /* *pushdf_integer */
    case 92:  /* *pushdf_nointeger */
    case 90:  /* *movsf_1 */
    case 89:  /* *pushsf_rex64 */
    case 88:  /* *pushsf */
    case 84:  /* *movdi_1_rex64 */
    case 83:  /* *movdi_2 */
    case 77:  /* pushdi2_rex64 */
    case 76:  /* *pushdi */
    case 60:  /* *movqi_1 */
    case 59:  /* *pushqi2_rex64 */
    case 58:  /* *pushqi2 */
    case 51:  /* *movhi_1 */
    case 50:  /* *pushhi2_rex64 */
    case 49:  /* *pushhi2 */
    case 45:  /* *movsi_1 */
    case 39:  /* *pushsi2_rex64 */
    case 38:  /* *pushsi2 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (pat, 1));
      break;

    case 166:  /* x86_fldcw_1 */
    case 31:  /* x86_sahf_1 */
      ro[0] = *(ro_loc[0] = &XVECEXP (XEXP (pat, 1), 0, 0));
      break;

    case 803:  /* stmxcsr */
    case 765:  /* mmx_clrdi */
    case 726:  /* sse_clrv4sf */
    case 165:  /* x86_fnstcw_1 */
    case 30:  /* x86_fnstsw_1 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      break;

    case 29:  /* *ficom_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 1), 0));
      break;

    case 791:  /* mmx_ashldi3 */
    case 788:  /* mmx_lshrdi3 */
    case 766:  /* mmx_anddi3 */
    case 764:  /* mmx_xordi3 */
    case 763:  /* mmx_iordi3 */
    case 28:  /* *cmpfp_2u_1 */
    case 26:  /* *cmpfp_2_tf_1 */
    case 25:  /* *cmpfp_2_xf_1 */
    case 22:  /* *cmpfp_2_df_1 */
    case 20:  /* *cmpfp_2_sf_1 */
    case 18:  /* *cmpfp_0 */
      ro[0] = *(ro_loc[0] = &XEXP (pat, 0));
      ro[1] = *(ro_loc[1] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 0));
      ro[2] = *(ro_loc[2] = &XEXP (XVECEXP (XEXP (pat, 1), 0, 0), 1));
      break;

    case 17:  /* *cmpqi_ext_4 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 16:  /* cmpqi_ext_3_insn_rex64 */
    case 15:  /* cmpqi_ext_3_insn */
    case 14:  /* *cmpqi_ext_2 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 0), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    case 13:  /* *cmpqi_ext_1_rex64 */
    case 12:  /* *cmpqi_ext_1 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (XEXP (pat, 1), 1), 0), 0));
      break;

    case 283:  /* *testqi_1 */
    case 282:  /* *testhi_1 */
    case 281:  /* testsi_1 */
    case 280:  /* *testdi_1_rex64 */
    case 11:  /* *cmpqi_minus_1 */
    case 7:  /* *cmphi_minus_1 */
    case 4:  /* *cmpsi_minus_1 */
    case 1:  /* *cmpdi_minus_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (XEXP (pat, 1), 0), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (XEXP (pat, 1), 0), 1));
      break;

    case 37:  /* *cmpfp_iu_sse_only */
    case 36:  /* *cmpfp_iu_sse */
    case 35:  /* *cmpfp_iu */
    case 34:  /* *cmpfp_i_sse_only */
    case 33:  /* *cmpfp_i_sse */
    case 32:  /* *cmpfp_i */
    case 27:  /* *cmpfp_2u */
    case 24:  /* *cmpfp_2_tf */
    case 23:  /* *cmpfp_2_xf */
    case 21:  /* *cmpfp_2_df */
    case 19:  /* *cmpfp_2_sf */
    case 10:  /* *cmpqi_1 */
    case 9:  /* *cmpqi_ccno_1 */
    case 8:  /* *cmphi_1 */
    case 6:  /* *cmphi_ccno_1 */
    case 5:  /* *cmpsi_1_insn */
    case 3:  /* *cmpsi_ccno_1 */
    case 2:  /* cmpdi_1_insn_rex64 */
    case 0:  /* cmpdi_ccno_1_rex64 */
      ro[0] = *(ro_loc[0] = &XEXP (XEXP (pat, 1), 0));
      ro[1] = *(ro_loc[1] = &XEXP (XEXP (pat, 1), 1));
      break;

    default:
      abort ();
    }
}
