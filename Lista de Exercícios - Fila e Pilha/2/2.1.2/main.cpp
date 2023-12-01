#include <cstdlib>
using namespace std;

void filaEstatica(){
    int digitado, qtd;
    char opc;
    
    cout << "quantidade de elementos";
    cin >> qtd;
    
    int vet[qtd];
    
    for (int i = 0; i < qtd; i++){
        cout << "Informe o elemento da posicao " << i << ": ";
        cin >> vet[i];
    }
    
    cout << endl << endl;
    
    for (int j = 0; j < qtd; j++){
        cout << vet[j] << endl;
    }
}

int main(int argc, char** argv) {

    filaEstatica();
    
    return 0;
}

