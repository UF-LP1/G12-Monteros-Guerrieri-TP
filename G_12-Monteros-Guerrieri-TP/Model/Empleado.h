/**
 * Project Untitled
 */


#include <string>
#ifndef _EMPLEADO_H
#define _EMPLEADO_H
using namespace std;

class Empleado {
public: 
    Empleado();
    ~Empleado();
    
string get_servicio();
    
/**
 * @param bool
 */
void set_disponibilidad( bool);
    
bool get_disponibilidad();
protected: 
    const string Nombre;
    string turno;
    bool disponible;
    const string DNI;
    string servicio;

};

#endif //_EMPLEADO_H