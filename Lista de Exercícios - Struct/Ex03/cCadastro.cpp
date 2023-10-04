#include <iostream>
#include "cCadastro.h"
#include <cmath>
#include <string>
using namespace std;

cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::qtdPessoas(){
    
    int qtd;
    cout << "Digite quantas pessoas serao cadastradas: ";
    cin >> qtd;
    
    this->insert(qtd);
}

void cCadastro::insert(int qtd){
    
    sPessoa vetor[qtd];
    for(int i = 0; i < qtd; i++){
        cout << "Digite o nome: ";
        cin >> vetor[i].nome;
        cout << "Digite o CPF: ";
        cin >> vetor[i].cpf;
        cout << "Digite a altura: ";
        cin >> vetor[i].altura;
        cout << "Digite o peso: ";
        cin >> vetor[i].peso;
        cout << "Digite o sexo [M]/[F]: ";
        cin >> vetor[i].sexo;
        cout << endl;
    }
    
    this->escolherPesquisa(qtd, vetor);
    
}

void cCadastro::bubbleSort(int qtd, sPessoa *vetor){
    sPessoa temp;
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < 1; j++){
            if(vetor[j].cpf > vetor[j + 1].cpf){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }  
}

void cCadastro::pesquisaBinaria(int qtd, sPessoa *vetor, int chave){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(chave == vetor[meio].cpf){
            cout << "Nome: " << vetor[meio].nome << endl;
            cout << "IMC: " << this->imc(vetor[meio].altura, vetor[meio].peso) << endl;
            return;
        }else if(chave < vetor[meio].cpf){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
    cout << "CPF nao encontrado!" << endl;
}

void cCadastro::pesquisaSequencial(int qtd, sPessoa *vetor, int chave){
    
    for(int i = 0; i < qtd; i++){
        if(chave == vetor[i].cpf){
            cout << "Nome: " << vetor[i].nome << endl;
            cout << "IMC: " << this->imc(vetor[i].altura, vetor[i].peso) << endl;
            return;
        }else{
            cout << "CPF nao encontrado!" << endl;
        }
    }
}

float cCadastro::imc(float a, float p){
   
    return p/(pow (a,2));
    
}

void cCadastro::escolherPesquisa(int qtd, sPessoa *vetor){
    
    char escolha;
    int pesquisarCPF;
    
    cout << "Digite o CPF a ser pesquisado:";
    cin >> pesquisarCPF;
    cout << "\nEscolha a opcao de Pesquisa: " << endl;
    cout << "[S] - Pesquisa Sequencial" << endl;
    cout << "[B] - Pesquisa Binaria" << endl;
    cin >> escolha;
    
    if(escolha == 'S' || escolha == 's'){
        this->pesquisaSequencial(qtd, vetor, pesquisarCPF);
    }else if(escolha == 'B' || escolha == 'b'){
        this->bubbleSort(qtd, vetor);
        this->pesquisaBinaria(qtd, vetor, pesquisarCPF);
    }else{
        cout << "Opcao Invalida!" << endl;
    }
}
