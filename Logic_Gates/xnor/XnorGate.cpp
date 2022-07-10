#include "XnorGate.h"

XnorGate::XnorGate(sc_module_name moduleName) : 
    sc_module(moduleName),
    aIn("aIn"),
    bIn("bIn"),
    cOut("cOut" ) {
    SC_METHOD(process);
    dont_initialize();
    sensitive << aIn << bIn; 
}

void XnorGate::process() {
    cOut.write( (aIn.read() and bIn.read()) or ( (not aIn.read()) and (not bIn.read()) ) );
}