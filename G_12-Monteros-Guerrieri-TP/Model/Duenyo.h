/**
 * Project Untitled
 */


#include <string>
#ifndef _DUENYO_H
#define _DUENYO_H

using namespace std;

class Duenyo {
public: 
    Duenyo();
    ~Duenyo();

void Cobrar();
    
void Hacer_inventario();
    
void Atender_clientes();
protected: 
    

private: 
    const string Nombre;
};

#endif //_DUENYO_H