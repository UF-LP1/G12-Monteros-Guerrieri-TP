#include "Model/Articulos.h"
#include "Model/Art_comprado.h"
#include "Model/cliente.h"
#include "Model/Duenyo.h"

using namespace std;

int main()
{
	Duenyo El_jefe("Eduardo");

	Articulos *primer_articulo= new Articulos("tarugos", 5, 20);
	Articulos *segundo_articulo= new Articulos("tornillos", 20, 25);
	Articulos *tercer_articulo= new Articulos("tuercas", 25, 5);
	Articulos *cuarto_articulo= new Articulos("mecha fina", 100, 2);

	unsigned int presupuesto_total;

	cliente ejemplo("Juancito", 45524255, 510242720);

	ejemplo.agregar_art(primer_articulo);
	ejemplo.agregar_art(segundo_articulo);
	ejemplo.agregar_art(tercer_articulo);
	ejemplo.agregar_art(cuarto_articulo);

	presupuesto_total= El_jefe.generarPresupuesto(ejemplo.get_lista_compra());

	El_jefe.Imprimir_factura(ejemplo.get_lista_compra(),ejemplo.get_Nombre(),presupuesto_total);

	list<alq_herramientas> lista_alquilables;
	alq_herramientas primera_her("amoladora", "modelo industrial");
	alq_herramientas segunda_her("amoladora", "modelo industrial");
	alq_herramientas tercera_her("amoladora", "modelo industrial");
	alq_herramientas cuarta_her("amoladora", "modelo industrial");
	lista_alquilables.push_back(primera_her);
	lista_alquilables.push_back(segunda_her);
	lista_alquilables.push_back(tercera_her);
	lista_alquilables.push_back(cuarta_her);

	list<alq_herramientas>::iterator it = lista_alquilables.begin();\

	for (int i = 0; i < 4; i++)
	{
		ejemplo.alquilar_herramienta(*it);
		cout <<"la deuda es: " << ejemplo.get_deuda() << endl;
		it++;
	}


	system("pause");
	ejemplo.liberar_memoria();
	return 0;
}