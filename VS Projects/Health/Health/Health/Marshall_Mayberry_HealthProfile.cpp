/* ------------------------------------------------------------------------
   Name of Program:		HealthProfile.cpp

   Submission Date:		Thurs. Sept. 12, 2013

  Names of Partners:	Evan Marshall
						Eric Mayberry

  Description:			****
   ------------------------------------------------------------------------ */
#include <string>
#include "Marshall_Mayberry_HealthProfile.h"
using std::string;

void HealthProfile::setFirstname(string fn)
{
	fname=fn;
};
string HealthProfile::getfirstname()
{
	return fname;
}

void HealthProfile::setLastname(string ln)
{
	lname=ln;
};
string HealthProfile::getlastname()
{
	return lname;
}

void HealthProfile::setGender(char gen)
{
	gender=gen;
};
char HealthProfile::getgender()
{
	return gender;
}
void HealthProfile::setHeight(float h)
{
	height=h;
};
float HealthProfile::getheight()
{
	return height;
}
void HealthProfile::setWeight(float w)
{
	weight=w;
};
float HealthProfile::getweight()
{
	return weight;
}
int HealthProfile::getAge(int year)
{
	age = 2013-year;
	return age;
}
int HealthProfile::getMaxHeartRate(int age)
{
	maxheart = 220-age;
	return maxheart;
}

float HealthProfile::getTlow(int maxheart)
{
	low = maxheart*.5;
	return low;
}
float HealthProfile::getThigh(int maxheart)
{
	high = maxheart*.85;
	return high;
}
float HealthProfile::getBMI(int height, int weight)
{
	bmi = (weight*703)/(height*height);
	return bmi;
}
