/**
 * Project Untitled
 */


#include "Duenyo.h"

/**
 * Duenyo implementation
 */


Duenyo::Duenyo(string cNombre): Nombre(cNombre)
{
}

Duenyo::~Duenyo()
{
}

void Duenyo::Cobrar_a_Cliente() {

}

void Duenyo::Hacer_inventario() {

}

void Duenyo::Atender_clientes(cliente cliente_actual, int eleccion) {//1=comprar articulos
                                                                     //2=contratar cerrajero
    switch (eleccion)                                                //3=contratar plomero
    {                                                                //4=pedir envio
    case 1:cliente_actual;

    }
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

    while (factura != vendidos.end())
    {
        cout << "factura" << endl << "objeto-------------" << factura->get_nombre_art() << endl << "cantidad-------------" << factura->get_stock() << endl << "precio unidad-------------" << factura->get_precio() << endl;

        factura++;

    }
    cout << "precio total               " << total << endl << endl;
}

void Duenyo::ofrecer_opciones()
{
    cout << "1) Comprar articulos" << endl << "2) Envio a domicilio" << endl << "3) Contratar plomero" << endl << "4) Contratar cerrajero" << endl;
}

void Duenyo::vender_articulos(cliente cliente_actual)
{
    list<Articulos>:: iterator en_venta=cliente_actual
}

unsigned int Duenyo::Buscar_stock(list<Articulos> Art_en_stock, string buscado)
{
    list<Articulos>::iterator indice_busqueda = Art_en_stock.begin();

    while (indice_busqueda != Art_en_stock.end())
    {
        if (indice_busqueda->get_nombre_art() == buscado)
            return indice_busqueda->get_stock();
    }
    return ;
}

