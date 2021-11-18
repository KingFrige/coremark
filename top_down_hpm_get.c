// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int topDownCntGet(){
  size_t instret, cycles;

  instret = read_csr(minstret);
  cycles = read_csr(mcycle);

  printf("instret:%d\n", (int)(instret));
  printf("cycles:%d\n", (int)(cycles));

  SHOW_PERFCNT("slotsIssed:%d\n", 3);
  SHOW_PERFCNT("fetchBubbles:%d\n", 4);
  SHOW_PERFCNT("branchRetired:%d\n", 5);

  SHOW_PERFCNT("badResteers:%d\n", 6);
  SHOW_PERFCNT("recoveryCycles:%d\n", 7);
  SHOW_PERFCNT("unknowBanchCycles:%d\n", 8);
  SHOW_PERFCNT("brMispredRetired:%d\n", 9);
  SHOW_PERFCNT("machineClears:%d\n", 10);
  SHOW_PERFCNT("iCacheStallCycles:%d\n", 11);
  SHOW_PERFCNT("iTLBStallCycles:%d\n", 12);
  SHOW_PERFCNT("memStallsAnyLoad:%d\n", 13);
  SHOW_PERFCNT("memStallsStores:%d\n", 14);

  SHOW_PERFCNT("exeport0Utilization:%d\n", 15);
  SHOW_PERFCNT("exeport1Utilization:%d\n", 16);
  SHOW_PERFCNT("exeport2Utilization:%d\n", 17);
  SHOW_PERFCNT("exeport3Utilization:%d\n", 18);
  SHOW_PERFCNT("exeport4Utilization:%d\n", 19);
  SHOW_PERFCNT("noOpsExecutedCycles:%d\n", 20);
  SHOW_PERFCNT("fewOpsExecutedCycles:%d\n", 21);
  SHOW_PERFCNT("arithDivider_active:%d\n", 22);

  SHOW_PERFCNT("robStallCycles:%d\n", 29);
  SHOW_PERFCNT("memStallsL1Miss:%d\n", 30);
  SHOW_PERFCNT("fpRetired:%d\n", 31);

  printf("memLatency:%d\n", 0);
  printf("memStallsL2Miss:%d\n", 0);
  printf("memStallsL3Miss:%d\n", 0);

  return 0;
}

