#include <iostream>
#include "cMedia.h"
#include <iomanip>
using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::insert(){
    
    float n1, n2, n3;
    char opc;
    cout << "Digite a primeira nota: ";
    cin >> n1;
    cout << "Digite a segunda nota: ";
    cin >> n2;
    cout << "Digite a terceira nota: ";
    cin >> n3;
    cout << "Escolha a media: " << endl;
    cout << "Digite [A] - Media Aritmetica" << endl;
    cout << "Digite [P] - Media Ponderada (5,3,2)" << endl;
    cin >> opc;
    if(opc == tolower('A'))
        cout << "\nO resultado da media aritmetica das notas e: " 
                << setprecision(2) << this->aritmetica(n1,n2,n3) << endl;
    else if(opc == tolower('P'))
        cout << "\nO resultado da media ponderada das notas e: " 
                << setprecision(2) << this->ponderada(n1,n2,n3) << endl;
    else
        cout << "Opcao Invalida! " << endl;
    
    
}

float cMedia::aritmetica(float n1, float n2, float n3){
    
    return (n1 + n2 + n3)/3;
    
}

float cMedia::ponderada(float n1, float n2, float n3){
    
    return ((n1*5) + (n2*3) + (n3*2))/10;
    
}


// OR
//float cMedia::calcular(float a, float b, float c, char opc){
    
 //   if(opc == 'a')
//        return (a+b+c)/3;
//    else if(opc == 'p')
//        return ((a*5) + (b*3) + (c*2)) / 10;
//else
//cout << "\nOpcao Invalida." << endl;
//}
