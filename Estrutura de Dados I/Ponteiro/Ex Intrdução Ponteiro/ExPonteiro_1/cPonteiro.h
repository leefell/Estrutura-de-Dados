#ifndef CPONTEIRO_H
#define CPONTEIRO_H

class cPonteiro {
public:
    cPonteiro();
    cPonteiro(const cPonteiro& orig);
    virtual ~cPonteiro();
    
    void insert();
    void calculo(int *n1, int *n2, int *soma, int *subtracao, int *multiplicacao);
    
private:

};

#endif /* CPONTEIRO_H */