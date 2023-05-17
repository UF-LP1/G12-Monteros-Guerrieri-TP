/**
 * Project Untitled
 */


#include "Empleado.h"

/**
 * Empleado implementation
 */


Empleado::Empleado()
{
    this->alcance_servicio_km = 0;
    this->disponible = true;
}

Empleado::~Empleado()
{
}

string Empleado::get_servicio() {
    return this->servicio;
}

/**
 * @param bool
 */
void Empleado::set_disponibilidad(bool sdisponibilidad) {
    this->disponible = sdisponibilidad;
}

bool Empleado::get_disponibilidad() {
    return this->disponible;
}

void Empleado::ofrecer_servicio(cliente cliente_actual)
{
}
