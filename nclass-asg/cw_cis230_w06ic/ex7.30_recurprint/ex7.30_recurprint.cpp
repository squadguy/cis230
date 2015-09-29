// Exercise 7.30 Solution: Ex07_30.cpp
#include <iostream> 
#include <iomanip> 
#include <random>
#include <array>
#include <ctime>
using namespace std;

const int SIZE = 10;
const int MAXNUMBER = 500;

void printArray( array< int, SIZE> &, size_t, size_t );

int main()
{
   default_random_engine engine( static_cast<unsigned int>( time(0) ) );
   uniform_int_distribution<unsigned int> randomInt( 1, MAXNUMBER ); 

   array< int, SIZE > values;

   // initialize array elements to random numbers
   for ( auto &element : values )
      element = randomInt( engine ) ;

   cout << "Array values printed in main:\n"; 

   for ( auto element : values ) // print array elements
      cout << setw( 5 ) << element;

   cout << "\n\nArray values printed in printArray:\n";
   printArray( values, 0, SIZE - 1 );
   cout << endl;
}

void printArray( array< int, SIZE> &values, size_t low, size_t high )
{
	if (low != high)
	{
		cout << values[low] << setw( 5 );
		low++;
		printArray(values, low, high);
	}
	else 
		cout << values[high] << setw( 5 );
}