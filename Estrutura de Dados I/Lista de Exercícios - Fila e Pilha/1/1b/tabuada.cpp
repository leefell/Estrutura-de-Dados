#include <iostream>
#include "tabuada.h"
using namespace std;
tabuada::tabuada() {
}

tabuada::tabuada(const tabuada& orig) {
}

tabuada::~tabuada() {
}

int tabuada::tabuadaRecursiva(int numero, int multip){
    if(multip == 11){ // tabuada até 10
        return 0; // Condicao de saida
    }else{
        return numero * multip + tabuadaRecursiva(numero, multip + 1); 
    }
}

void tabuada::mostrar(int numero){
    
    int calculo = tabuadaRecursiva(numero, 1);
    
    cout << "A tabuada acumulada de " << numero << " e: " << calculo;
    
}

void tabuada::lerNumero(){
    
    int numero;
    cout << "Digite um número para saber a tabuada acumulada: ";
    cin >> numero;
    
    this->mostrar(numero);
    
}