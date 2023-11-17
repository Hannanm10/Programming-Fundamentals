#include <iostream>
#include <algorithm>
using namespace std;

int findCommonCharacters(string s1,string s2);

main(){

    string s1;
    string s2;
    cout << "Enter the first string: ";
    getline(cin,s1);
    cout << "Enter the second string: ";
    getline(cin,s2);
    int count = findCommonCharacters(s1,s2);
    cout << "Number of common characters: " << count;
}

int findCommonCharacters(string s1,string s2){
            
    int count = 0;
    int len1 = s1.length();
    int len2 = s2.length();
    for (int i = 0; i < len1; i++){

        for (int j = 0; j < len2; j++){

            if (s1[i] == s2[j]){
            count++;
            break;
            }
        }
    }
    return count;
}

