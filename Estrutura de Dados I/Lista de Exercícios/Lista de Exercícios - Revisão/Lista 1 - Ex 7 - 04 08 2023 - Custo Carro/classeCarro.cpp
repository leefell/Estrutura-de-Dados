#include <iostream>
#include "classeCarro.h"

using namespace std;

classeCarro::classeCarro() {
}

classeCarro::classeCarro(const classeCarro& orig) {
}

classeCarro::~classeCarro() {
}

void classeCarro::precoFabrica(){
    
    float custo;
    
    cout << "Digite o custo de Fabrica do Veiculo:  ";
    cin >> custo;
    cout << "O preco de venda do veiculo e de R$: " << this->calculo(custo);
    cout << endl;
}

double classeCarro::calculo(double a){
    
    return a * 0.28 + a * 0.45 + a;
    
}