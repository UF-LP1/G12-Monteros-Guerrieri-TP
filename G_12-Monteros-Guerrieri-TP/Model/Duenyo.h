/**
 * Project Untitled
 */


#include <string>
#include "Articulos.h"
#include <list>
#include <iostream>
#include "Ferreteria.h"


#ifndef _DUENYO_H
#define _DUENYO_H

using namespace std;

class Duenyo {
public: 
    Duenyo(string cNombre);
    ~Duenyo();

void Cobrar_a_Cliente();
    
void Hacer_inventario();
    
void Atender_clientes(Ferreteria& Lo_de_Juan,cliente cliente_actual, int eleccion);

unsigned int generarPresupuesto(list<Articulos> lista_compra);

void Imprimir_factura(list<Articulos> vendidos, string nombre_cliente, unsigned int total);

void ofrecer_opciones();

void vender_articulos(list<Articulos> &stock,cliente &cliente_actual);

int Buscar_stock(list<Articulos> Art_en_stock, string buscado);

void Entregar_articulo(cliente& cliente_actual, list<Articulos>& Art_en_stock, unsigned int cant_deseada, string vendido);

protected: 
    

private: 
    const string Nombre;

};

#endif //_DUENYO_H