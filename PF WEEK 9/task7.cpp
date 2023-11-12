#include<iostream>
using namespace std ;

double calculateTotalResistance(int n,double num[]);

main(){

    int n;
    cout << "Enter the number of resistors in the series circuit: ";
    cin >> n;
    cout << "Enter the resistance values (in ohms) of the " << n << " resistors, one per line: "<<endl;
    double num[n];
    double result = calculateTotalResistance(n,num);
    cout << "The total resistance of the series circuit is " << result << " ohms.";
}

double calculateTotalResistance(int n,double num[]){

    double sum = 0.00; 

    for(int x = 0; x < n ; x++ ){
                
        cin >> num[x];
        sum = sum + num[x] ;
    }
    return sum;
    
}