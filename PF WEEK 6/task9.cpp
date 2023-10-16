#include<iostream> 
using namespace std;

string checkTitle(int age,char gender);

main (){

	int age;
	char gender;
	cout << "Enter your age: ";
	cin >> age;
	cout << "Enter your gender (m/f): ";
	cin >> gender;
	string answer = checkTitle(age,gender);
	cout <<answer;

}


string checkTitle(int age,char gender){

	string result;
	if (age >= 18 && gender == 'm'){
		result = "Your personal title is: Mr.";
	}
	if (age >= 18 && gender == 'f'){
		result = "Your personal title is: Ms.";
	}
	if (age < 18 && gender == 'm'){
		result = "Your personal title is: Master";
	}
	if (age < 18 && gender == 'f'){
		result = "Your personal title is: Miss";
	}
	return result;
}
	