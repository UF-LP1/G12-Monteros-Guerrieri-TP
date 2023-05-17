#include "Model/Art_comprado.h"
#include "Model/cliente.h"
#include "Model/Duenyo.h"
#include "Model/Ferreteria.h"
#include "Model/Art_Bazar.h"
#include "Model/Art_ferr.h"
#include "Model/Art_electricos.h"
#include "Model/Herramientas.h"

using namespace std;

int main()
{
	Ferreteria Lo_de_Juan("Lo de juan", "Dorrego 999", 51024272);
	Duenyo Juan("Juan");
	Cerrajero Jose(20);
	Plomero Mario;
	Despachante Luigi("Fiat 600",100,15);
	list<Articulos> Articulos_vendidos;

	//abajo de esto es espacio de declaracion de datos de prueba
	list<Articulos>stock_prueba;	
	Art_ferr tor("tornillo", 10, 200);
	Art_ferr tar("tarugo", 9, 200);
	Art_ferr mar("Martillo", 1500, 40);
	Art_electricos cab("cables", 100, 1000);
	Art_electricos adap_a("adaptador tipo a", 100, 20);
	Art_electricos adap_b("adaptdor tipo b", 120, 25);
	Art_ferr Mecha_med("Mecha mediana", 50, 100);
	Art_electricos ench("enchufe de pared", 50, 100);
	Art_Bazar ten_g("tender grande", 500, 10);
	Art_Bazar cep_b("cepillo de baño", 300, 15);
	Herramientas tala("taladro", 15000, 9);
	Herramientas mola("moladora", 20000, 10);
	Art_Bazar tabla_p("tabla de planchar", 3000, 7);
	Art_ferr clav("clavos", 5, 10000);
	Art_Bazar barr_cor("Barral de cortina",1000,20);
	Art_electricos lamp("lampara", 1000, 10);
	stock_prueba.push_back(tor);
	stock_prueba.push_back(tar);
	stock_prueba.push_back(mar);
	stock_prueba.push_back(cab);
	stock_prueba.push_back(adap_a);
	stock_prueba.push_back(adap_b);
	stock_prueba.push_back(Mecha_med);
	stock_prueba.push_back(ench);
	stock_prueba.push_back(ten_g);
	stock_prueba.push_back(cep_b);
	stock_prueba.push_back(tala);
	stock_prueba.push_back(mola);
	stock_prueba.push_back(tabla_p);
	stock_prueba.push_back(clav);
	stock_prueba.push_back(barr_cor);
	stock_prueba.push_back(lamp);

	Lo_de_Juan.set_stock(stock_prueba); //stock del local inicializado

	cliente Juanito("Juanito", 455524255, 1231232344, 40000);
	list<Articulos> Compras_Juanito;
	Art_ferr primero("tornillo", 10, 10);
	Compras_Juanito.push_back(primero);

	cliente Mateito("Mateito", 45524256, 12984847288, 20000);
	cliente Tomasito("Tomasito", 45524257, 47348382393,7);
	cliente Adriansito("Adriansito", 45524258, 32493499220, 5);//este se olvido la billetera
	cliente Valencita("Valencita", 45524259, 34782643237, 10000);
	cliente Camisita("Camisita", 45524260, 202043800, 5000);
	cliente Ezequilito("Ezequielito", 45524261, 9340240929084, 100000);
	cliente Solcita("Solcita", 45524262, 234989797377, 238930);
	cliente Stephita("Stephita", 45524263, 23894392, 500000);
	cliente Ariancita("Ariancita", 45524264, 3287936396, 45);
	
	bool flag_atencion = true;
	bool flag_cliente = true;
	bool compra = true;
	int eleccion;
	char seguir_comprando;
	unsigned int total_pagar=0;

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