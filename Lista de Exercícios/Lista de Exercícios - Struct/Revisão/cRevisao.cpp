#include "cRevisao.h"
#include <iostream>
using namespace std;
cRevisao::cRevisao() {
}

cRevisao::cRevisao(const cRevisao& orig) {
}

cRevisao::~cRevisao() {
}

void cRevisao::insert(){
    
    long int pesqCPF = 0;
    sPessoa vetor[2];
    for(int i = 0; i < 2; i++){
        cout << "Digite o nome: ";
        cin >> vetor[i].nome;
        cout << "Digite o CPF: ";
        cin >> vetor[i].cpf;
        cout << "Digite a altura: ";
        cin >> vetor[i].altura;
        cout << "Digite o Peso: ";
        cin >> vetor[i].peso;
        cout << endl;
    }
    
    this->imprimir(vetor,2);
    this->BubbleSort(vetor,2);
    this->imprimir(vetor,2);
    
    cout<<"Digite CPF a ser pesquisado "<<endl;
    cin>>pesqCPF;
    
    cout << this->IMC(vetor, this->pesquisaBinaria(vetor, 2, pesqCPF));
    
}

void cRevisao::imprimir(sPessoa *vetor, int valor){
    
    for(int i = 0; i < 2; i++){
        cout << "Nome: " << vetor[i].nome << endl;
        cout << "CPF: " << vetor[i].cpf << endl;
    }
}

float cRevisao::IMC(sPessoa *vetor, int i){
    float imc = vetor[i].peso / (vetor[i].altura * vetor[i].altura);
return imc;
}

int cRevisao::pesquisaBinaria(sPessoa *vetor, int qtde, int chave){
    int inf,sup,meio;
    inf=0;
    sup=qtde-1;
    while (inf<=sup){
        meio=(inf+sup)/2;
        if (chave==vetor[meio].cpf)
            return meio;
        else if (chave<vetor[meio].cpf)
            sup=meio-1;
        else
            inf=meio+1;
    }
    return -1; /* não encontrado */
}

void cRevisao::BubbleSort(sPessoa *VetPessoa, int qtde){
    int i=0, j=0, z=0;
    sPessoa temp;
    for (i= qtde-1; i >= 1; i--) {
        for (j= 0; j < i ;j++) {
            if (VetPessoa[j].cpf > VetPessoa[j+1].cpf) {
                temp = VetPessoa[j];
                VetPessoa[j] = VetPessoa[j+1];
                VetPessoa[j+1] = temp;
            }
        }
    }
}