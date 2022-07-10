#ifndef XOR_GATE_H
#define XOR_GATE_H

#include <systemc.h>

class XorGate : public sc_module {
  public:
    sc_in<bool> aIn, bIn;
    sc_out<bool> cOut;

    SC_CTOR(XorGate);

  private:
    void process();

};

#endif // XOR_GATE_H