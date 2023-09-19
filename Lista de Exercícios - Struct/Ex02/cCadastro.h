#ifndef CCADASTRO_H
#define CCADASTRO_H
#include <string>

using namespace std;

class cCadastro {
public:
    
    struct sPessoa{
        string nome;
        float altura;
        float peso;
        string cpf;
        char sexo;
    };
    
    cCadastro();
    cCadastro(const cCadastro& orig);
    virtual ~cCadastro();
    
    void qtdCadastros();
    void preencher(int qtd);
    void pesquisaSequencial(int qtd, sPessoa *vetorPessoa);
    float imc(float altura, float peso);
    
private:

};

#endif /* CCADASTRO_H */

