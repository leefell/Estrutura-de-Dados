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

void fila::menu() {

    int opc;
    cout << "\n=========== MENU =========== " << endl;
    cout << "[1] - Inserir valor à fila " << endl;
    cout << "[2] - Remover valor da fila " << endl;
    cout << "[3] - Mostrar valores da fila " << endl;
    cout << "[4] - Pesquisar valor da fila " << endl;
    cout << "[5] - Retornar valor do meio da fila " << endl;
    cout << "[6] - Retornar Endereco do valor do meio da fila " << endl;
    cout << "[0] - Sair" << endl;
    cout << "============================" << endl;
    cout << "Opcao: ";
    cin >> opc;

    switch (opc) {
        case 1:
            this->inserirValor();
            this->menu();
            break;
        case 2:
            this->removerValor();
            this->menu();
            break;
        case 3:
            this->mostrarValores();
            this->menu();
            break;
        case 4:
            this->pesquisarValor();
            this->menu();
            break;
        case 5:
            this->retornarMeioFila();
            this->menu();
            break;
        case 6:
            this->retornarEnderecoMeioFila();
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

bool fila::jaInserido(int n) {

    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        if (this->aux->valor == n) {
            return true;
        }
    }
    return false;
}

void fila::inserirValor() {

    // o segundo elemento ja nao entra no if pq o inicio nao vai ser null
    // First in, first out, o primeiro que entra é o primeiro que sai
    // Ponteiro recebe null, nao ZERO, 
    int num;
    cout << "Digite o valor para inserir: ";
    cin >> num;
    if (this->jaInserido(num)) {
        cout << "O elemento ja esta presente na fila." << endl;
    } else {

        this->aux = (struct no*) malloc(sizeof (aux));
        this->aux->prox = NULL; // não pegar lixo de memória.
        this->aux->valor = num;

        if (this->inicio == NULL) {
            this->inicio = this->aux;
        } else {
            this->fim->prox = aux;
        }

        this->fim = this->aux;
        this->fim->prox = NULL;
    }
}

bool fila::vazio(struct no *structRecebido) {

    if (structRecebido == NULL)
        return false;
    else
        return true;
}

void fila::removerValor() {

    if (vazio(this->inicio)) {
        this->aux = this->inicio;
        this->inicio = this->inicio->prox;
        free(this->aux);
        cout << "Removido com Sucesso.\n";

    }
}

void fila::mostrarValores() {

    cout << "\nOS valores da fila sao: " << endl;
    for (this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox) {
        cout << this->aux->valor << " ";
    }
}

void fila::pesquisarValor(){
    int chave;
    
    cout << "\nDigite um numero para verificar se esta na fila: ";
    cin >> chave;
    
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        if(chave == this->aux->valor){
            cout << "Número encontrando na fila." << endl;
            return; // early return
        }
    }
    cout << "Numero nao esta na fila." << endl;
}

void fila::retornarMeioFila(){
    
    int i = 0;
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        i++;
    }
    
    int meio = i/2;
    int j = 0;
    
    this->aux = this->inicio;
    
    while(this->vazio(this->aux)){
        if(j == meio){
            cout << "\nValor do meio da fila: " << this->aux->valor;
            return;
        }
        
        j++;
        this->aux = this->aux->prox;
    }
}

no* fila::retornarEnderecoMeioFila(){
    
    int i = 0;
    for(this->aux = this->inicio; this->aux != NULL; this->aux = this->aux->prox){
        i++;
    }
    
    int meio = i/2;
    int j = 0;
    
    this->aux = this->inicio;
    while(this->vazio(this->aux)){
        if(j == meio){
            cout << "\nEndereco do valor do meio da fila: " << this->aux;
            return this->aux;
        }
        j++;
        this->aux = this->aux->prox;
    }
}
