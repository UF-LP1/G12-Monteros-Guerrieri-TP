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

	Stock >> nombre_aux >> coma >> precio_aux >> coma >> cantidad_aux;
	while (Stock)
	{
		

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
		Stock >> nombre_aux >> coma >> precio_aux >> coma >> cantidad_aux;
	} 
	Stock.close();
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
	Herramientas_stock.close();
	return lista_retorno;
}


queue<cliente> Leer_clientes(fstream& Arch_cola_clientes, fstream& Arch_listas_compra)
{



	if (!(Arch_cola_clientes.is_open()))
	{
		cout << "no se pudo abrir el archivo" << endl;
		queue<cliente> error;
		return error;
	}
	char coma = ',';
	string headers;
	int j = 0;
	int i;

	string nombre_aux; 
	unsigned int DNI_aux;
	unsigned int num_tarjeta_aux; //auxiliares para el cliente
	int fondos_aux;
	bool magnetica_aux;

	string nombre_art_aux;
	unsigned int cantidad_aux;  //auxiliares para los articulos
	unsigned int precio_aux;

	list<Articulos> lista_compra_actual; //auxiliar para leer las listas de compra que corresponderan a cada cliente
	queue<cliente> Cola_clientes;  // la cola que se retorna

	getline(Arch_cola_clientes, headers);
	getline(Arch_listas_compra, headers);
	
	Arch_cola_clientes >> nombre_aux >> coma >> DNI_aux >> coma >> num_tarjeta_aux >> coma >> fondos_aux >> coma >> magnetica_aux;
	Arch_listas_compra >> nombre_art_aux >> coma >> precio_aux >> coma >> cantidad_aux;

	while (j<10)
	{
		cliente cliente_aux(nombre_aux, DNI_aux, num_tarjeta_aux, fondos_aux, magnetica_aux);


		for (i = 0; i < 2; i++) //hacemos lo mismo que en leer stock pero solo dos articulos por cliente
		{
			

			if (nombre_art_aux == "tornillo" || nombre_art_aux == "tarugo" || nombre_art_aux == "Mecha" || nombre_art_aux == "clavos") //una forma rudimentaria de diferenciar las clases
			{
				Art_ferr aux_ferr(nombre_art_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_ferr);
			}
			else if (nombre_art_aux == "cables" || nombre_art_aux == "adaptador tipo a" || nombre_art_aux == "adaptador tipo b" || nombre_art_aux == "enchufe de pared" || nombre_art_aux == "lampara")
			{
				Art_electricos aux_elec(nombre_art_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_elec);
			}
			else
			{
				Art_Bazar aux_bazar(nombre_art_aux, precio_aux, cantidad_aux);
				lista_compra_actual.push_back(aux_bazar);
			}

			Arch_listas_compra >> nombre_art_aux >> coma >> precio_aux >> coma >> cantidad_aux;
		}

		cliente_aux.set_lista_compra(lista_compra_actual);
		Cola_clientes.push(cliente_aux);

		Arch_cola_clientes >> nombre_aux >> coma >> DNI_aux >> coma >> num_tarjeta_aux >> coma >> fondos_aux >> coma >> magnetica_aux;
		j++;
	}

	Arch_listas_compra.close();
	Arch_cola_clientes.close();
	return Cola_clientes;
}
