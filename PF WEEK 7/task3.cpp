#include<iostream>
using namespace std;

int totalDigits(int num);

main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    int answer = totalDigits(num);
    cout << "Total number of digits: "<<answer;
}

int totalDigits(int num){

    int ans = 0;
    while (num != 0){
        num = num/10;
        ans = ans + 1;
    }
    return ans;
}