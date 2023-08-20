#include "classeIdade.h"
#include <iostream>

using namespace std;

classeIdade::classeIdade() {
}

classeIdade::classeIdade(const classeIdade& orig) {
}

classeIdade::~classeIdade() {
}

void classeIdade::lerIdade() {

    int idade;
    
    cout << "Digite sua idade em dias: ";
    cin >> idade;
    cout << "\nSua idade e: ";
    if(this->calculoAnos(idade)>0)
        cout << this->calculoAnos(idade) << " ano(s) ";
    if(this->calculoMeses(idade)>0)
        cout << this->calculoMeses(idade) << " meses ";
    if(this->calculoDias(idade)>0)
        cout << this->calculoDias(idade) << " e dias ";
    cout << endl;
}

int classeIdade::calculoAnos(int a) {

    return a / 365;
}

int classeIdade::calculoMeses(int a) {

    return (a % 365) / 30;

}

int classeIdade::calculoDias(int a) {

    return (a % 365) % 30;
}