#ifndef CPILHA_H
#define CPILHA_H

struct no{
    
    int valor;
    struct no *ant;
    
};

class cPilha {
public:
    
    no *aux, *topo;
    
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    void menu();
    void inserir();
    void remover();
    void mostrar();
    void pesquisar();
    bool jaInserido(int n);
    int calcularMeio();
    int retonarElementoMeio();
    no* retornarEnderecoMeio();
    
private:

};

#endif /* CPILHA_H */
