#include <iostream>
using namespace std;

string checkPointPosition(int h,int x,int y);

main()
{
    int h,x,y;
    cout << "Enter height: ";
    cin >> h;
    cout << "Enter x coordinate: ";
    cin >> x;
    cout << "Enter y coordinate: ";
    cin >> y;
    string answer = checkPointPosition(h,x,y);
    cout << answer;
}

string checkPointPosition(int h,int x,int y){
    
    string result;
    bool onBorder = (x >= 0 && x <= 3*h && (y == 0 || y == h)) || (y >= 0 && y <= 4*h && (x == 0 || x == 2*h)) || (x == h && y >= h && y <= 3*h);

    if (onBorder){
        result = "Border";
    }
    else if (x > 0 && x < 2*h && y > 0 && y < 4*h){
        result = "Inside";
    }
    else{
        result = "Outside";
    }
    return result;
}