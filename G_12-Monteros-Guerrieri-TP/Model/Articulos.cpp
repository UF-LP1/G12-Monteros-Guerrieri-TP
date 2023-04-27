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
Articulos::Articulos(string nnombre, unsigned int nprecio, unsigned int ncantidad): Nombre_art(nnombre)
{
    this->cantidad = ncantidad;
    this->Precio = nprecio;
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


