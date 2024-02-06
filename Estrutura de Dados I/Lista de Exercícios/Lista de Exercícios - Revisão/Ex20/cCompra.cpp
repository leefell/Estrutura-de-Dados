#include "cCompra.h"
#include <iostream>

using namespace std;

cCompra::cCompra() {
}

cCompra::cCompra(const cCompra& orig) {
}

cCompra::~cCompra() {
}

void cCompra::lerProdutos(){
    
    int opc = -1; // trocar se der errado
    double total = 0;
    
    while (opc != 0) {
        cout << "------------------------" << endl;
        cout << "|Código do|   Preço    |" << endl;
        cout << "| Produto |  unitário  |" << endl;
        cout << "|---------|------------|" << endl;
        cout << "|1001     |5,32        |" << endl;
        cout << "|1324     |6,45        |" << endl;
        cout << "|6548     |2,37        |" << endl;
        cout << "| 987     |5,32        |" << endl;
        cout << "|7623     |6,45        |" << endl;
        cout << "------------------------" << endl;
        cout << "Digite 0 para finalizar a compra." << endl << endl; 
        cout << "Insira a opcao desejada: ";
        cin >> opc;
        
        if (opc == 0)
            break;
        
        if (opc == 1001 || opc == 1324 || opc == 6548 || opc == 987 || opc == 7623){
            int qtd;
            cout << "Insira a quantidade: ";
            cin >> qtd;
            total = total + this->calculo(opc, qtd);
        }
        else {
            cout << "Opção inválida." << endl;
        }
        
    }
    
    cout << "\nValor total: " << total << endl;
}

double cCompra::calculo(int opc, int qtd){
    
    double total = 0;
    if(opc == 1001)
        total = 5.32 * qtd;
    else if(opc == 1324)
        total = 6.45 * qtd;
    else if(opc == 6548)
        total = 2.37 * qtd;
    else if(opc == 987)
        total = 5.32 * qtd;
    else if(opc == 7623)
        total = 6.45 * qtd;
    
    return total;
}
