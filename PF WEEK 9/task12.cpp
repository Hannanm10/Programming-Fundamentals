#include<iostream>
using namespace std ;

bool isSpecialArray(int num[],int size);

main(){

    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter " << size << " elements of the array: " <<endl;
    int num[size] ;
            
    for(int x = 0; x < size ; x++ ){
        cin>> num[x] ;
    }

    int res = isSpecialArray(num,size) ;

        if(res == 1){
            cout << "The array is special";
        }

        else{
            cout << "The array is not special";
        }

}

bool isSpecialArray(int num[],int n){


    for(int x = 0; num[x] == '\0' ; x = x + 2 ){

        if(num[x]%2 == 0){
            return true ;
        }
         else{
             return false ;
                    
        }
    }
    for(int x = 1; num[x] == '\0' ; x = x + 2 ){

        if(num[x]%2 != 0){
            return true;
        }
        else{
            return false;
        }
    }
}