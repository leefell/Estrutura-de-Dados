#ifndef CCOMPRA_H
#define CCOMPRA_H

class cCompra {
public:
    cCompra();
    cCompra(const cCompra& orig);
    virtual ~cCompra();
    
    void lerProdutos();
    double calculo(int opc, int qtd);
    
private:

};

#endif /* CCOMPRA_H */

