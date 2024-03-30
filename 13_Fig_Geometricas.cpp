#include <iostream>
#include <cmath>

using namespace std;

void imprimirCuadrado(int x);
void imprimirRectangulo(int x, int y);
void imprimirTriangulo(int x);
void imprimirCirculo(int radio);

int opcion = 0, x = 0, y = 0, radio = 0;


void fig_geome() {
	char respuesta = 's';
    while (respuesta == 's' || respuesta == 'S') {
        cout << "Seleccion figura geometrica que desea imprimir:" << endl;
        cout << "1. Cuadrado" << endl;
        cout << "2. Rectangulo" << endl;
        cout << "3. Triangulo" << endl;
        cout << "4. Circulo" << endl;
        cout << "Escriba el numero de su eleccion: ";
        cin >> opcion;
        cout << "\n";

        switch (opcion) {
            case 1:
                cout << "Ingrese el tamaño de los lados del cuadrado: ";
                cin >> x;
                cout << "\n";

                imprimirCuadrado(x);
                break;
            case 2:
                cout << "Ingrese el alto del rectangulo: ";
                cin >> x;
                cout << "Ingrese el ancho del rectangulo: ";
                cin >> y;
                cout << "\n";

                imprimirRectangulo(x, y);
                break;
            case 3:
                cout << "Ingrese el tamaño del triangulo: ";
                cin >> x;
                cout << "\n";
                imprimirTriangulo(x);
                break;
            case 4:
                cout << "Ingrese el tamaño del radio del circulo: ";
                cin >> radio;
                cout << "\n";

                imprimirCirculo(radio);
                break;
            default:
                cout << "Opcion no valida. Por favor, seleccione una opcion valida." << endl;
        }
        cout << "Desea imprimir otra figura (s/n): ";
        cin >> respuesta;
    }
}

void imprimirCuadrado(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            cout << "* ";
        }
        cout << "\n";
    }
}

void imprimirRectangulo(int x, int y) {
    for (int i = 0; i < x; ++i) {
        for (int j = 0; j < y; ++j) {
            cout << "* ";
        }
        cout << endl;
    }
}

void imprimirTriangulo(int x) {
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - i; j++) {
            cout << " ";
        }
        for (int j = 0; j < i * 2 + 1; j++) {
            cout << "*";
        }
        cout << endl;
    }
}

void imprimirCirculo(int radio) {
    for (int i = -radio; i <= radio; i++) {
        for (int j = -radio; j <= radio; j++) {
            if (pow(j, 2) + pow(i, 2) <= pow(radio, 2)) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
