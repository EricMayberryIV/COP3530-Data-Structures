/* ------------------------------------------------------------------------
   Name of Program:		HealthProfileSource.cpp

   Submission Date:		Thurs. Sept. 12, 2013

  Names of Partners:	Evan Marshall
						Eric Mayberry

  Description:			****
   ------------------------------------------------------------------------ */

#include <iostream>
#include <string>
// #include <time.h>
#include "Marshall_Mayberry_HealthProfile.h"

using namespace std;
using std::string;
using std::cin;
using std::cout;



int main()
{
	HealthProfile patient1HP;	
	int menu = 0;
	/* time_t hold_time;
    hold_time=time(NULL); */
	cout<<"				HEALTH PROFILE!!!";
	// cout<<endl<<endl<<endl<<ctime(&hold_time);
	while (menu!=3)
	{
		cout<<endl<<endl<<endl<<endl<<"Please choose a number option below"<<endl;
		cout<<"(1) Enter the patients information."<<endl;
		cout<<"(2) Display the patients information."<<endl;
		cout<<"(3) Exit the program"<<endl;
		cin>>menu;
		switch(menu)
		{
		case 1:
			cout<<endl<<"Enter the patients first name: ";
			cin>>patient1HP.P1I.fn;
			cout<<endl<<"Enter the patients last name: ";
			cin>>patient1HP.P1I.ln;
			cout<<endl<<"Enter the patients gender (M/F): ";
			cin>>patient1HP.P1I.gen;
			cout<<endl<<"Enter the patients DOB"<<endl<<"MM: ";cin>>patient1HP.P1dob.month;
			cout<<"DD: ";cin>>patient1HP.P1dob.day;
			cout<<"YYYY: ";cin>>patient1HP.P1dob.year;
			cout<<endl<<"Enter the patients height in inches: ";
			cin>>patient1HP.P1I.h;
			cout<<endl<<"Enter the patients weight in pounds: ";
			cin>>patient1HP.P1I.w;
			cout<<endl<<"				Thank You!";
			patient1HP.setFirstname(patient1HP.P1I.fn);
			patient1HP.setLastname(patient1HP.P1I.ln);
			patient1HP.setGender(patient1HP.P1I.gen);
			patient1HP.setHeight(patient1HP.P1I.h);
			patient1HP.setWeight(patient1HP.P1I.w);
		break;
		case 2:
			cout<<endl<<"The patients name is: "<<patient1HP.getfirstname();
			cout<<" "<<patient1HP.getlastname()<<"."<<endl;
			cout<<endl<<"Date of Birth: "<<patient1HP.P1dob.month<<"/"<<patient1HP.P1dob.day<<"/"<<patient1HP.P1dob.year<<endl;
			if (patient1HP.P1I.gen=='m'||patient1HP.P1I.gen=='M'){
				cout<<endl<<"Gender: Male"<<endl;}
			else{
				cout<<endl<<"Gender: Female"<<endl;}
			cout<<endl<<"Age: "<<patient1HP.getAge(patient1HP.P1dob.year)<<endl;
			cout<<endl<<"Dimensions (height,weight): "<<patient1HP.getheight()<<"in , "<<patient1HP.getweight()<<"lbs"<<endl;
			cout<<endl<<"The patients maximum heart rate is: "<<patient1HP.getMaxHeartRate(patient1HP.getAge(patient1HP.P1dob.year))
				<<" beats a minute."<<endl;
			cout<<endl<<"The patients target heart rate is between "<<patient1HP.getTlow(patient1HP.getMaxHeartRate(patient1HP.getAge(patient1HP.P1dob.year)))
				<<" and "<<patient1HP.getThigh(patient1HP.getMaxHeartRate(patient1HP.getAge(patient1HP.P1dob.year)))<<" beats a minute."<<endl;
			cout<<endl<<"The patients body mass index(BMI) is: "<<patient1HP.getBMI(patient1HP.getheight(),patient1HP.getweight())<<"."<<endl;
		}
	}
	
	return 0;
}