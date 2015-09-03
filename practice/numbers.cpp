/*
Name: Christopher Wampnar
Assignment 1: Chapter 2.19
Class: CIS230
Program: Program asks users for three number and returns information about the numbers
		 such as, product, sum, average, and if each number is even or odd.
Notes:   Orignially written in Vim and complied with gcc.
*/

#include <iostream>
#include <string>
using namespace std;

void getNumbers(string, int&);
int getAverage(int, int, int);
int getHighest(int, int, int);
int getLowest(int, int, int);
int getSum(int, int, int);
int getProduct(int, int, int);
bool isItEven(int);

int main()
{
	//Declare Variables
	int userNumber1, userNumber2, userNumber3;
	int highNumber, lowNumber, averageNumber, numberSum, numberProduct;
	bool isEven;
	bool isItEven1, isItEven2, isItEven3;

	//Begin to gather scores from user
	getNumbers ("Number1", userNumber1);
	cout << endl;

	getNumbers ("Number2", userNumber2);
	cout << endl;

	getNumbers ("Number3", userNumber3);
	cout << endl;


	//Get totals - set variables
	lowNumber = getLowest(userNumber1, userNumber2, userNumber3);
	highNumber = getHighest(userNumber1, userNumber2, userNumber3);
	averageNumber = getAverage(userNumber1, userNumber2, userNumber3);
	numberSum = getSum(userNumber1, userNumber2, userNumber3);
	numberProduct = getProduct(userNumber1, userNumber2, userNumber3);
	
	isItEven1 = isItEven(userNumber1);
	isItEven2 = isItEven(userNumber2);
	isItEven3 = isItEven(userNumber3);
	

	//Display data entered

	cout << "The Lowest Number is: " << lowNumber << endl;
	cout << "The Highest Number is: " << highNumber << endl;
	cout << "The Average Number is: " << averageNumber<< endl;
	cout << "The Sum of the Numbers is: " << numberSum << endl;
	cout << "The Product of the Numbers is: " << numberProduct << endl;
	cout << "The first number: " << userNumber1 << " is ";
		if(isItEven(userNumber1))
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	cout << "The second number " << userNumber2 << " is ";
		if(isItEven(userNumber2))
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	cout << "The third number " << userNumber3 << " is ";
		if(isItEven(userNumber3))
			cout << "Even" << endl;
		else
			cout << "Odd" << endl;
	return 0;
}
	//Gets numbers from user
	void getNumbers(string number, int &userNumber)
	{
		cout << "Please enter a number:" << endl;
		do
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(100, '\n');
			}
			cout << number << ": =" << endl;
			cin >> userNumber;
		} while (cin.fail());
	}

	//Get highest 
	int getHighest(int number1, int number2, int number3)
	{
		int highNumber;
			if((number1>number2) && (number1>number3))
				highNumber = number1;
			else if ((number2>number3))
				highNumber = number2;
			else
				highNumber = number3;
		return highNumber;
	}


	//Get lowest 
	int getLowest(int number1, int number2, int number3)
		{
			int lowNumber;
				if((number1<number2) && (number1<number3))
					lowNumber = number1;
				else if ((number2<number3))
					lowNumber = number2;
				else 
					lowNumber = number3;
			return lowNumber;
		}
	
	//Get average 
	int getAverage(int number1, int number2, int number3)
		{
			int averageNumber;
				return ((number1 + number2 + number3)/3);
		}

	//Get sum
	int getSum(int number1, int number2, int number3)
		{
			int numberSum;
				return ((number1 + number2 + number3));
		}

	//Get Product
	int getProduct(int number1, int number2, int number3)
		{
			int numberProduct;
				return ((number1 * number2 * number3));
		}

	//Determines if number is even
	bool isItEven (int userNumber)
		{
			if (userNumber % 2 == 0)
				return true;
			else
				return false;
		}

