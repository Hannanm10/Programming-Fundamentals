#include<iostream>
using namespace std;

main () {

	cout << "Enter vegetable price per kilogram (in coins): ";
	float vegetable;
	cin >> vegetable;
	cout << "Enter fruit price per kilogram (in coins): ";
	float fruit;
	cin >> fruit;
	cout << "Enter total kilograms of vegetables: ";
	float kilov;
	cin >> kilov;
	cout << "Enter total kilograms of fruits: ";
	float kilof;
	cin >> kilof;
	float rsv;
	rsv = vegetable/1.94;
	float rsf;
	rsf = fruit/1.94;
	float earnings;
	earnings = (rsv*kilov)+(rsf*kilof);
	cout << "Total earnings in Rupees (Rps): "<<earnings;

}