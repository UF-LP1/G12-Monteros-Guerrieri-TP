/**
 * Project Untitled
 */


#include <string>
#ifndef _FERRETERIA_H
#define _FERRETERIA_H
using namespace std;
class Ferreteria {
public: 
    Ferreteria();
    ~Ferreteria();
/**
 * @param string
 */
void set_dia( string);
    
string get_dia();
protected: 
    

private: 
    string día;
    const string Nombre;
    const string Direccion;
    unsigned int numero_ferreteria;
};

#endif //_FERRETERIA_H