#ifndef FATORIAL_H
#define FATORIAL_H

class fatorial {
public:
    fatorial();
    fatorial(const fatorial& orig);
    virtual ~fatorial();
    
    void lerDados();
    int calcularFatorial(int n);
    
private:

};

#endif /* FATORIAL_H */

