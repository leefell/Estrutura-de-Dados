#include <iostream>
#include "classeSaldo.h"
using namespace std;

classeSaldo::classeSaldo() {
}

classeSaldo::classeSaldo(const classeSaldo& orig) {
}

classeSaldo::~classeSaldo() {
}

void classeSaldo::lerSaldo() {

    double salarioMedio, e;
    cout << "Programa que calcula o valor do seu credito especial." << endl;
    cout << "Insira seu saldo medio do ano anterior: ";
    cin >> salarioMedio;
    e = this->credito(salarioMedio);
    cout << endl << "O valor do saldo medio e de: " << salarioMedio
            << endl << "O valor do credito especial e: " << this->credito(salarioMedio) << endl;

}

double classeSaldo::credito(double salario) {
    double e;
    if (salario >= 0 && salario <= 200)
        e = 0;
    else if (salario >= 201 && salario <= 400)
        e = salario * 0.2;
    else if (salario >= 401 && salario <= 600)
        e = salario * 0.3;
    else if (salario >= 601)
        e = salario * 0.4;
    return e;
}