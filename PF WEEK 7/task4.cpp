#include<iostream>
using namespace std;

int frequencyChecker(int num,int digit);

main(){

    int num,digit;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Enter the digit to check: ";
    cin >> digit;
    cout << "Frequency: "<<frequencyChecker(num,digit);

}

int frequencyChecker(int num,int digit){

    int count = 0;
    while (num != 0){

        int rem = num%10;
        if (rem == digit){
            count = count + 1;
        }
        num = num / 10;

    }
    return count;
}