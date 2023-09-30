#include<iostream>
#include<windows.h>
using namespace std;

void gotoxy(int x,int y){
	
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

void letter1(){
	gotoxy(10,5);
	cout <<"H";
}
void letter2(){
	gotoxy(10,6);
	cout <<"A";
}
void letter3(){
	gotoxy(10,7);
	cout <<"S";
}
void letter4(){
	gotoxy(10,8);
	cout <<"S";
}
void letter5(){
	gotoxy(10,9);
	cout <<"A";
}
void letter6(){
	gotoxy(10,10);
	cout <<"N";
}
main(){
	system("cls");
	letter1();
	letter2();
	letter3();
	letter4();
	letter5();
	letter6();
	gotoxy(0,15);
}