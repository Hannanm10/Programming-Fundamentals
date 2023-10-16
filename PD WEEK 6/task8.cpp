#include <iostream>
using namespace std;

int calculateVolleyballGames(string yearType,int holidays,int homeTownWeekends);

main(){
    
    string yearType;
    int holidays, weekends;
    cout << "Enter year type: ";
    cin >> yearType;
    cout << "Enter number of holidays: ";
    cin >> holidays;
    cout << "Enter number of weekends: ";
    cin >> weekends;
    int answer = calculateVolleyballGames(yearType,holidays,weekends);
    cout << answer;
}


int calculateVolleyballGames(string yearType,int holidays,int homeTownWeekends){
    
    int leap = 48;
    int normal = 49;
    float playDuringWeekends;
    float playDuringHolidays;
    float total;
    int result;
            
    if (yearType == "leap"){

        playDuringWeekends = leap*0.75;
        playDuringHolidays = holidays*0.66;
        total = playDuringWeekends+playDuringHolidays;
        total = total+(total*0.15);
        result = total;
    }
    else {
        playDuringWeekends =  normal*0.75;
        playDuringHolidays =  holidays*0.7;
        total = playDuringWeekends + playDuringHolidays;
        result = total;
    }
    return result;
}