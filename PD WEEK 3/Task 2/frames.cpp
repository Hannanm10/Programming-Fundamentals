#include<iostream>
using namespace std;

main () {

	cout<<"Number of Minutes: ";
	int minutes;
	cin>> minutes;
	cout <<"Frames per Second: ";
	int framesps;
	cin>> framesps;
	int frames;
	frames= (minutes*60)*framesps;
	cout<<"Total Number of Frames: "<<frames;
	
}
	