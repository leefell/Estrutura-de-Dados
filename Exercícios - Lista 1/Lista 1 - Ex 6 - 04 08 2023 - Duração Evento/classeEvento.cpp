#include <iostream>
#include "classeEvento.h"

using namespace std;

classeEvento::classeEvento() {
}

classeEvento::classeEvento(const classeEvento& orig) {
}

classeEvento::~classeEvento() {
}

void classeEvento::duracao(){
    
    int tempo = 0;
    
    cout << "Digite o valor em segundos a serem convertidos em horas: ";
    cin >> tempo;
    cout << "O tempo total foi: ";
    if(this->calculoHoras(tempo)>0)
        cout << this->calculoHoras(tempo) << " hora(s) ";
    if(this->calculoMinutos(tempo)>0)
        cout << this->calculoMinutos(tempo) << " minuto(s) ";
    if(this->calculoSegundos(tempo)>0)
        cout << this->calculoSegundos(tempo) << " segundo(s) ";
    cout << endl;
}

float classeEvento::calculoHoras(int a){
    
    return a/3600;
    
}

float classeEvento::calculoMinutos(int a){
    
    return (a%3600)/60;
    
}

float classeEvento::calculoSegundos(int a){
    
    return (a%3600)%60;
    
}