#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "Ingrese un numero: " << endl;
    cin >> x;

    if (x < 1 || x > 999) {
        cout << "INGRESA UN NUMERO DEL 1 AL 999" << endl;
    } else {
        if (x >= 900) {
            cout << "NOVECIENTOS ";
            x = x - 900;
        } else if (x >= 800) {
            cout << "OCHOCIENTOS ";
            x = x - 800;
        } else if (x >= 700) {
            cout << "SETECIENTOS ";
            x = x - 700;
        } else if (x >= 600) {
            cout << "SEISCIENTOS ";
            x = x - 600;
        } else if (x >= 500) {
            cout << "QUINIENTOS ";
            x = x - 500;
        } else if (x >= 400) {
            cout << "CUATROCIENTOS ";
            x = x - 400;
        } else if (x >= 300) {
            cout << "TRESCIENTOS ";
            x = x - 300;
        } else if (x >= 200) {
            cout << "DOSCIENTOS ";
            x = x - 200;
        } else if (x > 100) {
            cout << "CIENTO ";
            x = x - 100;
        } else if (x == 100) {
            cout << "CIEN";
            x = x - 100;
        }

        if (x >= 90) {
            cout << "NOVENTA ";
            x = x - 90;
        } else if (x >= 80) {
            cout << "OCHENTA ";
            x = x - 80;
        } else if (x >= 70) {
            cout << "SETENTA ";
            x = x - 70;
        } else if (x >= 60) {
            cout << "SESENTA ";
            x = x - 60;
        } else if (x >= 50) {
            cout << "CINCUENTA ";
            x = x - 50;
        } else if (x >= 40) {
            cout << "CUARENTA ";
            x = x - 40;
        } else if (x >= 30) {
            cout << "TREINTA ";
            x = x - 30;
        } else if (x >= 20) {
            cout << "VEINTI";
            x = x - 20;
        } else if (x > 10) {
            cout << "DIECI";
            x = x - 10;
        }

        if (x == 1) {
            cout << "UNO";
        } else if (x == 2) {
            cout << "DOS";
        } else if (x == 3) {
            cout << "TRES";
        } else if (x == 4) {
            cout << "CUATRO";
        } else if (x == 5) {
            cout << "CINCO";
        } else if (x == 6) {
            cout << "SEIS";
        } else if (x == 7) {
            cout << "SIETE";
        } else if (x == 8) {
            cout << "OCHO";
        } else if (x == 9) {
            cout << "NUEVE";
        }
    }

    cout << endl;
    cin.ignore();
    return 0;
}