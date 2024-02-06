#include "cPonteiro.h"
#include <iostream>

using namespace std;

cPonteiro::cPonteiro() {
}

cPonteiro::cPonteiro(const cPonteiro& orig) {
}

cPonteiro::~cPonteiro() {
}

void cPonteiro::insert() {
    int n1, n2;

    cout << "Informe o primeiro valor: ";
    cin >> n1;
    cout << "Informe o segundo valor: ";
    cin >> n2;

    cout << "Num 1: " << n1 << endl;
    cout << "Num 2: " << n2 << endl;
    cout << endl << "Valores trocados" << endl << endl;
    
    this->swap(&n1, &n2);
    
    cout << "Num 1: " << n1 << endl;
    cout << "Num 2: " << n2 << endl;
}

void cPonteiro::swap(int *n1, int *n2){
    int *temp;
    *temp = *n1;
    *n1 = * n2;
    *n2 = * temp;
}