#include<iostream>
#include "CHOFERES.h"
#include "funciones.h"
#include<cstring>

using namespace std;


void Choferes::setlegajo(int l){legajo=l; }
void Choferes::setidMicro(int idm){idMicro=idm; }
void Choferes::setestado(bool e){estado=e; }

int Choferes::getlegajo(){return legajo; }
int Choferes::getidMicro(){return idMicro; }
bool Choferes::getestado(){return estado; }

void Choferes::cargar(){
    cout<<"ingrese N° de legajo: ";
    cout<<"ingrese ID de micro asignado: ";
    Personas::cargar();
    estado=true;

}
void Choferes::mostrar(){
    cout<<"N° de legajo: "<<legajo<<endl;
    cout<<"ID de micro: "<<idMicro<<endl;
    Personas::mostrar();
}
