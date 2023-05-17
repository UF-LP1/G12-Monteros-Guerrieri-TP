/**
 * Project Untitled
 */

#include "Articulos.h"
#ifndef _ART_COMPRADO_H
#define _ART_COMPRADO_H
 
#include<time.h>
#include <string>
using namespace std;

class Art_comprado {

private:
    time_t fecha_compra;

public:

    Art_comprado();
    ~Art_comprado();

    time_t get_fecha_compra();
};

#endif //_ART_COMPRADO_H