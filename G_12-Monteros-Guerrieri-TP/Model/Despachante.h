/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"
#include <string>

using namespace std;

class Despachante: public Empleado {
public: 
    Despachante();
    ~Despachante();

    unsigned int alcance_servicio_km;
    
/**
 * @param string
 */
void set_vehiculo( string svehiculo);
    
/**
 * @param unsigned int
 */
void set_capacidad( unsigned int scapacidad);
    
string get_vehiculo();
    
unsigned int get_capacidad();
protected: 
    
 
private: 
    string vehiculo;
    unsigned int capacidad_kg;
};

#endif //_DESPACHANTE_H