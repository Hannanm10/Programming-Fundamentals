#include<iostream>
using namespace std;

void convertPINToDance(string pin);

main(){

    string pin;
    cout << "Enter your PIN (4 digits): ";
    cin >> pin;
    convertPINToDance(pin);
}

void convertPINToDance(string pin){
        
    int length = pin.length();

    if (length != 4){
        cout << "Invalid input.";
    }
    else{
        string Arr[10]= {"Shimmy","Shake","Pirouette","Slide","Box Step","Headspin","Dosado","Pop","Lock","Arabesque"};
        
        for(int x=0; x<4; x++) {
            if ((pin[x] != '0') && (pin[x] != '1') && (pin[x] != '2') && (pin[x] != '3') && (pin[x] != '4') && (pin[x] != '5') && (pin[x] != '6') && (pin[x] != '7') && (pin[x] != '8') && (pin[x] != '9')){
                cout << "Invalid input.";
                break; 
            }
            int indexNum = (pin[x]-'0')+(x);
            if (indexNum >= 10){
                indexNum = indexNum-10;
            }
            cout << Arr[indexNum];
            if (x < 3){
                cout << ", ";
            }
        }
    }
}
    