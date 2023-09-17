#include "cPlano.h"
#include <iostream>
#include <cmath>
using namespace std;

cPlano::cPlano() {
}

cPlano::cPlano(const cPlano& orig) {
}

cPlano::~cPlano() {
}

void cPlano::lerPontos() {

    cout << "Digite o ponto x1: " << endl;
    cin >> this -> x1;
    cout << "Digite o ponto y1: " << endl;
    cin >> this -> y1;
    cout << "Digite o ponto x2: " << endl;
    cin >> this -> x2;
    cout << "Digite o ponto y2: " << endl;
    cin >> this -> y2;
}

// sqrt(pow(this->x2 - this->x1, 2) esse ,2 significa elevar ao Quadrado, se fosse ,3 ao cubo e assim por diante;

float cPlano::calcularDE(){
    
    float d = 0.0;
                                
    d = sqrt(pow(this->x2 - this->x1, 2) + pow(this->y2 - this->y1, 2));
    
    
    return d;
    
    
}