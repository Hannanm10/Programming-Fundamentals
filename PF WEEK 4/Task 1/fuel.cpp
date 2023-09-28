#include<iostream>
using namespace std;

void fuel();

main () {
	cout << "Enter the distance: ";
	float distance;
	cin >> distance;
	fuel();
}

void fuel() {

	float fuel = distance*10;
	cout << "Fuel needed: " <<fuel;
}