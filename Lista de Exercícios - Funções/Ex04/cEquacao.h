#ifndef CEQUACAO_H
#define CEQUACAO_H

class cEquacao {
public:
    cEquacao();
    cEquacao(const cEquacao& orig);
    virtual ~cEquacao();
    
    void insert();
    float equacao(float a, float b, float c);
    
private:

};

#endif /* CEQUACAO_H */

