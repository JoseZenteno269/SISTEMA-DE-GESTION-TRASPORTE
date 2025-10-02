#include <iostream>
#include "rlutil.h"
#include <windows.h>
#include "funciones.h"

using namespace std;
using namespace rlutil;

int main(){
    setlocale(LC_ALL, "spanish");
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    //HWND console = GetConsoleWindow();
    //ShowWindow(console, SW_MAXIMIZE);
    //setBackgroundColor(BLUE);
    cout<<"esto es de prueba"<<endl; 

    MENU();

    cout<<endl<<endl;

    system("pause");

    return 0;
}

