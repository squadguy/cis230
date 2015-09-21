#include <iostream>
#include "round.h"

using namespace std;

int main()

{

/*******************************************
	//int intTemp;
	int lowerLimit; //intial temp in C
	int upperLimit; //highest temp in c
	//int temp;
	int incAmt; //amount to increase in C
	int english; //temp in F

	lowerLimit = getLowerLimit();

	do
	{
		cout << "Enter an upper temperature limit, upper limit <=5000:";
		cin >> upperLimit;
	}
	while(upperLimit > 5000);

	do
	{
		cout << "Please enter the incremend amount. Must be positive:" << endl;
		cin >> incAmt;
	}
	while (incAmt < 0);

	cout << endl;
	cout << endl;
	cout << endl;

	cout << "Celcius" << "       " << "Fahrenheit" << endl;
	cout << "_______" << "       " << "__________" << endl;

	while (lowerLimit < upperLimit)
		{
			english = toFehrenheit(lowerLimit);
			cout << lowerLimit << "                  " << english << endl;
			lowerLimit = lowerLimit + incAmt;
		};

	return 0;
}

int toFehrenheit(int lowerLimit)
{
	int english;

	english = lowerLimit * 9/5 + 32;
	
	return english;
}

int getLowerLimit()
{
	int lowerLimit;

	do
	{
		cout << "Enter a lower temperature limit, lower limit >=0:";
		cin >> lowerLimit;
	}
	while(lowerLimit < 0);	

	return lowerLimit;
}
******************************/

cout << "Round One" << endl;

Round roundOne();



return 0;

}