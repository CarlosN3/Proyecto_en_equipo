//Programa de heladeria
#include<iostream>

using namespace std;
string helado;//variables para ejecucion de programa
int sabores;
int cantidad= 0;
int total= 0;
float precio;
void encuesta(){
	cout<<"***************\n";//cuadro de bienvenida e inforamcion del programa
	cout<<"* BIENVENIDOS *\n*";
	cout<<"**************\n\n";
	cout<<"Le ofrecemos una variedad de sabores de helado en 2 diferentes presentaciones \n";
	cout<<"de hielo y nieve, para conocer los sabores de cada presentacion escriba en tipo \n";
	cout<<"presentacion de desea y dentro la categoria de eleccion podra realizar la compra:\n";//fin de cuadro de informacion
	cout<< "hielo\n";
	cout<< "nieve\n";
	cout<< "Escriba la categoria de su eleccion: ";
	cin>> helado;
	if(helado == "hielo"){//estructura if donde el usuario hace la seleccion.
		cout<< "1-FRESAS CON CREMA, 2-FRUTAS, 3-COCO, 4-MANIA.\n";
			cout<< "ingrese la cantidad de cada sabor segun se presentan lo sabores\n";
			cout<< "Precio por helado: Q.1.50\n";
	for (int sabores= 1; sabores <=4; sabores++){ // ciclo for para conocer la cantidad de helados para casa sabor 
		cout<< "cantidad: ";
		cin>> cantidad;
		if (cantidad> 0){ // para llevar el contador de los sabares de cada presentacion
			total= total+ cantidad;
		}else{
			total= cantidad+0;
		}
		precio= total * 1.50;
	}
	cout<< "Cantidad de helados comprados: ";
	cout<< total<< endl;
	cout<< "Total a pagar: "<< precio <<" Quetzales"<< endl;
	}else if (helado == "nieve"){
		cout<< "1-CHOCOLATE, 2-FRESA, 3-RON CON PASAS, 4-UVA.\n\n";
		cout<< "ingrese la cantidad de cada sabor segun se presentan lo sabores\n";
		cout<< "Precio por helado: Q.2.50\n";
	for (int sabores= 1; sabores <=4; sabores++){
		cout<< "cantidad: ";
		cin>> cantidad;
		if (cantidad> 0){
			total= total+ cantidad;
		}else{
			total= cantidad+0;
			
		}
		precio= total * 2.50;
	}
	cout<< "Cantidad de helados comprados: ";
	cout<< total<< endl;
	cout<< "Total a pagar: "<< precio <<" Quetzales"<< endl;
		
	}else{
		cout<< "ingrese corectamente el nombre"<< endl;
	}
}
