#include<iostream>
using namespace std;

main () {

	cout << "Number of square meters you can paint: ";
	int number;
	cin >> number;
	cout << "Width of the single wall (in meters): ";
	int width;
	cin >> width;
	cout << "Height of the single wall (in meters): ";
	int height;
	cin >> height;
	int paint;
	paint = number/(width*height);
	cout << "Number of walls you can paint: "<<paint;

}