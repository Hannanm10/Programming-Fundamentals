#include <iostream>
using namespace std;

void shift(string word);

main(){

    string word;
    cout << "Enter a String: ";
    getline(cin,word);
    shift(word);
}

void shift(string word){

    int i = 0;
    cout << "Shifted String: ";
    while (word[i] != '\0'){

        if (word[i] == 90){
           cout <<  char(65);
        }
        else if (word[i] == 122){
            cout << char(97);
        }
        else if (word[i] == 32){
            cout << char(32);
        }
        else if ((word[i] >= 65 && word[i] < 90) || (word[i] >= 97 && word[i] < 122)){
            cout << char(word[i]+1);
        }
        i++;
    }
}