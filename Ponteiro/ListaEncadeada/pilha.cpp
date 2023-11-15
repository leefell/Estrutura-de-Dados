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

void pilha::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Empilhar " << endl;
    cout << "[2] - Desempilhar" << endl;
    cout << "[3] - Mostrar valores da pilha " << endl;
    cout << "[4] - Pesquisar valor na pilha " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->empilhar();
            this->menu();
            break;
        case 2:
            this->desempilhar();
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
        case 0:
            cout << "Saindo." << endl;
            break;
        default:
            cout << "Opcao Invalida. Insira novamente" << endl;
            this->menu();
    }

}

void pilha::empilhar() {

    int x;

    cout << "Digite o valor para empilhar: ";
    aux = (struct no*) malloc(sizeof (aux));
    cin >> x;

    this->aux->valor = x;
    this->aux->ant = this->topo;
    this->topo = this->aux;

}

bool pilha::vazio(struct no *recebido) {

    if (recebido == NULL)
        return true;
    else
        return false;

}

void pilha::desempilhar() {

    if (!vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        cout << "\nO elemento desempilhado foi: " << this->aux->valor << endl;
        free(this->aux);
    }
}

void pilha::mostrar() {

    no *p;
    p = this->topo;
    while (!vazio(p->ant)) {
        cout << p -> valor << endl;
        p = p->ant;
    }

    cout << p->valor << endl;
}

void pilha::pesquisar() {

    int chave;
    cout << "Digite um valor para verificar se esta empilhado: ";
    cin >> chave;


    for (aux = topo; aux != NULL; aux = aux->ant) {
        if (chave == this->aux->valor) {
            cout << "Valor esta empilhado." << endl;
        } else {
            cout << "Valor nao esta empilhado." << endl;
        }
    }
}
