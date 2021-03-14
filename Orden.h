#include "Inventario.h"
#include "Cliente.h"
#include <string>
using namespace std;
class Orden
{
    private:
        int id;
        Inventario inventario;
        Cliente cliente;
        float importeTotal;
        string formaPago;
        float total;
    public:
        Orden();
        Orden (int ID,Inventario inv, Cliente c, string fpago);
        void agregarProducto(string c, int cantidades, Inventario invglobal);
        void quitarProducto(Producto c);
        void procesartotal(Inventario in);
        void procesarorden(Inventario invglobal);
        void getshowOrden();
};