// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vblink_tb.h for the primary calling header

#ifndef VERILATED_VBLINK_TB___024ROOT_H_
#define VERILATED_VBLINK_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vblink_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vblink_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ blink_tb__DOT__clk;
    CData/*0:0*/ __VdlyVal__blink_tb__DOT__clk__v0;
    CData/*0:0*/ __VdlySet__blink_tb__DOT__clk__v0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vblink_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vblink_tb___024root(Vblink_tb__Syms* symsp, const char* v__name);
    ~Vblink_tb___024root();
    VL_UNCOPYABLE(Vblink_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
