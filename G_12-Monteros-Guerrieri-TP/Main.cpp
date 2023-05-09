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

	cliente ejemplo("Juancito", 45524255, 51024272011);

	ejemplo.agregar_art(primer_articulo);
	ejemplo.agregar_art(segundo_articulo);
	ejemplo.agregar_art(tercer_articulo);
	ejemplo.agregar_art(cuarto_articulo);

	presupuesto_total= El_jefe.generarPresupuesto(ejemplo.get_lista_compra());

	El_jefe.Imprimir_factura(ejemplo.get_lista_compra(),ejemplo.get_Nombre(),presupuesto_total);

	ejemplo.liberar_memoria();
	return 0;
}