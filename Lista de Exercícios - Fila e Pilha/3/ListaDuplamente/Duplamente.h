#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

struct no{
    
    int valor;
    struct no *ant, *prox;
    
};

class Duplamente {
public:
    
    no *aux, *inicio, *fim;
    
    Duplamente();
    Duplamente(const Duplamente& orig);
    virtual ~Duplamente();
    
    void menu();
    void inserir();
    void remover();
    void mostrar();
    no* pesquisar(int chave);
    
private:

};

#endif /* DUPLAMENTE_H */

