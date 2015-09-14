//Created by : Christopher Wampnar
//Program: Program updates account instances' private variable
//			Account cannot go below 0.  If it does, error thrown
//			and account reset to 0.  First account tests the case
//			by instantiating account with negative balance.  After
//			account credit, account debit tries to remove more than
//			it holds.  Throws error.  Second account tests an account
//			with no resets.
//Date:	9/11/15
//Other:  Orignally written in Vi using G++ compiler and makefile.

#include <iostream>
#include "account.h"

using namespace std;

int main ()
{
	
	//Begin Account One

	cout << "Account One" << endl;
	cout << "-----------" << endl;

	//Instantiate Accounts - include intial balance
	Account accountOne(-1300);
		
	//Displays the intial balance
	cout << accountOne.getBalance() << endl;

	//Credit amount to instances
	accountOne.creditBalance(200);
	
	//Display account balance after credit
	cout << accountOne.getBalance() << endl;
	

	//Debit amount from instances
	accountOne.debitBalance(550);
	

	//Display account balance after debit
	cout << accountOne.getBalance() << endl;

	cout << endl;
	cout << endl;
	

	//Begin Account Two

	cout << "Account Two" << endl;
	cout << "-----------" << endl;

	//Instantiate Account Two - Include intial balance
	Account accountTwo(500);

	//Display the inital balance
	cout << accountTwo.getBalance() << endl;

	//Credit amount to instance
	accountTwo.creditBalance(150);

	//Display amount after credit
	cout << accountTwo.getBalance() << endl;

	//Debit amount from from instance
	accountTwo.debitBalance(300);

	//Get balance after debit
	cout << accountTwo.getBalance() << endl;

	return 0;
}