// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int insnInfoCntGet(){
  long instret, cycles, time;

  instret = read_csr(instret);
  cycles  = read_csr(cycle);
  time    = read_csr(time);

  printf("instret:%ld\n", instret);
  printf("cycles:%ld\n",  cycles);
  printf("time:%ld\n",    time);

  SHOW_PERFCNT("intLoad:%ld\n", 3)
  SHOW_PERFCNT("intStore:%ld\n", 4)
  SHOW_PERFCNT("intAmo:%ld\n", 5)
  SHOW_PERFCNT("intSystem:%ld\n", 6)
  SHOW_PERFCNT("intArith:%ld\n", 7)
  SHOW_PERFCNT("intBr:%ld\n", 8)
  SHOW_PERFCNT("intJal:%ld\n", 9)
  SHOW_PERFCNT("intJalr:%ld\n", 10)
  SHOW_PERFCNT("intMul:%ld\n", 11)
  SHOW_PERFCNT("intDiv:%ld\n", 12)
  SHOW_PERFCNT("fp:%ld\n", 13);
  SHOW_PERFCNT("fpLoad:%ld\n", 14);
  SHOW_PERFCNT("fpStore:%ld\n", 15);
  SHOW_PERFCNT("fpAdd:%ld\n", 16);
  SHOW_PERFCNT("fpMul:%ld\n", 17);
  SHOW_PERFCNT("fpMadd:%ld\n", 18);
  SHOW_PERFCNT("fpDiv:%ld\n", 19);
  SHOW_PERFCNT("fpOther:%ld\n", 20);

  SHOW_PERFCNT("exception:%ld\n", 21);
  SHOW_PERFCNT("f1Clear:%ld\n", 22);
  SHOW_PERFCNT("f2Clear:%ld\n", 23);

  SHOW_PERFCNT("brRetire:%ld\n", 24)
  SHOW_PERFCNT("brTaken:%ld\n", 25)
  SHOW_PERFCNT("brNotaken:%ld\n", 26)

  SHOW_PERFCNT("brMispTarget:%ld\n", 27);
  SHOW_PERFCNT("brMispDir:%ld\n", 28);
  SHOW_PERFCNT("takenCondMisp:%ld\n", 29);
  SHOW_PERFCNT("notakenCondMisp:%ld\n", 30);
  SHOW_PERFCNT("flush:%ld\n", 31);

  return 0;
}

