#include <iostream>
#include <cmath>
#include <iomanip>
#include "cCadastro.h"
using namespace std;
cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::qtdPessoas(){
    
    int qtd;
    cout << "Digite a quantidade de cadastros: ";
    cin >> qtd;
    
    this->cadastrar(qtd);
    
}

void cCadastro::cadastrar(int qtd){
    
    sPessoa vetor[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "\n Cadastrando a pessoa " << i + 1 << endl;
        cout << "\nNome: ";
        cin >> vetor[i].nome;
        cout << "CPF: ";
        cin >> vetor[i].cpf;
        cout << "Altura: ";
        cin >> vetor[i].altura;
        cout << "Peso: ";
        cin >> vetor[i].peso;
    } 
    
    this->escolherPesquisa(qtd, vetor);
    
}

void cCadastro::bubbleSort(int qtd, sPessoa *vetor){
    
    sPessoa temporario;
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < 1; j++){
            if(vetor[i].cpf > vetor[j + 1].cpf){
                temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;
            }
        }
    }  
}

void cCadastro::pesquisaSequencial(int qtd, sPessoa *vetor, int indice){
    
    for(int i = 0; i < qtd; i++){
        if(indice == vetor[i].cpf){
            cout << "O IMC do " << vetor[i].nome << " e " << setprecision(2) << this->imc(vetor[i].altura, vetor[i].peso) << endl;
            return;
        }
    }    
}

void cCadastro::pesquisaBinaria(int qtd, sPessoa *vetor, int indice){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(indice == vetor[meio].cpf){
            cout << "O IMC do " << vetor[meio].nome << " e " << setprecision(2) << this->imc(vetor[meio].altura, vetor[meio].peso) << endl;
            return;
        }else if(indice < vetor[meio].cpf){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
    cout << "CPF nao encontrado. " << endl;
}

float cCadastro::imc(float a, float p){
   
    return p/(pow (a,2));
    
}

void cCadastro::escolherPesquisa(int qtd, sPessoa *vetor){
    
    char escolha;
    int pesquisaCPF;
    
    cout << "\nDigite o CPF para pesquisa: ";
    cin >> pesquisaCPF;
    cout << "\nEscolha a opcao de Pesquisa: " << endl;
    cout << "[S] - Pesquisa Sequencial" << endl;
    cout << "[B] - Pesquisa Binaria" << endl;
    cin >> escolha;
    
    if(escolha == 'S' || escolha == 's'){
        this->pesquisaSequencial(qtd, vetor, pesquisaCPF);
    }else if(escolha == 'B' || escolha == 'b'){
        this->bubbleSort(qtd, vetor);
        this->pesquisaBinaria(qtd, vetor, pesquisaCPF);
    }else{
        cout << "Opcao Invalida ze." << endl;
    }
    
}
