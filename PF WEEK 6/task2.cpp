#include<iostream> 
using namespace std;

int parityAnalysis(int number);

main (){

	int number;
	cout << "Enter a 3-digit number: ";
	cin >> number;
	int answer = parityAnalysis(number);
	cout <<answer;

}

int parityAnalysis(int number){

	int digit1,digit2,digit3,sum;
	digit1 = number%10;
	number = number/10;
	digit2 = number%10;
	number = number/10;
	digit3 = number%10;
	sum = digit1+digit2+digit3;
	int result;
	if (sum % 2 == number % 2){
		result = 1;
	}
	else {
		result = 0;
	}
	return result;
}