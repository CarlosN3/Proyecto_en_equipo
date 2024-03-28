#include <iostream>

using namespace std;

int main() {
    int num1, num2, resultado = 0;

    cout << "Ingrese el primer número: ";
    cin >> num1;

    cout << "Ingrese el segundo número: ";
    cin >> num2;

    for (int i = 1; i <= num2; i++) {
        resultado += num1;
        cout << "Paso " << i << ": " << num1 << " x " << i << " = " << resultado << endl;
    }

    cout << "El producto de " << num1 << " y " << num2 << " es " << resultado << ".";
    
    return 0;
}