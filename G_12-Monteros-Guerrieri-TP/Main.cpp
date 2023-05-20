#include "Model/Art_comprado.h"
#include "Model/cliente.h"
#include "Model/Duenyo.h"
#include "Model/Ferreteria.h"
#include "Model/Art_Bazar.h"
#include "Model/Art_ferr.h"
#include "Model/Art_electricos.h"
#include "Model/Herramientas.h"
#include <fstream>
#include "Funciones.h"

using namespace std;

int main()
{
	Ferreteria Lo_de_Juan("Lo de juan", "Dorrego 999", 51024272);
	Duenyo Juan("Juan");
	Cerrajero Jose(20);
	Plomero Mario;
	Despachante Luigi("Fiat 600",100,15);
	list<Articulos> Articulos_vendidos;
	
	
	bool flag_atencion = true;
	bool flag_cliente = true;
	bool compra = true;
	int eleccion;
	char seguir_comprando;
	unsigned int total_pagar=0;

	//declaracion de variables de archivos y lectura de archivos
	string ruta_stock= ("Archivo_Stock_Ferreteria");
	fstream leer_stock;
	leer_stock.open(ruta_stock, ios::in);

	Lo_de_Juan.set_stock(Leer_stock(leer_stock));


	do {
		cout << "Bienvenido" << endl;
		do {
			cliente cliente_actual = Lo_de_Juan.get_cliente();
			do {
				cout << "¿Que se le ofrece?" << endl;
				Juan.ofrecer_opciones();
				cin >> eleccion;

				Juan.Atender_clientes(Lo_de_Juan,cliente_actual,Jose,Mario,Luigi, eleccion,Articulos_vendidos);

				cout << "¿Se le ofrece algo mas?" << endl<<"Y/N ?"<<endl;
				cin >> seguir_comprando;

				if (seguir_comprando == 'N')
				{
					compra = false;
				}

			} while (compra != false);

			list<Articulos>::iterator subtotal = Articulos_vendidos.begin();
			while (subtotal != Articulos_vendidos.end())
			{
				total_pagar = +subtotal->get_precio() * subtotal->get_cantidad();
				subtotal++;
			}
			Juan.Imprimir_factura(Articulos_vendidos,cliente_actual.get_Nombre(),total_pagar );


		} while (flag_cliente != false);

	} while (flag_atencion != false);


	return 0;
}