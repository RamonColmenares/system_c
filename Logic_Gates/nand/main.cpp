#include <systemc.h>

#include "NandGate.h"
#include "TestBench.h"

int sc_main(int argc, char  *argv[]) {
    sc_signal<bool> a, b, c;

    sc_time period(10, SC_NS); 

    sc_clock clock ("clock", period);

    NandGate nandGate("nandGate");
    TestBench testBench("testBench");

    nandGate.aIn(a);
    testBench.aOut(a);

    nandGate.bIn(b);
    testBench.bOut(b);

    nandGate.cOut(c);
    testBench.cIn(c);

    testBench.clk(clock);

    sc_start();
    return 0;
}