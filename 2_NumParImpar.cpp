#include <iostream>
using namespace std;

void numpar_impar(){
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
	
}
