#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    
    void lerNotas();
    float ponderada(float a, float b);
    float aritmetica(float a, float b);
    
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
private:

};

#endif /* CMEDIA_H */

