#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void tablas_de_multiplicar_del_1_al_10(){
	
	cout<<"Tablas del 1 al 10. "<<endl;
	
	for(int i=1; i<=10; i++){
	cout<<"----------------"<<endl;
	cout<<"La tabla del "<< i <<endl;
	
	for (int m=0;m<=10;m++){
		cout<<i<<"x"<<m<<"="<<i * m<<endl;
		}
	}
	
}
