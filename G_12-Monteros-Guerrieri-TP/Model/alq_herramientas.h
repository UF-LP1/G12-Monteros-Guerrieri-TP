/**
 * Project Untitled
 */


#ifndef _ALQ_HERRAMIENTAS_H
#define _ALQ_HERRAMIENTAS_H

#include <string>
using namespace std;

class alq_herramientas {
public: 
    
    alq_herramientas();
    ~alq_herramientas();


void set_dias( unsigned int sdias);
    
unsigned int get_dias();
    
void set_seguro( unsigned int sseguro);
    
unsigned int get_seguro();
    
void set_dir_alquilante(string sdire);

void set_alquilante(string alquilante);
    
string get_alquilante();
    
string get_dir_alquilante();
protected: 
   
private: 
    const string nombre_herra;
    unsigned int dias;
    unsigned int seguro;
    bool Disponible;
    string alquilante;
    string dir_alquilante;
    const string modelo;
    unsigned int precio_por_dia;
};

#endif //_ALQ_HERRAMIENTAS_H