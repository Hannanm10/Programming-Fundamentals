#include<iostream>
using namespace std ;

void findLargestNumber(int n,int num[]);

main(){

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " numbers, one per line: " <<endl;
    int num[n];
    findLargestNumber(n,num) ;
}

void findLargestNumber(int n,int num[]){
    
    int largest = 0;

    for (int x = 0; x < n ; x++){
        
        cin >> num[x];
        for (int y = x - 1 ; y < n ; y--){
                  
            if (largest >= num[x]){
                largest;
            }
            else if (num[x] > largest){
                largest = num[x];
            }
        }

    }
    cout << "The largest number entered is: " << largest ;
}