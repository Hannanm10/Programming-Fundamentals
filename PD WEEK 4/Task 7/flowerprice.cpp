#include<iostream>
using namespace std;

void FlowerShop(int red,int white,int tulip);

main(){
	
	int red,white,tulip;
	cout << "Red Rose: ";
	cin >> red;
	cout << "White Rose: ";
	cin >> white;
	cout << "Tulips: ";
	cin >> tulip;
	FlowerShop(red,white,tulip);
}



void FlowerShop(int red,int white,int tulip){
	
	float redpr,whitepr,tulippr;
	redpr = 2;
	whitepr = 4.10;
	tulippr = 2.50;
	float redam,whiteam,tulipam;
	redam = red*redpr;
	whiteam = white*whitepr;
	tulipam = tulip*tulippr;
	float price = redam+whiteam+tulipam;
	if(price > 200){
	cout << "Original Price: $"<<price<<endl;
	cout << "Price after Discount: $"<< price*0.8;
	}
	if(price < 200){
	cout << "Original Price: $"<<price<<endl;
	cout << "No discount applied.";
	}
	 
}