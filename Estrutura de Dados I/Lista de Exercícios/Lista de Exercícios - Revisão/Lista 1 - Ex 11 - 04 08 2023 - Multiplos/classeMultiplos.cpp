#include <iostream>
#include "classeMultiplos.h"

using namespace std;

classeMultiplos::classeMultiplos() {
}

classeMultiplos::classeMultiplos(const classeMultiplos& orig) {
}

classeMultiplos::~classeMultiplos() {
}

void classeMultiplos::lerValor() {

    int n1, n2;
    cout << "Algoritmo que verifica se um número é divisivel por outro" << endl;
    cout << "Digite o primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    if (n1 % n2 == 0 || n2 % n1 == 0)
        cout << "O numero " << n1 << " e multiplo do numero " << n2 << ". " << endl;
    else
        cout << "O numero " << n1 << " nao e multiplo do numero " << n2 << ". " << endl;
}