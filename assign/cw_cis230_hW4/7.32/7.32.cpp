// Exercise 7.32 Solution: Ex07_32.cpp
#include <iostream> 
#include <iomanip> 
#include <array>
#include <random>
#include <ctime>
using namespace std;

const int SIZE = 10;
const int MAXRANGE = 1000;
int recursiveMinimum( const array< int, SIZE > &, size_t, size_t );

int main()
{
   default_random_engine engine( static_cast<unsigned int>( time(0) ) );
   uniform_int_distribution<unsigned int> randomInt( 1, MAXRANGE ); 

   array< int, SIZE > values;

   // initialize elements of array to random numbers
   for ( auto &element : values )
      element = randomInt( engine );

   // display array
   cout << "Array members are:\n";

   for ( auto element : values )
      cout << setw( 5 ) << element;

   // find and display smallest array element
   cout << '\n';
   int smallest = recursiveMinimum( values, 0, values.size() - 1 );
   cout << "\nSmallest element is: " << smallest << endl;
} // end main

// function to recursively find minimum array element
int recursiveMinimum( const array< int, SIZE > &values, size_t low, size_t high )
{
	static int smallest = MAXRANGE;
	if( low == high )
		return smallest;
	else 
	{
		if (values[high] < smallest)
		{
			smallest = values[high];
		}
		high -= 1;
		recursiveMinimum(values, low, high);
	}
}