/**
 * Project Untitled
 */


#include "cliente.h"
enum tipo_de_pago
{  Mercado_pago=1,tarjeta,efectivo };

cliente::cliente(string nombre_c, unsigned int cDNI, unsigned int cnum_tarjeta, int cfondos, bool p_magnetica): Nombre_cliente(nombre_c), DNI(cDNI), Numero_de_tarjeta(cnum_tarjeta)
{
    this->numero_cliente = 0;
    this->Permiso_magnetica = p_magnetica;
    this->deuda = 0;
    this->fondos = cfondos;
}

cliente::~cliente()
{
}
unsigned int cliente::get_tarjeta() {
    return this->Numero_de_tarjeta;
}


unsigned int cliente::get_DNI() {
    return this->DNI;
}


string cliente::get_direccion() {
    return this->direccion_cliente;
}

void cliente::set_direccion(string sdir)
{
    this->direccion_cliente = sdir;
}

bool cliente::get_permiso_mag() {
    return this->Permiso_magnetica;
}

void cliente::set_permiso_mag(bool spermit)
{
    this->Permiso_magnetica = spermit;
}

unsigned int cliente::get_numero_cliente() {
    return this->numero_cliente;
}

void cliente::set_numero_cliente(unsigned int snumero_cliente)
{
    this->numero_cliente = snumero_cliente;
}

 int cliente::get_cant_articulos()
{
    return this->lista_compra.size();
}

 void cliente::set_lista_compra(list<Articulos> slista_compra)
 {
     this->lista_compra = slista_compra;
 }

void cliente::liberar_memoria()
{

    delete[]&lista_compra;
}

string cliente::get_Nombre()
{
    return this->Nombre_cliente;
}

list<Articulos> cliente::get_lista_compra()
{
    return this->lista_compra;
}

void cliente::devolver_art() {

}

bool cliente::alquilar_herramienta(alq_herramientas alquilada, unsigned int dias)
{
    srand(time(0));

    alquilada.set_dias(dias);
    alquilada.set_alquilante(this->get_Nombre());
    alquilada.set_dir_alquilante(this->get_direccion());
    time_t fechactual;
    alquilada.set_dia_alquiler(time(&fechactual));

    int suerte = rand() % 7+1;

    if (suerte == 3) {
        this->deuda = this->deuda+ alquilada.get_seguro();
        cout << "la herramienta se rompio" << endl;
        return true;
    }
    else
    {
        this->deuda = this->deuda + (alquilada.get_dias() * alquilada.get_precio_por_dia());
        return false;
    }
}

unsigned int cliente::get_deuda()
{
    return this->deuda;
}

void cliente::incremento_deuda(unsigned int aumento_deuda)
{
    this->deuda = (this->deuda + aumento_deuda);
}

void cliente::Pagar(unsigned int cantidad_a_pagar, unsigned int metodo)//1.Mercado_pago
{                                                                      //2.Tarjeta_credito
    bool ciclo_pago = true;                                            //3.Efectivo
    while (ciclo_pago)
    {                                                                  
        switch (metodo)                                                
        {
        case 1:this->fondos = (this->fondos - cantidad_a_pagar * 1.05); //recargo del 5% por pagar con mercado pago
            ciclo_pago = false;                                                                
            break;
        case 2:this->fondos = (this->fondos - cantidad_a_pagar);       //el precio total si pagas con tarjeta
            ciclo_pago = false;
            break;
        case 3: this->fondos = (this->fondos - cantidad_a_pagar * 0.95); //descuento del 5% si pagas con efectivo
            ciclo_pago = false;
            break;
        default:
            cout << "un segundo, no encuentro mi billetera" << endl;
            break;
        }
    }
}

