#include<iostream>
using namespace std;

void result();

main () {

	cout << "Enter your score: ";
	int score;
	cin >> score;
	result();
}

void result(){

	if (score > 50){
	cout << "Pass";
	}
	if (score <= 50){
	cout << "Fail";
} 
