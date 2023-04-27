/**
 * Project Untitled
 */


#include <string>
#include "Articulos.h"
#include "cliente.h"
#include <iostream>

#ifndef _DUENYO_H
#define _DUENYO_H

using namespace std;

class Duenyo {
public: 
    Duenyo(string);
    ~Duenyo();

void Cobrar();
    
void Hacer_inventario();
    
void Atender_clientes();

unsigned int generarPresupuesto(list<Articulos> lista_compra);

protected: 
    

private: 
    const string Nombre;
};

#endif //_DUENYO_H