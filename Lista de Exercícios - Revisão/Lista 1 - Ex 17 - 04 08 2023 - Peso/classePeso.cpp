#include <iostream>
#include "classePeso.h"
using namespace std;

classePeso::classePeso() {
}

classePeso::classePeso(const classePeso& orig) {
}

classePeso::~classePeso() {
}

void classePeso::lerDados() {

    float altura;
    int opcao;

    cout << "Esse programa calcula o seu peso ideal de acordo com seus dados." << endl;
    cout << "Digite sua altura: ";
    cin >> altura;
    cout << "Qual seu sexo?" << endl;
    cout << "1 - Masculino" << endl;
    cout << "2 - Feminino" << endl;
    cin >> opcao;
    if (opcao == 1 || opcao == 2)
        cout << endl << "O seu peso ideal e: " << this->calculo(altura, opcao) << "KG" << endl;
    else
        cout << endl << "Opcao Invalida!" << endl;
}

float classePeso::calculo(float altura, int opcao) {

    float total;
    if (opcao == 1)
        total = (72.7 * altura) - 58;
    else
        total = (62.1 * altura) - 44.7;

    return total;
}