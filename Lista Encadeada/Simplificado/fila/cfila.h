#ifndef CFILA_H
#define CFILA_H

struct no{
    
    int valor;
    struct no *prox;
    
};

class cfila {
public:
    
    no *aux, *inicio, *fim;
    
    cfila();
    cfila(const cfila& orig);
    virtual ~cfila();
    
    void menu();
    void inserir();
    void remover();
    void mostrar();
    void pesquisar();
    bool verificar(int elemento);
    
    
private:

};

#endif /* CFILA_H */

