#include <iostream>
#include "cLanche.h"

using namespace std;

cLanche::cLanche() {
}

cLanche::cLanche(const cLanche& orig) {
}

cLanche::~cLanche() {
}

void cLanche::menu() {

    cout << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "|Código |Produto                   |Preço Unitário(R$)|" << endl;
    cout << "|100    |Cachorro quente           | R$ 1,70          |" << endl;
    cout << "|101    |Bauru Simples             | R$ 2,30          |" << endl;
    cout << "|102    |Bauru com ovo             | R$ 2,60          |" << endl;
    cout << "|103    |Hamburguer                | R$ 2,40          |" << endl;
    cout << "|104    |Cheeseburguer             | R$ 2,50          |" << endl;
    cout << "|105    |Refrigerante              | R$ 1,00          |" << endl;
    cout << "-------------------------------------------------------" << endl;
    cout << "Digite -1 para terminar sua compra." << endl << endl;
    cout << "Insira a opção desejada: ";

}

int cLanche::pedido() {

    int opc = 0, qtd = 0;
    float total = 0;

    while (opc != -1) {
        this->menu();
        cin >> opc;

        switch (opc) {
            case 100:
                qtd = quantidade();
                total = total + 1.7 * qtd;
                break;
            case 101:
                qtd = quantidade();
                total = total + 2.30 * qtd;
                break;
            case 102:
                qtd = quantidade();
                total = total + 2.60 * qtd;
                break;
            case 103:
                qtd = quantidade();
                total = total + 2.40 * qtd;
                break;
            case 104:
                qtd = quantidade();
                total = total + 2.50 * qtd;
                break;
            case 105:
                qtd = quantidade();
                total = total + 1.00 * qtd;
                break;
            case -1:
                this->mostrar(total);
                break;
            default:
                cout << "Opcao Invalida." << endl;

        }

    }

}

int cLanche::quantidade() {
    int qtd;

    cout << "Insira a quantidade desejada: ";
    cin >> qtd;

    return qtd;
}

void cLanche::mostrar(float total){
    
    cout << "\nO valor total da conta e: " << total << endl;
    
}
