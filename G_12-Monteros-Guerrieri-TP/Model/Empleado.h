/**
 * Project Untitled
 */


#include <string>
#include "cliente.h"
#include "Cerrajero.h"
#include"Plomero.h"
#include"Despachante.h"

#ifndef _EMPLEADO_H
#define _EMPLEADO_H
using namespace std;

class Empleado {
public: 
    Empleado();
    ~Empleado();
    
string get_servicio();
    
void set_disponibilidad( bool);
    
bool get_disponibilidad();

virtual void ofrecer_servicio(cliente cliente_actual)=0;


protected: 
    const string Nombre;
    string turno;
    bool disponible;
    const string DNI;
    string servicio;
    unsigned int alcance_servicio_km;

};

#endif //_EMPLEADO_H