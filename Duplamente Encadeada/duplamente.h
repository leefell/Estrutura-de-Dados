#ifndef DUPLAMENTE_H
#define DUPLAMENTE_H

struct no{
    
    int valor;
    struct no *ant, *prox;
    
};

class duplamente {
public:
    duplamente();
    duplamente(const duplamente& orig);
    virtual ~duplamente();
    
    no *aux, *inicio, *fim;
    
    bool jaInserido(int n);
    void menu();
    void inserir();
    void remover();
    void mostrar();
    no* pesquisar(int valor);
    int calcularMeio();
    int retornarElementoMeio();
    no* retornarEnderecoMeio();
    
private:
    
};

#endif /* DUPLAMENTE_H */

