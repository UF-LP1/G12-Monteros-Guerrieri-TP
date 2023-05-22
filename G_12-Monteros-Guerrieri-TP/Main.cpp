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
	Plomero Mario(15);
	Despachante Luigi("Fiat 600",100,15);
	list<Articulos> Articulos_vendidos;
	list<Herramientas> Herramientas_vendidas;

	unsigned int eleccion_plomero = 0;
	unsigned int eleccion_reparacion = 0;
	unsigned int eleccion_cerrajero = 0;
	unsigned int eleccion_llave = 0;
	unsigned int eleccion_despachante = 0;
	unsigned int segunda_eleccion_despachante = 0;
	string herramienta_deseada;

	unsigned int dias_de_alquiler = 0;
	string nombre_herramienta;
	string modelo_herramienta;
	
	bool flag_atencion = true;
	bool flag_cliente = true;
	bool compra = true;
	int eleccion;
	char seguir_comprando;
	unsigned int total_pagar=0;

	//declaracion de variables de archivos y lectura de archivos

	//C:\\Users\\thmon\\OneDrive\\Documents\\Universidad\\Labo de programacion\\G-12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\Archivo_Stock_Ferreteria.txt
	fstream leer_stock;
	leer_stock.open("C:\\Users\\thmon\\OneDrive\\Documents\\Universidad\\Labo de programacion\\G-12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\data_files\\Archivo_Stock_Ferreteria.txt", ios::in);

	Lo_de_Juan.set_stock(Leer_stock(leer_stock));
	

	fstream leer_clientes;
	leer_clientes.open("C:\\Users\\thmon\\OneDrive\\Documents\\Universidad\\Labo de programacion\\G-12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\data_files\\Archivo_Cola_Clientes.txt", ios::in);

	//fstream leer_listas_de_compra;
	//leer_listas_de_compra.open("C:\\Users\\thmon\\OneDrive\\Documents\\Universidad\\Labo de programacion\\G-12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\data_files\\Archivo_listas_de_compra.txt", ios::in);
	//
	//Lo_de_Juan.set_cola_clientes(Leer_clientes(leer_clientes, leer_listas_de_compra));

	fstream leer_herramientas;
	leer_herramientas.open("C:\\Users\\thmon\\OneDrive\\Documents\\Universidad\\Labo de programacion\\G-12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\G_12-Monteros-Guerrieri-TP\\data_files\\Archivo_Herramientas_stock.txt");
	list<Herramientas> Herramientas_en_stock=Leer_herramientas_stock(leer_herramientas);

	Lo_de_Juan.set_Herramientas_stock(Herramientas_en_stock);

	//declaramos datos hardcodeados porque no funciona la lectura del archivo de clientes
	queue<cliente> cola_de_clientes;
	cliente Mateito("Mateito", 45524256, 1298484728, 20000, false);
	cola_de_clientes.push(Mateito);
	cliente Tomasito("Tomasito", 45524257, 4734838239, 7, false);
	cola_de_clientes.push(Tomasito);
	cliente Adriansito("Adriansito", 45524258, 3249349922, 5, false);
	cola_de_clientes.push(Adriansito);
	cliente Valencita("Valencita", 45524259, 3478264323, 10000, false);
	cola_de_clientes.push(Valencita);
	cliente Camisita("Camisita", 45524260, 2020438001, 5000, false);
	cola_de_clientes.push(Camisita);
	cliente Ezequielito("Ezequielito", 45524261, 9340240929, 100000, true);
	cola_de_clientes.push(Ezequielito);
	cliente Solcita("Solcita", 45524262, 2349897973, 238930, false);
	cola_de_clientes.push(Solcita);
	cliente Stephita("Stephita", 45524263, 2389439264, 500000, false);
	cola_de_clientes.push(Stephita);
	cliente Ariancita("Ariancita", 45524264, 3287936396, 45, true);
	cola_de_clientes.push(Ariancita);
	cliente Juanito("Juanito", 455524255, 1231232344, 40000, false);
	cola_de_clientes.push(Juanito);
	
	Lo_de_Juan.set_cola_clientes(cola_de_clientes);
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
				case 2:

					cout << "Que se le ofrece?" << endl;
					cout << "1) una cerradura" << endl << "2) copiar una llave" << endl << "3)cerrajeria a domicilio" << endl;
					cin >> eleccion_cerrajero;

					if (eleccion_cerrajero == 2) {
						cout << "copiamos este tipo de llaves" << endl << "1)Llave simple" << endl << "2) Doble tambor" << endl << "3)Codificada" << endl << "4)Magnetica" <<"5)alquilar herramienta"<<endl<<"6)Comprar herramienta"<< endl << "¿que necesita?" << endl;
						cin >> eleccion_llave;
					}
					Jose.ofrecer_servicio(cliente_actual,eleccion_cerrajero,eleccion_llave);

					break;

				case 3:
					
					cout << "que tal? estos son mis servicios:" << endl << "1) revision general/ consulta" << endl << "2)reparacion" << endl;
					cin >> eleccion_plomero;
					if (eleccion_plomero == 2)
					{
						cout << "¿Que tan complejo es el objeto averiado?" << endl << "1)Complejo (un termotanque)" << endl << "2)Moderadamente complejo (una cañería tapada)" << endl << "3)Simple (una bacha goteando)" << endl;
						cin >> eleccion_reparacion;
					}
					cout << "Perfecto, ya mismo me pongo a eso" << endl;
					Mario.ofrecer_servicio(cliente_actual,eleccion_plomero,eleccion_reparacion);
					break;

				case 4:
					cout << "que tal, yo le voy a entregar los articulos, por favor entregueme su lista de compras" << endl<<"";
					if (Luigi.get_capacidad() < cliente_actual.get_cant_articulos())
						cout << "perdon, no puedo llevarle tantos articulos" << endl;
					else
					{
						Juan.vender_articulos(Lo_de_Juan.get_stock(), cliente_actual, Articulos_vendidos);
						Luigi.set_disponibilidad(false);
					}
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
					cout << "¿Que herramienta desea?" << endl;
					cin >> herramienta_deseada;
					Herramientas_vendidas.push_back(Juan.vender_Herramienta(cliente_actual,herramienta_deseada, Lo_de_Juan.get_herramientas()));
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