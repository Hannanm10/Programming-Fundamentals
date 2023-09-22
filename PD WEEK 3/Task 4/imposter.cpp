#include<iostream>
using namespace std;

main () {

	cout << "Enter Imposter Count: ";
	float imposter;
	cin >> imposter;
	cout << "Enter Player Count: ";
	float player;
	cin >> player;
	float chance;
	chance = (imposter/player)*100;
	cout << "Chance of being an imposter: "<<chance<< "%";

}
