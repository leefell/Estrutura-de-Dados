#ifndef CLASSESALDO_H
#define CLASSESALDO_H

class classeSaldo {
public:
    classeSaldo();
    classeSaldo(const classeSaldo& orig);
    virtual ~classeSaldo();
    
    void lerSaldo();
    double credito(double salario);
    
private:

};

#endif /* CLASSESALDO_H */

