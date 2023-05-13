/**
 * Project Untitled
 */


#include <string>
#ifndef _FERRETERIA_H
#define _FERRETERIA_H
using namespace std;
class Ferreteria {
public: 
    Ferreteria(string cNombre, string cDireccion, unsigned int cNum);
    ~Ferreteria();
/**
 * @param string
 */
void set_dia( string);
    
string get_dia();

unsigned int get_num_ferreteria();

string get_Nombre();

string get_Direccion();
protected: 
    

private: 
    string dia;
    const string Nombre;
    const string Direccion;
    const unsigned int numero_ferreteria;
};

#endif //_FERRETERIA_H