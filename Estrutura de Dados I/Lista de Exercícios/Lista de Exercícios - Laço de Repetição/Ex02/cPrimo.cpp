#include <iostream>
#include "cPrimo.h"

using namespace std;

cPrimo::cPrimo() {
}

cPrimo::cPrimo(const cPrimo& orig) {
}

cPrimo::~cPrimo() {
}

void cPrimo::insert(){

    float n;
    cout << "Insira um número para verificar se e primo: ";
    cin >> n;
    if(this->verificar(n)==1)
        cout << "O número " << n << " não é primo." << endl;
    else 
        cout << "O número " << n << " é primo." << endl;
    
}

int cPrimo::verificar(int n){
    
    int div = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0)
            div++;
    }
    
    if(div > 2)
        return 1;
    else 
        return 0;
    
}