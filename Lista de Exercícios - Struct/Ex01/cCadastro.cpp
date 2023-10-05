#include <iostream>
#include "cCadastro.h"
using namespace std;
cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::qtdAlunos(){
    
    int qtd;
    cout << "Digite a quantidade de cadastros: ";
    cin >> qtd;
    
    this->cadastrar(qtd);
}

void cCadastro::cadastrar(int qtd){
    
    sAluno vetor[qtd];
    
    for(int i = 0; i < qtd; i++){
    cout << "\nCadastrando novo aluno." << endl;
    cout << "Nome: ";
    cin >> vetor[i].nome;
    cout << "Matricula: ";
    cin >> vetor[i].matricula;
    cout << "Nota 1: ";
    cin >> vetor[i].n1;
    cout << "Nota 2: ";
    cin >> vetor[i].n2;   
    }
    
    this->imprimir(qtd, vetor);
    
}

float cCadastro::media(float a, float b){
    
    return (a+b)/2;
    
}

void cCadastro::imprimir(int qtd, sAluno *vetor){
    
    for(int i = 0; i < qtd; i++){
    cout << "\nNome: " << vetor[i].nome << endl;
    cout << "Media: " << this->media(vetor[i].n1, vetor[i].n2) << endl;
    }    
}
