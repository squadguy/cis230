#include <iostream>
#include <array>
#include <string>
#include <cstdlib>
#include <cstring>
//#include "HugeInteger.h"

using namespace std;

class HugeInteger
{
public:
HugeInteger(int = 0);
private:
array < short, 5 > integer = { };

int main ()
{

	HugeInteger num1(12345);
	
	
/***************************************************************
	char charArray[9];
	long value = 123456789;	
	array< short, 9> integer = { };
	int theInt;
	long longInt = value;
	//int position = 9;

	cout << "Size of charArray = " << sizeof(charArray) << endl;
	cout << "Length of charArray = " << strlen(charArray) << endl;

	cout << endl << endl;

	cout << "Orignal value of value " << value << endl;
	cout << "-----------------------" << endl;
	cout << "Cutting off last value of value" << endl << endl;
	
	for(int i = 8; i >=0; i--)
	{
		
		theInt = longInt % 10;
		longInt /=10;
		integer[i] = theInt;
		charArray[i] = integer[i];		
		
		cout << longInt << endl;
		cout << "number cut off" << endl;
		cout << integer[i] << endl;
		
		cout << "The Char = " << charArray[i] << endl;
		cout << "The Char as an int = "<< (int) charArray[i] << endl;
	}

	cout << "Prinint array now" << endl;
	cout << "-----------------------" << endl;

	
	for(int i = 8; i >= 0; i--)
	{
		cout << integer[i] << endl;
	}

	cout << "integer[0] = " << integer[0] << endl;
	cout << "integer[8] = " << integer[8] << endl;
	cout << "(int) charArray[0] = " << (int) charArray[0] << endl;
	cout << "(int) charArray[8] = " << (int) charArray[8] << endl;

	cout << "Sizeof charArray = " << sizeof(charArray) << endl;
	cout << "new length of charArray = " << strlen(charArray) << endl;


***************************************************/
	return 0;

}

HugeInteger::HugeInteger(int input)
{
	for (int i = 4; i >= 0; i--)
	{
		int theInt;
		int longInt = input;
		theInt = longInt % 10;
		longInt /= 10;

		integer[i] = theInt;

		cout << integer[i] << endl;
	}
}
