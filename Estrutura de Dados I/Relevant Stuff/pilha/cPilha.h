#ifndef CPILHA_H
#define CPILHA_H

struct no{
    
    int valor;
    struct no *ant;
    
};

class cPilha {
public:
    // ctrl shift enter sai do tela cheia
    no *aux, *topo;
    
    cPilha();
    cPilha(const cPilha& orig);
    virtual ~cPilha();
    
    void menu();
    void empilhar();
    bool vazio(struct no *structRecebido);
    void desempilhar();
    void mostrarPilha();
    void pesquisar();
private:

};

#endif /* CPILHA_H */

