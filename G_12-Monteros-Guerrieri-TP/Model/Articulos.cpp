
#include "Articulos.h"

Articulos::Articulos(string nnombre, unsigned int nprecio, unsigned int ncantidad, bool cHerramienta): Nombre_art(nnombre)
{
    this->cantidad = ncantidad;
    this->Precio = nprecio;
    this->Herramienta = cHerramienta;
}
Articulos::~Articulos()
{
}
const string Articulos::get_nombre_art() {

    return this->Nombre_art;
}

unsigned int Articulos::get_precio() {
    return this->Precio;
}

unsigned int Articulos::get_cantidad() {
    return this->cantidad;
}

void Articulos::set_precio( unsigned int nprecio) {
    this->Precio = nprecio;
}

void Articulos::set_cantidad(unsigned int scantidad)
{
    this->cantidad = scantidad;
}

/**
 * @param unsigned int
 */
void Articulos::set_stock( unsigned int cantidad_restada) {

    this->cantidad = this->cantidad - cantidad_restada;
}


