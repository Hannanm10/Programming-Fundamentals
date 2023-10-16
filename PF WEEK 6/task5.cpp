#include<iostream>
using namespace std;

float discount(string day,string month,float amount);

main() {

	string day,month;
        float amount;
        cout << "Enter Purchase Day: ";
        cin >> day;
        cout << "Enter Purchase Month: ";
        cin >> month;
        cout << "Enter Purchase Amount: ";
        cin >> amount;
        float answer = discount(day,month,amount);
        cout << "Payable Amount after discount: "<<answer;

}

float discount(string day,string month,float amount){

	float payable = amount;
	if (day == "Sunday" && month == "October"){
		payable = payable - (payable*0.1); 
	}
	if (day == "Sunday"){
    		payable = payable - (payable*0.05);
	}

	return payable;
}