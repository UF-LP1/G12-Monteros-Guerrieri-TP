/**
 * Project Untitled
 */


#ifndef _CLIENTE_H
#define _CLIENTE_H

class cliente {
public: 
    enum.pago metodo_pago;
    
unsigned int get_tarjeta();
    
unsigned int get_DNI();
    
string get_direccion();
    
string get_producto_deseado();
    
bool get_permiso_mag();
    
unsigned int get_numero_cliente();
    
string set_producto_deseado();
    
/**
 * @param unsigned int stock
 * @param unsigned int precio
 */
void comprar_articulos(void unsigned int stock, void unsigned int precio);
    
void alquilar_herramientas();
    
void contratar_servicio();
    
void devolver_art();
protected: 
    
void cliente();
private: 
    const string Nombre_cliente;
    unsigned int Numero_de_tarjeta;
    unsigned int DNI;
    string Producto_deseado;
    bool Permiso_magnetica;
    string direccion_cliente;
    unsigned int numero_cliente;
    const string mail;
};

#endif //_CLIENTE_H