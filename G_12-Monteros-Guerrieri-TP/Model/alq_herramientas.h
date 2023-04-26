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
/**
 * @param unsigned int
 */
void set_dias( unsigned int);
    
unsigned int get_dias();
    
/**
 * @param unsigned int
 */
void set_seguro( unsigned int);
    
unsigned int get_seguro();
    
/**
 * @param string
 */
void set_dir_alquilante(string);
    
/**
 * @param string
 */
void set_alquilante(string);
    
string get_alquilante();
    
unsigned int get_dir_alquilante();
protected: 
    
void Alquilados();
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