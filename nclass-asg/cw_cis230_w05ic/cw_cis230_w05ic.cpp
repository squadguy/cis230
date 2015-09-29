#include <iostream>
#include <iomanip>

using namespace std;

unsigned long factorial( unsigned long) ; //function prototype

int main()
{
	int num;

	for ( unsigned int counter = 0; counter <= 10; ++counter )
		{
			int num = counter;
			cout << "calculating factorial (" << num << ")" << endl; 
			cout << num << "! = " << factorial( num ) << endl;
			cout << endl;
		}
}//end main

//recursive definition of function factorial
unsigned long factorial( unsigned long number )
{
	if ( number <= 1) // test for base case
	{
		cout << "Reached base case of 1" << endl;
		return 1; // base cases: 0! = 1 and 1! = 1
	}
	else // recursion step
	{
		cout << setw( number * 3) << ""  << "Local variable " << number << endl;
		cout << setw( number * 3) << "" << "Recursivly calling ( " << (number - 1) << " )" << endl;
		cout << endl;
		return number * factorial ( number - 1 );
	}
	
} // end function factorial
		
