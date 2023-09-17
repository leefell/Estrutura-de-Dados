#ifndef CLASSEEVENTO_H
#define CLASSEEVENTO_H

class classeEvento {
public:
    
    classeEvento();
    classeEvento(const classeEvento& orig);
    virtual ~classeEvento();
    
    void duracao();
    float calculoHoras(int a);
    float calculoMinutos(int a);
    float calculoSegundos(int a);
    
private:

};

#endif /* CLASSEEVENTO_H */

