#include "license.h"
#include <string>
using namespace std;

license::license()
{
}
void license::setState(string s)
{
	state=s;
}
void license::setYear(int y)
{
	year=y;
}
void license::setNum(string n)
{
	num=n;
}
string license::getState()
{
	return state;
}
int license::getYear()
{
	return year;
}
string license::getNum()
{
	return num;
}