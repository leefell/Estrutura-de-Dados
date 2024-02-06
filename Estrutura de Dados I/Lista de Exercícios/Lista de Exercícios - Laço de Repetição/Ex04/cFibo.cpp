#include <iostream>
#include "cFibo.h"

using namespace std;

cFibo::cFibo() {
}

cFibo::cFibo(const cFibo& orig) {
}

cFibo::~cFibo() {
}

void cFibo::mostrar(){
    
    int vet[20];
    vet[0] = 1;
    vet[1] = 1;
    for(int n = 2; n < 20; n++){
        vet[n] = (vet[n-1] + vet[n-2]);
    }
     for (int n=0; n < 20; n++){
        cout << vet[n] << ", ";                    
    }
    cout << endl;
}
