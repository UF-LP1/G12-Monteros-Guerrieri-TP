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

/**
 * @param unsigned int
 */
void alq_herramientas::set_dias(unsigned int) {

}


unsigned int alq_herramientas::get_dias() {
    return NULL;
}

/**
 * @param unsigned int
 */
void alq_herramientas::set_seguro( unsigned int) {

}

unsigned int alq_herramientas::get_seguro() {
    return NULL;
}

void alq_herramientas::set_dir_alquilante(string)
{
}



void alq_herramientas::set_alquilante(string)
{
}

string alq_herramientas::get_alquilante() {
    return "";
}

/**
 * @return unsigned int
 */
unsigned int alq_herramientas::get_dir_alquilante() {
    return NULL;
}

void alq_herramientas::Alquilados() {

}