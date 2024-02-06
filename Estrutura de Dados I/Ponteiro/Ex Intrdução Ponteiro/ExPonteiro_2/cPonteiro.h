#ifndef CPONTEIRO_H
#define CPONTEIRO_H

class cPonteiro {
public:
    cPonteiro();
    cPonteiro(const cPonteiro& orig);
    virtual ~cPonteiro();

    void insert();
    void swap(int *n1, int *n2);
    
private:

};

#endif /* CPONTEIRO_H */
