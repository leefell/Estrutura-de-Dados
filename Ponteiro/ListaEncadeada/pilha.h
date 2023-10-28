#ifndef PILHA_H
#define PILHA_H

class pilha {
public:
    
    struct no{
        int valor;
        struct no *ant;
    };
    
    no *topo, *aux;
    
    pilha();
    pilha(const pilha& orig);
    virtual ~pilha();
    
    void mostrarValores();
    void pesquisarValor();
    void removerValor();
    void inserirValor();
    void menu();
    bool vazio(struct no *structRecebido);
    
private:

};

#endif /* PILHA_H */

