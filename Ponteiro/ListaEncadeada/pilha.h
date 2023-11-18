#ifndef PILHA_H
#define PILHA_H

struct no{
    
    int valor;
    struct no *ant;
    
};

class pilha {
public:
    
    no *aux;
    no *topo;
    
    pilha();
    pilha(const pilha& orig);
    virtual ~pilha();
    
    void menu();
    void empilhar();
    bool vazio(struct no *recebido);
    void desempilhar();
    void mostrar();
    void pesquisar();
    void retornarElementoMeio();
    no* retornarEnderecoElementoMeio();
    
private:

};

#endif /* PILHA_H */

