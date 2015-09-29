#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{

	int magicNumber = 7;
	int guessCount = 1;
	int upperLimit = 10;
	int lowerLimit = 1;
	int guess;

	cout << "I have a number between 1 and 10." << endl;
	cout << "Can you guess my number?" << endl;
	cout << "Please type your first guess." << endl;
	cin >> guess;

	while(guess != magicNumber)
	{
		if (guess > magicNumber)
		{
			cout << "To high.  Try again";
		}
		else
			cout << "To low.  Try again.";
		guessCount++;
		cin >> guess;
	}

	cout << "You got it!  It took you " << guessCount << " times." << endl;


	return 0;
}