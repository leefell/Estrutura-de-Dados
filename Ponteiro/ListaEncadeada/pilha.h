#ifndef PILHA_H
#define PILHA_H

// Forma adequada: 
//struct no{
//        int valor;
//        struct no *ant;
//    };
// se declarado dentro da classe, na hora de retornar ponteiro, ela vai dar erro
class pilha {
public:
    
    struct no{
        int valor;
        struct no *ant;
    };
    
    no *topo, *aux;
    
    pilha();
    pilha(const pilha& orig);
    virtual ~pilha();
    
    void mostrarValores();
    void pesquisarValor();
    void removerValor();
    void inserirValor();
    void menu();
    bool vazio(struct no *structRecebido);
    
private:

};

#endif /* PILHA_H */

