#include "TrianguloRectangulo.h"

TrianguloRectangulo::TrianguloRectangulo() {
    string nom;
    string rec;
    cout << "Por favor ingrese la altura del triangulo: ";
    cin >> altura;
    cout << "Por favor ingrese la base del triangulo: ";
    cin >> base;
    cout << "Por favor ingrese un nombre a la figura: ";
    cin >> nom;
    rec = " * \n";
    rec += " * * \n";
    rec += " *   * \n";
    rec += " *     * \n";
    rec += " *       *\n";
    rec += " *         *\n";
    rec += " * * * * * * *\n";
    cout << rec;
    this->trianguloRectangulo = rec;
    this->nombre = nom;
    this->altura = altura;
    this->base = base;
}

void TrianguloRectangulo::mostrarFigura() {
    cout << this->trianguloRectangulo;
}

void TrianguloRectangulo::mostrarFigura(int color) {
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (color == 1){
        SetConsoleTextAttribute(hConsole, 4);
        cout << this->trianguloRectangulo;
    }
    else if (color == 2){
        SetConsoleTextAttribute(hConsole, 1);
        cout << this->trianguloRectangulo;
    }
    else if (color == 3){
        SetConsoleTextAttribute(hConsole, 2);
        cout << this->trianguloRectangulo;
    }
    else{
        SetConsoleTextAttribute(hConsole, 6);
        cout << this->trianguloRectangulo;
    }
    SetConsoleTextAttribute(hConsole, 7);
}

double TrianguloRectangulo::hallarArea() {
    double area;
    area = (this->base * this->altura) / 2;
    return area;
}

void TrianguloRectangulo::mostrarArea() {
    double area;
    area = hallarArea();
    cout << "Area del triangulo " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void TrianguloRectangulo::hallarPerimetro() {
    double perimetro, hipotenusa;
    hipotenusa = sqrt((this->altura * this->altura) + (this->base * this->base));
    perimetro = this->altura + this->base + hipotenusa;
    cout << "Perimetro del triangulo " + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}