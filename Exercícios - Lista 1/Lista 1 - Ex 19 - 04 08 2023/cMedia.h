#ifndef CMEDIA_H
#define CMEDIA_H

class cMedia {
public:
    
    void lerNota();
    double aritmetica (double n1, double n2, double n3);
    double ponderada (double n1, double n2, double n3);
    double harmonica (double n1, double n2, double n3);
      
    cMedia();
    cMedia(const cMedia& orig);
    virtual ~cMedia();
private:

};

#endif /* CMEDIA_H */

