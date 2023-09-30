#include<iostream>
using namespace std;

void pet(int hol);

main(){

	int hol;
	cout << "Holidays: ";
	cin >> hol;
	pet(hol);
}

void pet(int hol){

	int work = (365-hol)*63;
	hol = hol*127;
	int min = work+hol;
		if (min > 30000){
		int totalm = min-30000;
		int hrs = totalm/60;
		int finalm = totalm%60;	
		cout << "Tom will run away" <<endl;
		cout << hrs << " hours and " << finalm << " minutes for play";
	}
		if (min < 30000){
		int totalm2 = 30000-min;
		int mhrs = totalm2/60;
		int finalm2 = totalm2%60;	
		cout << "Tom sleeps well" <<endl;
		cout << mhrs << " hours and " <<finalm2<< " minutes less for play";
	}	

}