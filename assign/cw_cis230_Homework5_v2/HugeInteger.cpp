#include <iostream>
#include <array>
#include <string>
#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger(long value)
{
	for (int i = 0; i < 40; i++)
	{
		integer[i] = 0;
	}
	for (int j = 39; value != 0 && j >= 0; j--)
	{
		integer[j] = static_cast < short >(value % 10);
		value /= 10;
	}
}

HugeInteger::HugeInteger(const string &string)
{
	input(string);
}

void HugeInteger::input(const string &val)
{
	for (int i = 0; i < 40; i++)
		integer[i] = 0;

	int length = val.size();
	int j;
	int k;

	for (j = 40 - length, k = 0; j < 40; j++, k++)
	{
		if (isdigit(val[k])) //checks to see if it's a digit
			integer[j] = val[k] - '0';
	}
}

void HugeInteger::output() const
{
	int i;
	for (i = 0; (integer[i] == 0) && (i < 40); i++)
		; // skip leading zeroes
	if (i == 40)
		cout << 0;
	else
	for (; i < 40; i++)
		cout << integer[i];
	cout << endl;

}

HugeInteger HugeInteger::add(const HugeInteger &value) const
{
	int carry = 0;
	HugeInteger result;
	for (int i = 39; i >= 0; i--)
	{
		result.integer[i] = integer[i] + value.integer[i] + carry;

		if (integer[i] + value.integer[i] > 9)
		{
			result.integer[i] %= 10;
			carry = 1;

		}
		else
		{
			carry = 0;
		}
	}
	return result;

}

HugeInteger HugeInteger::add(int num) const
{
	return add(HugeInteger(num));
}

HugeInteger HugeInteger::add(const string &str) const
{
	HugeInteger val(str);
	HugeInteger result = this -> add(val);
	return result;
}

HugeInteger HugeInteger::subtract(const HugeInteger &value) const
{
	HugeInteger result;
	int carry = 0;
	for (int i = 39; i >= 0; i--)
	{
		int tempValue = integer[i];
		if (carry == 1)
		{
			tempValue -= 1;
		}
		if (integer[i] >= value.integer[i])
		{
			result.integer[i] = tempValue - value.integer[i];
			carry = 0;
		}
		else
		{
			result.integer[i] = (tempValue + 10) - value.integer[i];
			carry = 1;
		}
	}
	return result;
}

HugeInteger HugeInteger::subtract(int num) const
{
	return subtract(HugeInteger(num));
}

HugeInteger HugeInteger::subtract(const string &str) const
{
	HugeInteger val(str);
	HugeInteger result = this->subtract(val);
	return result;
}
bool HugeInteger::isEqualTo(const string &str) const
{
	HugeInteger val(str);
	bool isEqual = this->isEqualTo(val);
	return isEqual;
}

bool HugeInteger::isEqualTo(const HugeInteger& op2) const
{
	bool areEqual;
	for (int i = 39; i >= 0; i--)
	{
		if(this->integer[i] != op2.integer[i])
		{
			areEqual = false;
			break;
		}
		else
			areEqual = true;
	}
	return areEqual;
}

bool HugeInteger::isZero()const
{
	bool isZip;
	for (int i = 0; i < 40; i++)
		if(this->integer[i] != 0)
		{
			isZip = false;
			break;
		}
		else
			isZip = true;
	return isZip;
}


bool HugeInteger::isLessThan(const string &str) const
{
	HugeInteger val(str);
	bool isLessThan = this->isLessThan(val);
	return isLessThan;
}

bool HugeInteger::isLessThan(const HugeInteger &value) const
{
	bool isLess = false;
	
	for (int i = 0; i < integer.size(); i++)
	{
		if(this->integer[i] < value.integer[i])
		{
			isLess = true;
			break;
		}
		else if(this->integer[i] == value.integer[i])
		{
			isLess = false;
		}
		else if(this->integer[i] > value.integer[i])
		{
			isLess = false;
			break;
		}
	}

	return isLess;
}

bool HugeInteger::isLessThanOrEqual(const string &str) const
{
	HugeInteger val(str);
	bool isLessThanOrEqual = this->isLessThanOrEqual(str);
	return isLessThanOrEqual;
}

bool HugeInteger::isLessThanOrEqual(const HugeInteger &value) const
{
	bool isLessThanOrEqual;

	isLessThanOrEqual = !(this->isGreaterThan(value));

	return isLessThanOrEqual;
}

bool HugeInteger::isGreaterThan(const string &str) const
{
	HugeInteger val(str);
	bool isGreaterThan = this->isGreaterThan(str);
	return isGreaterThan;
}

bool HugeInteger::isGreaterThan(const HugeInteger &value) const
{
	bool isGreaterThan;

	isGreaterThan = (!(this->isEqualTo(value)) && !(this->isLessThan(value)));

	return isGreaterThan;
}

bool HugeInteger::isGreaterThanOrEqual(const string &str) const
{
	HugeInteger val(str);
	bool isGreaterThanOrEqual = this->isGreaterThanOrEqual(str);
	return isGreaterThanOrEqual;
}

bool HugeInteger::isGreaterThanOrEqual(const HugeInteger &value) const
{
	bool isGreaterThanOrEqual;

	isGreaterThanOrEqual = !(this->isLessThan(value));
	return isGreaterThanOrEqual;
}

