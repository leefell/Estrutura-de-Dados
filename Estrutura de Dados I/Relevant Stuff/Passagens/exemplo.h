#ifndef EXEMPLO_H
#define EXEMPLO_H

class exemplo {
public:
    exemplo();
    exemplo(const exemplo& orig);
    virtual ~exemplo();
    
    void lerDados();
    void imprimirDadosVal(int x, int y);
    void imprimirDadosRef(int *x, int *y);
    
private:
   
    
};

#endif /* EXEMPLO_H */

