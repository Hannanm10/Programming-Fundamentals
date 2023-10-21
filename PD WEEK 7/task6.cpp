#include <iostream>
using namespace std;

bool isPrime(int num);
int primorial(int num);

main (){

    int num;
    cout << "Enter Number: ";
    cin >> num;

    cout << primorial(num);
}


int primorial(int num){

    int multiply=1;
    int n=0;
    
    for (int x = 1 ; x <= num ; x++){
        
        int y = isPrime(x);
       
        if(y == 1){
            
            multiply *= x;
            n++;
        }
    }
    return multiply;

}

bool isPrime(int num){

    if (num == 2 || num == 3){
        return true;
    }
    else if (num != 2 || num != 3){
        
        if (num%2 == 0 || num%3 == 0){
            return false;
        }
        else {
        return true;
        }
    }
    
}