#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int y, int x) ;


	
int main(){

	int x,y;
	char c;	
	
	// Loo que so fecha se co caracter for P
	while(c!='p') {
		
		system("cls");
		
		gotoxy(y, x);  cout<<"*";
		
		c = getch();
		
		 switch(c)
		 {
			case 'w':	y--;		break;
		 
			case 's':	y++;	break;
		 
			case 'd': 	x++;	 break;
		 
			case 'a': 	x--;	 break;
			default:
				 break;
		}
		
		
	}
}


// Funcao que posiciona o elemento
void gotoxy(int y, int x) {
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon,dwPos);
}
