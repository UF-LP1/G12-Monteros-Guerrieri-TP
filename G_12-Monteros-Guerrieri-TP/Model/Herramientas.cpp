/**
 * Project Untitled
 */


#include "Herramientas.h"



Herramientas::Herramientas(string nnombre, unsigned int nprecio, unsigned int ncantidad, unsigned int cseguro, unsigned int cprecio_dia): Nombre(nnombre)
{
	this->Precio = nprecio;
	this->cantidad = ncantidad;
	this->precio_dia = cprecio_dia;
	this->seguro = cseguro;
}

Herramientas::~Herramientas()
{
}

string Herramientas::get_nombre()
{
	return this->Nombre;
}

unsigned int Herramientas::get_precio()
{
	return this->Precio;
}
