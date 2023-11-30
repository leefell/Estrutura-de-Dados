#include <iostream>
#include "classeNadador.h"

using namespace std;

classeNadador::classeNadador() {
}

classeNadador::classeNadador(const classeNadador& orig) {
}

classeNadador::~classeNadador() {
}

void classeNadador::lerIdade(){
    
    int idade;
    cout << "Esse algoritmo classifica a categoria de um nadador!" << endl;
    cout << "Digite a idade do nadador: ";
    cin >> idade;
    if(idade >= 5 && idade <= 7)
        cout << "Classe Infantil A." << endl;
    else if(idade >= 8 && idade <= 10)
        cout << "Classe Infantil B." << endl;
    else if(idade >= 11 && idade <= 13)
        cout << "Classe Juvenil A." << endl;
    else if(idade >= 14 && idade <= 17)
        cout << "Classe Juvenil B." << endl;
    else if(idade >= 18)
        cout << "Classe Adulto." << endl;
    else if(idade < 5)
        cout << "Idade insuficiente para uma categoria." << endl;
}
