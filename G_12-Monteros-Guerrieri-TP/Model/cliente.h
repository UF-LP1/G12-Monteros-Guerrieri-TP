/**
 * Project Untitled
 */


#include <string>
#include <list>
#include "Articulos.h"
#ifndef _CLIENTE_H
#define _CLIENTE_H
using namespace std;

class cliente {
public: 
    
    cliente(string nombre);
    ~cliente();

unsigned int get_tarjeta();
    
unsigned int get_DNI();
    
string get_direccion();
    
string get_producto_deseado();
    
bool get_permiso_mag();
    
unsigned int get_numero_cliente();
    
string set_producto_deseado();
    
/**
 * @param unsigned int stock
 * @param unsigned int precio
 */
void comprar_articulos( unsigned int stock,  unsigned int precio);
    
void alquilar_herramientas();
    
void contratar_servicio();

void agregar_art(Articulos* agregado);
    
string get_Nombre();

list<Articulos> get_lista_compra();
void devolver_art();

protected: 
    


private: 
    const string Nombre_cliente;
    unsigned int Numero_de_tarjeta;
    unsigned int DNI;
    string Producto_deseado;
    bool Permiso_magnetica;
    string direccion_cliente;
    unsigned int numero_cliente;
    const string mail;
    list<Articulos> lista_compra;
};

#endif //_CLIENTE_H