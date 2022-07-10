#include <systemc.h>

#include "NorGate.h"
#include "TestBench.h"

int sc_main(int argc, char  *argv[]) {
    sc_signal<bool> a, b, c;

    sc_time period(10, SC_NS); 

    sc_clock clock ("clock", period);

    NorGate norGate("norGate");
    TestBench testBench("testBench");

    norGate.aIn(a);
    testBench.aOut(a);

    norGate.bIn(b);
    testBench.bOut(b);

    norGate.cOut(c);
    testBench.cIn(c);

    testBench.clk(clock);

    sc_start();
    return 0;
}