#include <iostream>
#include "cFila.h"
using namespace std;
cFila::cFila() {
    
    this->inicio = NULL;
    this->fim = NULL;
    this->aux = NULL;
    
}

cFila::cFila(const cFila& orig) {
}

cFila::~cFila() {
}

void cFila::menu(){
    
    int opc;
    
    cout << "[1] - Adicionar a Fila." << endl;
    cout << "[2] - Remover da Fila." << endl;
    cout << "[3] - Mostrar Fila." << endl;
    cout << "[4] - Pesquisar na Fila." << endl;
    cout << "[0] - Fechar." << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    switch(opc){
        case 1:
            this->adicionarFila();
            this->menu();
            break;
        case 2:
            this->removerFila();
            this->menu();
            break;
        case 3:
            this->mostrarFila();
            this->menu();
            break;
        case 0:
            cout << "Programa Encerrado." << endl;
            break;
        default:
            cout << "Opção Invalida." << endl;
    }
}

void cFila::adicionarFila(){
    
    int valor;
    
    cout << "Digite um valor para adicionar à fila: ";
    this->aux=(struct no*)malloc(sizeof(aux));
    cin >> this->aux->valor;
    
    if(this->inicio == NULL){
        
        this->inicio = this->aux;
        
    }else{
        this->fim->prox = aux;
    }
    
    this->fim = this->aux;
    this->fim->prox = NULL;
}

bool cFila::vazio(struct no *recebido){
    
    // Esse método vai verificar se tem elemento na fila, se tiver ele retorna true 
    // e a ação de remover pode acontecer
    
    if(recebido == NULL)
        return false;
    else
        return true;
}

void cFila::removerFila(){
    
    if(vazio(this->inicio)){
        this->aux = this->inicio;
        this->inicio = this->aux->prox;
        free(this->aux);
        cout << "Removido com Sucesso." << endl;
    }
}

void cFila::mostrarFila(){
    
    cout << "\nFila: " << endl;
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        cout << this->aux->valor << " ";
        cout << endl;
    }
    
}

void cFila::pesquisarFila(){
    
    int valorPesq;
    
    cout << "Digite o valor para pesquisar: ";
    cin >> valorPesq;
    
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        if(valorPesq == this->aux->valor){
            cout << "O valor está na fila." << endl;
        }
    }
}