/**
 * Project Untitled
 */


#include <string>
#include "duenyo.h"
#include <queue>
#include "Articulos.h"
#include <list>


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
using namespace std;
static class Ferreteria {

  

protected: 

    string dia;
    const string Nombre;
    const string Direccion;
    const unsigned int numero_ferreteria;
    list<Articulos> stock;
    queue<cliente> cola_clientes;
    friend class Duenyo;

public:
    Ferreteria(string cNombre, string cDireccion, unsigned int cNum);
    ~Ferreteria();

    void set_dia(string);

    string get_dia();

    unsigned int get_num_ferreteria();

    string get_Nombre();

    string get_Direccion();

    cliente get_cliente();
};

#endif //_FERRETERIA_H