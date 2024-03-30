#include <iostream>
using namespace std;
// Función para calcular la serie de Fibonacci hasta un cierto número
void fibonacci(int n) {
    int primero = 0, segundo = 1, siguiente;

    cout << "Serie de Fibonacci hasta " << n << ":\n";
    cout << primero << " " << segundo << " ";

    siguiente = primero + segundo;

    while (siguiente <= n) {
        cout << siguiente << " ";
        primero = segundo;
        segundo = siguiente;
        siguiente = primero + segundo;
    }
    cout << std::endl;
}

int Calcular_Fibonacci() {
    int limite;

    // Solicitar al usuario el límite para la serie de Fibonacci
    cout << "Ingrese el limite para la serie de Fibonacci: ";
    cin >> limite;

    // Calcular y mostrar la serie de Fibonacci
    fibonacci(limite);


}

