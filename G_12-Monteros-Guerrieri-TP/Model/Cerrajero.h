/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"


class Cerrajero: public Empleado {
public: 

    Cerrajero();
    ~Cerrajero();

    void set_alcance(unsigned int sdistancia);
    
    unsigned int get_alcance();

private:


};

#endif //_CERRAJERO_H