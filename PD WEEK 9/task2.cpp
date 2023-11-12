#include<iostream>
using namespace std;

void check(string numbers[],int size);

main(){
    
    int num;
    cout << "Enter the size of Array: ";
    cin >> num;
    string numbers[num];
    for (int i = 0; i < num; i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> numbers[i];
    }
    int size = sizeof(numbers)/sizeof(numbers[0]);
    check(numbers,size);
}

void check(string numbers[],int size){
    
    int count=0;
    for ( int i = 0; i < size; i++){
        string str = numbers[i];
        for (int i = 0; str[i] != '\0'; i++){
            if (str[i] == '7'){
                count++;
            }    
        }
    }
    if (count == 0){
        cout << "there is no 7 in the array";
    }
    else{
        cout << "Boom!";
    }
}

 