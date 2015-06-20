#include <iostream>
using namespace std;

int main()
{
	double yearA,weight, height, maxHeartRate, targetHeartLow, targetHeartHigh;
	double bmi;

	cout<<"Enter your age: ";
	cin>>yearA;
	cout<<"Enter your weight (in pounds): ";
	cin>>weight;
	cout<<"Enter your height (in inches): ";
	cin>>height;

	maxHeartRate=220-yearA;

	cout<<"Your Maximum Heart Rate is: "<<maxHeartRate<<endl;

	targetHeartLow=maxHeartRate*0.5;
	targetHeartHigh=maxHeartRate*0.85;

	cout<<"Your target heart rate is between "<<targetHeartLow<<" and ";
	cout<<targetHeartHigh<<".\n";

	bmi=(weight*703)/(height*height);

	cout<<"Your BMI is :"<<bmi<<endl;

	system("pause");
}