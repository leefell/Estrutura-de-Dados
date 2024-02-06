#ifndef CIRCULAR_H
#define CIRCULAR_H

struct no{
    
    int valor;
    struct no *ant, *prox;
    
};

class circular {
public:
    
    no *inicio, *fim, *aux;
    
    circular();
    circular(const circular& orig);
    virtual ~circular();
    
    void menu();
    void mostrar();
    void inserir();
    void remover();
    
private:

};

#endif /* CIRCULAR_H */

