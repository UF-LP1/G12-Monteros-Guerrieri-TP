/**
 * Project Untitled
 */


#include <string>
#include "Articulos.h"
#include "cliente.h"
#include <list>
#include <iostream>

#ifndef _DUENYO_H
#define _DUENYO_H

using namespace std;

class Duenyo {
public: 
    Duenyo(string cNombre);
    ~Duenyo();

void Cobrar_a_Cliente();
    
void Hacer_inventario();
    
void Atender_clientes(cliente cliente_actual, int eleccion);

unsigned int generarPresupuesto(list<Articulos> lista_compra);

void Imprimir_factura(list<Articulos> vendidos, string nombre_cliente, unsigned int total);

void ofrecer_opciones();

void vender_articulos(cliente cliente_actual);

unsigned int Buscar_stock(list<Articulos> Art_en_stock, string buscado);
protected: 
    

private: 
    const string Nombre;
};

#endif //_DUENYO_H