#include <iostream>
#include "NumericFSA.h"

using namespace std;

int main() {

    NumericFSA fsa;
    string entrada;

    cout << "Analizador Lexico usando FSA\n";

    while(true) {

        cout << "\nIngrese un numero (escriba exit para salir): ";
        cin >> entrada;

        if(entrada == "exit")
            break;

        if(fsa.validateNumber(entrada))
            cout << "NUMERO valido\n";
        else
            cout << "Numero invalido\n";
    }

    return 0;
}
