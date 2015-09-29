/***********************
Name: Christopher Wampnar
Date: 9/21/15
Assignment: 4.34
Description:  Program uses a function containing a while loop to display the factorials from 1 <= 10
Notes:  Written in Vim - compiled using gcc
************************/

#include <iostream>
#include <string>
using namespace std;

//function prototype for factorial
int factorial(int);

int main()
{

	int num;

	cout << "Enter a positive integer" << endl;
	cin >> num;

	cout << num <<"! = " << factorial(num) << endl;

//For loop displays results of factorial function up to 10
	

	

	for (int i = 1; i < 11; i++)
		{
			cout << i << "! =" << factorial(i)<< endl;
		}
	
	return 0;
}

//factorial function implementation
	int factorial(int num)
		{
			int fac = 1;
			int init = 1;

			while (init <= num)
			{
				fac = fac * init;
				init ++; 
			}
			return fac;
		}