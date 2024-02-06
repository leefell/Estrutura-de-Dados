#include <iostream>
#include "cPilha.h"
using namespace std;

cPilha::cPilha() {

    aux = NULL;
    topo = NULL;

}

cPilha::cPilha(const cPilha& orig) {
}

cPilha::~cPilha() {
}

void cPilha::menu(){
    
    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Empilhar " << endl;
    cout << "[2] - Desempilhar" << endl;
    cout << "[3] - Mostrar valores da pilha " << endl;
    cout << "[4] - Pesquisar valor na pilha " << endl;
    cout << "[5] - Retonar Elemento Meio" << endl;    
    cout << "[6] - Retonar Endereço Elemento Meio" << endl;    
    cout << "[0] - Sair" << endl;
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
        case 4:
            this->pesquisar();
            this->menu();
            break;
        case 5:
            cout << this->retonarElementoMeio();
            this->menu();
            break;
        case 6:
            cout << this->retornarEnderecoMeio();
            this->menu();
            break;
        case 0:
            cout << "Saindo." << endl;
            break;
        default:
            cout << "Opcao Invalida. Insira novamente" << endl;
            this->menu();
    }
    
}

bool cPilha::jaInserido(int n) {

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (this->aux->valor == n) {
            return true;
        }
    }
    return false;
}

void cPilha::inserir() {

    int elemento;
    cout << "Digite o elemento para inserir: ";
    cin >> elemento;

    if (this->jaInserido(elemento)) {
        cout << "O elemento já foi empilhado." << endl;
    } else {

        this->aux = (struct no*) malloc(sizeof (aux));
        this->aux->valor = elemento;

        if (this->topo == NULL) {
            this->topo = this->aux;
        } else {
            this->aux->ant = topo;
            this->topo = this->aux;
        }

        cout << "Elemento empilhado." << endl;
    }
}

void cPilha::remover() {

    if (this->topo != NULL) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        cout << "\nO elemento desempilhado foi: " << this->aux->valor << endl;
        free(this->aux);
    }
}

void cPilha::mostrar() {

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        cout << this->aux->valor << endl;
    }
}

void cPilha::pesquisar() {

    int chave;
    cout << "Digite o número para pesquisar: ";
    cin >> chave;

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        if (this->aux->valor == chave) {
            cout << "O elemento está empilhado." << endl;
            return;
        }
    }

    cout << "O elemento não está empilhado." << endl;
}

int cPilha::calcularMeio(){
    
    int tamanho = 0, meio = 0;
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        tamanho++;
    }
    
    meio = tamanho/2;
    
    return meio;
    
}

int cPilha::retonarElementoMeio(){
    
    int meio = this->calcularMeio();
    int contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        if(contador == meio){
            return this->aux->valor;
        }else{
            contador++;
        }
    }
}

no* cPilha::retornarEnderecoMeio(){
    
    int meio = this->calcularMeio();
    int contador = 0;
    
    for(this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        if(contador == meio){
            return this->aux;
        }else{
            contador++;
        }
    }
}