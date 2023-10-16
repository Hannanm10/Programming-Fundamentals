#include<iostream>
using namespace std;

float calculateFruitPrice(string fruit,string day,float quantity);

main (){

    string fruit,day;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter the day of the week (e.g., Monday, Sunday): ";
    cin >> day;
    cout << "Enter the quantity: ";
    cin >> quantity;  
    float answer = calculateFruitPrice(fruit,day,quantity);
    if (answer >= 0){
        cout << answer;
    }
    else{
        cout << "error";
    }

}

float calculateFruitPrice(string fruit,string day,float quantity){

    float result;
    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" ){
        if (fruit == "banana"){
            result = 2.50*quantity;
        }
        else if (fruit == "apple"){
            result = 1.20*quantity;
        }
        else if (fruit == "orange"){
            result = 0.85*quantity;
        }
        else if (fruit == "grapefruit"){
            result = 1.45*quantity;
        }
        else if (fruit == "kiwi"){
            result = 2.70*quantity;
        }
        else if (fruit == "pineapple"){
            result = 5.50*quantity;
        }
        else if (fruit == "grapes"){
            result = 3.85*quantity;
        }

    }
    else if (day == "Saturday" || day == "Sunday"){
        if (fruit == "banana"){
            result = 2.70*quantity;
        }
        else if (fruit == "apple"){
            result = 1.25*quantity;
        }
        else if (fruit == "orange"){
            result = 0.90*quantity;
        }
        else if (fruit == "grapefruit"){
            result = 1.60*quantity;
        }
        else if (fruit == "kiwi"){
            result = 3.00*quantity;
        }
        else if (fruit == "pineapple"){
            result = 5.60*quantity;
        }
        else if (fruit == "grapes"){
            result = 4.20*quantity;
        }

    }
    else{
        result = -1;
    }
    return result;
}