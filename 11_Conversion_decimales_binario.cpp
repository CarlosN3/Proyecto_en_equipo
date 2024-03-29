#include <iostream>
#include <string>

using namespace std;

string decToBinary(int n){
    string binario = "";
    
    while(n > 0){
        binario = to_string(n % 2) + binario;
        n /= 2;
    }
    return binario;
}

void decimal_binario(){
    int num;
    cout << "Ingrese un n�mero decimal: ";
    cin >> num;

    string binario = decToBinary(num);
    cout << "La representaci�n binaria de " << num << " es " << binario << endl;

}
