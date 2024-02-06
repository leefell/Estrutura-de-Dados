#include <iostream>
#include "cAltura.h"

using namespace std;
cAltura::cAltura() {
}

cAltura::cAltura(const cAltura& orig) {
}

cAltura::~cAltura() {
}

void cAltura::insert(){
    
    float altura=0, menor=0, maior=0;
    
    for(int i = 1; i <= 5; i++){
        cout << "Digite a altura da " << i << " pessoa: ";
        cin >> altura;
        
        if(maior == 0 && menor == 0){
            maior = altura;
            menor = altura;
        }
        maior = this->verificarMaior(altura, maior);
        menor = this->verificarMenor(altura, menor);
        
        if(i == 5){        
        this->ver(maior, menor);    
        }
    }
    
}

float cAltura::verificarMaior(float altura, float maior){
    if(altura > maior)
        return altura;
    else
        return maior;
}

float cAltura::verificarMenor(float altura, float menor){
    if(altura < menor)
        return altura;
    else
        return menor;   
}

void cAltura::ver(float maior, float menor){
    
    cout << "\nA maior altura e: " << maior << endl;
    cout << "A menor altura e: " << menor << endl;
    
}
