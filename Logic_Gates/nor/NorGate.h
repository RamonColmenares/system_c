#ifndef NOR_GATE_H
#define NOR_GATE_H

#include <systemc.h>

class NorGate : public sc_module {
  public:
    sc_in<bool> aIn, bIn;
    sc_out<bool> cOut;

    SC_CTOR(NorGate);

  private:
    void process();

};

#endif // NOR_GATE_H