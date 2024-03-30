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
#include "11_Conversion_decimales_binario.cpp"
#include "12_decimal_hexa.cpp"
#include "13_Fig_Geometricas.cpp"		
#include "14_mover_punto.cpp"
#include "19_pedido_helados.cpp"

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
void decimal_binario();
void decimal_hex();
void fig_geome();
void mover_punto();
void encuesta();

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
        cout<< "11. Conversión de números decimales a binario"<<endl;
		cout<< "12. Conversión de números decimales a hexadecimales"<<endl;	
		cout<< "13. Crear Figuras Geometricas Basicas"<<endl;
		cout<< "14. Mover un punto en toda la pantalla"<<endl;
		cout<< "19. Libre (Encuesta)"<<endl;
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
                multiplicacion_manual();
                break;     
             case 11:
                decimal_binario();
                break;
            case 12:
                decimal_hex();
                break;        
            case 13:
                fig_geome();
                break;   
            case 14:
                mover_punto();
                break;
			case 19:
                encuesta();
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
