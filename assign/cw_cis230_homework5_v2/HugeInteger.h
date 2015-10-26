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
	bool isEqualTo(const string &str) const;
	bool isEqualTo(const HugeInteger &op2) const;
	bool isGreaterThan(const string&) const;
	bool isGreaterThan(const HugeInteger &value) const;
	bool isLessThan(const string &str) const;
	bool isLessThan(const HugeInteger &value) const;
	bool isLessThanOrEqual(const string &str) const;
	bool isLessThanOrEqual(const HugeInteger &value) const;
	bool isGreaterThanOrEqual(const string&) const;
	bool isGreaterThanOrEqual(const HugeInteger &value) const;
	bool isZero() const;
private:
	array < short, 40 > integer;
};

#endif
