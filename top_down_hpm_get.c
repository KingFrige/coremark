// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int topDownCntGet(){
  long instret, cycles, time;

  instret = read_csr(instret);
  cycles  = read_csr(cycle);
  time    = read_csr(time);

  printf("instret:%ld\n", instret);
  printf("cycles:%ld\n",  cycles);
  printf("time:%ld\n",    time);

  SHOW_PERFCNT("slotsIssed:%ld\n", 3);
  SHOW_PERFCNT("fetchBubbles:%ld\n", 4);
  SHOW_PERFCNT("branchRetired:%ld\n", 5);

  SHOW_PERFCNT("badResteers:%ld\n", 6);
  SHOW_PERFCNT("recoveryCycles:%ld\n", 7);
  SHOW_PERFCNT("unknowBanchCycles:%ld\n", 8);
  SHOW_PERFCNT("brMispredRetired:%ld\n", 9);
  SHOW_PERFCNT("machineClears:%ld\n", 10);
  SHOW_PERFCNT("iCacheStallCycles:%ld\n", 11);
  SHOW_PERFCNT("iTLBStallCycles:%ld\n", 12);
  SHOW_PERFCNT("memStallsAnyLoad:%ld\n", 13);
  SHOW_PERFCNT("memStallsStores:%ld\n", 14);

  SHOW_PERFCNT("exeport0Utilization:%ld\n", 15);
  SHOW_PERFCNT("exeport1Utilization:%ld\n", 16);
  SHOW_PERFCNT("exeport2Utilization:%ld\n", 17);
  SHOW_PERFCNT("exeport3Utilization:%ld\n", 18);
  SHOW_PERFCNT("exeport4Utilization:%ld\n", 19);
  SHOW_PERFCNT("noOpsExecutedCycles:%ld\n", 20);
  SHOW_PERFCNT("fewOpsExecutedCycles:%ld\n", 21);
  SHOW_PERFCNT("arithDivider_active:%ld\n", 22);

  SHOW_PERFCNT("robStallCycles:%ld\n", 29);
  SHOW_PERFCNT("memStallsL1Miss:%ld\n", 30);
  SHOW_PERFCNT("fpRetired:%ld\n", 31);

  printf("memLatency:%ld\n", 0);
  printf("memStallsL2Miss:%ld\n", 0);
  printf("memStallsL3Miss:%ld\n", 0);

  return 0;
}

