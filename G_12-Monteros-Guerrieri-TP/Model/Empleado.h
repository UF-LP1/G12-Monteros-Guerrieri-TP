/**
 * Project Untitled
 */


#ifndef _EMPLEADO_H
#define _EMPLEADO_H

class Empleado {
public: 
    neum.turnos turno;
    
void get_servicio();
    
/**
 * @param bool
 */
void set_disponibilidad(void bool);
    
bool get_disponibilidad();
protected: 
    const string Nombre;
    string turno;
    bool disponible;
    const string DNI;
    
void Empleado();
};

#endif //_EMPLEADO_H