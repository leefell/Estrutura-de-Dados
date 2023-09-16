#include <iostream>
#include "classeMedia.h"

using namespace std;

classeMedia::classeMedia() {
}

classeMedia::classeMedia(const classeMedia& orig) {
}

classeMedia::~classeMedia() {
}

void classeMedia::lerNotas(){
    
    char codigo;
    float n1, n2, n3;
    
    cout << "Esse algoritmo vai calcular a media ponderada de tres notas." << endl << endl;
    cout << "Digite seu codigo: ";
    cin >> codigo;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << endl << "Codigo do Aluno: " << codigo << endl;
    if(this->calculo(n1,n2,n3) >= 5)
        cout << "Situacao: APROVADO." << endl;
    else 
        cout << "Situacao: REPROVADO." << endl;
}

float classeMedia::calculo(float n1, float n2, float n3){
    
    return ((n1*4+n2*3+n3*3))/10;
    
}
