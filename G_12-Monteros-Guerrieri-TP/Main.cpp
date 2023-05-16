#include "Model/Art_comprado.h"
#include "Model/cliente.h"
#include "Model/Duenyo.h"
#include "Model/Ferreteria.h"

using namespace std;

int main()
{
	Ferreteria Lo_de_Juan("Lo de juan", "Dorrego 999", 51024272);
	Duenyo Juan("Juan");

	
	bool flag_atencion = true;
	bool flag_cliente = true;
	bool compra = true;
	int eleccion;
	char seguir_comprando;
	

	do {
		cout << "Bienvenido" << endl;
		do {
			cliente cliente_actual = Lo_de_Juan.get_cliente();
			do {
				cout << "¿Que se le ofrece?" << endl;
				Juan.ofrecer_opciones();
				cin >> eleccion;

				Juan.Atender_clientes(cliente_actual, eleccion);

				cout << "¿Se le ofrece algo mas?" << endl<<"Y/N ?"<<endl;
				cin >> seguir_comprando;

				if (seguir_comprando == 'N')
				{
					compra = false;
				}

			} while (compra != false);

			Juan.Imprimir_factura();

			Juan.Cobrar_a_Cliente();

		} while (flag_cliente != false);

	} while (flag_atencion != false);


	return 0;
}