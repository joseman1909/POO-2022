#include "View.h"

void View::opcion(){
    int opc;
    cout << "1. Cuadrado\n";
    cout << " 2. Rectangulo\n";
    cout << " 3. Circulo\n";
    cout << " 4. Triangulo Rectangulo\n";
    cout << "Seleccione una opcion: ";
    cin >> opc;
    switch (opc) {
        case 1:
            figuras.push_back(new Cuadrado());
            break;
        case 2:
            figuras.push_back(new Rectangulo());
            break;
        case 3:
            figuras.push_back(new Circulo());
            break;
        case 4:
            figuras.push_back(new TrianguloRectangulo());
        default:
            cout << "No existe\n";
        }
}

void View::menu(){
    int opc = 0;
    double sumaAreas = 0;
    do{
        cout << "Por favor seleccine el tipo de figura\n";
        cout << "1. Agregar figura\n";
        cout << "2. Mostrar figuras\n";
        cout << "3. Mostrar figuras con colores\n";
        cout << "4. Mostrar area de todas las figuras\n";
        cout << "5. Mostrar perimetro de todas las figuras\n";
        cout << "6. Sumar area de todas las figuras\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opc;
        switch (opc) {
            case 1:
                opcion();
                break;
            case 2:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->mostrarFigura();
                }
                break;
            case 3:
                int color;
                cout << "De que color desea la figura:\n";
                cout << " 1. Rojo\n";
                cout << " 2. Azul\n";
                cout << " 3. Verde\n";
                cout << " 4. Amarillo\n";
                cout << "Opcion: \n";
                cin >> color;
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->mostrarFigura(color);
                    cout << "\n";
                }
                break;
            case 4:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->mostrarArea();
                    cout << "\n";
                }
                break;
            case 5:
                for(int i = 0; i < figuras.size(); i++){
                    figuras[i]->hallarPerimetro();
                }
                break;
            case 6:
                for(int i = 0; i < figuras.size(); i++){
                    sumaAreas += figuras[i]->hallarArea();
                }
                cout << "Suma de todas las areas: ";
                cout << sumaAreas;
                cout << "\n";
                break;
            case 0:
                cout << "Hasta pronto!\n";
                break;
            default:
                cout << "Opcion inexistente\n";
        }
    }while(opc != 0);

}