/**
 * Project Untitled
 */


#include "Ferreteria.h"

/**
 * Ferreteria implementation
 */

/**
 * @return string
 */
Ferreteria::Ferreteria()
{
}
Ferreteria::~Ferreteria()
{
}
void Ferreteria::set_dia(string sdia)
{
    this->día = sdia;
}
string Ferreteria::get_dia() {
    return this->día;
}

unsigned int Ferreteria::get_num_ferreteria()
{
    return this->numero_ferreteria;
}
