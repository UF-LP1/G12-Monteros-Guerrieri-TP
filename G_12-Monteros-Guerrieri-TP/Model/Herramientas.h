
#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include "Articulos.h"
#include "Art_ferr.h"

class Herramientas{
public: 
    Herramientas(string nnombre, unsigned int nprecio, unsigned int ncantidad, unsigned int cseguro, unsigned int cprecio_dia);
    ~Herramientas();
private:
    unsigned int seguro;
    unsigned int precio_dia;
    const string Nombre_art;
    unsigned int Precio;
    unsigned int cantidad;
};

#endif //_HERRAMIENTAS_H