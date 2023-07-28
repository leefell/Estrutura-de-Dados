#include "cEnade.h"
#include <iostream>

using namespace std;
// esses tres abaixo sao Metodos

cEnade::cEnade() {
}

cEnade::cEnade(const cEnade& orig) {
}

cEnade::~cEnade() {
}

void cEnade::preencherMatriz() {

    int i=0, j=0, c=0;
    
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            c++;
            matriz[i][j] = c;
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            c = matriz[2 - i][3 - j];
            matriz[i][j] = c;
        }
    }
}

void cEnade::imprimirMatriz(){
    for(int i = 0; i <3; i++){
        for(int j = 0; j < 4; j++){
            cout << this -> matriz[i][j]<< "\t ";// this = este objeto, objeto dessa classe
        }
        cout << endl;
    }
    
}