#ifndef CHOFERES_H_INCLUDED
#define CHOFERES_H_INCLUDED
#include "PERSONA.h"

class Choferes:public Personas{
private:
    int legajo;
    int idMicro;
    bool estado;
public:

    void setlegajo(int );
    void setidMicro(int );
    void setestado(bool );

    int getlegajo();
    int getidMicro();
    bool getestado();

    void cargar();
    void mostrar();
};


#endif // CHOFERES_H_INCLUDED
