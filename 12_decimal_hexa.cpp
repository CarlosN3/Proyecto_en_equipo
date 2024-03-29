#include <iostream>
#include <iomanip>

using namespace std;

long long decimal;
char respuesta= 's';
int main(){
	
	while(respuesta== 'S'|| respuesta== 's'){
	cout<<"El progrema le permite convertir un numoro escrito de manera Decimal a Hexadecimal"<<endl;	
    cout << "Ingresa un numero decimal: ";
    cin >> decimal;

    cout << "El equivalente hexadecimal es: ";
    cout << hex << uppercase << setw(8) << setfill('0') << decimal << endl;
    cout<< "\n";
    cout<<"Desea convertir otro numero (s/n)";
    cin>> respuesta;
	}

    return 0;
}
