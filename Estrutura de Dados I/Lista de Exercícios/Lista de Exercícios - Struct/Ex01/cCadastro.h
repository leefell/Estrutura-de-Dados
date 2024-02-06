#ifndef CCADASTRO_H
#define CCADASTRO_H
#include <iostream>
using namespace std;
class cCadastro {
public:
    
    struct sAluno{
        
        string nome;
        string matricula;
        float n1, n2;
        
    };
    
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    
    void qtdAlunos();
    void cadastrar(int qtd);
    float media (float a, float b);
    void imprimir(int qtd, sAluno *vetor);
    
private:

};

#endif /* CCADASTRO_H */

