#include<iostream>
#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger(long input)
{
	long longInt;
	int  theInt;

	for (int i = 8; i >= 0; i--)
	{
		theInt = longInt % 10;
		longInt =/ 10;
		integer[i] = theInt;
		cout << integer[i] << endl;
}
	
