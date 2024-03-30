#include <iostream>
using namespace std;

void opmatematicas(){
	int n1,n2, suma=0, resta=0, multiplicacion=0, division=0;
	
	cout<<"Operaciones Basicas de Matematica."<<endl;
	
	cout<<"Ingrese un numero:"; cin>>n1;
	cout<<"Ingrese otro numero:"; cin>>n2;
	
	suma=n1+n2;
	resta=n1-n2;
	multiplicacion=n1*n2;
	division=n1/n2;
	
	cout<<"La suma de estos dos numeros es:"<<suma<<endl;
	cout<<"La resta de estos dos numeros es:"<<resta<<endl;
	cout<<"La multiplicacion de estos dos numeros es:"<<multiplicacion<<endl;
	cout<<"La division de estos dos numeros es:"<<division<<endl;
	
}
