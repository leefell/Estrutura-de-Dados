#include <iostream>
#include "duplamente.h"
using namespace std;

duplamente::duplamente() {

    this->aux = NULL;
    this->inicio = NULL;
    this->fim = NULL;

}

duplamente::duplamente(const duplamente& orig) {
}

duplamente::~duplamente() {
}

void duplamente::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à lista " << endl;
    cout << "[2] - Remover valor da lista " << endl;
    cout << "[3] - Mostrar valores da lista " << endl;
    cout << "[4] - Retornar Elemento do meio" << endl;
    cout << "[5] - Retornar Endereço do meio" << endl;
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
        case 4:
            cout << this->retornarElementoMeio();
            this->menu();
            break;
        case 5:
            cout << this->retornarEnderecoMeio();
            this->menu();
            break;
        case 0:
            cout << "Saindo" << endl;
            break;
    }
}

void duplamente::inserir() {

    int elemento;
    cout << "Digite o elemento à ser inserido: ";
    cin >> elemento;

    if (this->jaInserido(elemento)) {
        cout << "O elemento ja esta presente na lista." << endl;
    } else {
        this->aux = (struct no*) malloc(sizeof (aux));
        this->aux->valor = elemento;
        this->aux->ant = NULL;
        this->aux->prox = NULL;

        if (this->inicio == NULL) {
            this->inicio = this->aux;
            this->inicio->prox = NULL; // Como é a primeira insert, ele nao tem um prox.
        } else {
            this->fim->prox = this->aux;
            this->aux->ant = fim;
        }
        this->fim = aux;
    }
}

no* duplamente::pesquisar(int valor) {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->valor == valor) {
            return aux;
        }
    }
    return NULL;
}

void duplamente::remover() {

    int elemento;
    cout << "Digite o elemento a ser removido: ";
    cin >> elemento;

    if (this->jaInserido(elemento)) {
        aux = this->pesquisar(elemento);
        if (this->aux == this->inicio) {
            this->inicio = this->inicio->prox;
            this->inicio->ant = NULL;
        } else if (this->aux == this->fim) {
            this->fim = this->fim->ant;
            this->fim->prox = NULL;
        } else {
            this->aux->ant->prox = this->aux->prox;
            this->aux->prox->ant = this->aux->ant;
        }

        cout << "O elemento " << this->aux->valor << " foi removido da lista." << endl;
        free(this->aux);
    } else {
        cout << "O elemento não está na lista." << endl;
    }

}

void duplamente::mostrar() {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->valor << " ";
    }
}

bool duplamente::jaInserido(int n) {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->valor == n) {
            return true;
        }
    }
    return false;
}

int duplamente::calcularMeio() {

    int tamanho = 0, meio = 0;
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        tamanho++;
    }

    meio = tamanho / 2;

    return meio;
}

int duplamente::retornarElementoMeio() {

    int meio = this->calcularMeio();
    int contador = 0;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (contador == meio) {
            return this->aux->valor;
        } else {
            contador++;
        }
    }
}

no* duplamente::retornarEnderecoMeio() {

    int meio = this->calcularMeio();
    int contador = 0;

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (contador == meio) {
            return this->aux;
        } else {
            contador++;
        }
    }
}
