#include<iostream> 
using namespace std;

float meters(int length,int width,int height,string unit);
float centim(int length,int width,int height,string unit);
float millim(int length,int width,int height,string unit);
float kilom(int length,int width,int height,string unit);


main(){

	int length,width,height;
	string unit;
	cout << "Enter the length of the pyramid (in meters): ";
	cin >> length;
	cout << "Enter the width of the pyramid (in meters): ";
	cin >> width;
	cout << "Enter the height of the pyramid (in meters): ";
	cin >> height;
	cout << "Enter the desired output unit (millimeters, centimeters, meters, kilometers): ";
	cin >> unit;
	if (unit == "meters"){
		meters(length,width,height,unit);
	}
	if (unit == "centimeters"){
		centim(length,width,height,unit);
	}
	if (unit == "millimeters"){
		millim(length,width,height,unit);
	}
	if (unit == "kilometers"){
		kilom(length,width,height,unit);
	}
}

float meters(int length,int width,int height,string unit){

	float volumem = (length*width*height)/3;
	cout << "The volume of the pyramid is: " << volumem<< " cubic "<< unit;
}

float centim(int length,int width,int height,string unit){
	
	int lencm = length*100;
	int widcm = width*100;
	int hcm = height*100;
	float volumecm = (lencm*widcm*hcm)/3;
	cout << "The volume of the pyramid is: " << volumecm<< " cubic "<< unit;
}

float millim(int length,int width,int height,string unit){
	
	int lenmm = length*1000;
	int widmm = width*1000;
	int hmm = height*1000;
	float volumemm = (lenmm*widmm*hmm)/3;
	cout << "The volume of the pyramid is: " << volumemm<< " cubic "<< unit;
}

float kilom(int length,int width,int height,string unit){

	int lenkm = length/1000;
	int widkm = width/1000;
	int hkm = height/1000;
	float volumekm = (lenkm*widkm*hkm)/3;
	cout << "The volume of the pyramid is: " << volumekm<< " cubic "<< unit;
}


