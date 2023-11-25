#include "Duplamente.h"
#include <iostream>
using namespace std;

Duplamente::Duplamente() {

    inicio = NULL;
    fim = NULL;
    aux = NULL;

}

Duplamente::Duplamente(const Duplamente& orig) {
}

Duplamente::~Duplamente() {
}

void Duplamente::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à fila " << endl;
    cout << "[2] - Remover valor da fila " << endl;
    cout << "[3] - Mostrar valores da fila " << endl;
    cout << "[0] - Sair " << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->inserir();
            this->menu();
            break;
        case 2:
            this->remover();
            this->menu();
            break;
        case 3:
            this->mostrar();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;

    }
}

void Duplamente::inserir() {

    int numero;
    cout << "Digite o elemento para inserir: ";
    cin >> numero;

    this->aux = (struct no*) malloc(sizeof (aux));
    this->aux->prox = NULL;
    this->aux->ant = NULL;
    this->aux->valor = numero;

    if (this->inicio == NULL) {
        this->inicio = this->aux;
        this->inicio->prox = NULL;
    } else {
        this->fim->prox = aux;
        this->aux->ant = fim;
    }

    this->fim = aux;
    //this->inicio->ant = fim; // circular
    //this->fim->prox = inicio; // circular

}


// Questao da prova -> remover um elemento qualquer do meio da lista duplamente encadeada
//---------------------------------------------------------------------------------------

no* Duplamente::pesquisar(int chave) {

    for (this->aux = inicio; aux != NULL; this->aux = aux->prox) {
        if (aux->valor == chave)
            return aux;
    }

    return NULL;

}

void Duplamente::remover(){
    
    int elemento;
    cout << "Digite o elemento que deseja remover: ";
    cin >> elemento;
    
    aux = this->pesquisar(elemento);
    if(this->aux == this->inicio){
        this->inicio = this->inicio->prox;
        this->inicio->ant = NULL;
    }else if(this->aux == this->fim){
        this->fim = this->fim->ant;
        this->fim->prox = NULL;
    }else{
        aux->ant->prox = aux->prox;
        aux->prox->ant = aux->ant;
    }
    
    cout << "O elemento " << this->aux->valor << " foi removido" << endl;
    free(this->aux);
}

//---------------------------------------------------------------------------------------

void Duplamente::mostrar() {

    for (aux = inicio; aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->valor << " ";
    }
}
