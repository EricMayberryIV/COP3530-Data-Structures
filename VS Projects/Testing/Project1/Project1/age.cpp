#include <iostream>
using namespace std;

int main()
{
	int yearC, monthC, dayC, yearU, monthU, dayU;
	int yearA;

	cout<<"Enter the current year (yyyy): ";
	cin>>yearC;
	cout<<"Enter the current month (mm): ";
	cin>>monthC;
	cout<<"Enter the current day (dd): ";
	cin>>dayC;
	cout<<"The date that you entered was: ";
	cout<<monthC<<"-"<<dayC<<"-"<<yearC<<endl<<endl;
	cout<<"Enter your birth year (yyyy): ";
	cin>>yearU;
	cout<<"Enter your birth month (mm): ";
	cin>>monthU;
	cout<<"Enter your birth day (dd): ";
	cin>>dayU;
	cout<<"Your birthday is ";
	cout<<monthU<<"-"<<dayU<<"-"<<yearU<<endl<<endl;

	yearA=yearC-yearU;

	cout<<"yearA ="<<yearA<<endl<<endl;

	if (monthU>monthC)
	{
		cout<<"Your age is: "<<yearA-1<<"\n";
	}
	else if (monthU=monthC)
	{
		if(dayU>dayC)
		{
			cout<<"Your age is: "<<yearA-1<<"\n";
		}
		else
			cout<<"your age is: "<<yearA<<"\n";
	}
	else if (monthU<monthC)
		cout<<"Your age is: "<<yearA<<"\n";

	system("pause");
}
