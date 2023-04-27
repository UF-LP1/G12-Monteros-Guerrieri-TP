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
    return NULL;
}

/**
 * @return unsigned int
 */
unsigned int cliente::get_DNI() {
    return NULL;
}

/**
 * @return string
 */
string cliente::get_direccion() {
    return "";
}

/**
 * @return string
 */
string cliente::get_producto_deseado() {
    return "";
}

/**
 * @return bool
 */
bool cliente::get_permiso_mag() {
    return false;
}

/**
 * @return unsigned int
 */
unsigned int cliente::get_numero_cliente() {
    return NULL;
}

/**
 * @return string
 */
string cliente::set_producto_deseado() {
    return "";
}

/**
 * @param unsigned int stock
 * @param unsigned int precio
 */
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
