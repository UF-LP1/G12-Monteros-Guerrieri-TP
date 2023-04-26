/**
 * Project Untitled
 */


#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class Articulos {
public: 
    enum.estado estado;
    
const string get_nombre_art();
    
unsigned int get_precio();
    
unsigned int get_stock();
    
/**
 * @param unsigned int
 */
void set_precio(void unsigned int);
    
/**
 * @param unsigned int
 */
void set_stock(void unsigned int);
protected: 
    const string Nombre_art;
    unsigned int Precio;
    unsigned int cantidad;
    
void Articulos();
};

#endif //_ARTICULOS_H