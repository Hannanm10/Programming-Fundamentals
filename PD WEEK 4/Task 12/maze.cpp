#include<iostream> 
#include<windows.h>
using namespace std;

void maze();
void gotoxy(int x,int y);
void move(int x,int y);


main(){
	
	int x=2,y=1;
	system("cls");
	maze();
	while(true){
		while(y <= 10){
		move(x,y);
			y=y+1;		
		}
		while(y >= 2){
		move(x,y);
			y=y-1;			
		}	
	}
}

void move(int x,int y){
	
	gotoxy(x,y);
	cout << "P";
	Sleep(400);
	gotoxy(x,y);
	cout << " ";	
	
}

void maze(){
	
	cout << "#################################" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;                                           
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#                               #" <<endl;
	cout << "#################################" <<endl;

}

void gotoxy(int x,int y){
	
	COORD coordinates;
	coordinates.X = x;
	coordinates.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}


                           