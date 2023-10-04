#ifndef CPONTEIRO_H
#define CPONTEIRO_H

class cPonteiro {
public:
    cPonteiro();
    cPonteiro(const cPonteiro& orig);
    virtual ~cPonteiro();
    
    void insert();
    void aritmetica(double *n1, double *n2, double *media);
    
private:

};

#endif /* CPONTEIRO_H */