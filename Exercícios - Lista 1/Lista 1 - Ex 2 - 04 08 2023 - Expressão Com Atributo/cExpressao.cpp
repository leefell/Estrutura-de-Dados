#include "cExpressao.h"
#include <iostream>
#include <cmath>

using namespace std;

cExpressao::cExpressao() {
}

cExpressao::cExpressao(const cExpressao& orig) {
}

cExpressao::~cExpressao() {
}

void cExpressao::lerNumeros(){
    
    cout << "Digite o valor de A: " << endl;
    cin >> this -> a;
    cout << "Digite o valor de B: " << endl;
    cin >> this -> b;
    cout << "Digite o valor de C: " << endl;
    cin >> this -> c;
    
    
}

float cExpressao::calcularExpressao(){
    
    float r = 0.0, s = 0.0, d = 0.0;
    
    r = pow(this -> a + this -> b, 2);
    s = pow(this -> b + this -> c, 2);
    
    d = (r + s) / 2;    
    
    return d;
}