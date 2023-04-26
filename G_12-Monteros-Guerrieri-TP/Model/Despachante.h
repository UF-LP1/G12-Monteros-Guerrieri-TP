/**
 * Project Untitled
 */


#ifndef _DESPACHANTE_H
#define _DESPACHANTE_H

#include "Empleado.h"


class Despachante: public Empleado {
public: 
    unsigned int alcance_servicio_km;
    
/**
 * @param string
 */
void set_vehiculo(void string);
    
/**
 * @param unsigned int
 */
void set_capacidad(void unsigned int);
    
string get_vehiculo();
    
string get_capacidad();
protected: 
    
void Despachante();
private: 
    string vehiculo;
    unsigned int capacidad_kg;
};

#endif //_DESPACHANTE_H