#ifndef FIGURAS_GEOMETRICAS_TRIANGULORECTANGULO_H
#define FIGURAS_GEOMETRICAS_TRIANGULORECTANGULO_H

#include "Figura.h"
#include <cmath>

using namespace std;

class TrianguloRectangulo : public Figura {
    private:
        string trianguloRectangulo;
        string nombre;
        double altura;
        double base;
    public:
        TrianguloRectangulo();
        void mostrarFigura();
        void mostrarFigura(int color);
        void mostrarArea();
        double hallarArea();
        void hallarPerimetro();
};

#endif //FIGURAS_GEOMETRICAS_TRIANGULORECTANGULO_H
