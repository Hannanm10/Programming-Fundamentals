#include<iostream>
using namespace std;

void amplify(int num);

main (){

    int num;
    cout << "Enter the number to Amplify: ";
    cin >> num;
    amplify(num);
    

}

void amplify(int num){

    for (int x = 1; x <= num; x++){

        int y = x;
        
        if (y%4 == 0){
            y = y*10;
        }
        
        cout << y;
        
        if (x < num){
            cout << ", ";
        }
    }
}