#include<iostream>
using namespace std;

void InsertArrayInMiddle(int Arr1[],int n,int Arr2[],int m);

main(){

    int n,m,Arr1[n],Arr2[m];
    
    cout << "Enter the number of elements for the first array (must be 2): ";
    cin >> n;
    cout << "Enter " << n << " elements for the first array, one per line:"<<endl;
          
    for(int x = 0; x < n ; x++){
        cin >> Arr1[x];
    }

    cout << "Enter the number of elements for the second array: ";
    cin >> m;
    cout << "Enter " << m << " elements for the second array, one per line:"<<endl;

    for(int x = 0; x < m ; x++ ){
        cin >> Arr2[x];
    }

    InsertArrayInMiddle(Arr1,n,Arr2,m);    
}

void InsertArrayInMiddle(int Arr1[],int n,int Arr2[],int m){

    cout << "Resulting array: " << "[" << Arr1[0] << ", " ;           
    for(int z = 0; z < m; z++){
        cout << Arr2[z] << ", ";
    }
    cout << Arr1[1] << "]";                   
}   