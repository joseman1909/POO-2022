#ifndef FIGURAS_GEOMETRICAS_VIEW_H
#define FIGURAS_GEOMETRICAS_VIEW_H
#include <vector>
#include "../Model/Figura.h"
#include "../Model/Circulo.h"
#include "../Model/Cuadrado.h"
#include "../Model/Rectangulo.h"
#include "../Model/TrianguloRectangulo.h"

using namespace std;

class View {
    private:
        vector<Figura*> figuras;
    public:
        void opcion();
        void menu();
};


#endif //FIGURAS_GEOMETRICAS_VIEW_H
