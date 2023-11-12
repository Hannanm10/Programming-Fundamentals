#include <iostream>
using namespace std;

void reverse(int elements,int num[]);
void condition(int elements);

main(){

    int elements;
    cout << "Enter the number of elements: ";
    cin >> elements;
    condition(elements);
}

void condition(int elements){

    if (elements <= 0){
        cout << "Invalid input. Number of elements must be greater than 0.";
    }
    else{
    cout << "Enter " << elements << " numbers, one per line: "<<endl;
    int num[elements];
    for (int i = 0; i < elements; i++){
        cin >> num[i];
    }
    reverse(elements,num);
    }
}

void reverse(int elements,int num[]){

    
    cout << "Numbers in reverse order: ";
    for (int j = elements-1 ; j >= 0; j--){
        cout << num[j] << " ";
    }
}