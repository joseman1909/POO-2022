#include "Rectangulo.h"

Rectangulo::Rectangulo() {
    string nom;
    string rec;
    cout << "Por favor ingrese la altura del rectangulo: ";
    cin >> altura;
    cout << "Por favor ingrese la base del rectangulo: ";
    cin >> base;
    cout << "Por favor ingrese un nombre a la figura: ";
    cin >> nom;
    rec = " * * * * * * *\n";
    rec += " *           *\n";
    rec += " *           *\n";
    rec += " * * * * * * *\n";
    cout << rec;
    this->rectangulo = rec;
    this->nombre = nom;
    this->altura = altura;
    this->base = base;
}

void Rectangulo::mostrarFigura() {
    cout << this->rectangulo;
}

void Rectangulo::mostrarFigura(int color) {
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (color == 1){
        SetConsoleTextAttribute(hConsole, 4);
        cout << this->rectangulo;
    }
    else if (color == 2){
        SetConsoleTextAttribute(hConsole, 1);
        cout << this->rectangulo;
    }
    else if (color == 3){
        SetConsoleTextAttribute(hConsole, 2);
        cout << this->rectangulo;
    }
    else{
        SetConsoleTextAttribute(hConsole, 6);
        cout << this->rectangulo;
    }
    SetConsoleTextAttribute(hConsole, 7);
}

double Rectangulo::hallarArea() {
    return this->base * this->altura;
}

void Rectangulo::mostrarArea() {
    double area;
    area = hallarArea();
    cout << "Area del rectangulo " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Rectangulo::hallarPerimetro() {
    double perimetro;
    perimetro = this->altura + this->altura + this->base + this->base;
    cout << "Perimetro del cuadrado " + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}
