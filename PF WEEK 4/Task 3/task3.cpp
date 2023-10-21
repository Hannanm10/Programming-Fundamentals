#include<iostream>
using namespace std;

void stickers(float side);

main () {
	
	cout << "Enter the side length of the Rubik's Cube: ";
	float side;
	cin >> side;
	stickers(side);
}

void stickers(float side) {

	float stickers = side*(6*side);
	cout << "Number of stickers needed: " <<stickers;
}
