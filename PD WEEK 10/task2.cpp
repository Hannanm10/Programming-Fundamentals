#include <iostream>
using namespace std;

int letterCount(int words,string array[],char letter);

main(){

    int words;
    cout << "Enter how many words you want to enter: ";
    cin >> words;
    string array[words];
    for (int x = 0; x < words; x++){
        cout << "Enter word " << x+1 << ": ";
        cin >> array[x];
    }
    char letter;
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    cout << letter << " shows up " << letterCount(words,array,letter) << " times in the data.";

}

int letterCount(int words,string array[],char letter){

    int count = 0;
    for (int x = 0; x < words; x++){
        
        string check = array[x];
        for (int y = 0; y < check.length(); y++){
            
            if (check[y] == letter){
                count++;
            }
        }
    }
    return count;

}