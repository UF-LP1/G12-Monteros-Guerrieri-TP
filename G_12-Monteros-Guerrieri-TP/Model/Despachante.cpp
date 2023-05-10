/**
 * Project Untitled
 */


#include "Despachante.h"

Despachante::Despachante()
{
}
Despachante::~Despachante()
{
}
void Despachante::set_vehiculo(string svehiculo)
{
    this->vehiculo = svehiculo;
}
void Despachante::set_capacidad(unsigned int scapacidad) {
    this->capacidad_kg = scapacidad;
}


string Despachante::get_vehiculo() {
    return "";
}

unsigned int Despachante::get_capacidad()
{
    return this->capacidad_kg;
}

/**
 * @return string
 */
