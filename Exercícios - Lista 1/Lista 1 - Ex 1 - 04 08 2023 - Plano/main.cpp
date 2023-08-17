#include <cstdlib>
#include "cPlano.h"
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {
    
    cPlano obj1;
    obj1.lerPontos();
    cout << "\nO resultado da operação é: " << setprecision(2) <<  obj1.calcularDE() << endl;
    
    return 0;
}