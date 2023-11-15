#include "fila.h"
#include "pilha.h"
#include <cstdlib>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

    char opc;
    cout << "[F] - Fila" << endl;
    cout << "[P] - Pilha" << endl;
    cin >> opc;
    if(opc == 'F' || opc == 'f'){
        fila obj; obj.menu();
    }
    else if(opc == 'P' || opc == 'p'){
        pilha obj; obj.menu();
    }
       
    return 0;
}
