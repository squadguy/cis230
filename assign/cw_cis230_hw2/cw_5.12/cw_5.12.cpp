/****************************
Name: Christopher Wampnar
Date: 9/21/15
Purpose:  This program prints triangle patters with nested for loops
Notes:  Orignally written using Vim - compiled using gcc
****************************/

#include <iostream>

using namespace std;

int main()
{
	cout << "--------------------------" << endl;
	cout << "Printing triangle for (A)" << endl;
	cout << "--------------------------" << endl;
//outter loops determines row number
	for(int r=1; r < 11; r++)
	{
//inner loop uses row number determine how many columns to fill
		for(int c = 0; c < r; c++)
		{
			cout << "*" ;//prints star
		}
		cout << endl;
	}
	cout << endl << endl << endl;
	
	cout << "-------------------------" << endl;
	cout << "Printing triangle for (B)" << endl;
	cout << "-------------------------" << endl;

//outter loops determins row number
	for(int r = 10; r > 0; r--)
	{
//inner loop usere row number to determine how many columns to fill
		for(int c = 0; c < r; c++)
		{
			cout << "*";//prints star
		}
		cout << endl;
	}
	return 0;
}
