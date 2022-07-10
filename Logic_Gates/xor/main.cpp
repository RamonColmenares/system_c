#include <systemc.h>

#include "XorGate.h"
#include "TestBench.h"

int sc_main(int argc, char  *argv[]) {
    sc_signal<bool> a, b, c;

    sc_time period(10, SC_NS); 

    sc_clock clock ("clock", period);

    XorGate xorGate("xorGate");
    TestBench testBench("testBench");

    xorGate.aIn(a);
    testBench.aOut(a);

    xorGate.bIn(b);
    testBench.bOut(b);

    xorGate.cOut(c);
    testBench.cIn(c);

    testBench.clk(clock);

    sc_start();
    return 0;
}