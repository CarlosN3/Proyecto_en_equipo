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

int main() {
    int num;
    cout << "Ingrese un número decimal: ";
    cin >> num;

    string binario = decToBinary(num);
    cout << "La representación binaria de " << num << " es " << binario << endl;

    return 0;
}
