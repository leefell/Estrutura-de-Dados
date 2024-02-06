#ifndef CPRODUTOS_H
#define CPRODUTOS_H
#include <iostream>

using namespace std;
class cProdutos {
public:
    
    struct sProdutos{
        
        string nome;
        int codigo;
        float preco;
        
    };
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void qtdProdutos();
    void cadastrar(int qtd);
    void sort(int qtd, sProdutos *vetor);
    void pesquisaBinaria(int qtd, sProdutos *vetor, int indice);
    void consulta(int qtd, sProdutos *vetor);
    
private:

};

#endif /* CPRODUTOS_H */

