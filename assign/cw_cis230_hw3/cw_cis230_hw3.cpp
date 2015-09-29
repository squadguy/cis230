//NAME: Christopher Wampnar
// Exercise 6.35 Solution: Ex06_35.cpp
// Randomly generate numbers between 1 and 1000 for user to guess;
// analyze number of guesses before correct response.
//NOTE: Originally written in Sublime Text 2 - compiled with GCC.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void guessGame(); // function prototype
bool isCorrect( int, int ); // function prototype
void analyzeCount( unsigned int ); // function prototype

int main()
{
	srand(static_cast<unsigned int>(time( 0 ) ) ); // seed random number generator
	
	guessGame(); //start the game

   return 0;
} // end main

// guessGame generates numbers between 1 and 1000
// and checks user's guess
void guessGame()
{
	int magicNumber; //store the random number to guess 
	int guess; //store user's guess
	int upperLimit = 1000; //upper range of random number
	int lowerLimit = 1; //lower range of random number
	unsigned int guessCount; //keep track of number of guesses
	bool tip; //determine if user guessed correct number
	char playAgain = 'y'; //determine if user wants to play again

	while (playAgain != 'n') //decide to start new game
	{
		magicNumber = lowerLimit + rand() % upperLimit; //(re)sets random number for this iteration of game
		guessCount = 1; //(re)sets user's gues count to 1 

		//Welcome user to game
		cout << endl;
		cout << "--------------------------------------------" << endl;
		cout << "GUESS THE NUMBER GAME v1.0" << endl;
		cout << "--------------------------------------------" << endl;
		cout << endl;
		
		//Declare rules and get user input
		cout << "I have a number between " << lowerLimit << " and " << upperLimit << "." << endl; //Declare rules
		cout << "Can you guess my number?" << endl;  
		cout << "Please type your first guess." << endl; //ask for input from user

		cin >> guess; //get user guess

		tip = isCorrect(guess, magicNumber); //determine if user guess is correct display proper hint
		//tip used to determine if user needs to guess again.

		while(tip == false) //decision to determines to get another guess from user
		{
			cin >> guess; //prompt user for new guess
			tip = isCorrect(guess, magicNumber); //reset tip to determine if user guess is correct
		
			guessCount++; // increment number of guesses
		}

		analyzeCount(guessCount); //respond with phrase of how well they did (based on guess count)

		do // determine if user wants to play another game
		{
			cout << "Play again (y or n)?" << endl; // prompt user for input
			cin >> playAgain; // store value if user wants to play again
		}
		while (playAgain != 'y' && playAgain != 'n'); // repeats if another value is entered
	
	}	

	// TODO: YOUR CODE GOES HERE
} // end function guessGame

// isCorrect returns true if g equals a
// if g does not equal a, displays hint
bool isCorrect( int g, int a )
{
	bool boolValue;
	if (g != a)
	{	
		if (g > a)
		{
			cout << "To Large.  Try again." << endl;
		}
		else
		{
			cout << "To small.  Try again." << endl;
		}
		boolValue = false;
	}

	else 
	{
		cout << "Excellent!  You guessed the number!" << endl;
		boolValue = true;
	}
	
	return boolValue;
	// TODO: YOUR CODE GOES HERE
} // end function isCorrect

// analyzeCount determines if user knows "secret"
void analyzeCount( unsigned int count )
{
	if (count < 10)
	{ 
		cout << "Either you know the secret or you got lucky" << endl;
	}
	else if ( count == 10 )
	{
		cout << "Ahah! You konw the secret!" << endl;
	}
	else
		cout << "You should be able to do better!" << endl;
	// TODO: YOUR CODE GOES HERE
	// ONLY REQUIRED FOR 6.35
} // end function analyzeCount