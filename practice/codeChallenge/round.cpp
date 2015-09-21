#include "round.h"
#include <iostream>
using namespace std;

Round::Round()
{
	setUpperLimit();
	setLowerLimit();
	setInterval();

}

void Round::setLowerLimit()
{
	do
	{
		cout << "Please enter the lower temperature limit in celcius." << endl;
		cout << "Lower limit must be >=0." << endl;
		cin >> lowerLimit;
	}
	while(lowerLimit >= 0 && lowerLimit <= 5000);
}

void Round::setUpperLimit()
{
	do
	{
		cout << "Please set the upper limit in celcius." << endl;
		cout << "Upper limit must be <=5000" << endl;
		cin >> upperLimit;
	}
	while(upperLimit <=5000 && upperLimit >= 0);
}

void Round::setInterval()
{
	do
	{
		cout << "Please set the interval between temperatures" << endl;
		cout << "Interval must be less than upper limit: " << upperLimit << endl;
		cin >> interval;
	}
	while(interval > upperLimit);		
}

int Round::getInterval() const
{
	return interval;
}

int Round::getLowerLimit() const
{
	return lowerLimit;
}

int Round::getUpperLimit() const
{
	return upperLimit;
}

void Round::setFahrenheit(int)
{
	inFahreheit = getLowerLimit() * 5/9 + 32;
}
int Round::getFahreheit () const 
{
	return inFahreheit;
}

/**********
void Round::displayInfo()
{
	cout << getLowerLimit() << "    " << getFahreheit() << endl;
}
**********/