#include "cPonteiro.h"
#include <iostream>

using namespace std;

cPonteiro::cPonteiro() {
}

cPonteiro::cPonteiro(const cPonteiro& orig) {
}

cPonteiro::~cPonteiro() {
}

void cPonteiro::insert(){
    int n1, n2, soma, subtracao, multiplicacao;
    
    cout << "Informe o primeiro número: ";
    cin >> n1;
    cout << "Informe o segundo número: ";
    cin >> n2;
    
    this->calculo(&n1, &n2, &soma, &subtracao, &multiplicacao);
    
    cout << "Soma: " << soma << endl;
    cout << "Subtração: " << subtracao << endl;
    cout << "Multiplicação: " << multiplicacao << endl;
}

void cPonteiro::calculo(int *n1, int *n2, int *soma, int *subtracao, int *multiplicacao){
    *soma = *n1 + *n2;
    *subtracao = *n1 - *n2;
    *multiplicacao = *n1 * *n2;
}