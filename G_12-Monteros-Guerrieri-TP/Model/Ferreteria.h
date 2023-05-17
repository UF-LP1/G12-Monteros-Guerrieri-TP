/**
 * Project Untitled
 */


#include <string>
#include <queue>
#include "Articulos.h"
#include "cliente.h"


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
using namespace std;
class Ferreteria {

  

protected: 

    static string dia;
    const string Nombre;
    const string Direccion;
    const unsigned int numero_ferreteria;
    list<Articulos> stock;
    queue<cliente> cola_clientes;


public:
    Ferreteria(string cNombre, string cDireccion, unsigned int cNum);
    ~Ferreteria();

    void set_dia(string);

    string get_dia();

    unsigned int get_num_ferreteria();

    string get_Nombre();

    string get_Direccion();

    cliente get_cliente();

    void despedirse_de_cliente(); //popea al primer cliente (el mas viejo digamos), debe llamarse al terminar de atender al actual cliente

    list<Articulos> get_stock();

    void terminar_dia();
};

#endif //_FERRETERIA_H