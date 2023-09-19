#include <iostream>
#include "cCadastro.h"
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

cCadastro::cCadastro() {
}

cCadastro::cCadastro(const cCadastro& orig) {
}

cCadastro::~cCadastro() {
}

void cCadastro::qtdCadastros() {

    int qtd;

    cout << "Digite a quantidade de pessoas a serem cadastradas: ";
    cin >> qtd;

    this->preencher(qtd);
}

void cCadastro::preencher(int qtd) {

    sPessoa vetorPessoa[qtd];

    for (int i = 0; i < qtd; i++) {
        cout << "Digite o nome da pessoa: ";
        cin >> vetorPessoa[i].nome;
        cout << "Digite a altura da pessoa: ";
        cin >> vetorPessoa[i].altura;
        cout << "Digite o peso da pessoa: ";
        cin >> vetorPessoa[i].peso;
        cout << "Digite o cpf da pessoa: ";
        cin >> vetorPessoa[i].cpf;
        cout << "Digite o sexo da pessoa [M]/[F]: ";
        cin >> vetorPessoa[i].sexo;
        cout << endl << endl;
    }

    this->pesquisaSequencial(qtd, vetorPessoa);

}

void cCadastro::pesquisaSequencial(int qtd, sPessoa *vetorPessoa) {

    string cpf;
    
    cout << "Digite o CPF para pesquisar: ";
    cin >> cpf;
    for (int i = 0; i < qtd; i++) {
        if(cpf == vetorPessoa[i].cpf){
            cout << "O IMC do " << vetorPessoa[i].nome << " e: " 
                    << setprecision(2) << this->imc(vetorPessoa[i].altura, vetorPessoa[i].peso) << endl;
            return;
        }      
    } 
}

float cCadastro::imc(float altura, float peso){
    
    return peso/(pow (altura,2));
    
}