#include "NumericFSA.h"
#include <cctype>

NumericFSA::NumericFSA() {
    estado = 0;
}

bool NumericFSA::validateNumber(std::string entrada) {

    estado = 0;

    for(char caracter : entrada) {

        switch(estado) {

        case 0: // estado inicial
            if(isdigit(caracter))
                estado = 1;
            else
                return false;
            break;

        case 1: // parte entera del numero
            if(isdigit(caracter))
                estado = 1;
            else if(caracter == '.')
                estado = 2;
            else
                return false;
            break;

        case 2: // punto decimal
            if(isdigit(caracter))
                estado = 3;
            else
                return false;
            break;

        case 3: // parte decimal del numero
            if(isdigit(caracter))
                estado = 3;
            else
                return false;
            break;
        }
    }

    // estados finales validos
    return (estado == 1 || estado == 3);
}
