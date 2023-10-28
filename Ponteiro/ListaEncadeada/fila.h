
#ifndef FILA_H
#define FILA_H

class fila {
public:
       
    struct no{
        
        int valor;
        struct no *prox;
        
    };
    
    no *inicio, *fim, *aux;
    //o aux armazena temporariamente o ultimo endereço criado
    //malloc = o new() em java, criando um novo espaço na memoria
    //a funcao malloc retorna um endereco que é armazenado no aux e malloc é um ponteiro
    
    fila();
    fila(const fila& orig);
    virtual ~fila();
    
    void mostrarValores();
    void pesquisarValor();
    void removerValor();
    void inserirValor();
    void menu();
    bool vazio(struct no *structRecebido);
    
private:

};

#endif /* FILA_H */

