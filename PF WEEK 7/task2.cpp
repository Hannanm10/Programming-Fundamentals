#include<iostream>
using namespace std;

void generateFibonacci(int num);

main (){

    int num;
    cout << "Enter the length of the Fibonacci series: ";
    cin >> num;
    generateFibonacci(num);
}

void generateFibonacci(int num){

    int n1 = 0;
    int n2 = 1;
    int next = 0;
    for (int x = 1; x <= num ; x = x+1){

        if (x < num){
            cout << next << ", ";
        }
        if (x >= num){
            cout << next;
        }
        
        n1 = n2;
        n2 = next;
        next = n1 + n2;
        

    }
}