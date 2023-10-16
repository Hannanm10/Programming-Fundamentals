#include<iostream>
using namespace std;

bool areSameNumber(int num1,int num2,int num3);

main() {

	int num1,num2,num3;
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the third number: ";
        cin >> num3;
        int answer = areSameNumber(num1,num2,num3);

        cout <<answer;

}

bool areSameNumber(int num1, int num2, int num3){

	int result;
        if (num1 == num2 && num1 == num3){
        	result = true;
        }
        else {
        	result = false;    
        }

	return result;

}