#include "Funciones.h"

using namespace std;

list<Articulos> Leer_stock(fstream& Stock)
{
	list <Articulos> lectura_stock;
	string headers;
	char coma = ',';
	
	string nombre_aux;
	unsigned int cantidad_aux;
	unsigned int precio_aux;
	bool herramienta_aux;

	if (!(Stock.is_open()))
	{
		list<Articulos> error;
		return error;
	}

	getline(Stock, headers);
	while (Stock)
	{
		Stock >> nombre_aux >> coma >> cantidad_aux >> coma >> precio_aux;

		if (nombre_aux == "tornillo" || nombre_aux == "tarugo" || nombre_aux == "Mecha" || nombre_aux == "clavos") //una forma rudimentaria de diferenciar las clases
		{
			Art_ferr aux_ferr(nombre_aux, precio_aux, cantidad_aux);
			lectura_stock.push_back(aux_ferr);
		}
		else if (nombre_aux == "cables" || nombre_aux == "adaptador tipo a" || nombre_aux == "adaptador tipo b" || nombre_aux == "enchufe de pared" || nombre_aux == "lampara")
		{
			Art_electricos aux_elec(nombre_aux, precio_aux, cantidad_aux);
			lectura_stock.push_back(aux_elec);
		}
		else 
		{
			Art_Bazar aux_bazar(nombre_aux, precio_aux, cantidad_aux);
			lectura_stock.push_back(aux_bazar);
		}
	}
	return lectura_stock;
}
