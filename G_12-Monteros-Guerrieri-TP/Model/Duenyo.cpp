/**
 * Project Untitled
 */


#include "Duenyo.h"

/**
 * Duenyo implementation
 */


Duenyo::Duenyo(string)
{
}

Duenyo::~Duenyo()
{
}

void Duenyo::Cobrar() {

}

void Duenyo::Hacer_inventario() {

}

void Duenyo::Atender_clientes() {

}

unsigned int Duenyo::generarPresupuesto(list<Articulos> lista_compra)
{
    unsigned int Presupuesto_total = 0;
    list<Articulos>::iterator aux = lista_compra.begin();
    int i = 0;
    while (aux != lista_compra.end()) {

        Presupuesto_total += aux->get_precio() * aux->get_stock();

        aux++;
    }
    return Presupuesto_total;
}