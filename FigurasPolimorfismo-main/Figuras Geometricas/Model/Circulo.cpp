#include "Circulo.h"

Circulo::Circulo() {
    string nom;
    string cir;
    cout << "Por favor ingrese el radio del circulo: ";
    cin >> radio;
    cout << "Ingrese un nombre a la figura: ";
    cin >> nom;
    cir = "  * * *  \n";
    cir += "*       *\n";
    cir += "*       *\n";
    cir += "  * * * \n";
    cout << cir;
    this->circulo = cir;
    this->nombre = nom;
    this->radio = radio;
}

void Circulo::mostrarFigura() {
    cout << this->circulo;
}

void Circulo::mostrarFigura(int color) {
    HANDLE  hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    if (color == 1){
        SetConsoleTextAttribute(hConsole, 4);
        cout << this->circulo;
    }
    else if (color == 2){
        SetConsoleTextAttribute(hConsole, 1);
        cout << this->circulo;
    }
    else if (color == 3){
        SetConsoleTextAttribute(hConsole, 2);
        cout << this->circulo;
    }
    else{
        SetConsoleTextAttribute(hConsole, 6);
        cout << this->circulo;
    }
    SetConsoleTextAttribute(hConsole, 7);
}

double Circulo::hallarArea() {
    return (3.1416*(this->radio*this->radio));
}

void Circulo::mostrarArea() {
    double area;
    area = hallarArea();
    cout << "Area del circulo " + this->nombre + ": ";
    cout << area;
    cout << "\n";
}

void Circulo::hallarPerimetro() {
    double perimetro;
    perimetro = ((2)*3.1416*(this->radio));
    cout << "Perimetro del circulo" + this->nombre + ": ";
    cout << perimetro;
    cout << "\n";
}