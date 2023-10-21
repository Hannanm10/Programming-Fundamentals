#include<iostream>
#include<iomanip>
using namespace std;

main (){

    int num;
    cout << "Enter numbers count: ";
    cin >> num;

    float count1=0,count2=0,count3=0,count4=0,count5=0;

    for (int x = 0; x < num; x++){

        int n;
        cout << "Enter a number: ";
        cin >> n;

        if (n <= 200){
            count1++;
        }
        else if (n <= 399){
            count2++;
        }
        else if (n <= 599){
            count3++;
        }
        else if (n <= 799){
            count4++;
        }
        else if (n >= 800){
            count5++;
        }

    }

    float p1 = ((count1/num)*100);
    float p2 = (count2/num)*100;
    float p3 = (count3/num)*100;
    float p4 = (count4/num)*100;
    float p5 = (count5/num)*100;

    cout <<fixed<<setprecision(2)<< p1<<"%"<<endl;
    cout <<fixed<<setprecision(2)<< p2<<"%"<<endl;
    cout <<fixed<<setprecision(2)<< p3<<"%"<<endl;
    cout <<fixed<<setprecision(2)<< p4<<"%"<<endl;
    cout <<fixed<<setprecision(2)<< p5<<"%"<<endl;

}