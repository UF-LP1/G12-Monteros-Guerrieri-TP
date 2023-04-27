/**
 * Project Untitled
 */

#include <vector>
#include "Articulos.h"
#ifndef _ART_COMPRADO_H
#define _ART_COMPRADO_H
 
#include<time.h>
#include <string>
using namespace std;

class Art_comprado {

public:

    Art_comprado();
    ~Art_comprado();

    /**
     * @param string
     */
    void set_comprador(string);

    /**
     * @param string
     */
    void set_dir_comprador(string);

    string get_comprador();

    void get_dir_comprador();

};

#endif //_ART_COMPRADO_H