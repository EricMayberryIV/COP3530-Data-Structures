#include "Marlow_Mayberry_Drink.h"
#include <string>

Drink::Drink()
{
}

void Drink::setDrinkName(string n)
{
	drinkName=n;
}

void Drink::setPrice(float p)
{
	price=p;
}

void Drink::setType(char t)
{
	type=t;
}

string Drink::getDrinkName()
{
	return drinkName;
}

float Drink::getPrice()
{
	return price;
}

char Drink::getType()
{
	return type;
}
