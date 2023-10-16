#include <iostream>
#include "Cadastro.h"
using namespace std;
Cadastro::Cadastro() {
}

Cadastro::Cadastro(const Cadastro& orig) {
}

Cadastro::~Cadastro() {
}

void Cadastro::insert(){
    
    int qtd = 10;
    sPessoa array[qtd];
    
    for(int i = 0; i < qtd; i++){
        cout << "\nCadastrando nova pessoa" << endl;
        cout << "Nome: ";
        cin >> array[i].nome;
        cout << "CPF: ";
        cin >> array[i].cpf;
        cout << "Peso: ";
        cin >> array[i].peso;
        cout << "Altura: ";
        cin >> array[i].altura;
    }
    
    this->mostrar(qtd, array);
    
}

void Cadastro::mostrar(int qtd, sPessoa *array){
    
    string pesqCpf;
    cout << "Digite o CPF para imprimir o IMC: ";
    cin >> pesqCpf;
    
    this->sort(qtd, array);
    this->pesquisaBinaria(qtd, array, pesqCpf);
    
}

void Cadastro::sort(int qtd, sPessoa *array){
    
    sPessoa temp;
    for(int i = qtd - 1; i >= 1; i--){
        for(int j = 0; j < 1; j++){
            if(array[j].cpf > array[j+1].cpf){
                temp = array[j+1];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int Cadastro::pesquisaBinaria(int qtd, sPessoa *array, string indice){
    
    int inf, sup, meio;
    inf = 0;
    sup = qtd - 1;
    while(inf <= sup){
        meio = (inf + sup)/2;
        if(indice == array[meio].cpf){
            cout << "O IMC do " << array[meio].nome << " e: " << this->imc(array[meio].peso, array[meio].altura) << endl;
            return meio;
        }else if(indice < array[meio].cpf){
            sup = meio - 1;
        }else{
            inf = meio + 1;
        }
    }
    cout << "CPF nao encontrado!" << endl;
}

float Cadastro::imc(float p, float a){
    
    return p/(a*a);
    
}
