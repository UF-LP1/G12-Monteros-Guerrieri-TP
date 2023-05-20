/**
 * Project Untitled
 */


#ifndef _ART_BAZAR_H
#define _ART_BAZAR_H

#include "Articulos.h"


class Art_Bazar:public Articulos {

protected: 
    
public:
    Art_Bazar(string nnombre, unsigned int nprecio, unsigned int ncantidad);
    ~Art_Bazar();


};

#endif //_ART_BAZAR_H