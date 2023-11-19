#include<iostream>
using namespace std;

void reverse(string words);

main(){

    string words;
    cout << "Enter a string: ";
    getline(cin,words);
    reverse(words);
}

void reverse(string words){

    string reversed = "";
    string word = "";

    for (int x = words.length(); x >= 0; x--){

        if (words[x] == ' '){
            reversed += word + " ";
            word = "";
        }
        else {
            word = words[x]+word;
        }
    }
    reversed += word;
    cout << "Reversed string: " << reversed;
}