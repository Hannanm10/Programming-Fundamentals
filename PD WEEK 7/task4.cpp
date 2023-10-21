#include<iostream>
using namespace std;

int triangle(int num);

main (){

    int num;
    cout << "Enter number of Triangle: ";
    cin >> num;
    cout << "Dots in the Triangle: " << triangle(num);
}

int triangle(int num){

    int dots = 0;
    
    for (int x = 1; x <= num ; x++){
        dots = dots+x;
    
    }
    return dots;
}