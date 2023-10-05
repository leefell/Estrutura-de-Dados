#include <iostream>
#include "cProdutos.h"
using namespace std;
cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos::qtdProdutos(){
    
    int qtd;
    cout << "Digite a quantidade de cadastros: ";
    cin >> qtd;
    
    this->cadastrar(qtd);
    
}

void cProdutos::cadastrar(int qtd){
    
    sProdutos vetor[qtd];
    
    for(int i = 0; i < qtd; i++){
    cout << "\nCadastrando um novo produto." << endl;    
    cout << "Nome: ";
    cin >> vetor[i].nome;
    cout << "Codigo: ";
    cin >> vetor[i].codigo;
    cout << "Preco R$: ";
    cin >> vetor[i].preco;
    
  }
   
    this->consulta(qtd, vetor);
    
}

void cProdutos::sort(int qtd, sProdutos *vetor){
    
    sProdutos temporaria;
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < 1; j++){
            if(vetor[i].codigo > vetor[j+1].codigo){
                temporaria = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j+1] = temporaria;
            }
        }
    }
}

void cProdutos::pesquisaBinaria(int qtd, sProdutos* vetor, int indice){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(indice == vetor[meio].codigo){
            cout << "Produto: " << vetor[meio].nome << "\nPreco: " << vetor[meio].preco << endl;
            return;
        }else if(indice < vetor[meio].codigo){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
    cout << "Codigo nao encontrado. " << endl;
}

void cProdutos::consulta(int qtd, sProdutos *vetor){
    
    int codigoPesq;
    
    cout << "\nDigite o codigo do produto a ser consultado o preco: ";
    cin >> codigoPesq;
    
    this->sort(qtd, vetor);
    this->pesquisaBinaria(qtd, vetor, codigoPesq);
    
}
