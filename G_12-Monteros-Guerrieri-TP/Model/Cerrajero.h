/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"


class Cerrajero: public Empleado {
public: 

    Cerrajero();

    unsigned int alcance_servicio_km;
    
unsigned int set_alcance();
    
unsigned int get_alcance();
protected: 
    

};

#endif //_CERRAJERO_H