#include<iostream> 
using namespace std;

float perimeter(char l,float num);

main(){

	char letter;
	float num;
	cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
	cin >> letter;
	cout << "Enter the value: ";
	cin >> num;
	float answer = perimeter(letter,num);
	cout << "The perimeter is: "<<answer;
	
}

float perimeter(char letter,float num){

	float perimeter;
	if (letter == 's'){
		perimeter = 4*num;
	}
	if (letter == 'c'){
		perimeter = 6.28*num;
	}
	if (letter == 't'){
		perimeter = 3*num;
	}
	if (letter == 'h'){
		perimeter = 6*num;
	}
	return perimeter;
}