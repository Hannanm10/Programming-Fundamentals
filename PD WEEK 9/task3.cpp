#include<iostream>
using namespace std;

bool AreAllElementsIdentical(string elements[],int size);
    
main(){

    int size;
    string elements[size];
    cout << "Enter the size of Array: ";
    cin >> size;
    for (int i = 0; i< size ; i++){
        
        cout << "Enter Element " << i+1 << ": ";
        cin >> elements[i];
    }
    cout << AreAllElementsIdentical(elements,size) ;
}
            
bool AreAllElementsIdentical(string elements[],int size){
        
    for(int x=0; x< size; x++){
        if (elements[x] != elements[0]){
            return false;
            break;
        }
    }
    return true;
}