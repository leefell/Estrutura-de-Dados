#ifndef CADASTRO_H
#define CADASTRO_H
using namespace std;
#include <string>
class Cadastro {
public:
    
    struct sPessoa{
        
        string nome, cpf;
        float peso, altura;
        
    };
    
    
    Cadastro();
    Cadastro(const Cadastro& orig);
    virtual ~Cadastro();
    
    void insert();
    void mostrar(int qtd, sPessoa *array);
    void sort(int qtd, sPessoa *array);
    int pesquisaBinaria(int qtd, sPessoa *array, string indice);
    float imc(float p, float a);
    
private:

};

#endif /* CADASTRO_H */

