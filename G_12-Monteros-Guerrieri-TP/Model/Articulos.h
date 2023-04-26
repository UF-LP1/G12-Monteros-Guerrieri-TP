/**
 * Project Untitled
 */


#include <string>
#ifndef _ARTICULOS_H
#define _ARTICULOS_H

using namespace std;

class Articulos {
public: 
    
    Articulos();

const string get_nombre_art();
    
unsigned int get_precio();
    
unsigned int get_stock();
    
/**
 * @param unsigned int
 */
void set_precio( unsigned int);
    
/**
 * @param unsigned int
 */
void set_stock( unsigned int);
protected: 
    const string Nombre_art;
    unsigned int Precio;
    unsigned int cantidad;
    

};

#endif //_ARTICULOS_H