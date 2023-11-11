#include <cstdlib>
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
    cout << "[1] - Empilhar " << endl;
    cout << "[2] - Desempilhar" << endl;
    cout << "[3] - Mostrar pilha" << endl;
    cout << "[4] - Pesquisar valor da pilha " << endl;
    cout << "[0] - Sair" << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    
    switch(opc){
        case 1:
            this->empilhar();
            this->menu();
            break;
        case 2:
            this->desempilhar();
            this->menu();
            break;
        case 3:
            this->mostrarPilha();
            this->menu();
            break;
        case 4:
            this->pesquisar();
            this->menu();
            break;
        case 0:
            cout << "Saindo." << endl;
            break;
        default:
            cout << "Opc Invalida." << endl;
            this->menu();
    }
    
}

void cPilha::empilhar(){
    
    int valor;
    cout << "Digite o valor à ser empilhado: ";
    aux = (struct no*)malloc(sizeof(aux));
    cin >> aux->valor;
    
    aux->ant = topo;
    topo = aux;
    
}

bool cPilha::vazio(struct no *structRecebido){
    
    if(structRecebido == NULL)
        return true;
    else 
        return false;
                
    
}

void cPilha::desempilhar(){
    
    if(!vazio(topo)){
        aux = topo;
        topo = topo->ant;
        free(aux);
        cout << "\nRemovido." << endl;
    }
}

void cPilha::mostrarPilha(){
    
    no *p;
    p = topo;
    while(!vazio(p->ant)){
        cout << p->valor << endl;
        p = p->ant;
    }
    cout << p->valor << endl;
}

void cPilha::pesquisar(){
    
    int chave;
    cout << "Digite o valor para pesquisar: ";
    cin >> chave;
    
    for(aux = topo; aux != NULL; aux = aux->ant){
        if(chave == aux->valor){
            cout << "Valor encontrado." << endl;
        }else{
            cout << "Valor nao esta na pilha." << endl;
        }      
    }    
}