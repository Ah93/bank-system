

/* Include files */
#include <iostream>
#include <string>
#include <limits>
#include <sqlca.h>
#include <sqlcpr.h>
#include <iomanip>
#include <string>
#include <algorithm>
#include<conio.h>
/* Declaration of functions and constants used */
#include "Functions.h"
//test

using namespace std;

string pass;
string username;
bool admin;
bool blogin = false;
int opt,ch,a,b,t,j;
void help_menu();
void new_register();
void admin_menu();
void update();
void del();
void view();
void search_cus();
void fnLogin();
int run()
{
	blogin = false;
	 system("cls");
    system("color 1B");
	cout<<opt<<endl;
cout<<"**********************************************************\n";
cout<<"*   ##    ##    ########    ##     ##    ########        *\n";
cout<<"*   ##    ##    ##    ##    ###   ###    ##              *\n";
cout<<"*   ##    ##    ##    ##    #### ####    ##              *\n";
cout<<"*   ########    ##    ##    ## ### ##    ########        *\n";
cout<<"*   ##    ##    ##    ##    ##  #  ##    ##              *\n";
cout<<"*   ##    ##    ##    ##    ##     ##    ##              *\n";
cout<<"*   ##    ##    ########    ##     ##    ########        *\n";
cout<<"**********************************************************\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                 cout<<"\t*****************************************************************\n";
                 cout<<"\t*           WELCOME TO THE OUR BANK SERVECE                     *\n";
                 cout<<"\t*    KINDLY CHOOSE THE SELECTIONS THAT YOU WANT BELOW           *\n";
                 cout<<"\t*****************************************************************\n";
                 cout<<"\n";
                 cout<<"\n";
                 cout<<"\n";
                 cout<<"\n";
               cout<<"\t\t*************************\n";
               cout<<"\t\t* NO *     MENU         *\n";
               cout<<"\t\t*************************\n";
               cout<<"\t\t* 1 * ADMIN LOG IN      *\n";
               cout<<"\t\t* 2 * HELP MENU         *\n";
               cout<<"\t\t* 3 * EXIT              *\n";
               cout<<"\t\t*************************\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"SELECT YOUR CHOICE >>";
               cin>>opt;
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(),'\n');

               if(opt==1)
               fnLogin();
               if(opt==2)
               help_menu();
               else if(opt==3)
               exit(1);

}
int main()
{
//cin.ignore();
   

while (true)
{
	 system("cls");
    
	cout<<opt<<endl;
cout<<"**********************************************************\n";
cout<<"*   ##    ##    ########    ##     ##    ########        *\n";
cout<<"*   ##    ##    ##    ##    ###   ###    ##              *\n";
cout<<"*   ##    ##    ##    ##    #### ####    ##              *\n";
cout<<"*   ########    ##    ##    ## ### ##    ########        *\n";
cout<<"*   ##    ##    ##    ##    ##  #  ##    ##              *\n";
cout<<"*   ##    ##    ##    ##    ##     ##    ##              *\n";
cout<<"*   ##    ##    ########    ##     ##    ########        *\n";
cout<<"**********************************************************\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                   cout<<"\n";
                 cout<<"\t*****************************************************************\n";
                 cout<<"\t*           WELCOME TO THE OUR BANK SERVECE                     *\n";
                 cout<<"\t*    KINDLY CHOOSE THE SELECTIONS THAT YOU WANT BELOW           *\n";
                 cout<<"\t*****************************************************************\n";
                 cout<<"\n";
                 cout<<"\n";
                 cout<<"\n";
                 cout<<"\n";
               cout<<"\t\t*************************\n";
               cout<<"\t\t* NO *     MENU         *\n";
               cout<<"\t\t*************************\n";
               cout<<"\t\t* 1 * ADMIN LOG IN      *\n";
               cout<<"\t\t* 2 * HELP MENU         *\n";
               cout<<"\t\t* 3 * EXIT              *\n";
               cout<<"\t\t*************************\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"\n";
               cout<<"SELECT YOUR CHOICE >>";
               cin>>opt;
               cin.clear();
               cin.ignore(numeric_limits<streamsize>::max(),'\n');

               if(opt==1)
               fnLogin();
               if(opt==2)
               help_menu();
               else if(opt==3)
               exit(1);

}


               system("pause");


    }
void help_menu()
{
     system("cls");
     
cout<<"****************************************************************\n";
cout<<"*         ##    ##     #######     ##            ########      *\n";
cout<<"*         ##    ##     ##          ##            ##     ##     *\n";
cout<<"*         ##    ##     ##          ##            ##     ##     *\n";
cout<<"*         ########     #######     ##            #########     *\n";
cout<<"*         ##    ##     ##          ##            ##            *\n";
cout<<"*         ##    ##     ##          ##            ##            *\n";
cout<<"*         ##    ##     #######     #########     ##            *\n";
cout<<"****************************************************************\n";

cout<<"\t\t============================================================\n";
cout<<"\t\t=                      <<MAIN MENU HELP>>                  =\n";
cout<<"\t\t============================================================\n";
cout<<"\t\t=# the store's Home Provide a navigational map thathelp    =\n";
cout<<"\t\t= store's vistorsto accses system deffrent functions       =\n";
cout<<"\t\t=# the choicses below provided in the home page :          =\n";
cout<<"\t\t=1- (ADMIN MAIN MENU) which is only for the admin          =\n";
cout<<"\t\t=3- (HELP MAIN MENU)which is explaination                  =\n";
cout<<"\t\t============================================================\n";

               
		        cout << "\t\tPRESS ENTER TO RETURN TO MAIN MENU...";
		        cin.get();
		        main();


     }
void fnLogin()
{
	system("cls");

	EXEC SQL BEGIN DECLARE SECTION;
		char usrname[11];
		char pasw[15];
		int admLvl=0;
		int admID=0;
		int check=0;

	EXEC SQL END DECLARE SECTION;
	fnConnectDB();
	
	int trys = 0;

	cout<<"\n";
cout<<"***************************************************************\n";
cout<<"*    ###      ########     ##     ##    #####    ##     ##    *\n";
cout<<"*   ##  ##    ##     ##    ###   ###      #      ###    ##    *\n";
cout<<"*  ##    ##   ##     ##    #### ####      #      ####   ##    *\n";
cout<<"*  ##    ##   ##     ##    ## ### ##      #      ## ##  ##    *\n";
cout<<"*  ########   ##     ##    ##     ##      #      ##  #####    *\n";
cout<<"*  ##    ##   ##     ##    ##     ##      #      ##    ###    *\n";
cout<<"*  ##    ##   #########    ##     ##    #####    ##     ##    *\n";
cout<<"***************************************************************\n";		
	cout<<"\n\t=======================";
	cout<<"\n\tWelcome to Bank Al-ahli \n";
	cout<<"\t=========================\n\n";
	cout<<"\n\n";
	cout<<"\tUSERNAME : ";
	cin>>usrname;
	cout<<"\n\tPASSWORD : ";
	cin>>pasw;
	cout<<endl;
	
	
	EXEC SQL SELECT 1, admin_id INTO :admLvl, :admID //EXEC SQL SELECT (colum name), (colum name), (colum name), (colum name)  INTO :(var name), :(var name), :(var name), :(var name)
		FROM admin //Table Name 
		where username = :usrname AND password = : pasw ; //WHERE (colum name) = :(var name) AND (colum name) = : (var name);
	
	if(admLvl == 1)// If True or Same in database
	{
		admin_menu();
	}
	else 
	{
		cout<<"\tUsername or Password incorrect. \n";
		fnCloseDBConnection();
	  cout<<"\tPress 1 to try again or 0 to exit? : ";
	  cin>>trys;
      cin.clear();
	  cin.ignore(numeric_limits<streamsize>::max(),'\n');

	switch(trys){
		case 1 : 
			fnLogin();
			break;
		case 0 : 
			break;
		default : exit(1);	
}
	
}	
}

void admin_menu()
{


                 system("cls");
             
cout<<"***************************************************************\n";
cout<<"*    ###      ########     ##     ##    #####    ##     ##    *\n";
cout<<"*   ##  ##    ##     ##    ###   ###      #      ###    ##    *\n";
cout<<"*  ##    ##   ##     ##    #### ####      #      ####   ##    *\n";
cout<<"*  ##    ##   ##     ##    ## ### ##      #      ## ##  ##    *\n";
cout<<"*  ########   ##     ##    ##     ##      #      ##  #####    *\n";
cout<<"*  ##    ##   ##     ##    ##     ##      #      ##    ###    *\n";
cout<<"*  ##    ##   #########    ##     ##    #####    ##     ##    *\n";
cout<<"***************************************************************\n";
   cout<<"\n";
   cout<<"\n";
   cout<<"\n";
   cout<<"\n";

       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* NO *           <<ADMIN MAIN MENU>>               *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 1  *         Register new customer               *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 2  *          Edit customer informatin           *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 3  *         Delete customer informatin          *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 4  *            Search customer                  *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 5  *       View All Customer Details             *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
       cout<<"\t\t\t\t\t* 6  *                  HOME                       *\n";
       cout<<"\t\t\t\t\t****************************************************\n";
	   cout<<"\n";
	   cout<<"\n";
	   cout<<"\n";
       cout<<"Kindly select your choice >> ";
       cin>>b;
	   cout<<"\n";
	   cout<<"\n";
                if(b==1)
                  new_register();
                else if(b==2)
                    update();
                else if(b==3)
                    del();
                else if(b==4)
                    search_cus();
                else if(b==5)
                   view();
                else if(b==6)
                    main();
                else
				{
      
	  cout<<"\tInvalid choice !! \n";

	  cout<<"\tPress 1 to try again or 0 to exit? : ";
	  cin>>a;
      cin.clear();
	  cin.ignore(numeric_limits<streamsize>::max(),'\n');

	switch(a){
		case 1 : 
			admin_menu();
			break;
		case 0 : 
			break;
		default : exit(1);	
}

				}


}

void new_register()
{

    EXEC SQL BEGIN DECLARE SECTION;
       char ID_number[30];
       char name [30];
       char IC_NO[30];
       char dob[30];
       char gender[30];
       char contact[30];
       char email[30];
       char adres[30];
       char bal[30];
	   char sysdate[20];
EXEC SQL END DECLARE SECTION;
	fnConnectDB();

	EXEC SQL SELECT MAX(cus_id) into :ID_number from customer2;
	
     system("cls");
     
    cout<<"\n\t=======================";
	cout<<"\n\tWelcome to Bank Al-ahli \n";
	cout<<"\t=========================\n\n";
	cout<<" Register new customer\n\n";
cin.ignore();
     cout<<"\t\tcustomer ID : \t";
     cin.getline(ID_number,30);
 cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tcustomer Name : \t";
     cin.getline(name,30);
 cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tcustomer IC number : \t";
     cin.getline(IC_NO,30);
 cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tbirth of date : \t";
     cin.getline(dob,30);
  cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tcustomer Gender : \t";
     cin.getline(gender,30);
  cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tcustomer contact number : \t";
     cin.getline(contact,30);
  cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tcustomer Email :\t";
     cin.getline(email,30);
  cout<<"--------------------------------------------------------------\n";
    cout<<"\t\tcustomer Address : \t";
     cin.getline(adres,30);
  cout<<"--------------------------------------------------------------\n";
     cout<<"\t\tbalance : ";
     cin.getline(bal,30);
   cout<<"--------------------------------------------------------------\n";


   EXEC SQL INSERT INTO customer2 VALUES(:ID_number,:name,:IC_NO,:dob,:gender,:contact,:email,:adres,:bal,sysdate);
fnCloseDBConnection();
       cout<<"\n";
    cout<<"\t\tone row inserted into database!!\n\n";
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	            

		        cout << "\t\tPRESS ENTER TO RETURN TO ADMIN MENU...";
		        cin.get();
		        admin_menu();

	
     }
void view()
{
    cin.ignore();
  EXEC SQL BEGIN DECLARE SECTION;
       char ID_number[30];
       char name [30];
       char IC_NO[30];
       char dob[30];
       char gender[30];
       char contact[30];
       char email[30];
       char adres[30];
       char bal[30];
	   char sysdate[20];
 EXEC SQL END DECLARE SECTION;
    int totalCustomer=0;
	fnConnectDB();
	system("cls");
	cout<<"\n\t=======================";
	cout<<"\n\tWelcome to Bank Al-ahli \n";
	cout<<"\t=========================\n\n";
	cout<<" View All Customers Details\n\n";
	cout<<"Id"<<"\t"<<setw(5)<<"Name "<<"\t"<<setw(5)<<"IC_______no"<<"\t"<<setw(10)<<"DOB   "<<"\t"<<setw(10)<<"Gender"<<"\t"<<setw(10)<<"Contact   "<<"\t"<<setw(10)<<"Email       "<<"\t"<<setw(10)<<"Address	"<<"\t"<<setw(10)<<"Balance    "<<"\t"<<setw(10)<<"date\n";
	cout<<"_______________________________________________________________________________________________________________________________________________________________________\n";

	EXEC SQL DECLARE customerReportCursor CURSOR FOR
		select * from customer2;
	EXEC SQL OPEN customerReportCursor;
	EXEC SQL WHENEVER NOT FOUND DO break;
	while (1)
	{
		//fetch the data from cursor and display;
		EXEC SQL FETCH customerReportCursor
INTO :ID_number, :name, :IC_NO, :dob, :gender , :contact, :email, :adres, :bal, sysdate;
string strID = string(ID_number);
strID.erase(remove(strID.begin(), strID.end(), ' '), strID.end());
string strName = string(name);
strName.erase(remove(strName.begin(), strName.end(), ' '), strName.end());
string stric = string(IC_NO);
stric.erase(remove(stric.begin(), stric.end(), ' '), stric.end());
string strdob = string(dob);
strdob.erase(remove(strdob.begin(), strdob.end(), ' '), strdob.end());
string strdgend = string(gender);
strdgend.erase(remove(strdgend.begin(), strdgend.end(), ' '), strdgend.end());
string strdcont = string(contact);
strdcont.erase(remove(strdcont.begin(), strdcont.end(), ' '), strdcont.end());
string strem = string(email);
strem.erase(remove(strem.begin(), strem.end(), ' '), strem.end());
string stradr = string(adres);
stradr.erase(remove(stradr.begin(), stradr.end(), ' '), stradr.end());
string strbal = string(bal);
strbal.erase(remove(strbal.begin(), strbal.end(), ' '), strbal.end());
string strdate = string(sysdate);
strdate.erase(remove(strdate.begin(), strdate.end(), ' '), strdate.end());
cout<<strID<<"\t"<<setw(5)<<strName<<"\t"<<setw(5)<<stric<<"\t"<<setw(10)<<strdob<<"\t"<<setw(10)<<strdgend<<"\t"<<setw(10)<<strdcont<<"\t"<<setw(10)<<strem<<"\t"<<setw(10)<<stradr<<"\t"<<setw(12)<<strbal<<"\t"<<setw(20)<<strdate<<endl;
		cout<<"______________________________________________________________________________________________________________________________________________________________________________\n";
totalCustomer++;
	}
	
	EXEC SQL WHENEVER NOT FOUND CONTINUE;

	EXEC SQL CLOSE customerReportCursor;

	cout<<"\nTotal customer : "<<totalCustomer<<endl;
	            cin.get();
		        cout << "\t\tPRESS ENTER TO RETURN TO ADMIN MENU...";
		        cin.get();
		        admin_menu();

	fnCloseDBConnection();
}
void update()
{
    EXEC SQL BEGIN DECLARE SECTION;
       char ID_number[30];
       char name [30];
       char IC_NO[30];
	   int count = 0;
       char dob[30];
       char gender[30];
       char contact[30];
       char email[30];
       char adres[30];
       char bal[30];
	   char sysdate[20];
 EXEC SQL END DECLARE SECTION;
   int chooice = 0;
	

	fnConnectDB();

	system("cls");
	cout<<"\n\t=======================";
	cout<<"\n\tWelcome to Bank Al-ahli\n";
	cout<<"\t=========================\n\n";
	cout<<" Edit A Customer\n\n";

	cout<<"Customer id\t\t: ";
	cin>>ID_number;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
	EXEC SQL SELECT 1 INTO :count from customer2 where cus_id =:ID_number;
	if (count ==1){
	
	cout<<"\n\nEnter new value for customer:\n\n";
	cout<<"Customer contact\t\t: ";
	cin.getline(contact,30);
	cout<<"Customer address\t\t: ";
	cin.getline(adres,30);
	
		cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	EXEC SQL update customer2 SET contact_no=:contact,Address=:adres
		where cus_id =:ID_number;

    fnCloseDBConnection();
	cout<<"\nCustomer record has been updated\n\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
                

		        cout << "\t\tPRESS ENTER TO RETURN TO ADMIN MENU...";
		        cin.get();
		        admin_menu();
	}
	else
	{
		cout<<"invalid id\n";
		cout<<"\tPress 1 to try again or 0 to exit? : ";
	  cin>>t;
      cin.clear();
	  cin.ignore(numeric_limits<streamsize>::max(),'\n');

	switch(t){
		case 1 : 
			update();
			break;
		case 0 : 
			break;
		default : admin_menu();	
}
	}
	
	
}
void search_cus()
{
    system("cls");

   EXEC SQL BEGIN DECLARE SECTION;
       char ID_number[300];
       char name [30];
       char ic_no[30];
       char dob[30];
	   int count = 0;
       char gender[30];
       char contact[30];
       char email[30];
       char adres[30];
       char bal[30];
	   char sysdate[20];
 EXEC SQL END DECLARE SECTION;
 fnConnectDB();


    cout<<"\n\t===============================";
	cout<<"\n\t welcome to the Bank Al-ahli  \n";
	cout<<"\t===============================\n\n";
	cout<<" Find A Customer\n\n";

	cout<<"Customer Id\t\t: ";
	cin>>ID_number;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	EXEC SQL SELECT 1 INTO :count from customer2 where cus_id =:ID_number;
	if (count ==1){
		EXEC SQL SELECT * INTO : ID_number, :name, :ic_no, :dob, :gender , :contact, :email, :adres, :bal,sysdate
	 from customer2 where cus_id =:ID_number;
cout<<"---------------------------------------------------------------------------------------------------\n";
 
	cout<<"\nCustomer Id\t\t\t\t: "<<ID_number;
	cout<<"\nCustomer name\t\t\t\t: "<<name;
	cout<<"\nCustomer ic_no\t\t\t\t: "<<ic_no;
	cout<<"\nCustomer date of birth\t\t\t: "<<dob;
	cout<<"\nCustomer gender\t\t\t\t: "<<gender;
	cout<<"\nCustomer contact\t\t\t: "<<contact;
	cout<<"\ncustomer email\t\t\t\t: "<<email;
	cout<<"\nCustomer address\t\t\t: "<<adres;
	cout<<"\nCustomer balance\t\t\t: "<<bal;
	cout<<"\ndate of regestration\t\t\t:"<<sysdate<<endl;
	      cout<<"\n";
		  cout<<"\n";
		  cout<<"\n";
    
             
		        cout << "\t\tPRESS ENTER TO RETURN TO ADMIN MENU...";
		        cin.get();
		        admin_menu();
	}
	else
	{
cout<<"---------------------------------------------------------------------------------------------------\n";
		cout<<"Ivalid id!!\n";
	fnCloseDBConnection();
	 cout<<"\tPress 1 to try again or 0 to exit? : ";
	  cin>>t;
      cin.clear();
	  cin.ignore(numeric_limits<streamsize>::max(),'\n');

	switch(t){
		case 1 : 
			search_cus();
			break;
		case 0 : 
			break;
		default : admin_menu();	
}
	}
}
void del()
{
 EXEC SQL BEGIN DECLARE SECTION;
       char ID_number[30];
	   int count = 0;
 EXEC SQL END DECLARE SECTION;
  
 fnConnectDB();
  
 system("cls");

    cout<<"\n\t===============================";
	cout<<"\n\t welcome to the Bank Al-ahli  \n";
	cout<<"\t===============================\n\n";
	cout<<" Delete A Customer\n\n";

	cout<<"Customer Id\t\t: ";
	cin>>ID_number;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');
		EXEC SQL SELECT 1 INTO :count from customer2 where cus_id =:ID_number;
	if (count ==1){
	EXEC SQL delete from customer2 where cus_id =:ID_number;
    fnCloseDBConnection();
    cout<<"\nCustomer record has been deleted \n\n";
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(),'\n');

	cout << "\t\tPRESS ENTER TO RETURN TO ADMIN MENU...";
		        cin.get();
		        admin_menu();
	}
	else
	{
		cout<<"Invalid id!!\n";
	
	cout<<"\tPress 1 to try again or 0 to exit? : ";
	  cin>>j;
	
switch(j){
		case 1 : 
			del();
			break;
		case 0 : 
			break;
		default : admin_menu();	
}
	}
  system("pause");
}











