#include <iostream>
#include "classeMedia.h"

using namespace std;

classeMedia::classeMedia() {
}

classeMedia::classeMedia(const classeMedia& orig) {
}

classeMedia::~classeMedia() {
}

void classeMedia::lerNotas(){
    
    float n1, n2, n3;
    cout << "Calculador de Media Aritmetica." << endl;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << endl;
    if(this->calculo(n1,n2,n3)>=6){
        cout << "Sua media foi de: " << this->calculo(n1,n2,n3) << endl;
        cout << "Voce foi Aprovado!";
    }
    else{
        cout << "Sua media foi de: " << this->calculo(n1,n2,n3) << endl;
        cout << "Voce foi Reprovado!";
    }

}

float classeMedia::calculo(float n1, float n2, float n3){
    
    return (n1+n2+n3)/3;    
}