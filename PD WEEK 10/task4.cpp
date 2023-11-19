#include <iostream>
using namespace std;

int volume(int boxes,int dimensions[]);

main(){

    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    int dimensions[boxes*3];
    cout << "Enter the dimensions of the boxes (length, width, height): "<<endl;
    for (int x = 0; x < boxes*3; x++){
        cin >> dimensions[x];
    }
    cout << "Total volume of all boxes: "<< volume(boxes,dimensions);
}

int volume(int boxes,int dimensions[]){

    int total = 0;
    for (int x = 0; x < boxes*3; x += 3){
        total = total+(dimensions[x]*dimensions[x+1]*dimensions[x+2]);
    }
    return total;
}