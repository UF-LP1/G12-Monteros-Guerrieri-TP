/**
 * Project Untitled
 */


#include "Plomero.h"



Plomero::Plomero() {

}

Plomero::~Plomero()
{
}

//1) revision general
//2)reparacion
//a)compleja (ej:termotanque roto)
//b)moderada (ej: cañeria tapada)
//c) simple (ej: reparar una bacha)
void Plomero::ofrecer_servicio(cliente cliente_actual)
{							
	unsigned int eleccion;
	unsigned int eleccion_reparacion;
	bool primera_eleccion=true;
	bool segunda_eleccion=true;

	cout << "que tal? estos son mis servicios:" << endl << "1) revision general/ consulta" << endl << "2)reparacion" << endl;
	while (primera_eleccion == true)
	{


		cin >> eleccion;

		switch (eleccion)
		{
		case 1:cliente_actual.Pagar(3000, 3);
			primera_eleccion = false;
			break;
		case 2:cout << "¿Que tan complejo es el objeto averiado?" << endl << "1)Complejo (un termotanque)" << endl << "2)Moderadamente complejo (una cañería tapada)" << endl << "3)Simple (una bacha goteando)" << endl;
			while (segunda_eleccion == true)
			{
				cin >> eleccion_reparacion;
				switch (eleccion_reparacion)
				{
				case 1:cliente_actual.Pagar(15000,3);
					eleccion_reparacion = false;
					break;

				case 2: cliente_actual.Pagar(12000, 3);
					segunda_eleccion = false;
					break;

				case 3: cliente_actual.Pagar(10000, 3);
					segunda_eleccion = false;
					break;

				default:cout << "Por favor elija una de las opciones" << endl;
					break;
				}
			}
			primera_eleccion = false;
			break;
		}
	}
}													  
													  