#include <iostream>
#include "account.h"

using namespace std;

int main ()
{
	//Instantiate Accounts - include intial balance
	Account accountOne(-1300);
	Account accountTwo(500);
	
	//Displays the intial balance
	cout << accountOne.getBalance() << endl;
	cout << accountTwo.getBalance() << endl;

	//Credit amount to instances
	accountOne.creditBalance(200);
	accountTwo.creditBalance(150);

	//Display account balance after credit
	cout << accountOne.getBalance() << endl;
	cout << accountTwo.getBalance() << endl;

	//Debit amount from instances
	accountOne.debitBalance(550);
	accountTwo.debitBalance(300);

	//Display account balance after debit
	cout << accountOne.getBalance() << endl;
	cout << accountTwo.getBalance() << endl;

	return 0;
}