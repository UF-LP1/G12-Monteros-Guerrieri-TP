/**
 * Project Untitled
 */


#include "cliente.h"

cliente::cliente(string nombre_c, unsigned int cDNI, unsigned int cnum_tarjeta): Nombre_cliente(nombre_c), DNI(cDNI), Numero_de_tarjeta(cnum_tarjeta)
{
    this->numero_cliente = 0;
    this->Permiso_magnetica = false;
    this->deuda = 0;

}
cliente::~cliente()
{
}
unsigned int cliente::get_tarjeta() {
    return this->Numero_de_tarjeta;
}


unsigned int cliente::get_DNI() {
    return this->DNI;
}


string cliente::get_direccion() {
    return this->direccion_cliente;
}

void cliente::set_direccion(string sdir)
{
    this->direccion_cliente = sdir;
}

bool cliente::get_permiso_mag() {
    return this->Permiso_magnetica;
}

void cliente::set_permiso_mag(bool spermit)
{
    this->Permiso_magnetica = spermit;
}

unsigned int cliente::get_numero_cliente() {
    return this->numero_cliente;
}

void cliente::set_numero_cliente(unsigned int snumero_cliente)
{
    this->numero_cliente = snumero_cliente;
}

void cliente::comprar_articulos(unsigned int stock, unsigned int precio) {

}

void cliente::alquilar_herramientas() {

}

void cliente::contratar_servicio() {

}

void cliente::agregar_art(Articulos* agregado)
{
    this->lista_compra.push_back(*agregado);

}

 int cliente::get_cant_articulos()
{
    return this->lista_compra.size();
}

void cliente::liberar_memoria()
{

    delete[]&lista_compra;
}

string cliente::get_Nombre()
{
    return this->Nombre_cliente;
}

list<Articulos> cliente::get_lista_compra()
{
    return this->lista_compra;
}

void cliente::devolver_art() {

}

void cliente::alquilar_herramienta(alq_herramientas alquilada)
{
    srand(time(0));

    int suerte = rand() % 2+1;

    if (suerte == 1) {
        this->deuda = this->deuda+ alquilada.get_seguro();
        cout << "la herramienta se rompio" << endl;
    }
    else
        this->deuda = +(alquilada.get_dias() * alquilada.get_precio_por_dia());

}

unsigned int cliente::get_deuda()
{
    return this->deuda;
}
