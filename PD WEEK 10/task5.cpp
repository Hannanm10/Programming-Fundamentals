#include <iostream>
using namespace std;

void ascending(int array[10]);

main(){

    int array[10];
    cout << "Enter the weights of the 10 packages: "<<endl;
    for (int x = 0; x < 10; x++){
        cin >> array[x];
    }
    ascending(array);
}

void ascending(int array[10]){

    int swap;
    for (int x = 0; x < 10; x++){

        for (int y = 0; y < 9; y++){

            if (array[y] > array[y+1]){
                swap = array[y];
                array[y] = array[y+1];
                array[y+1] = swap;
            }
        }
    }
    cout << "Sorted array in ascending order: [";
    for (int x = 0; x < 10; x++){
        cout << array[x];
        if (x < 9){
            cout << ", ";
        }
    }
    cout << "]";
}