#include <iostream>

using namespace std;

void tabla_de_multiplicar(){

    int num;
    cout << "Ingresa el número para mostrar la tabla de multiplicar: ";
    cin >> num;

    cout << "La tabla de multiplicar de " << num << " es:\n";
    for (int i = 1; i <= 10; i++){
        cout << num << " x " << i << " = " << num * i << endl;
    }

    
}
