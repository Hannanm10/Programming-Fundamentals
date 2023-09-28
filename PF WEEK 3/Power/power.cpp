#include<iostream>
using namespace std;

main () {

	cout << "Enter voltage (in volts): ";
	float voltage; 
	cin >> voltage;
	cout << "Enter current (in amperes): ";
	float current;
	cin >> current;
	float power;
	power = voltage*current;
	cout << "The power is " <<power<< " watts.";

}