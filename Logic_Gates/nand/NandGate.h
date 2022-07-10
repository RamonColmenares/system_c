#ifndef NAND_GATE_H
#define NAND_GATE_H

#include <systemc.h>

class NandGate : public sc_module {
  public:
    sc_in<bool> aIn, bIn;
    sc_out<bool> cOut;

    SC_CTOR(NandGate);

  private:
    void process();

};

#endif // NAND_GATE_H