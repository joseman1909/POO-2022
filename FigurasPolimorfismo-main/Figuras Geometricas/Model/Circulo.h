#ifndef FIGURAS_GEOMETRICAS_CIRCULO_H
#define FIGURAS_GEOMETRICAS_CIRCULO_H

#include "Figura.h"

using namespace std;

class Circulo : public Figura {
    private:
        string circulo;
        string nombre;
        double radio;
    public:
        Circulo();
        void mostrarFigura();
        void mostrarArea();
        void mostrarFigura(int color);
        double hallarArea();
        void hallarPerimetro();
};

#endif //FIGURAS_GEOMETRICAS_CIRCULO_H
