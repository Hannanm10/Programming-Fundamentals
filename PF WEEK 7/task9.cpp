#include<iostream>
using namespace std;

main (){

    int year,money;
    cout << "Enter Money: ";
    cin >> money;
    cout << "Enter Year: ";
    cin >> year;

    int even = 0,odd = 0,oddMoney = 0,age = 1;
    
    for (int x = 1800; x <= year; x++)
    {
        if (x%2 == 0){
            even++;
        }
        if (x%2 == 1){
            odd++;
        }
    }

    int evenMoney = 12000*even;

    for (int y = 1; y <= odd; y++){
        
        oddMoney = oddMoney+12000+50*(18+age);
        age += 2;
    }

    int total = evenMoney+oddMoney;

    if (money > total){
        int total = money-total;
        cout << "Yes! He will live a carefree life and will have "<<total<<" dollars left.";
    }
    if (money < total){
        int total = total-money;
        cout << "He will need "<<total<<" dollars to survive.";
    }
 
}