/* ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ //
// File Name:	Marlow_Mayberry_drink.h								     	 //
//																			 //
// Due Date:	20131125											    	 //
//																			 //
// Purpose:		This file is the creates and implements the class which is	 //
//				then used in drinkMachine_source.cpp						 //
//																			 //
// Author:		Ruben Marlow III, Eric A. Mayberry IV						 //
// ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ */

#ifndef DRINK_H
#define DRINK_H
#include <string>;

class Drink // class for drinks
{
public:
	Drink();
	void setDrinkName (string n);
	void setPrice (float p);
	void setType (char t);
	string getDrinkName();
	float getPrice();
	char getType();
private:
	string drinkName;
	float price;
	char type;
};

#endif
