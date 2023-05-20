/**
 * Project Untitled
 */


#include "Duenyo.h"


Duenyo::Duenyo(string cNombre): Nombre(cNombre)
{
}

Duenyo::~Duenyo()
{
}

void Duenyo::Cobrar_a_Cliente() {

}

void Duenyo::Hacer_inventario() {

}

void Duenyo::Atender_clientes(Ferreteria& Lo_de_Juan, cliente& cliente_actual, Cerrajero Jose, Plomero Mario, Despachante luigi, int eleccion, list<Articulos>& Articulos_vendidos) {
                                                                              //1=comprar articulos
    unsigned int dias_de_alquiler=0;     
    string nombre_herramienta;         
    string modelo_herramienta;                                                //2=contratar cerrajero
    switch (eleccion)                                                         //3=contratar plomero
    {                                                                         //4=pedir envio
    case 1:vender_articulos(Lo_de_Juan.get_stock(),cliente_actual, Articulos_vendidos);           //5=alquilar
        break;                                                                                   //6=cambiar producto
    case 2:Jose.ofrecer_servicio(cliente_actual);                            
        break;
    case 3: Mario.ofrecer_servicio(cliente_actual);
        break;
    case 4:
        break;
    case 5:
        cout << "¿que herramienta necesita?" << endl;
        cin >> nombre_herramienta;

        if (Buscar_stock(Lo_de_Juan.get_stock(), nombre_herramienta) > 0) {
            cout << "¿algun modelo epecifico?" << endl;
            cin >> modelo_herramienta;
            cout << "¿por cuantos dias desea alquilar la herramienta?" << endl;
            cin >> dias_de_alquiler;
            alq_herramientas herr_alquilada(nombre_herramienta,modelo_herramienta);
            cliente_actual.alquilar_herramienta(herr_alquilada,dias_de_alquiler);
        }
        else
            cout << "Disculpe, no tenemos esa herramienta" << endl;
        break;
    case 6:
        break;
    }
    //no se necesita un default ni un ciclo porque la variable qeu se usa en el switch es recibida como parametro
}

unsigned int Duenyo::generarPresupuesto(list<Articulos> lista_compra)
{
    unsigned int Presupuesto_total = 0;
    list<Articulos>::iterator aux = lista_compra.begin();

    int i = 0;
    while (aux != lista_compra.end()) {

        Presupuesto_total += aux->get_precio() * aux->get_cantidad();

        aux++;
    }
    return Presupuesto_total;
}

void Duenyo::Imprimir_factura(list<Articulos> vendidos, string nombre_cliente, unsigned int total)
{
    list<Articulos>::iterator factura = vendidos.begin();
    int i = 0;

    while (factura != vendidos.end())
    {
        cout << "factura" << endl << "objeto-------------" << factura->get_nombre_art() << endl << "cantidad-------------" << factura->get_cantidad() << endl << "precio unidad-------------" << factura->get_precio() << endl;

        factura++;

    }
    cout << "precio total               " << total << endl << endl;
}


void Duenyo::ofrecer_opciones()
{
    cout << "1) Comprar articulos" << endl << "2) Contratar cerrajero" << endl << "3) Contratar plomero" << endl << "4)Envio a domicilio " <<"5)Alquilar una herramienta"<<endl<<"6) Cambiar un producto defectuoso"<< endl;
}
                                                                                                                                                                                              
                                                                                                                                                                                                                                                                                                                                                                                            
void Duenyo::vender_articulos(list<Articulos> stock, cliente &cliente_actual, list<Articulos>& Articulos_vendidos)
{

    list<Articulos>::iterator en_venta=stock.begin();

    while (en_venta != stock.end())
    {
        if (Buscar_stock(stock, en_venta->get_nombre_art()) < 0)   //buscamos un articulo en el stock de la tienda y si se encuentra
            cout << "No tenemos ese articulo" << endl;             //llamamos al metodo entregar articulo
        else
        {
            Articulos_vendidos.push_back(Entregar_articulo(cliente_actual, stock, en_venta->get_cantidad(), en_venta->get_nombre_art()));
        }
        en_venta++;
    }
}

 int Duenyo::Buscar_stock(list<Articulos> Art_en_stock, string buscado)
{
    list<Articulos>::iterator indice_busqueda = Art_en_stock.begin();

    while (indice_busqueda != Art_en_stock.end())
    {
        if (indice_busqueda->get_nombre_art() == buscado)
            return indice_busqueda->get_cantidad();
        indice_busqueda++;
    }
    return -1;
}

 Articulos Duenyo::Entregar_articulo(cliente& cliente_actual, list<Articulos>& Art_en_stock, unsigned int cant_deseada, string vendido)
 {
     list<Articulos> ::iterator aux_stock = Art_en_stock.begin();
     while (aux_stock != Art_en_stock.end())
     {
         if (aux_stock->get_nombre_art() == vendido)
         {
             if (aux_stock->get_cantidad() > cant_deseada) {
                 aux_stock->set_cantidad(aux_stock->get_cantidad() - cant_deseada);
                 cliente_actual.incremento_deuda(cant_deseada * aux_stock->get_precio());
                 Articulos resultado = (*aux_stock);
                 resultado.set_cantidad(cant_deseada);
                 return resultado;
             }
             else if (aux_stock->get_cantidad() == cant_deseada)
             {
                 cliente_actual.incremento_deuda(cant_deseada * aux_stock->get_precio()); //si vendimos hasta el ultimo de esos articulos lo sacamos del stock
                 Articulos resultado=(*aux_stock);
                 Art_en_stock.erase(aux_stock);                                           // el stock solo debe tener elementos que la ferreteria aun tenga para vender 
                 return resultado;
             }
             else
             {
                 cliente_actual.incremento_deuda(aux_stock->get_precio() * aux_stock->get_cantidad());//si no queda stock le damos al cliente lo que tenemos
                 Articulos resultado = (*aux_stock);
                 Art_en_stock.erase(aux_stock);                                                    //y tambien sacamos el articulo de la lista
                 return resultado;
             }
         }
         aux_stock++;
     }
  //este no necesita chequear si no se encuentra el articulo porque eso es chequeado antes de llamar al metodo
 }

 Articulos Duenyo::Buscar_herramienta(list<Articulos> Art_en_stock, string buscada)
 {
     list<Articulos>::iterator aux = Art_en_stock.begin();

     while (aux != Art_en_stock.end())
     {
         if (aux->get_nombre_art() == buscada)
             return (*aux);

         aux++;
     }
     
 }

