#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<<"Determinar si un numero es Par o Impar."<<endl;

	cout<<"Ingrese un numero:";
	cin>>numero;
	
	if(numero%2==0){
		cout<<"El numero es par.";
	}
	else{
		cout<<"El numero es impar.";
	}
	
	return 0;
}
