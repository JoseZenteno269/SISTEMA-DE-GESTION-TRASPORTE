#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

class Personas{
protected:
    char nombre[40];
    char apellido[40];
    int dni[15];
    int telefono[20];
public:

    void setnombre(const char *);
    void setapellido(const char *);
    void setdni(int);
    void settelefono(int);

    const char *getnombre();
    const char *getapellido();
    int getdni();
    int gettelefono();

    void cargar();
    void mostrar();
};


#endif // PERSONA_H_INCLUDED
