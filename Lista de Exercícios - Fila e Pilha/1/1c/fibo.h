#ifndef FIBO_H
#define FIBO_H

class fibo {
public:
    fibo();
    fibo(const fibo& orig);
    virtual ~fibo();
    
    int calculo(int n);
    void mostrar();
    
private:

};

#endif /* FIBO_H */

