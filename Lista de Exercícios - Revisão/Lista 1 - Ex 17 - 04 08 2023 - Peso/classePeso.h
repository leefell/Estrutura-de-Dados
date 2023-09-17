#ifndef CLASSEPESO_H
#define CLASSEPESO_H

class classePeso {
public:
    classePeso();
    classePeso(const classePeso& orig);
    virtual ~classePeso();
    void lerDados();
    float calculo(float altura, int opcao);
    
private:

};

#endif /* CLASSEPESO_H */

