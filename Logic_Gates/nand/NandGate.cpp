#include "NandGate.h"

NandGate::NandGate(sc_module_name moduleName) : 
    sc_module(moduleName),
    aIn("aIn"),
    bIn("bIn"),
    cOut("cOut" ) {
    SC_METHOD(process);
    dont_initialize();
    sensitive << aIn << bIn; 
}

void NandGate::process() {
    cOut.write(not(aIn.read() and bIn.read()));
}