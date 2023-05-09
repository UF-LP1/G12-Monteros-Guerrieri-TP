/**
 * Project Untitled
 */


#include "cliente.h"

/**
 * cliente implementation
 */


/**
 * @return unsigned int
 */
cliente::cliente(string nombre_c): Nombre_cliente(nombre_c)
{

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

bool cliente::get_permiso_mag() {
    return this->Permiso_magnetica;
}

/**
 * @return unsigned int
 */
unsigned int cliente::get_numero_cliente() {
    return this->numero_cliente;
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

unsigned int cliente::get_cant_articulos()
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
