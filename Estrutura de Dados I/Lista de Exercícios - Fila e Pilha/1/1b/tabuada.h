#ifndef TABUADA_H
#define TABUADA_H

class tabuada {
public:
    tabuada();
    tabuada(const tabuada& orig);
    virtual ~tabuada();
    
    int tabuadaRecursiva(int numero, int multip);
    void mostrar(int numero);
    void lerNumero();
    
private:

};

#endif /* TABUADA_H */

