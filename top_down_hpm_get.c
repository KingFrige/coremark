// See LICENSE for license details.

#include "coremark.h"

#include "hpm.h"
#include "encoding.h"

int topDownCntGet(){
  size_t instret, cycles;
  instret = read_csr(instret);
  cycles = read_csr(cycle);

  printf("instret:%d\n", (int)(instret));
  printf("cycle:%d\n", (int)(cycles));

  SHOW_PERFCNT("slotsIssed:%d\n", 3);
  SHOW_PERFCNT("fetchBubbles:%d\n", 4);
  SHOW_PERFCNT("branchRetired:%d\n", 5);

  SHOW_PERFCNT("recoveryCycles:%d\n", 6);
  SHOW_PERFCNT("fetchNoDeliveredCycles:%d\n", 7);
  SHOW_PERFCNT("brMispredRetired:%d\n", 8);
  SHOW_PERFCNT("machineClears:%d\n", 9);
  SHOW_PERFCNT("noneOpsExecutedCycles:%d\n", 10);
  SHOW_PERFCNT("opsExecutedCycles:%d\n", 11);
  SHOW_PERFCNT("memStallsAnyLoad:%d\n", 12);
  SHOW_PERFCNT("memStallsStores:%d\n", 13);

  SHOW_PERFCNT("exeport0Utilization:%d\n", 14);
  SHOW_PERFCNT("exeport1Utilization:%d\n", 15);
  SHOW_PERFCNT("exeport2Utilization:%d\n", 16);
  SHOW_PERFCNT("exeport3Utilization:%d\n", 17);
  SHOW_PERFCNT("exeport4Utilization:%d\n", 18);
  SHOW_PERFCNT("opsExeGt0:%d\n", 19);
  SHOW_PERFCNT("opsExeGt1:%d\n", 20);
  SHOW_PERFCNT("opsExeGt2:%d\n", 21);
  SHOW_PERFCNT("opsExeGt3:%d\n", 22);
  SHOW_PERFCNT("opsExeGt4:%d\n", 23);
  SHOW_PERFCNT("arithDivider_active:%d\n", 24);

  SHOW_PERFCNT("memStallsL1Miss:%d\n", 25);
  SHOW_PERFCNT("memStallsL2Miss:%d\n", 26);
  SHOW_PERFCNT("memStallsL3Miss:%d\n", 27);
  SHOW_PERFCNT("memLatency:%d\n", 28);

  return 0;
}

