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
    
    int a = 0.0, b = 0.0, c = 0.0;
    
    cout << "Digite o valor de A: " << endl;
    cin >> a;
    cout << "Digite o valor de B: " << endl;
    cin >> b;
    cout << "Digite o valor de C: " << endl;
    cin >> c;
    
    cout << "\n" << this -> calcularExpressao(a,b,c) << endl;
    
    
    // passar por parametro faz com que as variaveis locais nao sejam apagadas 
    // convertendo atributos para variaveis locais
}

float cExpressao::calcularExpressao(int a, int b, int c){
    
    float r = 0.0, s = 0.0, d = 0.0;
    
    r = pow(a + b, 2);
    s = pow(b + c, 2);
    
    d = (r + s) / 2;    
    
    return d;
}