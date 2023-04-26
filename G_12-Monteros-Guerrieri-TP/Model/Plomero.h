/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado {
public: 
    Plomero();
    ~Plomero();

    unsigned int alcance_servicio_km;
protected: 
    

};

#endif //_PLOMERO_H