#include <iostream>
#include <iomanip>
using namespace std;

float minibus,truck,train;

main(){

    float cargo;
    cout << "Enter the count of cargo for transportation: ";
    cin >> cargo;
    
    float busTons = 0;
    float truckTons = 0;
    float trainTons = 0;
    float tons;

    for (int x = 1; x <= cargo; x++){

        cout << "Enter the tonnage of cargo "<<x<< ": ";
        cin  >> tons;

        if (tons <= 3){
            busTons += tons;
        }
        else if (tons > 3 && tons <= 11){
            truckTons += tons;
        }
        else if (tons > 11){
            trainTons += tons;
        }
    }

    float sum = busTons+truckTons+trainTons;
    float avg = ((busTons*200)+(truckTons*175)+(trainTons*120))/sum;

    minibus = (busTons/sum)*100;
    truck = (truckTons/sum)*100;
    train = (trainTons/sum)*100;

    cout << fixed << setprecision(2) << avg <<endl;
    cout << fixed << setprecision(2) << minibus << "%" <<endl;
    cout << fixed << setprecision(2) << truck << "%" <<endl;
    cout << fixed << setprecision(2) << train << "%" <<endl;

}

