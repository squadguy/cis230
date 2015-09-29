#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void guessGame(); // function prototype
bool isCorrect( int, int ); // function prototype
void analyzeCount( unsigned int ); // function prototype

int main()
{
	srand( time( 0 ) ); // seed random number generator

	guessGame();

} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess

void guessGame()
{
	// TODO: YOUR CODE GOES HERE

} // end function guessGame

// isCorrect returns true if g equals a

// if g does not equal a, displays hint

bool isCorrect( int g, int a )
{
	// TODO: YOUR CODE GOES HERE

} // end function isCorrect

// analyzeCount determines if user knows "secret"

void analyzeCount( unsigned int count )
{
	// TODO: YOUR CODE GOES HERE

	// ONLY REQUIRED FOR 6.35

} // end function analyzeCount
