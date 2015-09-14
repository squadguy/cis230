#include "account.h"
#include <iostream>
using namespace std;

Account::Account (int intialBalance)
	{
		if (intialBalance < 0)
		{
			balance = 0;
			cout << "Warning: Account balance cannot be less than 0" << endl;
			cout << "Balance has been reset to 0" << endl;
		}
		else
			balance = intialBalance; //constructor assigns value passed in as instances intial balance value
	}

void Account::creditBalance (int creditAmount)
	{
		int b;  //declare local variable to hold current balance
		b = getBalance(); //initialize local variable with current balance
		b = b + creditAmount; //update local balance variable with credit amount
		if (b < 0)
		{
			b = 0;
			cout << "Warning: Account balance cannot be less than 0" << endl;
			cout << "Account balance reset to 0" << endl;
		};
		balance = b; //assign new balance value to the private balance variable
	}

void Account::debitBalance(int debitAmount)
	{
		int b; //declare local variable to hold current balance
		b = getBalance(); //initialize local variable value with current balance
		b = b - debitAmount; //update local balance variable with debit amount
		if (b < 0)
		{
			b = getBalance();
			cout << "Debit amount exceeded account balance" << endl;
		};
		balance = b; //assign new balance value to the private balance
 	}	

int Account::getBalance() const
	{
		return balance; //returns instance's class private variable balance
	}
