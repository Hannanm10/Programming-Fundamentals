#include<iostream>
using namespace std;

int time(int hrs,int min);

main(){
	
	int hrs,min;
	cout << "Enter Hours: ";
	cin >> hrs;
	cout << "Enter Minutes: ";
	cin >> min;
	time(hrs,min);
	
}

int time(int hrs,int min){

	hrs = hrs*60;
	int tmin = hrs+min;
	tmin = tmin+15;
	int hours = tmin/60;
	int minutes = tmin%60;
	cout <<hours<< ":" <<minutes;
}