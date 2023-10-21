#include<iostream>
using namespace std;

void feet(float inches);

main () {
	
	cout << "Enter the measurement in inches: ";
	float inches;
	cin >> inches;
	feet(inches);
}

void feet(float inches) {

	float feet = inches/12;
	cout << "Equivalent in feet: " <<feet;
}
