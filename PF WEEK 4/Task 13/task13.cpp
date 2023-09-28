#include<iostream>
using namespace std;

void payableamount(string day,int fee);

main () { 
	int fee;
	string day;
	while(true){
	cout << "Enter the day of purchase: ";
	cin >> day;
	cout << "Enter the total purchase amount: $";
	cin >> fee;
	payableamount(day,fee);
}
}

void payableamount(string day,int fee){
	int amount;
	if (day== "Sunday"){
		amount = fee-(10*(fee/100));
	}
	if (day != "Sunday"){
		amount = fee-(5*(fee/100));
	}
	cout << "Payable Amount: $"<<amount<<endl;
}