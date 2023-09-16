#include <iostream>
#include "classeLanche.h"

using namespace std;

classeLanche::classeLanche() {
}

classeLanche::classeLanche(const classeLanche& orig) {
}

classeLanche::~classeLanche() {
}

void classeLanche::lerCodigo(){
    
    int num, quantidade;
    float total;
    while(num != -1){
        
        num = 0;
        quantidade = 0;
        cout << "Cardapio: " << endl;
        cout << "-----------------------------------" << endl;
        cout << "|Especificacao   | Codigo | Preco |" << endl;
        cout << "|Cachorro quente |  100   | 1,20  |" << endl;
        cout << "|Bauru simples   |  101   | 1,30  |" << endl;
        cout << "|Bauru com ovo   |  102   | 1,50  |" << endl;
        cout << "|Hamburguer      |  103   | 1,20  |" << endl;
        cout << "|Cheeseburguer   |  104   | 1,30  |" << endl;
        cout << "|Refrigerante    |  105   | 1,00  |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "Digite -1 para sair." << endl << endl;
        cout << "Insira a opcao desejada: ";
        cin >> num;
        
        if(num != -1){
            cout << "Digite a quantidade: ";
            cin >> quantidade;
        }
        if(num == 100)
            total = total + 1.20 * quantidade;
        else if(num == 101)
            total = total + 1.30 * quantidade;
        else if(num == 102)
            total = total + 1.50 * quantidade;
        else if(num == 103)
            total = total + 1.20 * quantidade;
        else if(num == 104)
            total = total + 1.30 * quantidade;
        else if(num == 105)
            total = total + 1.00 * quantidade;
        else
            cout << "Opcao Invalida." << endl;
        
    }
    cout << "Total: " << total << endl;
}
