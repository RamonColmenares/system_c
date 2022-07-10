#include "NorGate.h"

NorGate::NorGate(sc_module_name moduleName) : 
    sc_module(moduleName),
    aIn("aIn"),
    bIn("bIn"),
    cOut("cOut" ) {
    SC_METHOD(process);
    dont_initialize();
    sensitive << aIn << bIn; 
}

void NorGate::process() {
    cOut.write(not(aIn.read() or bIn.read()));
}