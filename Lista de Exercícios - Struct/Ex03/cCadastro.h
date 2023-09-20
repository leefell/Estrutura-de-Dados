#ifndef CCADASTRO_H
#define CCADASTRO_H
#include <string>
using namespace std;
class cCadastro {
public:
    
    struct sPessoa{
        string nome;
        int cpf;
        float altura;
        float peso;
        char sexo;
    };
    
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    
    void qtdPessoas();
    void insert(int qtd);
    void bubbleSort(int qtd, sPessoa *vetor);
    void pesquisaBinaria(int qtd, sPessoa *vetor, int chave);
    void pesquisaSequencial(int qtd, sPessoa *vetor, int chave);
    float imc(float a, float p);
    void escolherPesquisa(int qtd, sPessoa *vetor);
    
private:

};

#endif /* CCADASTRO_H */

