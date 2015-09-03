#include "date.h"
#include <iostream>

using namespace std;

Date::Date (int m, int d, int y)
	: day(d), year (y)
{
	setMonth(m);
}

void Date::setMonth(int m)
{
	if (m < 1 || m > 12)
		m = 1;
	month = m;
}

int Date::getMonth() const
{
	return month;
}

void Date::setDay(int d)
{
	day = d;
}

int Date::getDay() const
{
	return day;
}

void Date::setYear(int y)
{
	year = y;
} 

int Date::getYear() const
{
	return year;
}
void Date::displayDate() const
{
	cout << month << "/" << day << "/" << year << endl;
}