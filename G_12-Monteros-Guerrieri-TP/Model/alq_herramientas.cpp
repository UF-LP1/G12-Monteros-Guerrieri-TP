/**
 * Project Untitled
 */


#include "alq_herramientas.h"

/**
 * alq_herramientas implementation
 */

alq_herramientas::alq_herramientas()
{
    this->Disponible = true;
    this->precio_por_dia = 100;
    this->dias = 0;
    this->seguro = 100;
}

alq_herramientas::~alq_herramientas()
{
}

void alq_herramientas::set_dias(unsigned int sdias) {
    this->dias = sdias;
}


unsigned int alq_herramientas::get_dias() {
    return this->dias;
}


void alq_herramientas::set_seguro( unsigned int sseguro) {
    this->seguro = sseguro;
}

unsigned int alq_herramientas::get_seguro() {
    return this->seguro;
}

void alq_herramientas::set_dir_alquilante(string sdire)
{
    this->dir_alquilante = sdire;
}



void alq_herramientas::set_alquilante(string salquilante)
{
    this->alquilante = salquilante;
}

string alq_herramientas::get_alquilante() {
    return this->alquilante;
}

unsigned int alq_herramientas::get_precio_por_dia()
{
    return this->precio_por_dia;
}


string alq_herramientas::get_dir_alquilante() {
    return this->dir_alquilante;
}