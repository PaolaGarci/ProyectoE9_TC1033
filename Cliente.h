#include <string>
using namespace std;
class Cliente
{
    //private:
    public:
        string * cliente=new string[100];
        string nombreCliente;
        string direccion;
        string rfc;
        int clientereg=5;
        Cliente();
        Cliente(string nom, string dir, string RFC);
        int buscarc(string n);
        void agregarCliente(Cliente client);
        void modificarCliente(string n, Cliente client);
        void quitarCliente(Cliente client);

};