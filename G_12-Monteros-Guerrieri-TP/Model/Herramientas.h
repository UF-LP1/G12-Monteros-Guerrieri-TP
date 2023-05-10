/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "Art_ferr.h"


class Herramientas: public Art_ferr {
public: 
    
    Herramientas();
    ~Herramientas();

/**
 * @param string
 */
void set_modelo( string);
void set_Nombre(string snombre);
string get_modelo();
string get_nombre();
void set_precio(unsigned int sprecio);
unsigned int get_precio();
protected: 
    

private: 
    string Nombre;
    string Modelo;
    unsigned int precio;
};

#endif //_HERRAMIENTAS_H