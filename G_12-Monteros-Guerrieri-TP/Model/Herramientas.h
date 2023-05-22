
#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H
#include "Articulos.h"
#include "Art_ferr.h"

class Herramientas{
public: 
    Herramientas(string nnombre, unsigned int nprecio, unsigned int ncantidad, unsigned int cseguro, unsigned int cprecio_dia);
    ~Herramientas();

    string get_nombre();

    unsigned int get_precio();
private:
    unsigned int seguro;
    unsigned int precio_dia;
    const string Nombre;
    unsigned int Precio;
    unsigned int cantidad;
};

#endif //_HERRAMIENTAS_H