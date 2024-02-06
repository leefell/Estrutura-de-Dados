#include <iostream>
#include "media.h"
#include <iomanip>
using namespace std;
media::media() {
}

media::media(const media& orig) {
}

media::~media() {
}

void media::lerNotas(){
    
    double n1, n2, n3, media;
    cout << "Digite as tres notas: ";
    cin >> n1 >> n2 >> n3;
    
    this->aritmetica(&n1, &n2, &n3, &media);   
    
    cout << "Media: " << setprecision(2) << media << endl;
    
}

void media::aritmetica(double *a, double *b, double *c, double *media){
    
    *media = (*a + *b + *c) / 3;
    
}
