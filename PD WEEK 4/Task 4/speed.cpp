#include<iostream>
using namespace std;

void SpeedCheck(int speed);

main(){
	
	int speed;
	cout << "Speed: ";
	cin >> speed;
	SpeedCheck(speed);
}


void SpeedCheck(int speed){
	
	if(speed <= 100){
	cout << "Perfect! You're going good.";
	}
	if(speed > 100){
	cout << "Halt... YOU WILL BE CHALLENGED!!!";
	}

}