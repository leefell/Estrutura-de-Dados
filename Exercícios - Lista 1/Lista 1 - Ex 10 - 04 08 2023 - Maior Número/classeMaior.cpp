#include <iostream>
#include "classeMaior.h"

using namespace std;

classeMaior::classeMaior() {
}

classeMaior::classeMaior(const classeMaior& orig) {
}

classeMaior::~classeMaior() {
}

void classeMaior::lerNumeros(){
    
    int n1, n2, n3;
    cout << "Algoritmo para mostrar o maior numero entre 3 numeros." << endl;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    cout << "Digite o terceiro numero: ";
    cin >> n3;
    
    if(n1 > n2 && n1 > n3)
        cout << "O maior numero e: " << n1 << endl;
    else if(n2 > n1 && n2 > n3)
        cout << "O maior numero e: " << n2 << endl;
    else if(n3 > n1 && n3 > n2)
        cout << "O maior numero e: " << n3 << endl;
}
