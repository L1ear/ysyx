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
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/ID_stage.v:105:30
    extern void ebreak();
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/regfile.v:20:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/IF_stage.v:16:30
    extern void vmemread(long long raddr, int len, long long* rdata, long long pc);
    // DPI import at /home/qw/ysyx-workbench/npc/vsrc_pip/L_S_stage.v:56:30
    extern void vmemwrite(long long raddr, long long wdata, long long pc);

#ifdef __cplusplus
}
#endif
