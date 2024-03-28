#include <iostream>
#include <iomanip>

using namespace std;

long long decimal;

int main(){
	
	    
    cout << "Ingresa un número decimal: ";
    cin >> decimal;

    cout << "El equivalente hexadecimal es: ";
    cout << hex << uppercase << setw(8) << setfill('0') << decimal << endl;
	

    return 0;
}
