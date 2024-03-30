#include <iostream>
#include "1_OpMate.cpp"
#include "2_NumParImpar.cpp"
#include "3_ ConversorMedidasMasas.cpp"
#include "4_Palindromxs.cpp"
#include "5_NumRomanos.cpp"
using namespace std;

void opmatematicas();
void numpar_impar();
void conversor_long_masas();
void palindromx();
void romanos();

main () {

int option;

    do {
        cout << "------------------------- MENU -------------------------" << endl;
        cout << "1. Operaciones Matematicas" << endl;
        cout << "2. Numer Par o Impar" << endl;
        cout << "3. Conversor de Longitud y Masas" << endl;
        cout << "4. Palindromxs" << endl;
        cout << "5. Conversor de Numeros Romanos" << endl;
        cout << "21. Salir" << endl;
        cout << "---------------------------------------------------------" << endl;
        cout << "Ingresa tu opcion: ";
        cin >> option;

        switch (option) {
            case 1:
                opmatematicas();
                break;
            case 2:
                numpar_impar();
                break;
             case 3:
                conversor_long_masas();
                break;
            case 4:
                palindromx();
                break;
            case 5:
                romanos();
                break;
            case 21:
                cout << "Exiting the program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please enter a valid option." << endl;
        }
    } while (option != 21);

    return 0;
}
