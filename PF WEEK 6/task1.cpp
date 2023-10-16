#include<iostream> 
using namespace std;

bool greaterNumber(int num1,int num2);

main (){

	int num1,num2;
	cout << "Enter the first number: ";
	cin >> num1;
	cout << "Enter the second number: ";
	cin >> num2;
	int answer = greaterNumber(num1,num2);
	cout <<answer;
}

bool greaterNumber(int num1,int num2){

	bool result;
	if (num1 > num2){
		result = true;
	}
	if (num1 < num2){
		result = false;
	}
	return result;
}