#include <iostream>
#include "cMenor.h"

using namespace std;

cMenor::cMenor() {
}

cMenor::cMenor(const cMenor& orig) {
}

cMenor::~cMenor() {
}

void cMenor::insert(){
    
    int n1, n2;
    cout << "Digite primeiro numero: ";
    cin >> n1;
    cout << "Digite o segundo numero: ";
    cin >> n2;
    
    cout << "\nO menor numero e: " << this->comparar(n1,n2) << endl;
    
}

int cMenor::comparar(int n1, int n2){
    
    if(n1 < n2)
        return n1;
    else if(n2 < n1)
        return n2;
    
}