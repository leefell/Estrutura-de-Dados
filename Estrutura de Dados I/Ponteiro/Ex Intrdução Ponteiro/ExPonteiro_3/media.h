#ifndef MEDIA_H
#define MEDIA_H

class media {
public:
    media();
    media(const media& orig);
    virtual ~media();
    
    void lerNotas();
    void aritmetica(double *a, double *b, double *c, double *media);
    
private:

};

#endif /* MEDIA_H */

