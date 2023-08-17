#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    
    float a, b, c;
    
    cExpressao();
    cExpressao(const cExpressao& orig);
    
    void lerNumeros();
    float calcularExpressao();
    
    virtual ~cExpressao();
private:

};

#endif /* CEXPRESSAO_H */

