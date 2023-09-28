#include<iostream>
using namespace std;

void vote();

main () {

	cout << "Enter your age: ";
	int age;
	cin >> age;
	vote();
}

void vote(){

	
if (age >= 18){
	cout << "You are eligible to vote.";
}
if (age < 18){
	cout << "You are not eligible to vote.";
} 
