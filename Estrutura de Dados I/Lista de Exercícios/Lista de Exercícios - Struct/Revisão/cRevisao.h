#ifndef CREVISAO_H
#define CREVISAO_H
#include <string>

using namespace std;
class cRevisao {
public:
    
    struct sPessoa{
        string nome;
        float peso, altura;
        int cpf;
    };
    
    cRevisao();
    cRevisao(const cRevisao& orig);
    virtual ~cRevisao();
    
    void insert();
    void imprimir(sPessoa *vetor, int valor);
    float IMC(sPessoa *vetor, int i);
    void BubbleSort(sPessoa *VetPessoa, int qtde);
    int pesquisaBinaria(sPessoa *vetor, int qtde, int chave);
    
private:

};

#endif /* CREVISAO_H */

