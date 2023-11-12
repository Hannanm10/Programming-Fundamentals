#include <iostream>
using namespace std;

void postmortem(string word);

main(){

    string word;
    cout << "Enter a word: ";
    cin >> word;
    postmortem(word);
}

void postmortem(string word){

    int i = 0;
    while (word[i] != '\0'){

        cout << word[i] << " found at position " << i <<endl;
        i++;
    }

}
