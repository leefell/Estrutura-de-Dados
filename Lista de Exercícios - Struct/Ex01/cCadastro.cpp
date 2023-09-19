#include <iostream>
#include "cCadastro.h"

using namespace std;

cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

int cCadastro::cadastroAlunos(){
    
    int qtd;
    cout << "Digite a quantidade de alunos a serem cadastrados: ";
    cin >> qtd;
    
    this->preencher(qtd);
}

void cCadastro::preencher(int qtd){
    
    sAluno vetorAlunos[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "Digite o nome do aluno: ";
        cin >> vetorAlunos[i].nome;
        cout << "Digite a matricula do aluno: ";
        cin >> vetorAlunos[i].matricula;
        cout << "Digite a primeira nota desse aluno: ";
        cin >> vetorAlunos[i].n1;
        cout << "Digite a segunda nota desse aluno: ";
        cin >> vetorAlunos[i].n2;
        cout << endl;
        
    }
    
    this->mostrar(qtd, vetorAlunos);
    
}

void cCadastro::mostrar(int qtd, sAluno *vetorAlunos){
    
    for(int j = 0; j < qtd; j++){
        cout << "Nome: " << vetorAlunos[j].nome << endl;
        cout << "Matricula: " << vetorAlunos[j].matricula << endl;
        cout << "Nota 1: " << vetorAlunos[j].n1 << endl;
        cout << "Nota 2: " << vetorAlunos[j].n2 << endl;
        cout << "A media do aluno e: " << this->media(vetorAlunos[j].n1, vetorAlunos[j].n2) << endl;
        cout << endl;
    }
    
}

float cCadastro::media(float n1, float n2){
    
    return (n1+n2)/2;
    
}
