#include<iostream>
using namespace std ;

main(){

    string vowels;
    cout << "Enter a string: ";
    getline(cin,vowels) ;
    cout << "String with vowels removed: ";
    
    for (int x = 0 ; vowels[x] != '\0'; x++){
        
        char letter = vowels[x];
        if ((letter =='a') || (letter =='e') || (letter =='i') || (letter =='o') || (letter =='u') || (letter =='A') || (letter=='E') || (letter =='I') || (letter =='O') || (letter =='U')){
            cout << "";
        }
        else {
            cout << letter;
        }
                
    }
}