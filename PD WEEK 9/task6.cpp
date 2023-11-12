#include<iostream>
using namespace std;

int ColoringTime(string cols[],int size);

main(){

    int size;
    string cols[size];
    
    cout << "Enter the size of Array: ";
    cin >> size;

    for (int i = 0; i < size ; i++){

        cout << "Enter Element " << i+1 << ": ";
        cin >> cols[i]; 
    }

    int time = ColoringTime(cols,size); 
    cout << "Time to color: " << time << " seconds";
}

int ColoringTime(string cols[],int size){
            
    int changeTime = 0;
    for (int x = 1; x < size ; x++){

        if (cols[x-1] != cols[x]){
            changeTime++;
        }
    }
    int FillingTime = size*2;
    int TotalTime = FillingTime + changeTime;
    return TotalTime;
}
