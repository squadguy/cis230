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
