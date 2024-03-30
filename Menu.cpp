#include <iostream>
#include "1_OpMate.cpp"
#include "2_NumParImpar.cpp"
#include "3_ ConversorMedidasMasas.cpp"
#include "4_Palindromxs.cpp"
#include "5_NumRomanos.cpp"
#include "6_conversionNumLetras.cpp"
#include "7numeros_con_decimalaletras.cpp"
#include "8Una_tabla_de_multiplicar.cpp"
#include "9Todas_las_tablas_de_multiplicar_del_1_al_10.cpp"
#include "10Crear_de_forma_grafica_la_multiplicacion_manual.cpp"
using namespace std;

void opmatematicas();
void numpar_impar();
void conversor_long_masas();
void palindromx();
void romanos();
void enteros_a_letras();
void enteros_con_decimal_a_letras();
void tabla_de_multiplicar();
void tablas_de_multiplicar_del_1_al_10();
void multiplicacion_manual();

main () {

int option;

    do {
        cout << "------------------------- MENU -------------------------" << endl;
        cout << "1. Operaciones Matematicas" << endl;
        cout << "2. Numer Par o Impar" << endl;
        cout << "3. Conversor de Longitud y Masas" << endl;
        cout << "4. Palindromxs" << endl;
        cout << "5. Conversor de Numeros Romanos" << endl;
        cout << "6. Numero Enteros a Letras" << endl;
        cout << "7. Numeros con Decimales a Letras" << endl;
        cout << "8. Tabla de Multiplicar" << endl;
        cout << "9. Todas las Tablas de Multiplicar" << endl;
        cout << "10. Multiplicacion Manual" << endl;
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
            case 6:
                enteros_a_letras();
                break;
            case 7:
                enteros_con_decimal_a_letras();
                break;
            case 8:
                tabla_de_multiplicar();
                break;        
            case 9:
                tablas_de_multiplicar_del_1_al_10();
                break;   
            case 10:
                multiplicación_manual();
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
