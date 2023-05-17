/**
 * Project Untitled
 */


#include "Cambio.h"

/**
 * Cambio implementation
 */

Cambio::Cambio(unsigned int)
{
	this->dif_precio = 0;
}

Cambio::~Cambio()
{
}

void Cambio::set_dif_precio(unsigned int sdif)
{
	this->dif_precio = sdif;
}
