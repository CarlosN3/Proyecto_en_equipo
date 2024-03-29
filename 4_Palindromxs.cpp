#include<iostream>
#include<string.h>
using namespace std;

void palindromx(){
	int opcion;
	string palabra, numero, palindroma;
	int i = 0;
	
	cout<<"Determina si una palabra o numero es palindromo."<<endl;
	
	cout<<"Escoge una opcion."<<endl;
	cout<<"1.Palabra."<<endl;
	cout<<"2.Numero."<<endl;
	cin>>opcion;
	
	switch(opcion){
	case 1:
		cout<<"Ingrese la palabra para comprobar: ";
		cin>>palabra;
		for (i = palabra.size() -1; i>=0; i--){
			palindroma += palabra[i];
		}
		if(palabra == palindroma){
			cout<<"La palabra es palindroma."<<endl;
		}
		else{
			cout<<"La palabra no es palindroma."<<endl;
			break;
		}
	
	case 2:
		cout<<"Ingrese el numero para comprobar: ";
		cin>>numero;
		for (i = numero.size() -1; i>=0; i--){
			palindroma += numero[i];
		}
		if(numero == palindroma){
			cout<<"El numero es palindromo."<<endl;
		}
		else{
			cout<<"El numero no es palindromo."<<endl;
			break;
		}
	}
}
