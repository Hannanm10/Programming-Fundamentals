#include<iostream>
using namespace std;

float lowestPrice(int, string);

main(){
    string period;
    int km;
    cout<<"Enter the number of kilometers: ";
    cin>> km;
    cout<<"Enter the period of the day (day/night): ";
    cin>> period;
    float price;
    price = lowestPrice(km , period);
    cout<<"Lowest price for "<<km<<" kilometers: "<<price<<" EUR";
}

float lowestPrice(int km , string period){
    float lowest;
    float taxiday = 0.79;
    float taxinight = 0.90;
    float busprice = 0.09;
    float trainprice = 0.06;
    if (period == "day" && (km > 0 && km < 20)){
        lowest = 0.70 + taxiday*km;
    }
    if (period == "night" && (km > 0 && km < 20)){
        lowest = 0.70 + taxinight*km;
    }
    if ((period == "day" || period == "night") && km >= 20 ){
        lowest = busprice*km;
    }
    if ((period == "day" || period == "night") && km >= 100){
        lowest = trainprice*km;
    }

    return lowest;
}




