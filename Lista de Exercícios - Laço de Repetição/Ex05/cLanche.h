#ifndef CLANCHE_H
#define CLANCHE_H

class cLanche {
public:
    cLanche();
    cLanche(const cLanche& orig);
    virtual ~cLanche();
    
    void menu();
    int pedido();
    int quantidade();
    void mostrar(float total);
    
private:

};

#endif /* CLANCHE_H */

