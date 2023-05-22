/**
 * Project Untitled
 */


#ifndef _CERRAJERO_H
#define _CERRAJERO_H

#include "Empleado.h"
#include "cliente.h"



class Cerrajero: public Empleado {
public: 

    Cerrajero(unsigned int alcance);
    ~Cerrajero();

    void set_alcance(unsigned int sdistancia);
    
    unsigned int get_alcance();

    void ofrecer_servicio(cliente cliente_actual, unsigned int primer_eleccion, unsigned int segunda_eleccion);
private:


};

#endif //_CERRAJERO_H