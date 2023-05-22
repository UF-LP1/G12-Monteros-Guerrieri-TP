/**
 * Project Untitled
 */


#ifndef _PLOMERO_H
#define _PLOMERO_H

#include "Empleado.h"


class Plomero: public Empleado {
public: 
    Plomero(unsigned int calcance);
    ~Plomero();

    void ofrecer_servicio(cliente cliente_actual, unsigned int primer_eleccion, unsigned int reparacion);
protected: 
    

};

#endif //_PLOMERO_H