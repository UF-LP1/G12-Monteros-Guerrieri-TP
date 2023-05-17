


#include "Cerrajero.h"

//#define costo_llaves=600
//#define costo_servicios= 900;

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
    unsigned int eleccion = 0;

    unsigned int eleccion_llave = 0;

    bool primera_eleccion = true;
    bool segunda_eleccion = true;

    cout << "Que se le ofrece?" << endl;
    cout << "1) una cerradura" << endl << "2) copiar una llave" << endl << "3)cerrajeria a domicilio" << endl;

    while (primera_eleccion == true)
    {
        cin >> eleccion;

        switch (eleccion)                               //todos los metodos pagar van a recibir 3 como metodo de pago, es decir efectivo
        {                                               //Parece arbitrario pero el planteo es que los empleados trabajan en negro
        case 1: cliente_actual.Pagar(900, 3);           //se intento usar los define del principio de este archivo par a facilitar los precios, pero tiraba error
            primera_eleccion = false;
            break;

        case 2:

            while (segunda_eleccion == true)
            {
                cout << "copiamos este tipo de llaves" << endl << "1)Llave simple" << endl << "2) Doble tambor" << endl << "3)Codificada" << endl << "4)Magnetica" << endl<<"¿que necesita?"<<endl;
                cin >> eleccion_llave;

                switch (eleccion_llave)
                {
                case 1:cliente_actual.Pagar(600, 3);
                    segunda_eleccion = false;
                    break;

                case 2:cliente_actual.Pagar(800, 3);
                    segunda_eleccion = false;
                    break;

                case 3:cliente_actual.Pagar(1000, 3);
                    segunda_eleccion = false;
                    break;

                case 4: if (cliente_actual.get_permiso_mag() == true)
                    cliente_actual.Pagar(1200, 3);
                      else
                    cout << "No podemos copiar una llave magnetica si usted no tiene el permiso, disculpe" << endl;
                    segunda_eleccion = false;
                    break;

                default:cout << "por favor elija un servicio de las opciones" << endl;
                    break;
                }
                
            }
            primera_eleccion = false;
            break;

        case 3:cliente_actual.Pagar(5000, 3);
            this->disponible = false;
            primera_eleccion = false;
            break;

        default: cout << "por favor elija uno de los servicios" << endl;
            break;
        }
    }


}



