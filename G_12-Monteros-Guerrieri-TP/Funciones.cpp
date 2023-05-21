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

	if (!(Stock.is_open()))
	{
		cout << "no se pudo abrir el archivo" << endl;
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

list<Herramientas> Leer_herramientas_stock(fstream& Herramientas_stock)
{
	if (!(Herramientas_stock.is_open()))
	{
		cout << "no se pudo abrir el archivo" << endl;
		list<Herramientas> lista_vacia;
		return lista_vacia;
	}

	list<Herramientas> lista_retorno;
	char coma = ',';
	string nombre_aux;
	string headers;
	unsigned int cantidad_aux;
	unsigned int precio_aux;
	unsigned int seguro_aux;
	unsigned int precio_dia_aux;

	getline(Herramientas_stock, headers);
	//string nnombre, unsigned int nprecio, unsigned int ncantidad, unsigned int cseguro, unsigned int cprecio_dia
	while (Herramientas_stock)
	{
		Herramientas_stock >> nombre_aux >> coma >> precio_aux >> coma >> seguro_aux >> coma >> precio_dia_aux >> coma >> cantidad_aux;

		Herramientas agregado(nombre_aux, precio_aux, cantidad_aux, seguro_aux, precio_dia_aux);
		lista_retorno.push_back(agregado);
	}
	return lista_retorno;
}


queue<cliente> Leer_clientes(fstream& cola, fstream& listas_compra)
{
	queue<cliente> Cola_clientes;  // la cola que se retorna
	char coma = ',';
	string headers;

	int i;

	if (!(cola.is_open()))
	{
		cout << "no se pudo abrir el archivo" << endl;
		queue<cliente> error;
		return error;
	}

	string nombre_aux; //sirve para el nombre del cliente y del articulo para no tener que tener tantas variables
	unsigned int DNI_aux;
	unsigned int num_tarjeta_aux;
	int fondos_aux;
	bool magnetica_aux;
	unsigned int cantidad_aux;
	unsigned int precio_aux;
	list<Articulos> lista_compra_actual; //auxiliar para leer las listas de compra que corresponderan a cada cliente

	getline(cola, headers);
	getline(listas_compra, headers);
	
	while (cola)
	{
		cola >> nombre_aux >> coma >> DNI_aux >> coma >> num_tarjeta_aux >> coma >> fondos_aux >> coma >> magnetica_aux;
		cliente cliente_aux(nombre_aux, DNI_aux, num_tarjeta_aux, fondos_aux, magnetica_aux);

		for (i = 0; i < 2; i++) //hacemos lo mismo que en leer stock pero solo dos articulos por cliente
		{
			listas_compra >> nombre_aux >> coma >> cantidad_aux >> coma >> precio_aux;

			if (nombre_aux == "tornillo" || nombre_aux == "tarugo" || nombre_aux == "Mecha" || nombre_aux == "clavos") //una forma rudimentaria de diferenciar las clases
			{
				Art_ferr aux_ferr(nombre_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_ferr);
			}
			else if (nombre_aux == "cables" || nombre_aux == "adaptador tipo a" || nombre_aux == "adaptador tipo b" || nombre_aux == "enchufe de pared" || nombre_aux == "lampara")
			{
				Art_electricos aux_elec(nombre_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_elec);
			}
			else
			{
				Art_Bazar aux_bazar(nombre_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_bazar);
			}
		}
		cliente_aux.set_lista_compra(lista_compra_actual);

		Cola_clientes.push(cliente_aux);
	}
	return Cola_clientes;
}
