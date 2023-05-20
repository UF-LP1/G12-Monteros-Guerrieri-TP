/**
 * Project Untitled
 */

#include <cstdlib>
#include <string>
#include <list>
#include "Articulos.h"
#include "alq_herramientas.h"
#include <iostream>

#ifndef _CLIENTE_H
#define _CLIENTE_H
using namespace std;

class cliente {
public: 
    
    cliente(string nombre, unsigned int cDNI, unsigned int cnum_tarjeta, int cfondos,bool p_magnetica);
    ~cliente();

unsigned int get_tarjeta();
    
unsigned int get_DNI();
    
string get_direccion();

void set_direccion(string sdir);

bool get_permiso_mag();

void set_permiso_mag(bool spermit);
    
unsigned int get_numero_cliente();

void set_numero_cliente(unsigned int snumero_cliente);

void contratar_servicio();

void agregar_art(Articulos* agregado); //agrega un articulo a la lista de compra del cliente, dsp se sacara

int get_cant_articulos();

void liberar_memoria(); //transformar esto en el destructor
    
string get_Nombre();

list<Articulos> get_lista_compra();

void devolver_art();

bool alquilar_herramienta(alq_herramientas alquilada, unsigned int dias); //en esta funcion se registra el alquiler que solcita un cliente de una herramienta, cambiando los datos de una instancia de la clase herramienta 
                                                                          //con la posibilidad de que esta se rompa y se deba pagar el seguro o con la posibilidad de que solo se pague el alquiler en si, variando el atributo deuda del cliente en cuestion

unsigned int get_deuda();

void incremento_deuda(unsigned int aumento_deuda);
void Pagar(unsigned int cantidad_a_pagar, unsigned int metodo);
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
    int fondos;
};

#endif //_CLIENTE_H