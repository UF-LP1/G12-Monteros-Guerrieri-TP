/**
 * Project Untitled
 */


#include "Articulos.h"

/**
 * Articulos implementation
 */


/**
 * @return const string
 */
Articulos::Articulos()
{
}
Articulos::~Articulos()
{
}
const string Articulos::get_nombre_art() {

    return this->Nombre_art;
}

/**
 * @return unsigned int
 */
unsigned int Articulos::get_precio() {
    return this->Precio;
}

/**
 * @return unsigned int
 */
unsigned int Articulos::get_stock() {
    return this->cantidad;
}

/**
 * @param unsigned int
 */
void Articulos::set_precio( unsigned int nprecio) {
    this->Precio = nprecio;
}

/**
 * @param unsigned int
 */
void Articulos::set_stock( unsigned int cantidad_restada) {

    this->cantidad = this->cantidad - cantidad_restada;
}


unsigned int Articulos::generarPresupuesto(list<Articulos> lista_compra)
{
    unsigned int Presupuesto_total;
    list<Articulos>::iterator aux=lista_compra.begin();
    int i = 0; 
    while (aux != lista_compra.end()) {
        
        Presupuesto_total = aux->get_precio() * aux->cantidad;
       
        aux++;
    }
    return Presupuesto_total;
}