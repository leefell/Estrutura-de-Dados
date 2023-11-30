#include <iostream>
#include "classeNumero.h"

using namespace std;

classeNumero::classeNumero() {
}

classeNumero::classeNumero(const classeNumero& orig) {
}

classeNumero::~classeNumero() {
}

void classeNumero::lerNum(){
    
    int num;
    cout << "Esse programa diz se o número e par ou impar e positivo ou negativo." << endl; 
    cout << "Insira um numero: ";
    cin >> num;
    if(num%2==0)
        cout << "O numero " << num << " e PAR." << endl;
    else 
        cout << "O numero " << num << " e IMPAR." << endl;
    
    if(num >= 0)
        cout << "O numero " << num << " e POSITIVO." << endl;
    else
        cout << "O numero " << num << " e NEGATIVO." << endl;
    
}