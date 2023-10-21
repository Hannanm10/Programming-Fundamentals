#include<iostream>
using namespace std;

main(){

    int row;
    cout << "Enter desired number of rows: ";
    cin >> row;

    for (int x = row; x >= 0; x--){

        for (int y = 1; y <= x ; y++){

            cout << "*";
        }
        cout << endl;
    } 
    
}