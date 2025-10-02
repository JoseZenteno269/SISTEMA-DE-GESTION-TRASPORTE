#include<iostream>
#include "FECHAS.h"
#include "rlutil.h"

using namespace std;
using namespace rlutil;

Fechas::Fechas(int d, int m, int a){
    dia=d;
    mes=m;
    anio=a;
}

void Fechas::setdia(int d){dia=d; }
void Fechas::setmes(int m){mes=m; }
void Fechas::setanio(int a){anio=a; }

int Fechas::getdia(){return dia; }
int Fechas::getmes(){return mes; }
int Fechas::getanio(){return anio; }

void Fechas::cargar(){
    cout<<"Dia: ";cin>>dia;
    cout<<"Mes: ";cin>>mes;
    cout<<"Año: ";cin>>anio;
}
void Fechas::mostar(){
    cout<<"Dia: "<<dia<<endl;
    cout<<"Mes: "<<mes<<endl;
    cout<<"Año: "<<anio<<endl;
}
