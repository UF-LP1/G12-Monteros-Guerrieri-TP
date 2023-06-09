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
    Despachante(string cvehiculo, unsigned int ccapacidad, unsigned int calcance);
    ~Despachante();

void set_vehiculo( string svehiculo);
    
void set_capacidad( unsigned int scapacidad);
    
string get_vehiculo();
    
unsigned int get_capacidad();

void ofrecer_servicio(cliente cliente_actual);
 
private: 
    string vehiculo;
    unsigned int capacidad_kg;
};

#endif //_DESPACHANTE_H