#include <iostream>
#include "cEquacao.h"
#include <iomanip>

using namespace std;

cEquacao::cEquacao() {
}

cEquacao::cEquacao(const cEquacao& orig) {
}

cEquacao::~cEquacao() {
}

void cEquacao::insert(){
    
    float a,b,c;
    
    cout << "Esse algoritmo retorna o valor de Delta." << endl;
    cout << "Digite o valor de A: ";
    cin >> a;
    cout << "Digite o valor de B: ";
    cin >> b;
    cout << "Digite o valor de C: ";
    cin >> c;
    
    cout << "O valor do delta e: " << this->equacao(a,b,c) << endl;
    
}

float cEquacao::equacao(float a, float b, float c){
    
    float delta;
    delta = (b*b) - (4*a*c);
    return delta;
    
    
}
