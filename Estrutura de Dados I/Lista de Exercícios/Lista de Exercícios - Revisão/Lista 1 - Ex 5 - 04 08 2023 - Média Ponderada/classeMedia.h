#ifndef CLASSEMEDIA_H
#define CLASSEMEDIA_H

class classeMedia {
public:
    classeMedia();
    classeMedia(const classeMedia& orig);
    virtual ~classeMedia();
    
    void lerNotas();
    float media(float n1, float n2, float n3);
    
private:

};

#endif /* CLASSEMEDIA_H */

