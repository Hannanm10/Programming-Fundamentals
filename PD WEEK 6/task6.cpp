#include<iostream>
using namespace std;

string calculateHotelPrices(string month,int days);

main(){

    string month;
    int days;
    cout << "Enter the month (May, June, July, August, September, October): ";
    cin >> month;
    cout << "Enter the number of stays: ";
    cin >> days;
    string answer = calculateHotelPrices(month,days);
    cout << answer;
}

string calculateHotelPrices(string month,int days){

    float studio,apartment;
    if ((month == "May" || month == "October") && days <= 7){
        studio = 50;
        apartment = 65;
    }
    else if ((month == "May" || month == "October") && (days > 7 && days <= 14)){
        studio = 50;
        studio = studio-(studio*0.05);
        apartment = 65;
    }
    else if ((month == "May" || month == "October") && days > 14){
        studio = 50;
        studio = studio-(studio*0.3);
        apartment = 65;
        apartment = apartment-(apartment*0.1);
    }
    if ((month == "June" || month == "September") && days <= 14){
        studio = 75.20;
        apartment = 68.70;
    }
    else if ((month == "June" || month == "September") && days > 14){
        studio = 75.20;
        studio = studio-(studio*0.2);
        apartment = 68.70;
        apartment = apartment-(apartment*0.1);
    }
    if ((month == "July" || month == "August") && days <= 14){
        studio = 76;
        apartment = 77;
    }
    else if ((month == "July" || month == "August") && days > 14){
        studio = 76;
        apartment = 77;
        apartment = apartment-(apartment*0.1);
    }
    
    apartment = apartment * days;
    studio = studio * days;

    return "Apartment: " + to_string(apartment) + "$.\nStudio: " + to_string(studio) + "$.";

    
}