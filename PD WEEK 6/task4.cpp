#include<iostream>
using namespace std;

float amount(char service,char time,int min);
string type(char service);

main(){

    char service,time;
    int min;
    cout << "Enter the service code (R/r for regular, P/p for premium): ";
    cin >> service;
    if (service == 'P' || service == 'p'){
        cout << "Enter time of the call (D/d for day, N/n for night): ";
        cin >> time;
    }
    cout << "Enter the number of minutes used: ";
    cin >> min;
    cout << "Service Type: " << type(service) <<endl;
    cout << "Total Minutes Used: "<<min<<" minutes"<<endl;
    float answer = amount(service,time,min);
    cout << "Amount Due: $"<<answer;

}

float amount(char service,char time,int min){

    float amount;
    if (service == 'R' || service == 'r'){
        if (min < 50){
            amount = 10;
        }
        if (min > 50){
            amount = 10+(0.20*(min-50));
        }
    }
    else if (service == 'P' || service == 'p'){
        if (time == 'D' || time == 'd'){
            if (min < 75){
                amount = 25;
            }
            if (min > 75){
                amount = 25+(0.10*(min-75));
            }
        }
        if (time == 'N' || time == 'n'){
            if (min < 100){
                amount = 25;
            }
            if (min > 100){
                amount = 25+(0.05*(min-100));
            }
        }

    }
    return amount;
}

string type(char service){
    
    string srvtype;
    if (service == 'P' || service == 'p'){
        srvtype = "Premium";
    }
    if (service == 'R' || service == 'r'){
        srvtype = "Regular";
    }
    return srvtype;
}