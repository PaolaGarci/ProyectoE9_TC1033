#include "Orden.h"
#include <iostream>
using namespace std;

int main(){
    int id;
    float*cants=new float [100];
    Producto*prods=new Producto [100];
    string nom;
    string dir;
    string rfc;
    

    float*cants2=new float [100];
    Producto*prods2=new Producto [100];
    

    Inventario inv(cants, prods,0);
    Inventario inv2(cants2, prods2,0);
    Cliente clients(nom, dir, rfc);
  
    Producto prod1("1001B","Silla",200,250,10,200,50);
    Producto prod2("1032a","Mesa",1000,2120,15,200,50);
    Producto prod3("10c04","Sillones",200,250,13,200,50);
    Producto prod4("10408","Litera",200,250,20,200,50);
    Producto prod5("12000","cama sencilla",200,250,8,200,50);
    Producto prod6("1400h","Cuadro",200,250,30,30,50);
    Producto prod7("2350a","mesa de cafe",200,250,30,30,50);
    Producto prod8("12300","Lampara",200,250,30,30,50);
    Cliente c1("Maria Ramon", "Cuauhtemoc 307, Navojoa","RAAA690908N8A");
    Cliente c2("Juan Lopez", "Flaminia 12, Hermosillo", "LOAA850601N6B");
    Cliente c3("Luisa Ramirez", "Centenario 502, Culiacan", "RAAL731002L4A");


    inv.agregarProducto(prod1,4);
    inv.agregarProducto(prod2,5);
    inv.agregarProducto(prod3,2);
    inv.agregarProducto(prod4,3);
    inv.agregarProducto(prod5,5);
    inv.agregarProducto(prod6,5);
    inv.agregarProducto(prod7,5);
    inv.agregarProducto(prod8,5);
    inv.modificarProducto(prod1,4);
    inv.quitarProducto(prod3);
    clients.agregarCliente(c1);
    clients.agregarCliente(c2);
    clients.agregarCliente(c3);
    clients.modificarCliente("Juan Lopez", c3);
    clients.quitarCliente(c1);
    //orden
    inv2.agregarProducto(prod3,4);
    inv2.agregarProducto(prod5,6);
    clients.agregarCliente(c3);
    Orden o1(1, inv2, c1, "Efectivo");
    o1.getshowOrden();

    


    


}