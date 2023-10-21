#include<iostream>
using namespace std;

void printTable(int num);

main(){

    int num;
    cout << "Enter a number: ";
    cin >> num;
    printTable(num);

}

void printTable(int num){

    int ans;
    for (int x = 1; x < 11; x = x + 1){

        ans = num*x;
        cout << num << " x " << x << " = " << ans <<endl;

    }
}

