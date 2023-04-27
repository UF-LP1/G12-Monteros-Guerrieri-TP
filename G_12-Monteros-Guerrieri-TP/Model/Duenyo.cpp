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

void Duenyo::Imprimir_factura(list<Articulos> vendidos, string nombre_cliente, unsigned int total)
{
    list<Articulos>::iterator factura = vendidos.begin();
    int i = 0;

    while (i <= vendidos.size())
    {
        cout << "factura" << endl << "objeto-------------" << factura->get_nombre_art() << endl << "cantidad-------------" << factura->get_stock() << endl << "precio unidad-------------" << factura->get_precio() << endl;

        factura++;
        i++;
    }
    cout << "precio total               " << total << endl << endl;
}
