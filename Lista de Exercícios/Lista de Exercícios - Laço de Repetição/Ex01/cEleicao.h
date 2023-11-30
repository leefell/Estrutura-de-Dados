#ifndef CELEICAO_H
#define CELEICAO_H

class cEleicao {
public:
    cEleicao();
    cEleicao(const cEleicao& orig);
    virtual ~cEleicao();
    
    void menu();
    void lerVotos(int votos);
    void imprimir(float c1, float c2, float c3, float c4, float n, float qtd, float b);
    
private:

};

#endif /* CELEICAO_H */

