#include <iostream>
#include "circular.h"
using namespace std;
circular::circular() {
    aux = NULL;
    fim = NULL;
    inicio = NULL;
}

circular::circular(const circular& orig) {
}

circular::~circular() {
}

void circular::menu(){
    
    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à lista " << endl;
    cout << "[2] - Mostrar valores da lista " << endl;
    cout << "[0] - Sair " << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    switch(opc){
        
        case 1:
            this->inserir();
            this->menu();
            break;
        case 2:
            this->mostrar();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void circular::inserir(){
    
    int elemento;
    cout << "Digite o elemento a ser inserido: ";
    cin >> elemento;
    
    this->aux = (struct no*)malloc(sizeof(aux));
    this->aux->valor = elemento;
    this->aux->prox = NULL;
    this->aux->ant = NULL;
    
    if(this->inicio == NULL){
        this->inicio = this->aux;
    }else{
        this->fim->prox = this->aux;
        this->aux->ant = this->fim;
    }

    // Inicio.ant aponta pro fim e fim.prox aponta pro inicio
    this->fim = this->aux;
    this->inicio->ant = this->fim;
    this->fim->prox = inicio;
}

void circular::mostrar(){
    
    for(this->aux = this->inicio; this->aux != fim; this->aux = this->aux->prox){
        cout << this->aux->valor << " ";
    }
}
