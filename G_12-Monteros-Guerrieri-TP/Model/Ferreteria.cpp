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
Ferreteria::Ferreteria(string cNombre, string cDireccion, unsigned int cNum): Nombre(cNombre),Direccion(cDireccion), numero_ferreteria(cNum)
{
}
Ferreteria::~Ferreteria()
{
}
void Ferreteria::set_dia(string sdia)
{
    this->dia = sdia;
}
string Ferreteria::get_dia() {
    return this->dia;
}

unsigned int Ferreteria::get_num_ferreteria()
{
    return this->numero_ferreteria;
}

string Ferreteria::get_Nombre()
{
    return this-> Nombre;
}

string Ferreteria::get_Direccion()
{
    return this->Direccion;
}
