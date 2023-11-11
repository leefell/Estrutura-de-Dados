#include <iostream>
#include "fibo.h"
using namespace std;
fibo::fibo() {
}

fibo::fibo(const fibo& orig) {
}

fibo::~fibo() {
}

int fibo::calculo(int n){
    
    if(n <= 1){
        return n;
    }else{
        return calculo(n - 1) + calculo(n - 2);
    }
}

void fibo::mostrar(){
    
    int qtd;
    cout << "Digite a quantidade de termo para a sequencia de Fibonacci: ";
    cin >> qtd;
    
    cout << "Sequencia: " << endl;
    for(int i = 0; i < qtd; i++){
        cout << calculo(i) << " ";
    }
    
}