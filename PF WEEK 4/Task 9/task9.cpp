#include<iostream>
using namespace std;

void calculatefuel();


main () {
	
	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	calculatefuel();
	
}

void calculatefuel() {

	if (distance > 10){
	float fuel = distance*10;
	cout << "Fuel needed: "<<fuel;
	}
	if (distance <= 10){
	cout << "Fuel needed: 100";
	}
}