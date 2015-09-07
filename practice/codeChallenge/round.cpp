#include "round.h"
#include <iostream>
using namespace std;

Round::Round(int _lowerLimit, int _upperLimit, int _interval
{

	lowerLimit = _lowerLimit;
	upperLimit = _upperLimit;
	interval = _interval;

}

void Round::setLowerLimit()
{
	do
	{
		cout << "Please enter the lower temperature limit in celcius." << endl;
		cout << "Lower limit must be >=0." << endl;
		cin >> lowerLimit;
	}
	while(lowerLimit >= 0 && <=5000);
}

void setUpperLimit()
{
	do
	{
		cout << "Please set the upper limit in celcius." << endl;
		cout << "Upper limit must be <=5000" << endl;
		cin >> upperLimit;
	}
	while(upperLimit <=5000 && upperLimit >= 0);
}

void setInterval()
{
	do
	{
		cout << "Please set the interval between temperatures" << endl;
		cout << "Interval must be less than upper limit: " << upperLimit << endl;
		cin >> interval;
	}
	while(interval > upperLimit)		
}

int getInterval() const
{
	return interval;
}

int getLowerLimit() const
{
	return lowerLimit;
}

int getUpperLimit() const
{
	return upperLimit;
}

void setFahrenheit(int)
{
	inFahrenheit = getLowerLimit() * 5/9 + 32;
}
int getFahreheit () const 
{
	return inFahrenheit;
}

void displayInfo ()
{
	cout << getLowerLimit() << "    " << getFahreheit() << endl;
}
