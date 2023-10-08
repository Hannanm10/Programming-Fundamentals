#include <iostream>
using namespace std;

float taxcalculator(char typr,float price);

main(){

    char type;
    float price,answer;
    cout<< "Enter the vehicle type code (M, E, S, V, T): ";
    cin >> type;
    cout<< "Enter the price of the vehicle: $";
    cin >> price;
    answer=taxcalculator(type,price);
    cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<answer<<".";
}

float taxcalculator(char type,float price){
    float finalpr;
    if (type == 'M'){
        finalpr = price+(price*0.06);
        // cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalpr<<".";
    }
    if (type == 'E'){
        finalpr = price+(price*0.08);
    //    cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalpr<<".";
    }
    if (type == 'S'){
        finalpr = price+(price*0.1);
    //    cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalpr<<".";
    }
    if (type == 'V'){
        finalpr = price+(price*0.12);
        // cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalpr<<".";
    }
    if (type == 'T'){
        finalpr = price+(price*0.15);
    //    cout << "The final price of a vehicle of type "<<type<<" after adding the tax is $"<<finalpr<<".";
    }
    return finalpr;
}