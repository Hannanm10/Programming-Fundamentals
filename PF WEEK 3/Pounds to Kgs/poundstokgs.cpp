#include<iostream>
using namespace std;

main () {

	float weightinkgs = 0.45;
	float inputvalue;
	float convertedvalue;
	cout <<"Enter weight in pounds: ";
	cin >> inputvalue;
	convertedvalue = weightinkgs*inputvalue;
	cout << inputvalue <<" pounds is equal to "<< convertedvalue << " kilograms." ;

}