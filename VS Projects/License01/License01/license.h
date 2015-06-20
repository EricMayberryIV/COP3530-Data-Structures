#ifndef LICENSE_H
#define LICENSE_H
#include <string>
using namespace std;

class license
{
public:
	license();
	void setState(string);
	void setYear(int);
	void setNum(string);
	string getState();
	int getYear();
	string getNum();
private:
	string state;
	int year;
	string num;
};
#endif
