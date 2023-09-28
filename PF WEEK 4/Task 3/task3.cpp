#include<iostream>
using namespace std;

void stickers();

main () {
	
	cout << "Enter the side length of the Rubik's Cube: ";
	float side;
	cin >> side;
	stickers();
}

void stickers() {

	float stickers = side*(6*side);
	cout << "Number of stickers needed: " <<stickers;
}