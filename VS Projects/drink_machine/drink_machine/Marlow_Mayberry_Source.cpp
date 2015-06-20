#include <iostream>
#include <string>
#include "Marlow_Mayberry_Array.h"
#include "Marlow_Mayberry_link.h"
using namespace std;

int main ()
{
	struct Drink
	{
		string name;
		float price;
		string type;
	};

	int input=0, amountSodas=15;
	string sodaName;
	float sodaPrice=.50, totalMach=400.00;
	char sodaType='b';

	while(input!=5)
	{
		cout<<"1) Add another soda to the machine\n";
		cout<<"2) Buy a soda\n";
		cout<<"3) Find a soda by name\n";
		cout<<"4) List the total value of all sodas in the machine\n";
		cout<<"5) Quit\n\n";
		cout<<"Enter a choice: ";
		cin>>input;
		
		switch(input)
		{
			case 1:
				cout<<"\nEnter the name of the soda you want to add to the machine: ";
				cin>>sodaName; // placeholder variable until we understand how to manipulate data for the arrays and link lists.
				cout<<"\nEnter the price of the soda you want to add to the machine: ";
				cin>>sodaPrice; // placeholder variable until we understand how to manipulate data for the arrays and link lists.
				cout<<"\nEnter the type (b/c) of the soda you want to add to the machine: ";
				cin>>sodaType; // placeholder variable until we understand how to manipulate data for the arrays and link lists.
				cout<<endl;
			break;
			case 2:
				cout<<"\nEnter the type (b/c) of the soda you would like to purchase: ";
					cin>>sodaType;
					if (sodaType=='b') // this will search the array for the soda.
					{
						cout<<"Enter the name of the soda that you would like to purchase: ";
						cin>>sodaName;
						cout<<"Please enter the following amount: "<<sodaPrice;
						cout<<"\nOnce purchased your "<<sodaName<<" will be available below"<<endl;
						break;
					}	
					else if (sodaType=='c') // this will search the link-list for the soda.
					{
						cout<<"Enter the name of the soda that you would like to purchase: ";
						cin>>sodaName;
						cout<<"Please enter the following amount: "<<sodaPrice<<endl;
						cout<<"\nOnce purchased your "<<sodaName<<" will be available below"<<endl<<endl;
						break;
					}
					else
					{
						cout<<"You did not enter \"b\" or \"c\""<<endl;
						break;
					}
			break;
			case 3:
				cout<<"\nEnter the name of the soda you inquire about: ";
				cin>>sodaName;
				cout<<"\nThere are "<<amountSodas<<" "<<sodaName<<"'s in this machine"<<endl<<endl;
			break;
			case 4:
				// ***run summing function here, store value to totalMach***
				cout<<"\nThe total worth of all sodas in this machine is $"<<totalMach<<"\n\n";
			break;
			case 5:
			return 0;
		}
	}
	system ("pause");
}
