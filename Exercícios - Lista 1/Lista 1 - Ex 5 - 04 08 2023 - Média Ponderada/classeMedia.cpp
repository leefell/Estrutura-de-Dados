#include "classeMedia.h"
#include <iostream>

using namespace std;
classeMedia::classeMedia() {
}

classeMedia::classeMedia(const classeMedia& orig) {
}

classeMedia::~classeMedia() {
}

void classeMedia::lerNotas(){
    
    float n1, n2, n3;
    
    cout << "Programa que calcula a Media Ponderada de tres notas." << endl;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "A media ponderada dessas notas e: " << this->media(n1, n2, n3);
    cout << endl;
}

float classeMedia::media(float n1, float n2, float n3){
    
    return (n1*2 + n2*3 + n3*5)/10;
    
}