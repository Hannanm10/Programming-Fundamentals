#include <iostream>
using namespace std;

bool arrange(int length,int elements[]);

int main(){

    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    int elements[length];
    cout << "Enter the elements of the array: " << endl;
    for (int x = 0; x < length; x++)
    {
        cin >> elements[x];
    }
    cout << "Can be arranged: " << arrange(length,elements);
}

bool arrange(int length,int elements[]){
    
    int swap;
    for (int x = 0; x < length; x++){

        for (int y = 0; y < length-1; y++){

            if (elements[y] > elements[y+1]){
                swap = elements[y];
                elements[y] = elements[y+1];
                elements[y+1] = swap;
            }
        }
    }
    for (int x = 0; x < length - 1; x++){

        if (elements[x + 1] == elements[x] + 1){
            return true;
        }
        else{
            return false;
        }
    }
}