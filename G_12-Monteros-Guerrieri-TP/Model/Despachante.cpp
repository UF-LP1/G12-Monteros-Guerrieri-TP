/**
 * Project Untitled
 */


#include "Despachante.h"

Despachante::Despachante(string cvehiculo, unsigned int ccapacidad, unsigned int calcance)
{
    this->vehiculo = cvehiculo;
    this->capacidad_kg = ccapacidad;
    this->alcance_servicio_km = calcance;
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

void Despachante::ofrecer_servicio(cliente cliente_actual)
{
}

