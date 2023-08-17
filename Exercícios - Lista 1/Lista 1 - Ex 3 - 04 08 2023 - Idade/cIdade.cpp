#include "cIdade.h"
#include <iostream>

using namespace std;

cIdade::cIdade() {
}

cIdade::cIdade(const cIdade& orig) {
}

cIdade::~cIdade() {
}

void cIdade::lerIdade(){
    
    cout << "Digite sua idade em anos: " << endl;
    cin >> this -> idade;
    cout << "Digite quanto meses: " << endl;
    cin >> this -> meses;
    cout << "Digite quantos dias: " << endl;
    cin >> this -> dias;
}

int cIdade::calculoIdade(){
   
    int idadeTotalEmDias = 0;
    idadeTotalEmDias += idade * 365; 
    idadeTotalEmDias += meses * 30;  
    idadeTotalEmDias += dias;
    
    return idadeTotalEmDias;
}   
