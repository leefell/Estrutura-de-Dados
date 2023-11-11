#ifndef CFILA_H
#define CFILA_H

struct no{
    
    int valor;
    struct no *prox;
    
};

class cFila {
public:
    
    no *inicio, *fim, *aux;
    
    cFila();
    cFila(const cFila& orig);
    virtual ~cFila();
    
    void menu();
    void adicionarFila();
    bool vazio(struct no *recebido);
    void removerFila();
    void mostrarFila();
    void pesquisarFila();
private:

};

#endif /* CFILA_H */

