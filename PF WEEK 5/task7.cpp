#include<iostream>
using namespace std;

void mod(int num);

main(){
	int num;
	cout << "Enter a three-digit number: ";
	cin >> num;
	mod(num);
}

void mod(int num){
	int num1=num%10;
	num=num/10;
	int num2=num%10;
	num=num/10;
	int num3=num;
	if(num1 == num3){
	cout << "The number is symmetrical.";}
	if(num1 != num3){
	cout << "The number is not symmetrical.";}
	}