/**
 * Project Untitled
 */


#include "Plomero.h"



Plomero::Plomero(unsigned int calcance) {
	this->alcance_servicio_km = calcance;
}

Plomero::~Plomero()
{
}


void Plomero::ofrecer_servicio(cliente cliente_actual, unsigned int primer_eleccion, unsigned int reparacion)
{
	switch (primer_eleccion)
	{
	case 1:cliente_actual.Pagar(3000, 3); //cobra por revision
		break;
	case 2:
			switch (reparacion)   //cobra segun la complejidad del objeto reparado
			{
			case 1:cliente_actual.Pagar(15000, 3);
				break;

			case 2: cliente_actual.Pagar(12000, 3);
				break;

			case 3: cliente_actual.Pagar(10000, 3);
				break;

			default:cout << "Por favor elija una de las opciones" << endl;
				break;
			}
		break;

	default:cout << "Por favor elija una de las opciones" << endl;
		break;
	}
}
													  