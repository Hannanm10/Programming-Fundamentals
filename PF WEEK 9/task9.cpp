#include<iostream>
using namespace std;

bool CanPayWithChange(double change[],double total);

main(){

    double total;
    double change[4];

    cout << "Enter quarters: ";
    cin >> change[0];
    cout << "Enter dimes: ";
    cin >> change[1];
    cout << "Enter nickels: ";
    cin >> change[2];
    cout << "Enter pennies: ";
    cin >> change[3];
    cout << "Enter the total amount due: $";
    cin >> total;

    
    int res = CanPayWithChange(change,total);
        if (res == 1){
            cout<<"Can you pay the amount? Yes";
        }
        else if (res == 0){
            cout<<"Can you pay the amount? No";
        }
}

bool CanPayWithChange(double change[],double total){
            
    double sum = (change[0]*0.25)+(change[1]*0.10)+(change[2]*0.05)+(change[3]*0.01);
    if(sum >= total){
        return true ;
    }
    else if (total > sum){
        return false ;
    }
}   