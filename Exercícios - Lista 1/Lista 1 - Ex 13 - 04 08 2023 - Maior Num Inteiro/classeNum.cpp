#include <iostream>
#include "classeNum.h"

using namespace std;

classeNum::classeNum() {
}

classeNum::classeNum(const classeNum& orig) {
}

classeNum::~classeNum() {
}

void classeNum::lerNum(){
    
    int n1, n2, n3;
    cout << "Digite tres numeros e o algoritmo lhe retornara o maior." << endl;
    cin >> n1 >> n2 >> n3;
    if(n1 > n2 && n1 > n3)
        cout << "O maior numero e: " << n1 << endl;
    else if(n2 > n1 && n2 > n3)
        cout << "O maior numero e: " << n2 << endl;
    else if(n3 > n1 && n3 > n2)
        cout << "O maior numero e: " << n3 << endl;
   
}