#include<iostream>
using namespace std;

int count(int days);

int untreated = 0;

main (){

    int days;
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;
    cout << "Treated Patients: " <<count(days)<<endl;
    cout << "UnTreated Patients: " <<untreated;
}

int count(int days){

    int doc = 7;
    int patients = 0;
    int treated = 0;

    for (int x = 1; x <= days; x++){

        cout << "Number of patients who visited hospital on Day " <<x<< ": ";
        cin >> patients;

        if (x == 3 && untreated > treated){
            doc++;
        }
        if (patients > doc){
            treated += doc;
            untreated += patients-doc;
        }
        if (patients <= doc){
            treated += patients;
        }
    }

    return treated;
}