#include<iostream>
using namespace std;

float totalIncome(string type,int rows,int columns);

main(){
	
	string type;
        int rows,columns;
        cout << "Enter the screening type (Premiere/Normal/Discount): ";
        cin >> type;
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> columns;
        float answer = totalIncome(type,rows,columns);
        cout <<answer;
}

float totalIncome(string type,int rows,int columns){

	float result;
	float preprice = 12.0;
	float norprice = 7.50;
	float disprice = 5.00;
	if(type == "Premiere"){
    		result = rows*columns*preprice;
	}
	if(type == "Normal"){
    		result = rows*columns*norprice;
	}
	if(type == "Discount"){
    		result = rows*columns*disprice;
	}

	return result;
}