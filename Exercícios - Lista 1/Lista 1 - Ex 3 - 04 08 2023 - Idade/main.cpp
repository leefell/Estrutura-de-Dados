#include <cstdlib>
#include "cIdade.h"
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {

    cIdade obj1;
    obj1.idade;
    
    obj1.lerIdade();
    int idadeTotalDias = obj1.calculoIdade();
    
    cout << "Idade total em dias: " << idadeTotalDias << endl;
    
    
    return 0;
}

