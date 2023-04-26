/**
 * Project Untitled
 */


#ifndef _HERRAMIENTAS_H
#define _HERRAMIENTAS_H

#include "Art_ferr.h"


class Herramientas: public Art_ferr {
public: 
    
/**
 * @param string
 */
void set_modelo(void string);
    
string get_modelo();
protected: 
    
void Herramientas();
private: 
    string Modelo;
};

#endif //_HERRAMIENTAS_H