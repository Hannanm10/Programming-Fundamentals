#include<iostream>
using namespace std;

string checkStudentStatus(int startingHr,int startingMin,int arrivalHr,int arrivalMin);

main(){
    
    int startingHr,startingMin,arrivalHr,arrivalMin;
    cout << "Enter Exam Starting Time (hour): ";
    cin >> startingHr;
    cout << "Enter Exam Starting Time (minutes): ";
    cin >> startingMin;
    cout << "Enter Student hour of arrival: ";
    cin >> arrivalHr;
    cout << "Enter Student minutes of arrival: ";
    cin >> arrivalMin;
    string answer = checkStudentStatus(startingHr,startingMin,arrivalHr,arrivalMin);
    cout << answer;
}

string checkStudentStatus(int startingHr,int startingMin,int arrivalHr,int arrivalMin){
    
    string result,min,hrs;
    if (startingHr >= 24){
        startingHr = startingHr%24;
    }
    if (arrivalHr >= 24){
        arrivalHr = arrivalHr%24;
    }

    int examTime = startingHr*60+startingMin;
    int studentTime = arrivalHr*60+arrivalMin;
    
    if (examTime > studentTime && (examTime-studentTime) > 30){
        
        int remTime = examTime-studentTime;
        int remHours = remTime/60;
        int remMinutes = remTime%60;
        
        if (remHours >= 1){
            
            min = to_string(remMinutes);
            hrs = to_string(remHours);
            result = "Early\n" + hrs + ":" + min + " hours before the start";
        }
        if (remHours < 1){
            
            min = to_string(remMinutes);
            result = "Early\n" + min + " minutes before the start";
        }
    }
    else if (examTime >= studentTime && (examTime-studentTime) <= 30){
        
        if (examTime == studentTime){
            
            result = "On time";
        }
        else {
            
            min = to_string(examTime-studentTime);
            result = "On time\n" + min + " minutes before the start";
        }
    }
    else if (examTime < studentTime){
        
        int overTime = studentTime-examTime;
        int overHours = overTime/60;
        int overMinutes = overTime%60;
        
        if (overHours >= 1){
            
            min = to_string(overMinutes);
            hrs = to_string(overHours);
            result = "Late\n" + hrs + ":" + min + " hours after the start";
        }
        if (overHours < 1){
            
            min = to_string(overMinutes);
            result = "Late\n" + min + " minutes after the start";
        }
        
    }
    return result;
}