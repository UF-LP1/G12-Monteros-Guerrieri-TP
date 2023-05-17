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

    void ofrecer_servicio(cliente cliente_actual);
protected: 
    

};

#endif //_PLOMERO_H