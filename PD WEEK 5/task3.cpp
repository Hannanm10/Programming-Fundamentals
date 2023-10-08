#include<iostream>

int projecttimecalculation(int hrs,int days,int workers);
using namespace std;

main(){

    int hrs,days,workers;
    cout << "Enter the needed hours: ";
    cin >> hrs;
    cout << "Enter the days that the firm has: ";
    cin >> days;
    cout << "Enter the number of all workers: ";
    cin >> workers;
    int result = projecttimecalculation(hrs,days,workers);
    if (result < hrs){
        cout << "Not enough time! "<< hrs-result<< "hours needed.";
    }
    if (result > hrs){
        cout << "Yes!"<<result-hrs<< " hours left.";
    }
}


int projecttimecalculation(int hrs,int days,int workers){

    int time = days*9*workers;
    return time;

    }

