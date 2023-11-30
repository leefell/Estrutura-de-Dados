#include "cExpressao.h"
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cExpressao obj1;
    obj1.lerNumeros();
    cout << "\nO resultado da operação é: " << obj1.calcularExpressao() << endl;
    
    return 0;
}

