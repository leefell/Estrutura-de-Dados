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
    cout << "[5] - Retornar elemento do meio" << endl;
    cout << "[6] - Retornar endereco do elemento do meio" << endl;
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
        case 5:
            this->retornarElementoMeio();
            this->menu();
            break;
        case 6:
            this->retornarEnderecoElementoMeio();
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

bool pilha::jaInserido(int n) {

    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant){
        if(this->aux->valor == n){
            return true;
        }
    }
    return false;
}

void pilha::empilhar() {

    int x;

    cout << "Digite o valor para empilhar: ";
    cin >> x;

    if(this->jaInserido(x)){
        cout << "O elemento ja esta empilhado." << endl;
    }else{
        this->aux = (struct no*) malloc(sizeof (aux));
        this->aux->ant = NULL; // nao pegar sujeira
        this->aux->valor = x;
        this->aux->ant = topo;
        this->topo = this->aux;
        cout << "Elemento empilhado." << endl;
    }
}

bool pilha::vazio(struct no *recebido) {

    if (recebido == NULL)
        return false;
    else
        return true;

}

void pilha::desempilhar() {

    if (vazio(this->topo)) {
        this->aux = this->topo;
        this->topo = this->topo->ant;
        cout << "\nO elemento desempilhado foi: " << this->aux->valor << endl;
        free(this->aux);
    }
}

void pilha::mostrar() {

    no *p;
    p = this->topo;
    while (vazio(p->ant)) {
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
            return;
        }
    }
    cout << "Valor nao esta empilhado. " << endl;
}

void pilha::retornarElementoMeio() {
    int i = 0;

    // Contar o número de elementos na pilha
    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        i++;
    }

    int meio = i / 2;
    int j = 0;

    // Resetar aux para o topo da pilha
    this->aux = this->topo;

    // Encontrar o elemento do meio
    while (this->vazio(this->aux)) {
        if (j == meio) {
            cout << "\nValor do meio da pilha: " << this->aux->valor;
            return;
        }

        j++;
        this->aux = this->aux->ant;
    }
}

no* pilha::retornarEnderecoElementoMeio() {

    //A unica diferença entre o metodo retornarElementoMeio() e o retornarEnderecoElementoMeio()
    //é que inves de this->aux->valor é this->aux, entao ele vai retornar o endereço de aux        

    int i = 0;

    // Contar o número de elementos na pilha
    for (this->aux = this->topo; this->aux != NULL; this->aux = this->aux->ant) {
        i++;
    }

    int meio = i / 2;
    int j = 0;

    // Resetar aux para o topo da pilha
    this->aux = this->topo;

    // Encontrar o elemento do meio
    while (this->vazio(this->aux)) {
        if (j == meio) {
            cout << "\nEndereco do elemento do meio da pilha: " << this->aux;
            return this->aux;
        }

        j++;
        this->aux = this->aux->ant;
    }
}
