#include<iostream>
using namespace std;

float calculateAverage(float eng,float math,float chem,float ssc,float bio);
string calculateGrade(float average);

main(){

    string name;
    float eng,math,chem,ssc,bio;
    cout << "Enter student name: ";
    cin >> name;
    cout << "Enter marks for English: ";
    cin >> eng;
    cout << "Enter marks for Maths: ";
    cin >> math;
    cout << "Enter marks for Chemistry: ";
    cin >> chem;
    cout << "Enter marks for Social Science: ";
    cin >> ssc;
    cout << "Enter marks for Biology: ";
    cin >> bio;
    cout << "Student Name: "<<name<<endl;
    float average = calculateAverage(eng,math,chem,ssc,bio);
    cout << "Percentage: "<< average << "%"<<endl;
    string answer = calculateGrade(average);
    cout << "Grade: "<< answer;


}


float calculateAverage(float eng,float math,float chem,float ssc,float bio){

    float avg = (eng+math+chem+ssc+bio)/5;
    return avg;
}

string calculateGrade(float average){

    string result;
    if (average < 40){
        result = "F";
    }
    if (average >= 40 && average < 50){
        result = "D";
    }
    if (average >= 50 && average < 60){
        result = "C";
    }
    if (average >= 60 && average < 70){
        result = "B";
    }
    if (average >= 70 && average < 80){
        result = "B+";
    }
    if (average >= 80 && average < 90){
        result = "A";
    }
    if (average >= 90 && average <= 100){
        result = "A+";
    }
    return result;
}