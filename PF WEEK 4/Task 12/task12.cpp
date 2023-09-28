#include<iostream>
using namespace std;

void name();

main(){

	while(true){
		name();
	}
}

void name(){

	cout << "Enter your name: ";
	string name;
	cin>>name;
}