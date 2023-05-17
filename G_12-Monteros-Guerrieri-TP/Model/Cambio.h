/**
 * Project Untitled
 */


#ifndef _CAMBIO_H
#define _CAMBIO_H

class Cambio {

public:
    Cambio(unsigned int);
    ~Cambio();
    void set_dif_precio(unsigned int sdif);
protected: 
    
 
private: 
    unsigned int dif_precio;
};

#endif //_CAMBIO_H