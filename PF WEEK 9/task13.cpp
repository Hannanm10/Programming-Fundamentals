#include<iostream>
using namespace std;

string seven(string str);
void jazzified(string elements[],int size);

main(){
    
    int num;
    cout << "Enter the number of chords: ";
    cin >> num;
    string elements[num];
    cout << "Enter " << num << " chords, one per line:" << endl;
    for (int i = 0; i < num; i++){
        cin >> elements[i];
    }
    int size = sizeof(elements)/sizeof(elements[0]);
    jazzified(elements,size);
}

void jazzified(string elements[],int size){
    
    cout << "Jazzified chords: [";
    for (int  i = 0; i < size; i++){
        string suit = elements[i];
        string result = seven(suit);
        if ( i != size-1){
            cout << result << ", ";
        }
        else{
            cout << result << "]";
        }
    }
    
}

string seven(string str){
    
    int size = str.length();
    size--;
    if (str[size] != '7'){
            str = str+"7";
    }
    return str;
}
