/**
 * Project Untitled
 */


#ifndef _ALQ_HERRAMIENTAS_H
#define _ALQ_HERRAMIENTAS_H

#include <string>
using namespace std;

//cada instancia de esta clase funcionaria como un registro de los alquileres comenzados por cada cliente, las mismas herramientas que pueden ser alquiladas tambien se encontraran en la lista de articulos de ferreteria
class alq_herramientas {
public: 
    
    alq_herramientas(string cnombre, string cmodelo);
    ~alq_herramientas();


void set_dias( unsigned int sdias);
    
unsigned int get_dias();
    
void set_seguro( unsigned int sseguro);
    
unsigned int get_seguro();
    
void set_dir_alquilante(string sdire);

void set_alquilante(string alquilante);
    
string get_alquilante();

unsigned int get_precio_por_dia();
    
string get_dir_alquilante();

void set_dia_alquiler(time_t cfecha);

private: 
    const string nombre_herra;
    unsigned int dias;
    unsigned int seguro;
    string alquilante;
    string dir_alquilante;
    const string modelo;
    unsigned int precio_por_dia;
    time_t dia_alquiler;
};

#endif //_ALQ_HERRAMIENTAS_H