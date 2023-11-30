#include <iostream>
#include "cfila.h"
using namespace std;

cfila::cfila() {

    aux = NULL;
    fim = NULL;
    inicio = NULL;

}

cfila::cfila(const cfila& orig) {
}

cfila::~cfila() {
}

void cfila::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à fila " << endl;
    cout << "[2] - Remover valor da fila " << endl;
    cout << "[3] - Mostrar valores da fila " << endl;
    cout << "[4] - Pesquisar valor da fila " << endl;
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
        case 0:
            cout << "\nSaindo." << endl;
            break;
        default:
            cout << "\nOpcao Invalida. Tente novamente: " << endl;
            this->menu();
    }
}

void cfila::inserir() {

    int elemento;
    cout << "Digite o elemento para inserir: ";
    cin >> elemento;

    if (this->verificar(elemento)) {
        cout << "Elemento já inserido na fila." << endl;
    } else {
        aux = (struct no*) malloc(sizeof (aux));
        this->aux->valor = elemento;

        if (this->inicio == NULL) {
            this->inicio = this->aux;
        } else {
            this->fim->prox = this->aux;
        }

        this->fim = this->aux;
        this->fim->prox = NULL;
    }
}

void cfila::remover() {

    if (this->inicio != NULL) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "Removido com sucesso." << endl;
    }
}

void cfila::mostrar() {

    cout << "\nValores da fila: " << endl;
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->valor << " ";
    }
}

void cfila::pesquisar() {
    int chave;

    cout << "Digite o elemebnto para pesquisar: ";
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (chave == this->aux->valor) {
            cout << "Elemento encontrado" << endl;
            return;
        }
    }

    cout << "Elemento não está presente na fila" << endl;

}

bool cfila::verificar(int elemento) {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->valor == elemento) {
            return true;
        }
    }
    return false;
}