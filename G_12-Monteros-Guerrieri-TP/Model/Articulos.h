/**
 * Project Untitled
 */
#include <vector>
#include <list>
#include <string>
#include "Art_Bazar.h"
#include "Art_electricos.h"
#include "Art_ferr.h"
#include "Herramientas.h"
#ifndef _ARTICULOS_H
#define _ARTICULOS_H

using namespace std;

class Articulos {
public: 
    
    Articulos(string nnombre, unsigned int nprecio, unsigned int ncantidad);
    ~Articulos();

const string get_nombre_art();
    
unsigned int get_precio();
    
unsigned int get_cantidad();
    
void set_precio( unsigned int nprecio);
    
void restar_cantidad( unsigned int cantidad_restada);

void set_cantidad(unsigned int scantidad);

protected: 
    const string Nombre_art;
    unsigned int Precio;
    unsigned int cantidad;
   
};

#endif //_ARTICULOS_H