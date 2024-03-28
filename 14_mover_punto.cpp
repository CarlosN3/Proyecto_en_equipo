#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy (int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
}

char opcion; +
int x=10, y=10;

main(){
	while(opcion != 'z'){//dejara de funcionar hasta que el usuario presione la tecla 'z'
		system("cls");
		gotoxy(x,y); 
		cout<<'*';
		opcion=getch();
		switch(opcion){
			case 'w': y--; break; //mover el punto hacia arriba
			case 's': y++; break; //mover el punto hacia abajo
			case 'a': x--; break;//mover el punto hacia la izquierda
			case 'd': x++; break;//mover el punto hacia la derecha
		}		
	}
	cout<<endl;
	system("pause");
}
	


