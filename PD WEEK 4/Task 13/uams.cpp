#include <iostream>
using namespace std;

void printMenu() {
        
	cout << "                                               UNIVERSITY ADMISSION MANAGEMENT SYSTEM"<<endl;
}

void calculateAggregate(string name,int matricMarks,int interMarks,int ecatMarks){
	
	float aggregate = ((matricMarks / 1100.0) * 0.3 + (interMarks / 550.0) * 0.3 + (ecatMarks / 400.0) * 0.4)*100;
	cout << "Aggregate for " << name << " is: " << aggregate<<" %" <<endl;
}

void compare(string nameStd1,int ecatMarksStd1,string nameStd2,int ecatMarksStd2) {
        
	if (ecatMarksStd1 > ecatMarksStd2) {
        cout << nameStd1 << " is alotted roll no. 1. "<<endl;
        }  
        if (ecatMarksStd2 > ecatMarksStd1) {
        cout << nameStd2 << " is alotted roll no. 1. "<<endl;
   	}  
	
}

int main() {
	
	system("cls");
        printMenu();
	string name;
	float matric,inter,ecat;
	cout << "Name: ";
	cin>> name;
	cout << "Matric marks: ";
	cin >> matric;
	cout << "Inter marks: ";
	cin >> inter;
	cout << "Ecat marks: ";
	cin >> ecat;
       	calculateAggregate(name,matric,inter,ecat);
	cout << endl;
	string n1,n2;
	float marks1,marks2;
        cout << "Name of student1: ";
	cin >> n1;
	cout << "Marks of student1: ";
	cin >> marks1;
	cout << "Name of student2: ";
	cin >> n2;
	cout << "Marks of student2: ";
	cin >> marks2;
        compare(n1,marks1,n2,marks2);
    
}