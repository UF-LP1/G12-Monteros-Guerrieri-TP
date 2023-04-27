/**
 * Project Untitled
 */
#include <vector>
#include <list>
#include <string>
#ifndef _ARTICULOS_H
#define _ARTICULOS_H

using namespace std;

class Articulos {
public: 
    
    Articulos(string nnombre, unsigned int nprecio, unsigned int ncantidad);
    ~Articulos();

const string get_nombre_art();
    
unsigned int get_precio();
    
unsigned int get_stock();
    
/**
 * @param unsigned int
 */
void set_precio( unsigned int nprecio);
    
/**
 * @param unsigned int
 */
void set_stock( unsigned int cantidad_restada);



protected: 
    const string Nombre_art;
    unsigned int Precio;
    unsigned int cantidad;
   
};

#endif //_ARTICULOS_H