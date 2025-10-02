#ifndef DESTINOS_H_INCLUDED
#define DESTINOS_H_INCLUDED

class Destinos{
private:
    int idDestino;
    char nombre[40];
    char provincia[40];
    float distanciaKm;
public:

    void setidDestino(int );
    void setnombre(const char *);
    void setprovincia(const char *);
    void setdistanciaKm(float );

    int getidDestino();
    const char *getnombre();
    const char *getprovincia();
    float getdistanciaKm();

    void cargar();
    void mostrar();

};


#endif // DESTINOS_H_INCLUDED
