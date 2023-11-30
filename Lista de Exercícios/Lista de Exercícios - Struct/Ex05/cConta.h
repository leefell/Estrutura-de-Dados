#ifndef CCONTA_H
#define CCONTA_H
#include <iostream>
using namespace std;
class cConta {
public:
    
    struct sConta{
        
        string nome;
        long int cpf;
        double saldo;
        
    };
    
    cConta();
    cConta(const cConta& orig);
    virtual ~cConta();
    
    void iniciarConta();
    void saque(sConta *vetor);
    void deposito(sConta *vetor);
    void mostrarDono(int qtd, sConta *vetor);
    int pesquisaSequencial(int qtd, sConta *vetor, int indice);
    
private:

};

#endif /* CCONTA_H */

