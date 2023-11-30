#ifndef CLASSEIDADE_H
#define CLASSEIDADE_H

class classeIdade {
public:
    
    
    classeIdade();
    classeIdade(const classeIdade& orig);
    virtual ~classeIdade();
    
    void lerIdade();
    int calculoAnos(int a);
    int calculoMeses(int a);
    int calculoDias(int a);
    
    
private:

};

#endif /* CLASSEIDADE_H */

