#include<iostream>
using namespace std;

void feet();

main () {
	
	cout << "Enter the measurement in inches: ";
	float inches;
	cin >> inches;
	feet();
}

void feet() {

	float feet = inches/12;
	cout << "Equivalent in feet: " <<feet;
}