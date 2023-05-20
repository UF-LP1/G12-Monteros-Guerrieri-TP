/**
 * Project Untitled
 */


#ifndef _ART_FERR_H
#define _ART_FERR_H

#include "Articulos.h"
#include <string>


class Art_ferr :public Articulos{
public:
    Art_ferr(string nnombre, unsigned int nprecio, unsigned int ncantidad, bool nHerramienta);
    ~Art_ferr();
protected: 
    
 
};

#endif //_ART_FERR_H