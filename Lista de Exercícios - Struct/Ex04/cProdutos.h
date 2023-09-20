#ifndef CPRODUTOS_H
#define CPRODUTOS_H
#include <string>
using namespace std;
class cProdutos {
public:
    
    struct sProdutos{
        
        int codigo;
        string nome;
        double preco;
        
    };
    
    cProdutos();
    cProdutos(const cProdutos& orig);
    virtual ~cProdutos();
    
    void qtdProdutos();
    void insert(int qtd);
    void imprimir(int qtd, sProdutos *vetor);
    void pesquisaBinaria(int qtd, sProdutos *vetor, int chave);
    void bubbleSort(int qtd, sProdutos *vetor);
    
private:

};

#endif /* CPRODUTOS_H */

