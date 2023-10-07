#include "fila.h"
#include <iostream>
using namespace std;
fila::fila() {
    
    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;
    
}

fila::fila(const fila& orig) {
}

fila::~fila() {
}


void fila::menu(){
    
    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à fila " << endl;
    cout << "[2] - Remover valor da fila " << endl;
    cout << "[3] - Mostrar valores da fila " << endl;
    cout << "[4] - Pesquisar valor da fila " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    switch(opc){
        case 1:
            this->inserirValor();
            this->menu();
            break;
        case 2:
            this->removerValor();
            break;
        case 3:
            this->mostrarValores();
            break;
        case 4:
            this->pesquisarValor();
            break;
        case 0:
            cout << "\nSaindo." << endl;
            break;
        default:
            cout << "\nOpcao Invalida." << endl;
    }
}

void fila::inserirValor(){
    
    // First in, first out, o primeiro que entra é o primeiro que sai
    // Ponteiro recebe null, nao ZERO, 
    
    cout << "Digite o valor a ser inserido: ";
    this->aux = (struct no*)malloc(sizeof(aux)); // essa é a estrutura do malloc
    cin >> this->aux->valor;
    
    // o segundo elemento ja nao entra no if pq o inicio nao vai ser null
    if(this->inicio == NULL){
        this->inicio = this->aux;
    }else{
        this->fim->prox = aux;
    }
    
    this->fim = this->aux;
    this->fim->prox = NULL;
    
}

void fila::removerValor(){
    
    cout << "Digite o valor a ser removido: ";
    
    
}

void fila::mostrarValores(){
    
    cout << "\nOS valores da fila sao: " << endl;
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        cout << this->aux->valor << endl;
    }
    
}

void fila::pesquisarValor(){
    
}