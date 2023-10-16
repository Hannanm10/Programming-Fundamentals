#include<iostream>
using namespace std;

string findZodiacSign(int day,string month);

main(){

    string month;
    int day;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    string answer = findZodiacSign(day,month);
    cout << "Zodiac Sign: "<<answer;

}

string findZodiacSign(int day,string month){

    string result;
    if (month == "March" && day >= 21 || month == "April" && day <= 19){
        result = "Aries";
    }
    else if (month == "April" && day >= 20 || month == "May" && day <= 20){
        result = "Taurus";
    }
    else if (month == "May" && day >= 21 || month == "June" && day <= 20){
        result = "Gemini";
    }
    else if (month == "June" && day >= 21 || month == "July" && day <= 22){
        result = "Cancer";
    }
    else if (month == "July" && day >= 23 || month == "August" && day <= 22){
        result = "Leo";
    }
    else if (month == "August" && day >= 23 || month == "September" && day <= 22){
        result = "Virgo";
    }
    else if (month == "September" && day >= 23 || month == "October" && day <= 22){
        result = "Libra";
    }
    else if (month == "October" && day >= 23 || month == "November" && day <= 21){
        result = "Scorpio";
    }
    else if (month == "November" && day >= 22 || month == "December" && day <= 21){
        result = "Sagittarius";
    }
    else if (month == "December" && day >= 22 || month == "January" && day <= 19){
        result = "Capricorn";
    }
    else if (month == "January" && day >= 20 || month == "February" && day <= 18){
        result = "Aquarius";
    }
    else if (month == "February" && day >= 19 || month == "March" && day <= 20){
        result = "Pisces";
    }
    return result;



}