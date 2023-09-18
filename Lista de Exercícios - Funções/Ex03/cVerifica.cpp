#include <iostream>
#include "cVerifica.h"

using namespace std;

cVerifica::cVerifica() {
}

cVerifica::cVerifica(const cVerifica& orig) {
}

cVerifica::~cVerifica() {
}

void cVerifica::insert(){
    
    int num;
    
    cout << "Esse programa classifica um valor." << endl;
    cout << "Se o numero digitado for positivo, sera retornado '1'." << endl;
    cout << "Se o numero digitado for negativo, sera retornado '-1'." << endl;
    cout << "Se o numero digitado for zero, sera retornado '0'." << endl;
    cout << "Digite um valor: ";
    cin >> num;
    
    cout << "\nO valor de retorno foi: " << this->classificar(num) << endl;
    
}

int cVerifica::classificar(int num){
    
    if(num > 0)
        return 1;
    else if(num < 0)
        return -1;
    else
        return 0;
    
}