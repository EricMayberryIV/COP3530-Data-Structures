#include "license.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	license license1;
	int year, input=0;
	string state, num;

	cout<<"Welcome to the United States"<<endl;
	cout<<"Federal Vehicle Registry System"<<endl;

// Menu
	while(input !=3)
	{
		cout<<endl<<"Select an option"<<endl;
		cout<<"(1) Enter Vehicle Information"<<endl;
		cout<<"(2) Display Entered Information"<<endl;
		cout<<"(3) Exit"<<endl;
		cin>>input;

		switch(input)
		{
		case 1:
			cout<<endl<<"Enter the vehicle registration state: ";
			cin>>state;
			license1.setState(state);
			cout<<"Enter the expiration year of the registration: ";
			cin>>year;
			license1.setYear(year);
			cout<<"Enter the license plate number: ";
			cin>>num;
			license1.setNum(num);
		break;
		case 2:
			cout<<endl<<"Vehicle State: "<<license1.getState()<<endl;
			cout<<"Registration Expiration Year: "<<license1.getYear()<<endl;
			cout<<"License Plate Number: "<<license1.getNum()<<endl;
		break;
		case 3:
			cout<<endl<<"Thank you for your required participation. ";
			cout<<"Now Exiting."<<endl;
			cin.get();
		}
	}

	system("pause");
};