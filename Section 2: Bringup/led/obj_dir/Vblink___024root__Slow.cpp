// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vblink.h for the primary calling header

#include "Vblink__pch.h"
#include "Vblink__Syms.h"
#include "Vblink___024root.h"

void Vblink___024root___ctor_var_reset(Vblink___024root* vlSelf);

Vblink___024root::Vblink___024root(Vblink__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , __VdlySched{*symsp->_vm_contextp__}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vblink___024root___ctor_var_reset(this);
}

void Vblink___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vblink___024root::~Vblink___024root() {
}
