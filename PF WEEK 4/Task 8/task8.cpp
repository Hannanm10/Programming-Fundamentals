#include<iostream>
using namespace std;

void payableamount(string day,int fee);

main () { 

	cout << "Enter the day of purchase: ";
	string day;
	cin >> day;
	cout << "Enter the total purchase amount: $";
	int fee;
	cin >> fee;
	payableamount(day,fee);
}

void payableamount(string day,int fee){
	int amount;
	if (day== "Sunday"){
		amount = fee-(10*(fee/100));
	}
	if (day != "Sunday"){
		amount = fee;
	}
	cout << "Payable Amount: $"<<amount;
}