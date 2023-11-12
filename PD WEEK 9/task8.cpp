#include <iostream>
#include <string>
using namespace std;

string findBrokenKeys(string correctPhrase,string actualTyped);

main(){

    string correctPhrase;
    string actualTyped;

    cout << "Enter the correct phrase: ";
    getline(cin,correctPhrase);
    cout << "Enter what you actually typed: ";
    getline(cin,actualTyped);
    cout << "Broken keys: " <<  findBrokenKeys(correctPhrase,actualTyped);
}

string findBrokenKeys(string correctPhrase,string actualTyped){
            
    int l1 = correctPhrase.length();
    int l2 = actualTyped.length();
    string brokenkey = "";
    for (int x = 0 ; x<l1 ; x++){
        if (correctPhrase[x] != actualTyped[x]){
            if (brokenkey.find(correctPhrase[x]) == string::npos){
                brokenkey += correctPhrase[x];
            }
        }
    }
    return brokenkey;
}
             