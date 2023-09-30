#include<iostream>
using namespace std;

void Reverse(string result);

main(){
	
	string result;
	cout << "Enter 'true' or 'false': ";
	cin >> result;
	Reverse(result);
}

void Reverse(string result){
	
	if(result == "true"){
	cout << "false";
	}
	if(result == "false"){
	cout << "true";
	}
}