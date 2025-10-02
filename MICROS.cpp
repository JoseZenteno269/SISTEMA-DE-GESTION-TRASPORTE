#include<iostream>
#include "MICROS.h"
#include<cstring>
#include "funciones.h"

using namespace std;
using namespace rlutil;


Micros::Micros(int idm, const char *mrc, const char *t, int c){
    idMicro=idm;
    strcpy(marca, mrc);
    strcpy(tipo, t);
    capacidad=c;
}

void Micros::setidMicro(int idm){idMicro=idm; }
void Micros::setmarca(const char *mrc){strcpy(marca, mrc); }
void Micros::settipo(const char *t){strcpy(tipo, t); }
void Micros::setcapacidad(int c){capacidad=c; }
void Micros::setdisponible(bool disp){disponible=disp; }

int Micros::getidMicro(){return idMicro; }
const char *Micros::getmarca(){return marca; }
const char *Micros::gettipo(){return tipo; }
int Micros::getcapacidad(){return capacidad; }
bool Micros::getdisponible(){return disponible; }

void Micros::cargar(){
    cout<<"ingrese ID de Micro: "; cin>>idMicro;
    cout<<"ingrese marca del micro: "; cargarCadena(marca, 29);
    cout<<"ingrese tipo del micro: "; cargarCadena(tipo, 29);
    cout<<"ingrese capacidad: "; cin>>capacidad;
    disponible=true;
}

void Micros::mostrar(){
    cout<<"ID de Micro: "<<idMicro<<endl;
    cout<<"Marca del micro: "<<marca<<endl;
    cout<<"Tipo del micro: "<<tipo<<endl;
    cout<<"Capacidad: "<<capacidad<<endl;
}
