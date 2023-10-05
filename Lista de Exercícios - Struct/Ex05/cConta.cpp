#include <iostream>
#include "cConta.h"
using namespace std;
cConta::cConta() {
}

cConta::cConta(const cConta& orig) {
}

cConta::~cConta() {
}

void cConta::iniciarConta(){
     
    sConta vetor[3];
    int opc;
    for(int i = 0; i < 3; i++){
        cout << "\nIniciando uma nova Conta" << endl;
        cout << "Nome: ";
        cin >> vetor[i].nome;
        cout << "CPF: ";
        cin >> vetor[i].cpf;
        cout << "Digite o valor do deposito Inicial: ";
        cin >> vetor[i].saldo;
        cout << endl;
    }
    
    while(opc != -1){
        cout << "\nOperacoes Disponiveis: " << endl;
        cout << "[1] - Sacar dinheiro." << endl;
        cout << "[2] - Depositar dinheiro." << endl;
        cout << "[-1] - Sair" << endl;
        cin >> opc;
        
        switch(opc){
            case 1:
                this->saque(vetor);
                break;
            case 2:
                this->deposito(vetor);
                break;
            case -1:
                break;
            default:
                cout << "Opcao Invalida." << endl;
                    
        }
    } 
}

void cConta::mostrarDono(int qtd, sConta *vetor){
    
    cout << "Proprietario da conta: " << vetor[qtd].nome;
    cout << "\nSaldo atual: " << vetor[qtd].saldo << endl;
    
}

int cConta::pesquisaSequencial(int qtd, sConta *vetor, int indice){
    
    for(int i = 0; i < qtd; i++){
        if(indice == vetor[i].cpf)
            return i;
    }
}

void cConta::saque(sConta *vetor){
    
    float saque;
    int pesqCPF;
    int auxiliar;
    
    cout << "Insira o CPF cadastrado à conta do saque: ";
    cin >> pesqCPF;
    
    auxiliar = this->pesquisaSequencial(3, vetor, pesqCPF);
    if(auxiliar == -1)
        cout << "Conta incorreta/Invalida. " << endl;
    else{
        cout << "Digite o valor do saque: ";
        cin >> saque;
        vetor[auxiliar].saldo -= saque;
        this->mostrarDono(auxiliar, vetor);
    }
}

void cConta::deposito(sConta *vetor){
    
    float deposito;
    int pesqCPF;
    int auxiliar;
    
    cout << "Insira o CPF cadastrado à conta para deposito: ";
    cin >> pesqCPF;
    
    auxiliar = this->pesquisaSequencial(3, vetor, pesqCPF);
    if(auxiliar == -1)
        cout << "Conta incorreta/Invalida. " << endl;
    else{
        cout << "Digite o valor do deposito: ";
        cin >> deposito;
        vetor[auxiliar].saldo += deposito;
        this->mostrarDono(auxiliar, vetor);
    }
}