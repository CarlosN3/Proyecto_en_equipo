#include <iostream>
using namespace std;

void cajero_automatico (){
	int saldo_in =2500, opc;
	float extra, saldo = saldo_in,retiro;
	
	do{
		cout<<"-----------------*Que transaccion desea realizar*------------------"<<endl;
		cout<<"1. Hacer deposito a mi cuenta"<<endl;
		cout<<"2. Hacer Retiro de mi cuenta"<<endl;
		cout<<"3. Ver estado de cuenta"<<endl;
		cout<<"4. Ya no quiero hacer una transaccion"<<endl;
		cin>>opc;
		
		switch (opc){
			case 1: cout<<"Ingresa el efectivo en el cajero y digita el saldo que estas depositando a la cuenta: "<<endl;
			cin>>extra;
			saldo += extra;
			saldo_in = saldo; 
			cout<<"Este es tu nuevo saldo: "<<"Q "<<saldo<<endl; 
			break;
			case 2: cout<<"Ingresa el monto que desea retirar: "<<endl;
			cin>>retiro;
			if (retiro > saldo){
				cout<<"Fondos insuficientes, por favor trate de nuevo";
			}else{
				saldo -= retiro;
				saldo_in = saldo; 
				cout<<"Este es tu nuevo saldo: "<<"Q "<<saldo<<endl;
			}
			break;
			case 3:
                cout << "Este es tu saldo actual: "<<"Q "<<saldo<<endl;
                break;
		}
		
	}while (opc != 4);
	
	cout<<"Gracias por utilizar nuestro cajero!"<<endl;
	
}
