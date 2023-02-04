// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/AXI_M/axi_slave_ram.v:2:30
    extern void axiSlaveRead(long long raddr, char size, long long* rdata);
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/AXI_M/axi_slave_ram.v:3:30
    extern void axiSlaveWrite(long long waddr, char size, long long wdata, char wmask);
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/ID/regfile.v:22:30
    extern void ebreak();
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/ID/regfile.v:23:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif
