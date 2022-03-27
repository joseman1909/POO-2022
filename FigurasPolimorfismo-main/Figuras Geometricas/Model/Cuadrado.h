#ifndef FIGURAS_GEOMETRICAS_CUADRADO_H
#define FIGURAS_GEOMETRICAS_CUADRADO_H

#include "Figura.h"

using namespace std;

class Cuadrado : public Figura{
    private:
        string cuadrado;
        string nombre;
        double lado;
    public:
        Cuadrado();
        void mostrarFigura();
        void mostrarFigura(int color);
        double hallarArea();
        void mostrarArea();
        void hallarPerimetro();
};


#endif //FIGURAS_GEOMETRICAS_CUADRADO_H
