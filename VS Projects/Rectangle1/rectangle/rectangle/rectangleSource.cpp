/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
// File Name:	rectangleSource.cpp											 //
//																			 //
// Due Date:	20130910													 //
//																			 //
// Purpose:		This program uses the rectangle class created and			 //
//              implemented in rectangle.h. This program is used as an       //
//				example of how to build a class template and use it with	 //
//              different DataTypes.										 //
//																			 //                    
// Author:		emayberry Eric A. Mayberry IV								 //
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#include "rectangle.h" // used to call the template class Rectangle
#include <iostream>
using namespace std;

int main()
{
	Rectangle<float> rectangleF; // creates an float instance of the class.
	Rectangle<int> rectangleI; // creates an int instance of the class.
	int input=0;

	cout<<"This program is used to set the length and width\n";
	cout<<"of a rectangle using either float or int as the DataType.\n";

	while (input !=5) // Menu
	{
		cout<<"\n(1) Enter the size of the rectangle using DataType float\n";
		cout<<"(2) Enter the size of the rectangle using DataType int\n";
		cout<<"(3) Display the length, width, perimeter, and area of ";
		cout<<"the \"float\" rectangle\n";
		cout<<"(4) Display the length, width, perimeter, and area of ";
		cout<<"the \"int\" rectangle\n";
		cout<<"(5) Exit the program\n";
		cin>>input;
		cout<<"\n";

		switch(input)
		{
		case 1: // Enters the length and width for the float rectangle
			float fL, fW;
			cout<<"Enter the length of the rectangle: ";
			cin>>fL;
			rectangleF.setLength(fL);
			cout<<"Enter the width of the rectangle: ";
			cin>>fW;
			rectangleF.setWidth(fW);
		break;
		case 2: // Enters the length and width for the int rectangle
			int iL, iW;
			cout<<"Enter the length of the rectangle: ";
			cin>>iL;
			rectangleI.setLength(iL);
			cout<<"Enter the width of the rectangle: ";
			cin>>iW;
			rectangleI.setWidth(iW);
		break;
		case 3: /* Displays the length entered, width entered, calculated
		           perimeter, and calculated area of the float rectangle*/
			cout<<"The length of the \"float\" rectangle is :";
			cout<<rectangleF.getLength()<<endl;
			cout<<"The width of the \"float\" rectangle is :";
			cout<<rectangleF.getWidth()<<endl;
			cout<<"The perimeter of the \"float\" rectangle is :";
			cout<<rectangleF.getPerimeter()<<endl;
			cout<<"The area of the \"float\" rectangle is :";
			cout<<rectangleF.getArea()<<endl<<endl;
		break;
		case 4: /* Displays the length entered, width entered, calculated
		           perimeter, and calculated area of the int rectangle*/
			cout<<"The length of the \"int\" rectangle is :";
			cout<<rectangleI.getLength()<<endl;
			cout<<"The width of the \"int\" rectangle is :";
			cout<<rectangleI.getWidth()<<endl;
			cout<<"The perimeter of the \"int\" rectangle is :";
			cout<<rectangleI.getPerimeter()<<endl;
			cout<<"The area of the \"int\" rectangle is :";
			cout<<rectangleI.getArea()<<endl<<endl;
		break;
		case 5: // Exits the program and displays a message
			cout<<"The program will now exit\n";
			cin.get();
		}
	}

	system("pause");
}
