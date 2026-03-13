#ifndef NUMERICFSA_H
#define NUMERICFSA_H

#include <string>

class NumericFSA {

private:
    int estado;

public:
    NumericFSA();
    bool validateNumber(std::string entrada);

};

#endif
