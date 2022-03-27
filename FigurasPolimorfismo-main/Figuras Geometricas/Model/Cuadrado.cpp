#include "Cuadrado.h"

Cuadrado::Cuadrado() {
    string nom;
    string c;
    cout << "Por favor ingrese un lado del cuadrado: ";
    cin >> lado;
    cout << "Ingrese un nombre a la figura: ";
    cin >> nom;
    c = " * * * * *\n";
    c += " *       *\n";
    c += " *       *\n";
    c += " * * * * *\n";
    cout << c;
    this->cuadrado = c;
    this->nombre = nom;
    this->lado = lado;
}

void Cuadrado::mostrarFigura() {
    cout << this->cuadrado;
}

void Cuadrado::mostrarFigura(int color) {
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (color == 1){
        SetConsoleTextAttribute(hConsole, 4);
        cout << this->cuadrado;
    }
    else if (color == 2){
        SetConsoleTextAttribute(hConsole, 1);
        cout << this->cuadrado;
    }
    else if (color == 3){
        SetConsoleTextAttribute(hConsole, 2);
        cout << this->cuadrado;
    }
    else{
        SetConsoleTextAttribute(hConsole, 6);
        cout << this->cuadrado;
    }
    SetConsoleTextAttribute(hConsole, 7);
}

double Cuadrado::hallarArea(){
    return this->lado * this->lado;
}

void Cuadrado::mostrarArea() {
    double area;
    area = hallarArea();
    cout << "Area del cuadrado " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Cuadrado::hallarPerimetro() {
    double perimetro;
    perimetro = this->lado + this->lado + this->lado + this->lado;
    cout << "Perimetro del cuadrado " + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}