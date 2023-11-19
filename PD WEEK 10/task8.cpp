#include <iostream>
using namespace std;

int rotate(int length,string elements[]);

int main(){

    int length;
    cout << "Enter the length of the array: ";
    cin >> length;
    string elements[length];
    cout << "Enter the elements of the array (" << "\"left\"" << " or " << "\"right\"" << "): " << endl;
    for (int x = 0; x < length; x++)
    {
        cin >> elements[x];
    }
    cout << "Number of full rotations: " << rotate(length,elements);
}

int rotate(int length,string elements[]){
    
    int right = 0;
    int left = 0;
    for (int y = 0; y < length; y++){

        if (elements[y] == "right"){
            right += 90;
        }
        else if (elements[y] == "left"){
            left += 90;
        }
    }
    int result = (right-left)/360;
    return abs(result);
}