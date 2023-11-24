
#ifndef CCIRCULAR_H
#define CCIRCULAR_H

struct no{
    
    int valor;
    struct no *prox, ant;
    
};


class cCircular {
public:
    
    no *aux, *fim, *inicio;
    
    cCircular();
    cCircular(const cCircular& orig);
    virtual ~cCircular();
    
    void menu();
    void inserir();
    void listar();
    
private:

};

#endif /* CCIRCULAR_H */

