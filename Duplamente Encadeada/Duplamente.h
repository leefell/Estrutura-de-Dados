#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

//deque

struct no{
    
    int valor;
    struct no *prox, *ant;
    
};

class Duplamente {
public:
    
    no *aux, *inicio, *fim;
    
    Duplamente();
    Duplamente(const Duplamente& orig);
    virtual ~Duplamente();

    bool jaInserido(int n);
    void menu();
    void inserir();
    void remover();
    void mostrar();
    no* pesquisar(int chave);
    
    
private:

};
#endif /* DUPLAMENTE_H */
