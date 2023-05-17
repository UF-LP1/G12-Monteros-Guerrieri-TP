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

cliente Ferreteria::get_cliente()
{
    return this-> cola_clientes.front();
}

void Ferreteria::despedirse_de_cliente()
{
    this->cola_clientes.pop();
    cout << "que tenga un buen dia" << endl;
}

list<Articulos> Ferreteria::get_stock()
{
    return this->stock;
}

void Ferreteria::terminar_dia()
{
    if (this->dia == "lunes")
        this->dia = "Martes";
    else if (this->dia == "Martes")
        this->dia = "Miercoles";
    else if (this->dia == "Miercoles")
        this->dia = "Jueves";
    else if (this->dia == "Jueves")
        this->dia = "Viernes";
    else if (this->dia == "Viernes")
        this->dia = "Sabado";
    else if (this->dia == "Sabado")
        this->dia = "Domingo";
    else if (this->dia == "Domingo")
        this->dia = "Lunes";
}
