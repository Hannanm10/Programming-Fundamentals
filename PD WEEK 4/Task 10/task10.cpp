#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y){
	
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

main (){
	system("cls");
	gotoxy(15,5);
	cout << "H";
	gotoxy(16,5);
	cout << "A";
	gotoxy(17,5);
	cout << "N";
	gotoxy(18,5);
	cout << "N";
	gotoxy(19,5);
	cout << "A";
	gotoxy(20,5);
	cout << "N";
	gotoxy(0,10);
}
	