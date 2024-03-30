//Programa de tipo encuesta que permite en el cual se solicita genero, peso, altura.

#include <iostream>

using namespace std;

void hipotenusa(){
	int n= 0, contadorM= 0, contadorF= 0;
	char genero;
	double pesoM, alturaM, pesoF, alturaF, peAcumM= 0, alAcumM= 0, 
	peAcumF= 0, alAcumF= 0, promAlM, promPeM, promAlF, promPeF;
	
	cout<<"Ingrese la cantidad de persona que va entrevistar: ";
	cin>> n;
	
	for(int i=0; i< n; i++){
		cout<<"Ingrese el Genero de la persona(m/f): ";
		cin>> genero;
		
		if(genero == 'M' || genero == 'm'){
			cout<<"Ingreso el peso: ";
			cin>> pesoM;
			peAcumM+=pesoM;
			cout<<"Ingrese la altura: ";
			cin>> alturaM;
			alAcumM+=alturaM;
			contadorM++;
		}else{
			if(genero == 'F' || genero == 'f'){
			cout<<"Ingreso el peso: ";
			cin>> pesoF;
			peAcumF+=pesoF;
			cout<<"Ingrese la altura: ";
			cin>> alturaF;
			alAcumF+=alturaF;
			contadorF++;
			}
		}
	}
	cout<<"\n";
	promPeM = peAcumM / contadorM;
	promAlM = alAcumM / contadorM;
	promPeF = peAcumF / contadorF;
	promAlF = alAcumF / contadorF;
	cout<<"El premdio de peso y altura para los hombres encuestados es: "<< promPeM<<" Lb. y "<<promAlM<<" cm."<<endl;
	cout<<"El premdio de peso y altura para las mujeres encuestadas es: "<< promPeF<<" Lb. y "<<promAlF<<" cm."<<endl;
}
