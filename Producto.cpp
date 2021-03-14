#include "Producto.h"
#include <iostream>
using namespace std;

/*Producto::Producto(){
    codigoProducto=
    nombreProducto=
    precioCompra=0;
    precioVenta=0;
    cantidadExistentes=0;
    peso=0;
    tamanoEmpaque=0;

}*/

Producto::Producto(string cod, string nombre, float pcompra, float pventa, int cant, float p, float tam){
    codigoProducto=cod;
    nombreProducto=nombre;
    precioCompra=pcompra;
    precioVenta=pventa;
    cantidadExistentes=cant;
    peso=p;
    tamanoEmpaque=tam;
}

void Producto::mostrarProducto(){
    cout<<"codido: "<<codigoProducto<<endl;
    cout<<"nombre: "<<nombreProducto<<endl;
    cout<<"precio de compra: "<<precioCompra<<endl;
    cout<<"precio de venta: "<<precioVenta<<endl;
    cout<<"cantidad: "<<cantidadExistentes<<endl;
    cout<<"peso: "<<peso<<endl;
    cout<<"tamano empaque: "<<tamanoEmpaque<<endl;
}