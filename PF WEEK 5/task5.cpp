#include<iostream>
#include<cmath>
using namespace std;

main (){

	float a,b,c;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	float disc = pow(b,2)-4*a*c;

	if (disc == 0){
		cout << "Solution: x = "<< -b/(2*a);
	}
	if (disc > 0){
		float num1 = (-b+sqrt(disc))/(2*a);
		float num2 = (-b-sqrt(disc))/(2*a);
		cout << "Solutions: x = "<<num1<< " and x = "<<num2;
	}
	if (disc < 0){
		float num1 = -b/(2*a);
		float num2 = (sqrt(-disc))/(2*a);
		cout << "Complex Solutions: x = "<<num1<< " + "<<num2<< "i and x = "<<num1<<" - "<<num2<< "i";
	}

}