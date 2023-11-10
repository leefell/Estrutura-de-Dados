#include <iostream>
#include "fatorial.h"
using namespace std;
fatorial::fatorial() {
}

fatorial::fatorial(const fatorial& orig) {
}

fatorial::~fatorial() {
}

void fatorial::lerDados(){
    
    int n;
    cout << "Digite um número para apresentar seu fatorial: ";
    cin >> n;
    cout << "O fatorial de " << n << " e: " << this->calcularFatorial(n);
    
}

int fatorial::calcularFatorial(int n){
    
    if(n == 0 || n == 1){
        return 1;
    }else{
        return n * calcularFatorial(n - 1);
    }
    
}