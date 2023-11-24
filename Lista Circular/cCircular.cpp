#include <iostream>
#include "cCircular.h"
using namespace std;
cCircular::cCircular() {
    
    aux = NULL;
    fim = NULL;
    inicio = NULL;
    
}

cCircular::cCircular(const cCircular& orig) {
}

cCircular::~cCircular() {
}

void cCircular::menu(){
    
    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à fila " << endl;
    cout << "[2] - Mostrar valores da fila " << endl;
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
            this->listar();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
        
    }
}

void cCircular::inserir(){
    
    int numero;
    cout << "Digite um número para inserir: ";
    cin >> numero;
    
    this->aux = (struct no*)malloc(sizeof(aux));
    this->aux->valor = numero;
    
    if(this->inicio == NULL){
        this->inicio = this->aux;
        this->inicio->prox = NULL; // nao pegar sujeira
        this->inicio->ant = NULL;
    }else{
        this->fim->prox = this->aux;
        this->aux->ant = this->fim;
    }
    
    this->fim = this->aux;
    this->inicio->ant = fim;
    this->fim->prox = inicio;
}
