/**
 * Project Untitled
 */

#include <cstdlib>
#include <string>
#include <time.h>
#include <list>
#include "Articulos.h"
#include "alq_herramientas.h"
#ifndef _CLIENTE_H
#define _CLIENTE_H
using namespace std;

class cliente {
public: 
    
    cliente(string nombre, unsigned int cDNI, unsigned int cnum_tarjeta);
    ~cliente();

unsigned int get_tarjeta();
    
unsigned int get_DNI();
    
string get_direccion();

void set_direccion(string sdir);

bool get_permiso_mag();

void set_permiso_mag(bool spermit);
    
unsigned int get_numero_cliente();

void set_numero_cliente(unsigned int snumero_cliente);
    
void comprar_articulos( unsigned int stock,  unsigned int precio);
    
void alquilar_herramientas();
    
void contratar_servicio();

void agregar_art(Articulos* agregado);

unsigned int get_cant_articulos();

void liberar_memoria();
    
string get_Nombre();

list<Articulos> get_lista_compra();

void devolver_art();

void alquilar_herramienta(alq_herramientas alquilada);

protected: 
    


private: 
    const string Nombre_cliente;
    const unsigned int Numero_de_tarjeta;
    const unsigned int DNI;
    bool Permiso_magnetica;
    string direccion_cliente;
    unsigned int numero_cliente;
    const string mail;
    list<Articulos> lista_compra;
    unsigned int deuda;
};

#endif //_CLIENTE_H