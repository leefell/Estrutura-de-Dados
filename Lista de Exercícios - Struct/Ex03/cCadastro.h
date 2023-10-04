#include <iostream>
using namespace std;
#ifndef CCADASTRO_H
#define CCADASTRO_H

class cCadastro {
public:
    
    struct sPessoa{
        string nome;
        int cpf;
        float altura, peso;
    };
    
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    
    void qtdPessoas();
    void cadastrar(int qtd);
    void bubbleSort(int qtd, sPessoa *vetor);
    void pesquisaBinaria(int qtd, sPessoa *vetor, int indice);
    float imc(float a, float b);
    void pesquisaSequencial(int qtd, sPessoa *vetor, int indice);
    void escolherPesquisa(int qtd, sPessoa *vetor);
    void mostrar(int qtd, sPessoa *vetor);
    
private:

};

#endif /* CCADASTRO_H */

