#ifndef CEXPRESSAO_H
#define CEXPRESSAO_H

class cExpressao {
public:
    
    cExpressao();
    cExpressao(const cExpressao& orig);
    
    void lerNumeros();
    float calcularExpressao(int a, int b, int c);
    
    virtual ~cExpressao();
private:

};

#endif /* CEXPRESSAO_H */

