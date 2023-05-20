/**
 * Project Untitled
 */


#ifndef _ART_ELECTRICOS_H
#define _ART_ELECTRICOS_H

#include "Articulos.h"


class Art_electricos:public Articulos{

public:
	Art_electricos(string nnombre, unsigned int nprecio, unsigned int ncantidad, bool nHerramienta);
 ~Art_electricos();
protected:

};

#endif //_ART_ELECTRICOS_H