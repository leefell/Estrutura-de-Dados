#ifndef CPLANO_H
#define CPLANO_H

class cPlano {
public:
    
    int x1, y1, x2, y2;
    
    cPlano();
    cPlano(const cPlano& orig);
    virtual ~cPlano();
    
    void lerPontos();
    float calcularDE();
    
private:

};

#endif /* CPLANO_H */

