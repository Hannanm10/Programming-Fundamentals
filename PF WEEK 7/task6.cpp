#include<iostream>
using namespace std;

int gcd(int num1,int num2);
int lcm(int num1,int num2);

main (){

    int num1,num2;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;
    cout << "GCD: " << gcd(num1,num2)<<endl;
    cout << "LCM: " << lcm(num1,num2)<<endl;
}

int gcd(int num1,int num2){

    while (num2 != 0){
        int num = num2;
        num2 = num1%num2;
        num1 = num;
    }
    return num1;
}

int lcm(int num1,int num2){
    
    int lcm = (num1*num2)/gcd(num1,num2);
    return lcm;
}