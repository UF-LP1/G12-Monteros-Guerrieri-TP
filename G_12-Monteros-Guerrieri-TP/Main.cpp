#include "Model/Art_comprado.h"
#include "Model/cliente.h"
#include "Model/Duenyo.h"
#include "Model/Ferreteria.h"
#include "Model/Art_Bazar.h"
#include "Model/Art_ferr.h"
#include "Model/Art_electricos.h"
#include "Model/Herramientas.h"
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

	unsigned int dias_de_alquiler = 0;
	string nombre_herramienta;
	string modelo_herramienta;
	
	bool flag_atencion = true;
	bool flag_cliente = true;
	bool compra = true;
	int eleccion;
	char seguir_comprando;
	unsigned int total_pagar=0;
// BASE_PATH "..\\..\\..\\"

	//declaracion de variables de archivos y lectura de archivos


	fstream leer_stock;
	leer_stock.open("Archivo_Stock_Ferreteria.txt", ios::in);
	Lo_de_Juan.set_stock(Leer_stock(leer_stock));
	leer_stock.close();

	fstream leer_clientes;
	leer_clientes.open("Archivo_clientes.txt", ios::in);
	fstream leer_listas_de_compra;
	leer_listas_de_compra.open("Archivo_listas_de_compra.txt", ios::in);

	Lo_de_Juan.set_cola_clientes(Leer_clientes(leer_clientes, leer_listas_de_compra));

	fstream leer_herramientas;
	leer_herramientas.open("Archivo_Herramientas_stock.txt");
	list<Herramientas> Herramientas_en_stock=Leer_herramientas_stock(leer_herramientas);
	Lo_de_Juan.set_Herramientas_stock(Herramientas_en_stock);

	//Aca empieza la funcionalidad

	do {
		cout << "Bienvenido" << endl;
		
		do {
			cliente cliente_actual = Lo_de_Juan.get_cliente();
			do {
				cout << "¿Que se le ofrece?" << endl;
				cout << "1) Comprar articulos" << endl << "2) Contratar cerrajero" << endl << "3) Contratar plomero" << endl << "4)Envio a domicilio " << "5)Alquilar una herramienta" << endl << "6) Cambiar un producto defectuoso" << endl;
				cin >> eleccion;

				switch (eleccion)
				{
				case 1:Juan.vender_articulos(Lo_de_Juan.get_stock(), cliente_actual, Articulos_vendidos);
					break;
				case 2:Jose.ofrecer_servicio(cliente_actual);
					break;
				case 3: Mario.ofrecer_servicio(cliente_actual);
					break;
				case 4:
					break;
				case 5:
					cout << "¿que herramienta necesita?" << endl;
					cin >> nombre_herramienta;

					if (Juan.Buscar_stock(Lo_de_Juan.get_stock(), nombre_herramienta) > 0) {
						cout << "¿algun modelo epecifico?" << endl;
						cin >> modelo_herramienta;
						cout << "¿por cuantos dias desea alquilar la herramienta?" << endl;
						cin >> dias_de_alquiler;
						alq_herramientas herr_alquilada(nombre_herramienta, modelo_herramienta);
						cliente_actual.alquilar_herramienta(herr_alquilada, dias_de_alquiler);
					}
					else
						cout << "Disculpe, no tenemos esa herramienta" << endl;
					break;
				case 6:
					break;
				}

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