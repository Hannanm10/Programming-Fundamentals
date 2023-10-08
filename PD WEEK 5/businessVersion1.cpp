#include<iostream>
using namespace std;

void header(){

    cout << "                         ###################################################################################################################"<<endl;
    cout << "                         #                                                                                                                 #"<<endl;
    cout << "                         #    ---------------------<<<<<<<<<<<<  STADIUM  TICKETS  MANAGEMENT SYSTEM  >>>>>>>>>>>----------------------    #"<<endl;
    cout << "                         #                                                                                                                 #"<<endl;
    cout << "                         ###################################################################################################################"<<endl;
}

int login(){

    int option;
    cout << "1. Login"<<endl;
    cout << "2. Exit"<<endl;
    cout << "Your option is ....";
    cin >> option;
    return option;
}

int loginpage(){

	int option1;
	cout << "1. Admin"<<endl;
        cout << "2. User"<<endl;
        cout << "Your option is ....";
        cin >> option1;
	return option1;
}

int usermenu(){

	cout << " "<<endl;
	cout << "                    -------------------------------------------------"<<endl;
	cout << "                     1.  Upcoming Matches                            "<<endl;
	cout << "                     2.  Stands Available                            "<<endl;
	cout << "                     3.  Tickets Available                           "<<endl;
	cout << "                     4.  Receipt                                     "<<endl;
	cout << "                     5.  Payment Method                              "<<endl;
	cout << "                     6.  Checkout                                    "<<endl;
	cout << "                     7.  Exit                                        "<<endl;
	cout << "                    -------------------------------------------------"<<endl;
	cout << " "<<endl;
	cout << "                  Your Option ...                                    "<<endl;
	int option3;
	cin >> option3;
	return option3;  
}   

int adminmenu(){

	cout << " "<<endl;
	cout << "                    -------------------------------------------------"<<endl;
	cout << "                     1.  Tickets Data                                "<<endl;
	cout << "                     2.  Sold Tickets Data                           "<<endl;
	cout << "                     3.  Exit                                        "<<endl;
	cout << "                    -------------------------------------------------"<<endl;
	cout <<endl;
	cout << "                  Your Option ...                                    "<<endl;
	int option2;
	cin >> option2;
	return option2;
}              

void ticketsdata(){

	cout << "       ################################################################################################## "<<endl;
	cout << "                                                 TICKETS DATA                                             "<<endl;
	cout << "       ################################################################################################## "<<endl;
	cout << "	  MATCHES	    TIME & DATE		TICKETS TYPE	  Stands            Tickets Price          "<<endl;           
	cout << "	################################################################################################## "<<endl;
	cout << "	1. Pakistan VS	   January 1, 2024   |  Standard      |   North Stand   |    Rs. 1000               "<<endl; 
 	cout << "           India                13:30        |                |   West Stand    |    Rs. 800                 "<<endl; 
	cout << "	                                     |                |   South Stand   |    Rs. 900                "<<endl; 
	cout << "	-------------------------------------|------------------------------------------------------------"<<endl; 
	cout << "	2. Pakistan VS     January 4, 2024   |	Premium       |   North Stand   |    Rs. 1500                 "<<endl; 
	cout << "	   England              19:30        |                |   West Stand    |    Rs. 1300                   "<<endl; 
	cout << "	                                     |	              |   South Stand   |    Rs. 1400                   "<<endl; 
	cout << "	-------------------------------------|------------------------------------------------------------"<<endl; 
	cout << "	3. Pakistan VS     January 8, 2024   |  VIP           |	  North Stand   |    Rs. 2000                    "<<endl; 
	cout << "	   New Zealand          13:30        |	              |   West Stand    |    Rs. 1800                     "<<endl; 
	cout << "	                                     |                |   South Stand   |    Rs. 1900                     "<<endl; 
	cout << "	################################################################################################## "<<endl; 
}

void soldticketsdata(){

	int stndrdnorthpr = 1000;
	int stndrdwestpr = 800;
	int stndrdsouthpr = 900;
	int prmnorthpr = 1500;
	int prmwestpr = 1300;
	int prmsouthpr = 1400;
	int vipnorthpr = 2000;
	int vipwestpr = 1800;
	int vipsouthpr = 1900;
	int stndrdnorthsold,stndrdwestsold,stndrdsouthsold,prmnorthsold,prmwestsold,prmsouthsold,vipnorthsold,vipwestsold,vipsouthsold;
	cout << "Standard North Stand tickets Sold: ";
	cin >> stndrdnorthsold;
	cout << "Standard West Stand tickets Sold: ";
	cin >> stndrdwestsold;
	cout << "Standard South Stand tickets Sold: ";
	cin >> stndrdsouthsold;
	cout << "Premium North Stand tickets Sold: ";
	cin >> prmnorthsold;
	cout << "Premium West Stand tickets Sold: ";
	cin >> prmwestsold;
	cout << "Premium South Stand tickets Sold: ";
	cin >> prmsouthsold;
	cout << "VIP North Stand tickets Sold: ";
	cin >> vipnorthsold;
	cout << "VIP West Stand tickets Sold: ";
	cin >> vipwestsold;
	cout << "VIP South Stand tickets Sold: ";
	cin >> vipsouthsold;


	cout << "	#######################################################################################################                                       "<<endl;
	cout << "						SOLD TICKETS DATA					                                "<<endl;
	cout << "	#######################################################################################################                                          "<<endl;
	cout << "	      MATCHES	      TICKETS TYPE	  Stands       Tickets Sold  TOTAL REVENUE                                    "<<endl;           
	cout << "	#######################################################################################################                                        "<<endl;
	cout << "	1. Pakistan VS	   |  Standard      |   North Stand   |  "<<stndrdnorthsold<<"         |   "<<stndrdnorthsold*stndrdnorthpr<<"                                         "<<endl; 
 	cout << "           India           |                |   West Stand    |  "<<stndrdwestsold<<"         |   "<<stndrdwestsold*stndrdwestpr<<"                                   "<<endl; 
	cout << "	                   |                |   South Stand   |  "<<stndrdsouthsold<<"         |   "<<stndrdsouthsold*stndrdsouthpr<<"                                    "<<endl; 
	cout << "	-------------------|-----------------------------------------------------------------------------------                                    "<<endl; 
	cout << "	2. Pakistan VS     |  Premium       |   North Stand   |  "<<prmnorthsold<<"         |   "<<prmnorthsold*prmnorthpr<<"                                   "<<endl; 
	cout << "	   England         |                |   West Stand    |  "<<prmwestsold<<"         |   "<<prmwestsold*prmwestpr<<"                        "<<endl; 
	cout << "	                   |	            |   South Stand   |  "<<prmsouthsold<<"         |   "<<prmsouthsold*prmsouthpr<<"                         "<<endl; 
	cout << "	-------------------|-----------------------------------------------------------------------------------                                          "<<endl; 
	cout << "	3. Pakistan VS     |  VIP           |	North Stand   |  "<<vipnorthsold<<"        |   "<<vipnorthsold*vipnorthpr<<"                                   "<<endl; 
	cout << "	   New Zealand     |	            |   West Stand    |  "<<vipwestsold<<"         |   "<<vipwestsold*vipwestpr<<"                                  "<<endl; 
	cout << "	                   |                |   South Stand   |  "<<vipsouthsold<<"         |   "<<vipsouthsold*vipsouthpr<<"                                   "<<endl; 
	cout << "	#######################################################################################################                                          "<<endl; 

}

	
	

main (){

	system("cls");
        header();
        while (true){
            int option = login();
            if (option == 2){
                return 0;
            }
            if (option == 1){
                int opt1 = loginpage();
		if (opt1 == 1){
			int opt2 = adminmenu();
				if (opt2 == 1){
					ticketsdata();
				}
				if (opt2 == 2){
					soldticketsdata();
				}
				if (opt2 == 3){
					return 0;
				}
		}
		if (opt1 == 2){
			int opt3 = usermenu();
		}
            }
        }
}

