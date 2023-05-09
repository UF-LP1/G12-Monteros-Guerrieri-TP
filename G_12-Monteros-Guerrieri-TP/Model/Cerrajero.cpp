


#include "Cerrajero.h"

Cerrajero::Cerrajero()
{
    this->alcance_servicio_km = 0;
}

Cerrajero::~Cerrajero()
{
}



void Cerrajero::set_alcance(unsigned int sdistancia)
{
    this->alcance_servicio_km = sdistancia;
}

unsigned int Cerrajero::get_alcance() {
    return this->alcance_servicio_km;
}