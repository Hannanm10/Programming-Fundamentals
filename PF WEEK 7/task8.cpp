#include<iostream>
using namespace std;

int calculateMoney(int age,int price,int toy);

main (){

    int age,toy;
    float price;
    cout << "Enter Lilly's age: ";
    cin >> age;
    cout << "Enter the price of the washing machine: ";
    cin >> price;
    cout << "Enter the unit price for each toy: ";
    cin >> toy;

    int savings = calculateMoney(age,price,toy);

    if (savings >= price){
        savings -= price;
        cout << "Yes!" << endl << savings;
    }
    else {
        savings = price - savings;
        cout << "No!" << endl << savings;
    }

}

int calculateMoney(int age,int price,int toy){

    int even = 0;
    int toys = 0;
    int money = 0;

    for(int x = 1; x < age; x = x + 2 ){
        toys += 1;
    }

    for(int x = 2; x <= age; x = x + 2 ){
        money += 10;
        even += money;
        even -= 1;
    }

    int odd = toys*toy;
    int total = even+odd;
    return total;

}