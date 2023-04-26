/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "Art_ferr.h"


class Herramientas: public Art_ferr {
public: 
    
    Herramientas();

/**
 * @param string
 */
void set_modelo( string);
    
string get_modelo();
protected: 
    

private: 
    string Modelo;
};

#endif //_HERRAMIENTAS_H