/**
 * Project Untitled
 */


#ifndef _FERRETERIA_H
#define _FERRETERIA_H
#include <string>
#include <queue>
#include "Articulos.h"
#include "cliente.h"


using namespace std;
class Ferreteria {

    friend class duenyo;

protected: 
    const string Nombre;
    const string Direccion;
    const unsigned int numero_ferreteria;
    list<Articulos> stock;
    queue<cliente> cola_clientes;
    list<Herramientas> Herr_en_stock;


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

    void set_stock(list<Articulos> Art_en_stock);

    static string dia;

    void set_cola_clientes(queue<cliente> sclientes);
    
    void set_Herramientas_stock(list<Herramientas> slista_Herra);

    list<Herramientas> get_herramientas();
};

#endif //_FERRETERIA_H