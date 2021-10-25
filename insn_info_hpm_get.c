// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int insnInfoCntGet(){
  size_t instret, cycles;

  instret = read_csr(instret);
  cycles = read_csr(cycle);

  printf("instret:%d\n", (int)(instret));
  printf("cycle:%d\n", (int)(cycles));

  SHOW_PERFCNT("int_load:%d\n", 3)
  SHOW_PERFCNT("int_store:%d\n", 4)
  SHOW_PERFCNT("int_amo:%d\n", 5)
  SHOW_PERFCNT("int_system:%d\n", 6)
  SHOW_PERFCNT("int_arith:%d\n", 7)
  SHOW_PERFCNT("int_br:%d\n", 8)
  SHOW_PERFCNT("int_jal:%d\n", 9)
  SHOW_PERFCNT("int_jalr:%d\n", 10)
  SHOW_PERFCNT("int_mul:%d\n", 11)
  SHOW_PERFCNT("int_div:%d\n", 12)
  SHOW_PERFCNT("fp:%d\n", 13);
  SHOW_PERFCNT("fp_load:%d\n", 14);
  SHOW_PERFCNT("fp_store:%d\n", 15);
  SHOW_PERFCNT("fp_add:%d\n", 16);
  SHOW_PERFCNT("fp_mul:%d\n", 17);
  SHOW_PERFCNT("fp_madd:%d\n", 18);
  SHOW_PERFCNT("fp_div:%d\n", 19);
  SHOW_PERFCNT("fp_other:%d\n", 20);

  SHOW_PERFCNT("exception:%d\n", 21);
  SHOW_PERFCNT("f1_clear:%d\n", 22);
  SHOW_PERFCNT("f2_clear:%d\n", 23);

  SHOW_PERFCNT("br_retire:%d\n", 24)
  SHOW_PERFCNT("br_taken:%d\n", 25)
  SHOW_PERFCNT("br_ntaken:%d\n", 26)

  SHOW_PERFCNT("br_misp_target:%d\n", 27);
  SHOW_PERFCNT("br_misp_dir:%d\n", 28);
  SHOW_PERFCNT("taken_cond_misp:%d\n", 29);
  SHOW_PERFCNT("ntaken_cond_misp:%d\n", 30);
  SHOW_PERFCNT("flush:%d\n", 31);

  return 0;
}



