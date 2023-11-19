#include <iostream>
using namespace std;

int special(int length,int elements[]);

main(){
    
    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int elements[length];
    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < length; x++){
        cin >> elements[x];
    }
    cout << "Special value: " << special(length,elements);
}

int special(int length,int elements[]){

    int count = 0;
    for (int x = 0; x <= length; x++){

        for (int y = 0; y < length; y++){

            if (elements[y] >= x){
                count++;
            }
        }
        if (count == x){
            return x;
        }
        count = 0;
    }
    return -1;
}