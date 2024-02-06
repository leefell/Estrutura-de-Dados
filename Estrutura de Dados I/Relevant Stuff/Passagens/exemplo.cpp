#include <iostream>
#include "exemplo.h"
using namespace std;
exemplo::exemplo() {
}

exemplo::exemplo(const exemplo& orig) {
}

exemplo::~exemplo() {
}

void exemplo::lerDados(){
    
    int x, y;
    cout << "Digite o valor de X: ";
    cin >> x;
    cout << "Digite o valor de Y: ";
    cin >> y;
    
   //    this->imprimirDadosVal(x,y);
    this->imprimirDadosRef(&x, &y);
    cout << "No lerDados: " << x << " " << y << endl;
    
}

void exemplo::imprimirDadosVal(int x, int y){
    
    x++;
    y--;
    
    cout << "Esses valores serão válidos apenas dentro dessa função, então" << endl;
    cout << "quando voltar para o lerDados(), o valor de x e y vão ser aqueles que o usuário inseriu" << endl;
    cout << "isso é a passagem por valor." << endl;
    cout << "No imprimirDadosVal: " << x << " E " << y << endl;
    
}

void exemplo::imprimirDadosRef(int *x, int *y){
    
    *x = *x + 1;
    *y = *y + 1;
    
    cout << "No imprimirDadosRef: " << *x << "  " << *y << endl;
    cout << "Alterou diretamente na memória." << endl;
    
}