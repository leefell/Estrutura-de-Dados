#ifndef CCADASTRO_H
#define CCADASTRO_H
#include <string>

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
    
    //tanto no header quanto no cpp é preciso colocar * no começo ou [] no final ;
    int cadastroAlunos();
    void preencher(int qtd);
    void mostrar(int qtd, sAluno *vetorAlunos);
    float media(float n1, float n2);
    
private:

};

#endif /* CCADASTRO_H */

