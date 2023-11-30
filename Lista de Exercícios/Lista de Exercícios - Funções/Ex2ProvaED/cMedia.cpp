#include <iostream>
#include "cMedia.h"
using namespace std;
cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::lerNotas(){
    
    char opc;
    float n1, n2;
    
    cout << "Digite a nota 1: ";
    cin >> n1;
    cout << "Digite a nota 2: ";
    cin >> n2;
    cout << "Escolha o tipo de media: " << endl;
    cout << "[P] - Media Ponderada (Peso 4 e 6)." << endl;
    cout << "[A] - Media Aritmetica." << endl;
    cin >> opc;
    
    opc = tolower(opc);
    if(opc == 'p')
        cout << "\nA media ponderada e: " << this->ponderada(n1,n2) << endl;
    else if(opc == 'a')
        cout << "\nA media aritmetica e: " << this->aritmetica(n1,n2) << endl;
    else
        cout << "Opcao Invalida!" << endl;
}

float cMedia::ponderada(float a, float b){
    
    return ((a*4) + (b*6)) / 10;
    
}

float cMedia::aritmetica(float a, float b){
    
    return (a+b)/2;
    
}