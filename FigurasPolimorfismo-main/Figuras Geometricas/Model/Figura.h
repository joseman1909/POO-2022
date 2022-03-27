#ifndef FIGURAS_GEOMETRICAS_FIGURA_H
#define FIGURAS_GEOMETRICAS_FIGURA_H

#include <iostream>
#include <windows.h>

using namespace std;

class Figura {
    private:
        string figura;
        string nombre;
    public:
        Figura();
        virtual void mostrarFigura() = 0;
        virtual void mostrarFigura(int color) = 0;
        virtual void mostrarArea() = 0;
        virtual double hallarArea() = 0;
        virtual void hallarPerimetro() = 0;
};


#endif //FIGURAS_GEOMETRICAS_FIGURA_H
