#include <iostream>
#include "cMedia.h"

using namespace std;

cMedia::cMedia() {
}

cMedia::cMedia(const cMedia& orig) {
}

cMedia::~cMedia() {
}

void cMedia::lerNota(){
    double n1, n2, n3, opc;
    while(opc != 0){
        cout << "Algoritmo que calcula media de tres tipos." << endl;
        cout << "1 - Media aritmetica." << endl;
        cout << "2 - Media ponderada(3,3,4)." << endl;
        cout << "3 - Media Harmonica." << endl; 
        cout << "0 - Para sair. "<< endl << endl;
        cout << "Insira a opcao desejada: ";
        cin >> opc;
        cout << endl;
        if (opc == 0)
            exit(0);
        if (opc >= 1 && opc <=3){
            cout << "Insira a primeira nota: ";
            cin >> n1;
            cout << "Insira a segunda nota: ";
            cin >> n2;
            cout << "Insira a terceira nota: ";
            cin >> n3;
        }
        cout << endl;
        if (opc == 1)
            cout << endl << "A media e: " << this->aritmetica(n1, n2, n3) << endl << endl;
        else if (opc == 2)
            cout << endl << "A media e: " << this->ponderada(n1, n2, n3) << endl << endl;
        else if (opc == 3)
            cout << endl << "A media e: " << this->harmonica(n1, n2, n3) << endl << endl;
        else if (opc < 0 || opc > 3 )
            cout << "Opção invalida." << endl << endl;
    }
}

double cMedia::aritmetica (double n1, double n2, double n3) {
    return (n1+n2+n3)/3;
}

double cMedia::ponderada (double n1, double n2, double n3) {
    return (n1*3 + n2*3 + n3*4)/10;
}

double cMedia::harmonica (double n1, double n2, double n3) {
    return 3/(1/n1 + 1/n2 + 1/n3);
}