#ifndef PILHA_H
#define PILHA_H

struct no{
    
    int valor;
    struct no *ant;
    
};

class pilha {
public:
    
    no *aux, *topo;
    
    pilha();
    pilha(const pilha& orig);
    virtual ~pilha();
    
    void menu();
    void empilhar();
    bool vazio(struct no *recebido);
    void mostrarRecursiva(struct no *p);
    
private:

};

#endif /* PILHA_H */

