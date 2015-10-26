#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include<iostream>
#include<array>
#include<string>

using namespace std;

class HugeInteger
{
public:
	HugeInteger(long = 0);
	HugeInteger(const string &);
	void output()const;
	void input(const string &);
	HugeInteger add(const HugeInteger &) const;
	HugeInteger add(int) const;
	HugeInteger add(const string &) const;
	HugeInteger subtract(const HugeInteger &) const;
	HugeInteger subtract(int) const;
	HugeInteger subtract(const string &) const;

private:
	array < short, 40 > integer;
};

#endif