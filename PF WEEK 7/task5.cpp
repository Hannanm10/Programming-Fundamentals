#include<iostream>
using namespace std;

int digitSum(int num);

main (){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Sum of digits: "<<digitSum(num);

}

int digitSum(int num){

    int rem;
    int sum = 0;
    while (num != 0){
        
        rem = num%10;
        sum = sum + rem;
        num = num / 10;
    }
    return sum;
}