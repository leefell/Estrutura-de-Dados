#ifndef CENADE_H
#define CENADE_H

class cEnade {
public:
    
    // Atributos
    
    int matriz[3][4];
    
    //Métodos
    cEnade(); // metodo construtor
    cEnade(const cEnade& orig); // metodo construtor
    virtual ~cEnade();
    
    void preencherMatriz();
    void imprimirMatriz();
    
private:

};

#endif /* CENADE_H */

