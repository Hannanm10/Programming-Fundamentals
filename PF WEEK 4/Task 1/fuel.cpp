#include<iostream>
using namespace std;

void fuel(float distance);

main () {
	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	fuel(distance);
}

void fuel(float distance) {

	float fuel = distance*10;
	cout << "Fuel needed: " <<fuel;
}
