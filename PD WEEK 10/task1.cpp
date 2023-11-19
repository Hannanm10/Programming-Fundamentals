#include <iostream>
using namespace std;

int progressDays(int saturdays,int miles[]);

main(){

    int saturdays;
    cout << "Enter the number of Saturdays: ";
    cin >> saturdays;
    int miles[saturdays];
    for (int x = 0; x < saturdays; x++){
        cout << "Enter miles run for Saturday " << x+1 << ": ";
        cin >> miles[x];
    }
    cout << "Total progress days: " << progressDays(saturdays,miles);
}

int progressDays(int saturdays,int miles[]){

    int count = 0;
    for (int x = 0; x < saturdays-1; x++){

        if (miles[x] < miles[x+1]){
            count++;
        }
    }
    return count;
}