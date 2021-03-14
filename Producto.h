#include <string>
using namespace std;
class Producto
{
    //private:
    public:
        string codigoProducto;
        string nombreProducto;
        float precioCompra;
        float precioVenta;
        int cantidadExistentes;
        float peso;
        float tamanoEmpaque;
    //public:
        Producto();
        Producto(string cod, string nombre, float pcompra, float pventa, int cant, float p, float tam);
        void mostrarProducto();
        //void setagregarProductos();
        //void setmodificarProductos();
        //void setquitarProductos();
};