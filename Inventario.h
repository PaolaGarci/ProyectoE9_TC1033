#include "Producto.h"

class Inventario{
public:
    float * cantidades;
    Producto * producto;
    int prodReg;
    Inventario();
    Inventario(float * cants, Producto * prod, int pregistrado);
    int buscarp(string n);
    void agregarProducto(Producto p, int x);
    void modificarProducto(string n, int x);
    void quitarProducto(Producto codprod);
};