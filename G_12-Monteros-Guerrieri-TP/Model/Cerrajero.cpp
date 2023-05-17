


#include "Cerrajero.h"

Cerrajero::Cerrajero(unsigned int alcance)
{
    this->alcance_servicio_km =alcance;
}

Cerrajero::~Cerrajero()
{
}



void Cerrajero::set_alcance(unsigned int sdistancia)
{
    this->alcance_servicio_km = sdistancia;
}

unsigned int Cerrajero::get_alcance() {
    return this->alcance_servicio_km;
}

void Cerrajero::ofrecer_servicio(cliente cliente_actual)
{
    unsigned int eleccion=0;
    unsigned int eleccion_llave=0;
    bool primera_eleccion=true;
    bool segunda_eleccion = true;

    cout << "Que se le ofrece?" << endl;
    cout << "1) una cerradura" << endl << "2) copiar una llave" << endl << "3)cerrajeria a domicilio" << endl;
    cin >> eleccion;
    switch (eleccion)
    {
    case 1: cliente_actual.incremento_deuda(1000);
        bool primera_eleccion = false;
        break;
    case 2: 
        while(segunda_eleccion==true)
        {
         cout << "copiamos este tipo de llaves ¿que necesita?" << endl << "1)llave simple" << endl << "2) doble tambor" << endl << "codificada" << endl << "Magnetica" << endl;
          cin >> eleccion_llave;
          switch (eleccion_llave)
          {
          case 1:cliente_actual.incremento_deuda(700);
              segunda_eleccion = false;
              break;
          case 2:cliente_actual.incremento_deuda(800);
              segunda_eleccion = false;
              break;
          case 3:cliente_actual.incremento_deuda(900);
              segunda_eleccion = false;
              break;
          case 4: if (cliente_actual.get_permiso_mag() == true)
              cliente_actual.incremento_deuda(1200);
              segunda_eleccion = false;
              break;
          default:cout << "por favor elija un servicio de las opciones" << endl;
              break;
          }
        }
        break;

    case 3:
    }

}

void Cerrajero::Cobrar(cliente cliente_actual, unsigned int servicio)
{
    switch (servicio)
    {
    case 1:
    }
}



