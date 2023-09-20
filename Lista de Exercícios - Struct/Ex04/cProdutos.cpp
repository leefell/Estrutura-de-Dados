#include <iostream>
#include "cProdutos.h"
#include <string>

using namespace std;

cProdutos::cProdutos() {
}

cProdutos::cProdutos(const cProdutos& orig) {
}

cProdutos::~cProdutos() {
}

void cProdutos::qtdProdutos(){
    
    int qtd;
    cout << "Insira quantos produtos serao cadastrados: ";
    cin >> qtd;
   
    this->insert(qtd);
}

void cProdutos::insert(int qtd){
    
    sProdutos vetor[qtd];
    for(int i = 0; i < qtd; i++){
        cout << "Insira o nome do produto: ";
        cin >> vetor[i].nome;
        cout << "Insira o codigo do produto: ";
        cin >> vetor[i].codigo;
        cout << "Insira o Valor do produto em R$: ";
        cin >> vetor[i].preco;
        cout << endl;
    }
    
    this->imprimir(qtd, vetor);
    
    int codigoPesquisa;
    cout << "\nInforme o código do produto para ver o preco: ";
    cin >> codigoPesquisa;
    
    this->pesquisaBinaria(qtd, vetor, codigoPesquisa);
    
}

void cProdutos::imprimir(int qtd, sProdutos *vetor){
    cout << "Produto ---------------------- Codigo" << endl;
    for(int i = 0; i < qtd; i++){
        cout << vetor[i].nome << " ---------------------- " << vetor[i].codigo << endl;
    }   
}

void cProdutos::bubbleSort(int qtd, sProdutos *vetor){
    
    sProdutos temp;
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < i; j++){
            if(vetor[i].codigo > vetor[i].codigo){
                temp = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temp;
            }
        }
    }
}

void cProdutos::pesquisaBinaria(int qtd, sProdutos *vetor, int chave){
    this->bubbleSort(qtd, vetor);
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(chave == vetor[meio].codigo){
            cout << vetor[meio].nome << " - R$" << vetor[meio].preco << endl;
            return;
        }else if(chave < vetor[meio].codigo){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
}