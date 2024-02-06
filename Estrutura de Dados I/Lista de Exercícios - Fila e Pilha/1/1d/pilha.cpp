#include <iostream>
#include "pilha.h"
using namespace std;
pilha::pilha() {
    
    aux = NULL;
    topo = NULL;
    
}

pilha::pilha(const pilha& orig) {
}

pilha::~pilha() {
}

void pilha::menu(){
    
    int opc;
    cout << "1 - Empilhar" << endl;
    cout << "2 - Mostrar Pilha" << endl;
    cout << "0 - Sair" << endl;
    cout << "Opcao: ";
    cin >> opc;
    
    switch(opc){
        case 1:
            this->empilhar();
            this->menu();
            break;
        case 2:
            this->mostrarRecursiva(topo);
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void pilha::empilhar(){
    
    no *p;
    
    cout << "Digite um valor para empilhar: ";
    aux = (struct no*)malloc(sizeof(aux));
    cin >>aux->valor;
    
    aux->ant = NULL;
    if(vazio(topo)){
        topo = aux;
    }else{
        p = topo;
        while(p->ant != NULL){
            p = p->ant;
        }
        p->ant = aux;
    }
}

bool pilha::vazio(struct no *recebido){
    
    if(recebido == NULL)
        return true;
    else
        return false;
    
}

void pilha::mostrarRecursiva(struct no *p){
    
    if(!vazio(p)){
        mostrarRecursiva(p->ant);
        cout << p->valor << endl;
    }
}