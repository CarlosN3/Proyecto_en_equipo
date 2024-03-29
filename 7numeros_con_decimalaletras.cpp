#include <iostream>
#include <string>
#include <cmath> // Para utilizar la función floor

using namespace std;

string convertirNumeroEnPalabras(int numero) {
    string palabras[10] = {"Cero", "Uno", "Dos", "Tres", "Cuatro", "Cinco", "Seis", "Siete", "Ocho", "Nueve"};
    string resultado;

    if (numero < 0) {
        resultado = "Menos ";
        numero = abs(numero);
    }

    if (numero >= 10 && numero <= 99) {
        resultado += palabras[numero / 10] + " ";
        resultado += palabras[numero % 10] + " ";
    } else if (numero >= 100 && numero <= 999) {
        resultado += palabras[numero / 100] + " Ciento ";
        int temporal = numero % 100;
        if (temporal >= 10 && temporal <= 19) {
            resultado += palabras[temporal] + " ";
        } else {
            if (temporal >= 20 && temporal <= 99) {
                resultado += palabras[temporal / 10 + 9] + " ";
            }
            if (temporal % 10 != 0) {
                resultado += palabras[temporal % 10] + " ";
            }
        }
    } else if (numero >= 1000) {
        resultado += convertirNumeroEnPalabras(numero / 1000) + " Mil ";
        int temporal = numero % 1000;
        if (temporal != 0) {
            resultado += convertirNumeroEnPalabras(temporal) + " ";
        }
    }

    return resultado;
}

string convertirDecimalEnPalabras(double numero) {
    string resultado;
    int parte_entera = static_cast<int>(numero);
    int parte_decimal = static_cast<int>(round((numero - parte_entera) * 100)); // Redondeamos para evitar errores de precisión

    if (parte_entera != 0) {
        resultado += convertirNumeroEnPalabras(parte_entera) + " ";
        resultado += "enteros ";
    }

    if (parte_decimal != 0) {
        resultado += convertirNumeroEnPalabras(parte_decimal) + " ";
        resultado += "centésimas";
    }

    return resultado;
}

void enteros_con_decimal_a_letras() {
    double numero;
    cout << "Ingrese un número: ";
    cin >> numero;
    cout << "La representación en palabras de " << numero << " es: " << convertirDecimalEnPalabras(numero) << endl;
    
}