#ifndef MICROS_H_INCLUDED
#define MICROS_H_INCLUDED

class Micros{
private:
    int idMicro;
    char marca[30];
    char tipo[30];
    int capacidad;
    bool disponible;
public:
    Micros(int idm=11111, const char *mrc="desconocido", const char *t="sin definir", int c=99999);

    void setidMicro(int );
    void setmarca(const char *mrc);
    void settipo(const char *t);
    void setcapacidad(int );
    void setdisponible(bool );

    int getidMicro();
    const char *getmarca();
    const char *gettipo();
    int getcapacidad();
    bool getdisponible();

    void cargar();
    void mostrar();
};


#endif // MICROS_H_INCLUDED
