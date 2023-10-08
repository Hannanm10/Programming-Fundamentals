#include<iostream>
#include<windows.h>
using namespace std;

int px=30,py=1,e1x=2,e1y=1,e2x=75,e2y=21,e3x=72,e3y=16,e4x=50,e4y=7;

void maze();
char getCharAtxy(short int x, short int y);
void gotoxy(int x,int y);
void Enemy1();
void eraseEnemy1();
void moveEnemy1();
void Enemy2();
void eraseEnemy2();
void moveEnemy2();
void Enemy3();
void eraseEnemy3();
void moveEnemy3();
void Enemy4();
void eraseEnemy4();
void moveEnemy4();
void Player();
void erasePlayer();
void movePlayerLeft();
void movePlayerRight();
void movePlayerUp();
void movePlayerDown();


main(){

	system("cls");
	maze();
	Enemy1();
	Enemy2();
	Enemy3();
	Player();
	
	while (true){
		if (GetAsyncKeyState(VK_LEFT)){
			movePlayerLeft();
		}
		if (GetAsyncKeyState(VK_RIGHT)){
			movePlayerRight();
		}
		if (GetAsyncKeyState(VK_UP)){
			movePlayerUp();
		}
		if (GetAsyncKeyState(VK_DOWN)){
			movePlayerDown();
		}
		moveEnemy1();
		Sleep(150);
		moveEnemy2();
		Sleep(150);
		moveEnemy3();
		Sleep(150);
		moveEnemy4();
		Sleep(200);
	}
	
	gotoxy(0,40);
}

void maze(){

	cout <<"################################################################################                "<<endl;
	cout <<"||                                                                            ||                "<<endl;
	cout <<"||    %%%%%%%%%%%%%%                %%%%%%%%%%%%%%%%%%     |%|       %%%%%    ||                 "<<endl;
	cout <<"||          |%|   |%|    |%|        |%|            |%|     |%|         |%|    ||                  "<<endl;
	cout <<"||          |%|   |%|    |%|        |%|            |%|     |%|         |%|    ||                 "<<endl;
	cout <<"||                       |%|        %%%%%%%    %%%%%%%               %%%%%    ||                  "<<endl;
	cout <<"||          |%|          |%|                               |%|                ||                 "<<endl;
	cout <<"||          %%%%%%%               %%%%%%%%%%%%%%%%         |%|       %%%%%    ||         "<<endl;
	cout <<"||                 |%|             |%|                     |%|         |%|    ||   "<<endl;
	cout <<"||                 |%|             |%|           |%|                   |%|    ||   "<<endl;
	cout <<"||   |%|  |%||%|   |%|   |%|                     |%|             |%|   |%|    ||      "<<endl;
	cout <<"||   |%|  |%|            %%%    %%%%%%%%%        |%|             |%|          ||       "<<endl;
	cout <<"||   |%|                        |%|            %%%%%%            |%|          ||         "<<endl;
	cout <<"||   |%|                        |%|                      |%|     |%|          ||       "<<endl;
	cout <<"||   |%|  %%%%%%%%%%%%%         |%|%%%%%%%%%%%%%         |%|     |%|%%%%%%    ||         "<<endl;
	cout <<"||                                                       |%|                  ||           "<<endl;
	cout <<"||                                                                            ||              "<<endl;
	cout <<"||   |%|   |%|   |%|     %%%%%%%%%%%%%          |%|        |%|    |%|         ||            "<<endl;
	cout <<"||   |%|   |%|   |%|              |%|        %%%%%%        |%|    |%|         ||             "<<endl;
	cout <<"||   |%|                          |%|                      |%|    |%|         ||           "<<endl;
	cout <<"||   |%|   %%%%%%%%%%%            |&|%%%%%%%%%%%%%         |%|    |%|%%%%%    ||          "<<endl; 
	cout <<"||                                                                            ||           "<<endl;
	cout <<"||~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~||              "<<endl;
	cout <<"################################################################################               "<<endl;
}

char getCharAtxy(short int x, short int y){

	CHAR_INFO ci;
	COORD xy = {0, 0};
	SMALL_RECT rect = {x, y, x, y};
	COORD coordBufSize;
	coordBufSize.X = 1;
	coordBufSize.Y = 1;
	return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar: ' ';
}

void gotoxy(int x,int y){
	
	COORD coordinates;
	coordinates.X=x;
	coordinates.Y=y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void Enemy1(){

	gotoxy(e1x,e1y);
	cout << "[|]";
}

void eraseEnemy1(){

	gotoxy(e1x,e1y);
	cout << "   ";
}

void moveEnemy1(){

	eraseEnemy1();
	e1y = e1y+1;
	if (e1y == 22){
		e1y = 1;
	}
	Enemy1();
}

void Enemy2(){

	gotoxy(e2x,e2y);
	cout << "[|]";
}

void eraseEnemy2(){

	gotoxy(e2x,e2y);
	cout << "   ";
}

void moveEnemy2(){

	eraseEnemy2();
	e2y = e2y-1;
	if (e2y == 1){
		e2y = 21;
	}
	Enemy2();
}

void Enemy3(){

	gotoxy(e3x,e3y);
	cout << "[|]";
}

void eraseEnemy3(){

	gotoxy(e3x,e3y);
	cout << "   ";
}

void moveEnemy3(){

	eraseEnemy3();
	e3x = e3x-1;
	if (e3x == 5){
		e3x = 72;
	}
	Enemy3();
}

void Enemy4(){

	gotoxy(e4x,e4y);
	cout << "[|]";
}

void eraseEnemy4(){

	gotoxy(e4x,e4y);
	cout << "   ";
}

void moveEnemy4(){

	eraseEnemy4();
	e4x = e4x+2;
	e4y = e4y+1;
	if (e4x == 64){
		e4x = 50;
	}
	if (e4y == 14){
		e4y = 7;
	}
	Enemy4();
}

	

void Player(){

	gotoxy(px,py);
	cout << "(P)";
}

void erasePlayer(){

	gotoxy(px,py);
	cout << "   ";
}

void movePlayerLeft(){

	if (getCharAtxy(px-1,py) == ' '){
	erasePlayer();
	px = px-1;
	Player();
	}
}

void movePlayerRight(){

	if (getCharAtxy(px+3,py) == ' '){
	erasePlayer();
	px = px+1;
	Player();
	}
}

void movePlayerUp(){

	if (getCharAtxy(px,py-1) == ' '){
	erasePlayer();
	py = py-1;
	Player();
	}
}

void movePlayerDown(){

	if (getCharAtxy(px,py+1) == ' '){
	erasePlayer();
	py = py+1;
	Player();
	}
}

		