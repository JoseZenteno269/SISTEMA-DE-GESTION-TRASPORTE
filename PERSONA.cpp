#include<iostream>
#include "PERSONA.h"
#include "funciones.h"
#include<cstring>

using namespace std;

void Personas::setnombre(const char *n){strcpy(nombre, n); }
void Personas::setapellido(const char *a){strcpy(apellido, a); }
void Personas::setdni(int d){dni=d; }
void Personas::settelefono(int t){telefono=t; }

const char *Personas::getnombre(){return nombre; }
const char *Personas::getapellido(){return apellido; }
int Personas::getdni(){return dni; }
int Personas::gettelefono(){return telefono; }

void Personas::cargar(){
    cout<<"ingrese nombre: "; cargarCadena(nombre, 39);
    cout<<"ingrese apellido: "; cargarCadena(apellido, 39);
    cout<<"ingrese DNI: "; cin>>dni;
    cout<<"ingrese N° de contacto: "; cin>>telefono;

}
void Personas::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
    cout<<"N° de DNI: "<<dni<<endl;
    cout<<"N° de contacto: "<<telefono<<endl;
}
