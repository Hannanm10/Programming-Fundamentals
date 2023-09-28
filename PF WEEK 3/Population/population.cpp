#include<iostream>
using namespace std;
main () {

	cout<<"Enter the current world population: ";
	int population;
	cin>> population;
	cout<<"Enter the monthly birth rate (number of births per month): ";
	int birthrate;
	cin>> birthrate;
	int papu;
	papu = population+(birthrate*360);
	cout<< "The population in three decades will be: "<<papu;

}