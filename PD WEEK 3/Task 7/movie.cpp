#include<iostream>
using namespace std;

main () {

	cout << "Enter the movie name: ";
	string name;
	cin >> name;
	cout << "Enter the adult ticket price: $";
	int adult;
	cin >> adult;
	cout << "Enter the child ticket price: $";
	int child;
	cin >> child;
	cout << "Enter the number of adult tickets sold: ";
	int adtik;
	cin >> adtik;
	cout << "Enter the number of child tickets sold: ";
	int chtik;
	cin >> chtik;
	cout << "Enter the percentage of the amount to be donated to charity: ";
	int charity;
	cin >> charity;
	cout <<endl;		
	cout << "Movie: "<<name<<endl;
	int sales;
	sales = (adtik*adult)+(chtik*child);
	cout << "Total amount generated from ticket sales: $"<<sales<<endl;
	int donation;
	donation = (charity*sales)/100;
	cout << "Donation to charity ("<<charity<<"%): $"<<donation<<endl;
	int remaining;
	remaining = sales-donation;
	cout << "Remaining amount after donation: $"<<remaining;

}
	
	