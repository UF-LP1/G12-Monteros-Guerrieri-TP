/**
 * Project Untitled
 */


#include "Herramientas.h"



Herramientas::Herramientas(string nnombre, unsigned int nprecio, unsigned int ncantidad, unsigned int cseguro, unsigned int cprecio_dia): Nombre_art(nnombre)
{
	this->Precio = nprecio;
	this->cantidad = ncantidad;
	this->precio_dia = cprecio_dia;
	this->seguro = cseguro;
}

Herramientas::~Herramientas()
{
}
