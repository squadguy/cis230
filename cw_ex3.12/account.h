#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public:
	Account (int);
	
	void creditBalance(int);
	void debitBalance(int);
	int getBalance() const;

private:
	int balance;
};

#endif