/**
 * Project Untitled
 */


#include "Herramientas.h"



Herramientas::Herramientas(string hnombre, unsigned int hprecio, unsigned int hcantidad, unsigned int cseguro, unsigned int cprecio_dia):Art_ferr(hnombre, hprecio, hcantidad)
{
	this->precio_dia = cprecio_dia;
	this->seguro = cseguro;
}

Herramientas::~Herramientas()
{
}
