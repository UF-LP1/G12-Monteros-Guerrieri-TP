/**
 * Project Untitled
 */


#include "Herramientas.h"

/**
 * Herramientas implementation
 */

/**
 * @return string
 */
Herramientas::Herramientas()
{
}
Herramientas::~Herramientas()
{
}
void Herramientas::set_modelo(string)
{
}
void Herramientas::set_Nombre(string snombre)
{
    this->Nombre = snombre;
}
string Herramientas::get_modelo() {
    return "";
}

string Herramientas::get_nombre()
{
    return this->Nombre;
}

void Herramientas::set_precio(unsigned int sprecio)
{
    this->precio = sprecio;
}

unsigned int Herramientas::get_precio()
{
    return this->precio;
}
