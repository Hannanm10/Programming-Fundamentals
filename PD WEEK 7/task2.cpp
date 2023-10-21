#include<iostream>
using namespace std;

void printUpper(int row);
void printLower(int row);


main(){

    int row;
    cout << "Enter desired number of rows: ";
    cin >> row;
    printUpper(row);
    printLower(row);

}

void printUpper(int row){

    for (int i = 1; i <= row; i++){

        for (int j = 1; j <= row-i; j++){
            cout << " ";
        }
        for (int j = 1; j <= i ; j++){
            cout << "*";

        }
        cout << endl;
    }

}

void printLower(int row){

    for (int y = row; y > 0; y--){

        for (int x = y; x < row ; x++){
            cout << " ";
        }
        for (int x = 1; x <= y ; x++ ){
            cout << "*";
        }
        cout << endl;
    }
}