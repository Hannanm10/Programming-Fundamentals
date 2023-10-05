#include<iostream>
using namespace std;

string checkAlphabetCase(char letter);

main(){
	string result;
	cout << "Enter a character (A/a): ";
	char letter;
	cin >> letter;
	result = checkAlphabetCase(letter);
}

string checkAlphabetCase(char letter){
	
	if (letter == 'A'){
	string small = "You have entered Capital A";
	cout <<small;
	return small;}
	if (letter == 'a'){
	string big = "You have entered small a";
	cout <<big;
	return big;}
	
}