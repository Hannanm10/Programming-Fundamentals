#include<iostream>
using namespace std;

void add(int num1,int num2){
	cout << "Addition: "<<num1+num2<<endl;
}
void sub(int num1,int num2){
	cout << "Subtraction: "<<num1-num2<<endl;
}
void mul(int num1,int num2){
	cout << "Multiplication: "<<num1*num2<<endl;
}
void division(int num1,int num2){
	cout << "Division: " <<num1/num2<<endl;
}

main() {
	int num1,num2;
	char op;
while(true){
	cout <<"Enter 1st number: ";
	cin >> num1;
	cout <<"Enter 2nd number: ";
	cin >> num2;
	cout <<"Enter an operator (+, -, *, /): ";
	cin >> op;
if (op == '+'){
	add(num1,num2);
}
if (op == '-'){
	sub(num1,num2);
}
if (op == '*'){
	mul(num1,num2);
}
if (op == '/'){
	division(num1,num2);
}
}
}