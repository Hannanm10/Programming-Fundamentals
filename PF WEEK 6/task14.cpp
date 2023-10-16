#include<iostream>
#include<cmath>
using namespace std;

float calculateCost(float budget,string ticket,int people);

main (){

	float budget;
	string ticket;
	int people;
	cout << "Enter the budget: ";
	cin >> budget;
	cout << "Enter the category (VIP/Normal): ";
	cin >> ticket;
	cout << "Enter the number of people in the group: ";
	cin >> people;
	float answer = calculateCost(budget,ticket,people);
	
	if (budget >= answer ){
		answer = budget - answer;
		cout << "Yes! You have "+ to_string(answer) +" leva left.";
	}
	if (budget < answer){
		answer = answer - budget;
		cout << "Not enough money! You need "+ to_string(answer) +" leva.";
	}
	
}

float calculateCost(float budget,string ticket,int people){

	float budgetticks;
	if (people >= 1 && people <= 4){
		budgetticks = budget*0.75;
	}
	if (people >= 5 && people <= 9){
		budgetticks = budget*0.6;
	}
	if (people >= 10 && people <= 24){
		budgetticks = budget*0.5;
	}
	if (people >= 25 && people <= 49){
		budgetticks = budget*0.4;
	}
	if (people > 50) {
		budgetticks = budget*0.25;
	}

	float ticketsbill;
	if (ticket == "VIP"){
		ticketsbill = people*499.99;
	}
	if (ticket == "Normal"){
		ticketsbill = people*249.99;
	}
	

	float total = ticketsbill+budgetticks;
	return total;
}
	
	