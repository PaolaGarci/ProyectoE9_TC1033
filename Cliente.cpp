#include "Cliente.h"
#include <iostream>
#include <string>
using namespace std;

Cliente::Cliente(){
    Cliente*c1=new Cliente [5];
    
}

Cliente::Cliente(string nom, string dir, string RFC){
    //cliente=c1;
    nombreCliente=nom;
    direccion=dir;
    rfc=RFC;
}

int Cliente::buscarc(string n){
    for (int i=0; i<clientereg; i++){
        if (cliente[i]==n){
            return i;
        }
    }
}

void Cliente::agregarCliente(Cliente client){
    Cliente*c1=new Cliente [5];
    c1[clientereg]=client;
    clientereg+=1;
}

void Cliente::modificarCliente(string n, Cliente client){
    Cliente*c1=new Cliente [5];
    int i=buscarc(n);
    c1[i]=client;
}

void Cliente::quitarCliente(Cliente client){
    int x=buscarc(client.nombreCliente);
    clientereg=clientereg-1;
    for (int i=x; i<clientereg; i++){
        cliente[i]=cliente[i+1];
    }
}