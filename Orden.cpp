#include "Orden.h"
#include <iostream>
#include <string>
using namespace std;

Orden::Orden(){
    //Inventario inven;
    float total;
    Cliente c;
    float * cantid;
    Producto * prods;
    cantid=new float [100];
    prods=new Producto [100];
    id=0;
    //Inventario inven(cantid, prods, 0);
    //inventario=inven;
    cliente=c;
    total=0;
    formaPago="Efectivo";


}

Orden::Orden(int ID,Inventario inv, Cliente c, string fpago){
    id=ID;
    inventario=inv;
    cliente=c;
    importeTotal=total;
    formaPago=fpago;
    
}
void Orden::agregarProducto(string c, int cantidades, Inventario invglobal){
    int inven=invglobal.buscarp(c);
    if (inven>=0){
        if (invglobal.cantidades[inven]>cantidades){
        inventario.agregarProducto(invglobal.producto[inven], cantidades);
        }else{
        cout<<"No hay suficientes productos para agregarlo a la orden"<<endl;
    }
    }else{
        cout<<"El producto no se encuentra en el inventario"<<endl;
    }
    

}

void Orden::quitarProducto(Producto c){
    inventario.quitarProducto(c);
}

void Orden::procesartotal(Inventario in){
    total=0;
    float precio;
    int cantidad;
    int cantgl;
    for (int i=0; i<in.prodReg; i++){
        precio=in.producto[i].precioVenta;
        cantidad=in.cantidades[i];
        total+=(precio*cantidad);
    }
}

/*void Orden::procesarorden(Inventario invglobal){
    procesartotal();

}*/

void Orden::getshowOrden(){
    cout<<"ID: "<<id<<endl;
    cout<<"CLIENTE: "<<cliente.nombreCliente<<endl;
    cout<<"DIRECCION: "<<cliente.direccion<<endl;
    cout<<"RFC: "<<cliente.rfc<<endl;
    
    cout<<"TOTAL: "<<total<<endl;
    cout<<"FORMA PAGO: "<<formaPago<<endl;

 
}


