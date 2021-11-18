// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int insnInfoCntGet(){
  size_t instret, cycles;

  instret = read_csr(minstret);
  cycles = read_csr(mcycle);

  printf("instret:%d\n", (int)(instret));
  printf("cycles:%d\n", (int)(cycles));

  SHOW_PERFCNT("intLoad:%d\n", 3)
  SHOW_PERFCNT("intStore:%d\n", 4)
  SHOW_PERFCNT("intAmo:%d\n", 5)
  SHOW_PERFCNT("intSystem:%d\n", 6)
  SHOW_PERFCNT("intArith:%d\n", 7)
  SHOW_PERFCNT("intBr:%d\n", 8)
  SHOW_PERFCNT("intJal:%d\n", 9)
  SHOW_PERFCNT("intJalr:%d\n", 10)
  SHOW_PERFCNT("intMul:%d\n", 11)
  SHOW_PERFCNT("intDiv:%d\n", 12)
  SHOW_PERFCNT("fp:%d\n", 13);
  SHOW_PERFCNT("fpLoad:%d\n", 14);
  SHOW_PERFCNT("fpStore:%d\n", 15);
  SHOW_PERFCNT("fpAdd:%d\n", 16);
  SHOW_PERFCNT("fpMul:%d\n", 17);
  SHOW_PERFCNT("fpMadd:%d\n", 18);
  SHOW_PERFCNT("fpDiv:%d\n", 19);
  SHOW_PERFCNT("fpOther:%d\n", 20);

  SHOW_PERFCNT("exception:%d\n", 21);
  SHOW_PERFCNT("f1Clear:%d\n", 22);
  SHOW_PERFCNT("f2Clear:%d\n", 23);

  SHOW_PERFCNT("brRetire:%d\n", 24)
  SHOW_PERFCNT("brTaken:%d\n", 25)
  SHOW_PERFCNT("brNotaken:%d\n", 26)

  SHOW_PERFCNT("brMispTarget:%d\n", 27);
  SHOW_PERFCNT("brMispDir:%d\n", 28);
  SHOW_PERFCNT("takenCondMisp:%d\n", 29);
  SHOW_PERFCNT("notakenCondMisp:%d\n", 30);
  SHOW_PERFCNT("flush:%d\n", 31);

  return 0;
}

