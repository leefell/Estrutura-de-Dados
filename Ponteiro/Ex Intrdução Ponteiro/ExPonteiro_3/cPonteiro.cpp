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
    double n1, n2, media;
    
    cout << "Informe a nota 1: ";
    cin >> n1;
    cout << "Informe a nota 2: ";
    cin >> n2;
    
    this->aritmetica(&n1, &n2, &media);
    
    cout << "Media: " << media << endl;
}

void cPonteiro::aritmetica(double *n1, double *n2, double *media){
    *media = (*n1 + *n2) / 2;
}