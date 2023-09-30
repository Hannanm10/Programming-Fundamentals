#include<iostream>
using namespace std;

void discount(string country,float price);

main(){

	string country;
	float price;
	cout << "Enter the country's name: ";	
	cin >> country;	
	cout << "Enter the ticket price in dollars: $";
	cin >> price;
	discount(country,price);
}


void discount(string country,float price){

	if(country == "Pakistan"){
	price = price*0.95;
	}
	if(country == "Ireland"){
	price = price*0.90;
	}
	if(country == "India"){
	price = price*0.80;
	}
	if(country == "England"){
	price = price*0.70;
	}
	if(country== "Canada"){
	price = price*0.55;
	}
	cout << "Final ticket price after discount: $"<<price;
}
	