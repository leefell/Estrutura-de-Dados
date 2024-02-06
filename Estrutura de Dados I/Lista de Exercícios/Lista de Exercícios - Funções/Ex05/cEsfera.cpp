#include <iostream>
#include "cEsfera.h"
#include <cmath>
#include <iomanip>  
using namespace std;
cEsfera::cEsfera() {
}

cEsfera::cEsfera(const cEsfera& orig) {
}

cEsfera::~cEsfera() {
}

void cEsfera::insert(){
    
    float raio;
    cout << "Digite o valor do raio da esfera: ";
    cin >> raio;
    
    cout << "O Volume da esfera e: " << setprecision(2) << this->calculo(raio) << endl;
}

float cEsfera::calculo(float raio){
    
    float volume = 0;
    
     volume = 4/3 * (M_PI*pow(raio,3));
    
    return volume;
}


