#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
public:
    Calculadora();
    Calculadora(const Calculadora& orig);
    virtual ~Calculadora();
    
    void lerDados();
    void funcoes(float vet[], float vetOp[]);
    
private:

};

#endif /* CALCULADORA_H */

