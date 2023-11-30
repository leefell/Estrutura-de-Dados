#ifndef CESFERA_H
#define CESFERA_H

class cEsfera {
public:
    cEsfera();
    cEsfera(const cEsfera& orig);
    virtual ~cEsfera();
    
    void insert();
    float calculo(float raio);
    
private:

};

#endif /* CESFERA_H */

