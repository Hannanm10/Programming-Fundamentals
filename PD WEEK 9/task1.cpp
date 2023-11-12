#include<iostream>
using namespace std;

bool IsLengthEven(string word,int length);

main(){

    string word;
    cout << "Enter a String: ";
    cin >> word;
    int length = word.length();
    cout << IsLengthEven(word,length);
}

bool IsLengthEven(string word,int length){
            
    if (length%2 == 0){
        return true;
    }
    else if (length%2 != 0){
        return false;
    }
}