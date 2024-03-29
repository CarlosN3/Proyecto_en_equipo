#include <iostream>
using namespace std;

void conversor_long_masas(){
	int opcion;
	double kilometros, millas, metros, pulgadas, libras, kilos;
	
	cout<<"Convertidor de Medidas."<<endl;
	
	cout<<"Escoge una opcion."<<endl;
	cout<<"1. Kilometros a millas."<<endl;
	cout<<"2. Millas a kilometros."<<endl;
	cout<<"3. Metros a pulgadas."<<endl;
	cout<<"4. Pulgadas a metros."<<endl;
	cout<<"5. Libras a kilos."<<endl;
	cout<<"6. Kilos a libras."<<endl;
	cin>>opcion;
	
	switch(opcion){
		
		case 1:
			cout<<"---1. Kilometros a millas.---"<<endl;
			cout<<"Ingrese la cantidad de kilometros a convertir en millas:"<<endl;
			cin>>kilometros;
			millas = kilometros * 0.621371;
			cout<<kilometros<<" kilometros equivalen a "<<millas<<"millas."<<endl;
			break;
			
		case 2:
			cout<<"---2. Millas a kilometros.---"<<endl;
			cout<<"Ingrese la cantidad de millas a convertir en kilometros:"<<endl;
			cin>>millas;
			kilometros = millas * 1.60934;
			cout<<millas<<" millas equivalen a "<<kilometros<<"kilometros."<<endl;
			break;
			
		case 3:
			cout<<"---3. Metros a pulgadas.---"<<endl;
			cout<<"Ingrese la cantidad de metros a convertir en pulgadas:"<<endl;
			cin>>metros;
			pulgadas = metros * 39.3701;
			cout<<metros<<" metros equivalen a "<<pulgadas<<"pulgadas."<<endl;
			break;
			
		case 4:
			cout<<"---4. Pulgadas a metros.---"<<endl;
			cout<<"Ingrese la cantidad de pulgadas a convertir en metros:"<<endl;
			cin>>pulgadas;
			metros = pulgadas * 0.0254;
			cout<<pulgadas<<" pulgadas equivalen a "<<metros<<"metros."<<endl;
			break;
			
		case 5:
			cout<<"---5. Libras a kilos.---"<<endl;
			cout<<"Ingrese la cantidad de libras a convertir en kilos:"<<endl;
			cin>>libras;
			kilos = libras * 0.453592;
			cout<<libras<<" libras equivalen a "<<kilos<<"kilos."<<endl;
			break;
			
		case 6:
			cout<<"---6. Kilos a libras.---"<<endl;
			cout<<"Ingrese la cantidad de kilos a convertir en libras:"<<endl;
			cin>>kilos;
			libras = kilos * 2.20462;
			cout<<kilos<<" kilos equivalen a "<<libras<<"libras."<<endl;
			break;
			
		default:
			cout<<"---La opción que ingresaste no es valida."<<endl;
			break;
	}
}
