#include<iostream>
using namespace std;

main(){
	int digit1,digit2,digit3,digit4,digit5,sum;
	cout << "Enter a five-digit number: ";
	int num;
	cin >> num;
	digit1 = num%10;
	num = num/10;
	digit2 = num%10;
	num = num/10;
	digit3 = num%10;
	num = num/10;
	digit4 = num%10;
	num = num/10;
	digit5 = num%10;
	num = num/10;
	sum = digit1+digit2+digit3+digit4+digit5;
	if (sum%2 == 0){
		cout << "Evenish";
	}
	if (sum%2 == 1){
		cout << "Oddish";
	}
} 