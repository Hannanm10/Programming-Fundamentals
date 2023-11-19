#include <iostream>
using namespace std;

bool isRepeatingCycle(int length,int elements[],int cycle);

main(){

    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int elements[length];
    cout << "Enter the elements of the array: "<<endl;
    for (int x = 0; x < length; x++){
        cin >> elements[x];
    }
    int cycle;
    cout << "Enter the length of the cycle: ";
    cin >> cycle;
    cout << "Output: " << isRepeatingCycle(length,elements,cycle);
}

bool isRepeatingCycle(int length,int elements[],int cycle){

    bool match = false;

    for (int x = 0; x < cycle; x++){

        if (cycle > length || elements[x] == elements[cycle+x]){
            match = true;
        }
    }
    return match;
}