#include<iostream>
using namespace std;

void calculatefuel(float distance);


main () {
	
	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	calculatefuel(distance);
	
}

void calculatefuel(float distance) {

	if (distance > 10){
	float fuel = distance*10;
	cout << "Fuel needed: "<<fuel;
	}
	if (distance <= 10){
	cout << "Fuel needed: 100";
	}
}
