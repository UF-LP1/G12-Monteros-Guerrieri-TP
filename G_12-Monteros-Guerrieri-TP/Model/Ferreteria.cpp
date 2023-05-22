/**
 * Project Untitled
 */


#include "Ferreteria.h"


/**
 * @return string
 */
Ferreteria::Ferreteria(string cNombre, string cDireccion, unsigned int cNum) : Nombre(cNombre), Direccion(cDireccion), numero_ferreteria(cNum)
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
    if (dia == "lunes")
        dia = "Martes";
    else if (dia == "Martes")
        dia = "Miercoles";
    else if (dia == "Miercoles")
        dia = "Jueves";
    else if (dia == "Jueves")
        dia = "Viernes";
    else if (dia == "Viernes")
        dia = (dia == "Sabado");
    else if (dia == "Domingo")
        dia = "Lunes";
}

void Ferreteria::set_stock(list<Articulos> Art_en_stock)
{
    list<Articulos>::iterator it=this->stock.begin();

    this->stock.insert(it,Art_en_stock.begin(),Art_en_stock.end());

}
void Ferreteria::set_cola_clientes(queue<cliente> sclientes)
{
    swap(this->cola_clientes, sclientes);
}
void Ferreteria::set_Herramientas_stock(list<Herramientas> slista_Herra)
{
    list<Herramientas>::iterator it = this->Herr_en_stock.begin();

    this->Herr_en_stock.insert(it, slista_Herra.begin(), slista_Herra.end());
}

list<Herramientas> Ferreteria::get_herramientas()
{
    return this->Herr_en_stock;
}


string Ferreteria::dia = "Lunes";
