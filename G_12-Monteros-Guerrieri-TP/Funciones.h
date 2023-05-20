#pragma once
#include <list>
#include <queue>
#include "Model/alq_herramientas.h"
#include"Model/cliente.h"
#include <fstream>
#include <sstream>
#include <iostream>
#include <string>

list<Articulos> Leer_stock(fstream& Stock); //lee los articulos en stock de la Ferreteria

queue<cliente> Leer_clientes(fstream& cola, fstream& listas_compra); //lee los articulos de la lista de compras de los clientes
																	//lee los clientes y les setea una lista de compras con dos articulos
																	//algunos de los articulos que pueden tener en la lista coinciden con
																	//los articulos del stock de ferreteria y otros no, esto para probar el
																	//programa, las cantidades tambien estan cambiadas y todos sus precios son 0