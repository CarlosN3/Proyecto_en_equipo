#include <iostream>
#include <math.h>

using namespace std;

void hipotenusa(){
	
	float catetoa, catetob, hipotenusa, suma;
	
	cout<<	"Ingresar el valor del cateto adyacente"<<endl;
	cin>>catetoa;
	
	cout<<	"Ingresar el valor del cateto opuesto"<<endl;
	cin>>catetob;
	
	catetoa*=catetoa;
	catetob*=catetob;
	suma = catetoa + catetob;
	hipotenusa = (sqrt(suma));
	
		cout<<	"El valor de la hipotenusa es: "<<hipotenusa<<endl;


	
}
