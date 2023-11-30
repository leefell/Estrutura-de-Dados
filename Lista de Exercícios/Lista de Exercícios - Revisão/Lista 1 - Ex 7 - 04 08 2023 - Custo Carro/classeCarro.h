#ifndef CLASSECARRO_H
#define CLASSECARRO_H

class classeCarro {
public:
    classeCarro();
    classeCarro(const classeCarro& orig);
    virtual ~classeCarro();
    
    void precoFabrica();
    double calculo(double a);
    
private:

};

#endif /* CLASSECARRO_H */

