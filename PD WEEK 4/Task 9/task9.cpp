#include<iostream>
using namespace std;

void tpchecker(int ppl,int tp);

main (){

	int ppl,tp;
	cout << "Number of people in the household: ";
	cin >> ppl;
	cout << "Number of rolls of TP: ";
	cin >> tp;
	tpchecker(ppl,tp);
}

void tpchecker(int ppl,int tp){

	int spd = ppl*57;
	int ts = tp*500;
	int days = ts/spd;
	if (days < 14){
		cout << "Your TP will only last "<<days<< " days, buy more!";
	}
	if (days >= 14){
		cout << "Your TP will last "<<days<< " days, no need to panic!";
	}

}		 