/* ------------------------------------------------------------------------
   Name of Program:		HealthProfile.h

   Submission Date:		Thurs. Sept. 12, 2013

  Names of Partners:	Evan Marshall
						Eric Mayberry

  Description:			****
   ------------------------------------------------------------------------ */
#include <string>
using std::string;
class HealthProfile
{
	
public:
	struct PatientInfo 
	{	
	    string fn, ln;
		char gen;		
		float h,w;
     };
	struct DOB
	{
		int month, day, year;
	};
	PatientInfo P1I;
	DOB P1dob;
	void setFirstname(string fn);
	void setLastname(string ln);
	void setGender(char gen);
	void setHeight(float h);
	void setWeight(float w);
	string getfirstname();
	string getlastname();
	char getgender();
	int getAge(int year);
	float getheight();
	float getweight();
	int getMaxHeartRate(int age);
	float getTlow(int maxheart);
	float getThigh(int maxheart);
	float getBMI(int height, int weight);
private:
	string fname, lname;
	char gender;
	float height, weight, low, high, bmi;
	int age, maxheart;
};

