#include <iostream>
#include "Calculadora.h"
using namespace std;
Calculadora::Calculadora() {
}

Calculadora::Calculadora(const Calculadora& orig) {
}

Calculadora::~Calculadora() {
}

void Calculadora::lerDados(){
    
    float vetDados[2], vetOp[3];
    
    cin >> vetDados[0];
    cin >> vetDados[1];
    this->funcoes(vetDados, vetOp); // Passando por referência
    cout << vetOp[0] << " " << vetOp[1] <<  " "  << vetOp[2] << endl; 
    
}

// Como é passagem por referência nao precisa de return porque o vetor ja esta sendo
// modificado diretamente na memória.

void Calculadora::funcoes(float vet[], float vetOp[]){
    
    vetOp[0] = vet[0] + vet[1];
    vetOp[1] = vet[0] - vet[1];
    vetOp[2] = vet[0] * vet[1];
    
}