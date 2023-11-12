#include <iostream>
using namespace std;

void reverse(string word);

main(){

    string word;
    cout << "Enter a string: ";
    cin >> word;
    reverse(word);

}

void reverse(string word){

    int i = word.length();

    cout << "Reversed String: ";
    for (int j = i-1; j >= 0; j--){
        cout << word[j];
    }
}