#ifndef CIDADE_H
#define CIDADE_H

class cIdade {
public:
    
    int idade, meses, dias;
    int idadeTotalEmDias;
    
    cIdade();
    cIdade(const cIdade& orig);
    virtual ~cIdade();
    
    void lerIdade();
    int calculoIdade();
    
private:

};

#endif /* CIDADE_H */

