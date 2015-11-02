#ifndef HUGEINTEGER_H
#define HUGEINTEGER_H

#include<iostream>
#include<array>
#include<string>
#include<climits>

using namespace std;

class HugeInteger
{
public:
	HugeInteger(int = 0);
	HugeInteger(const string &);
	void output()const;
	void input(const string &);
	string to_string() const;
	HugeInteger operator+(const HugeInteger &) const;
	HugeInteger operator+(int) const;
	HugeInteger operator+(const string &) const;
	HugeInteger operator-(const HugeInteger &) const;
	HugeInteger operator-(int) const;
	HugeInteger operator-(const string &) const;
	bool operator==(const string &str) const;
	bool operator==(const HugeInteger &op2) const;
	bool operator>(const string&) const;
	bool operator>(const HugeInteger &value) const;
	bool operator<(const string &str) const;
	bool operator<(const HugeInteger &value) const;
	bool operator<=(const string &str) const;
	bool operator<=(const HugeInteger &value) const;
	bool operator>=(const string&) const;
	bool operator>=(const HugeInteger &value) const;
	bool isZero() const;
private:
	static const size_t HI_SIZE = 40;
	array < short, 40 > integer;
};

#endif
