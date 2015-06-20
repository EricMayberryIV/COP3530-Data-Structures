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

template <class T> // template class for drink
class Drink
{
public:
	Drink();
	void setDrinkName (string n);
	void setPrice (T p);
	void setType (T t);
	T getDrinkName();
	T getPrice();
	T getType();
private:
	T drinkName;
	T price;
	T type;
};

/*

template <class T>
Drink<T>::Drink()
{
}

template <class T>
void Drink::setDrinkName(string n)
{
}

template <class T>
void Drink<T>::setPrice(T P)
{
}

template <class T>
void Drink<T>::setType(T t)
{
} 										*/

template <class T>
T Drink<T>::getDrinkName()
{
	return drinkName;
}

template <class T>
T Drink<T>::getPrice()
{
	return price;
}

template <class T>
T Drink<T>::getType()
{
	return type;
}

#endif
