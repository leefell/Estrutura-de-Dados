#include <iostream>
using namespace std;
int main(){
    
    pilhaEstatica();
    
}

void pilhaEstatica(){
    int digitado, qtd;
    char opc;
    
    cout << "quantidade de elementos";
    cin >> qtd;
    
    int vet[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe o elemento da posicao " << qtd - (i + 1) << ": ";
        cin >> vet[qtd - (i + 1)];
    }
    
    cout << endl << endl;
    
    for (int j = 0; j < qtd; j++){
        cout << vet[j] << endl;
    }
}