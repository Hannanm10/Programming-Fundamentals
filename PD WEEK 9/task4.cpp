#include<iostream>
using namespace std;

void EvenOddTransformation(int arr[],int size,int n);
    
main(){

    int size,n;
    int arr[size];
    cout << "Enter the size of Array: ";
    cin >> size;
    for(int i = 0; i< size ; i++){
        cout << "Enter Element " << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "Enter number of times even-odd transformation need to be done: ";
    cin >> n;

    EvenOddTransformation(arr,size,n);

}
            
void EvenOddTransformation(int arr[],int size,int n){

    int NewNum = 0;
    int increment = 2;
    int decrement = -2;
    cout << "[";
    for (int x=0; x< size; x++){
        NewNum = arr[x];
        for (int y = 1 ; y <= n ; y++){

            if ((NewNum%2 == 0) || (NewNum==0)){
                NewNum = NewNum + decrement;
            }
            else {
                NewNum = NewNum + increment;
            }
        }
        cout<< NewNum ;
        if (x != (size-1)){
            cout << ", ";
        }
    }
    cout << "]";
}