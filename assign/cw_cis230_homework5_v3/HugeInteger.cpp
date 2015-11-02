#include <iostream>
#include <array>
#include <string>
#include <climits>
#include "HugeInteger.h"

using namespace std;

HugeInteger::HugeInteger(int value)
{
	for (int i = 0; i < HI_SIZE; i++)
	{
		integer[i] = 0;
	}
	for (int j = (HI_SIZE-1); value != 0 && j >= 0; j--)
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
	for (int i = 0; i < HI_SIZE; i++)
		integer[i] = 0;

	int length = val.size();
	int j;
	int k;

	for (j = HI_SIZE - length, k = 0; j < HI_SIZE; j++, k++)
	{
		if (isdigit(val[k])) //checks to see if it's a digit
			integer[j] = val[k] - '0';
	}
}

void HugeInteger::output() const
{
	int i; // used for looping
		for (i = 0; (i < HI_SIZE) && (integer[i] == 0); ++i)
		; // skip leading zeros
		if (i == HI_SIZE)
			cout << 0;
		else
			for (; i < HI_SIZE; ++i) // display the HugeInteger_V4
				cout << integer[i];
} // end function output

HugeInteger HugeInteger::operator+(const HugeInteger &value) const
{
	int carry = 0;
	HugeInteger result;
	for (int i = (HI_SIZE - 1); i >= 0; i--)
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

HugeInteger HugeInteger::operator+(int num) const
{
	return operator+(HugeInteger(num));
}

HugeInteger HugeInteger::operator+(const string &str) const

{
	HugeInteger val(str);
	HugeInteger result = this -> operator+(val);
	return result;
}

HugeInteger HugeInteger::operator-(const HugeInteger &value) const
{
	HugeInteger result;
	int carry = 0;
	for (int i = (HI_SIZE -1); i >= 0; i--)
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

HugeInteger HugeInteger::operator-(int num) const
{
	return operator-(HugeInteger(num));
}

HugeInteger HugeInteger::operator-(const string &str) const
{
	HugeInteger val(str);
	HugeInteger result = this->operator-(val);
	return result;
}
bool HugeInteger::operator==(const string &str) const
{
	HugeInteger val(str);
	bool isEqual = this->operator==(val);
	return isEqual;
}

bool HugeInteger::operator==(const HugeInteger& op2) const
{
	bool areEqual;
	for (int i = (HI_SIZE - 1); i >= 0; i--)
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
	for (int i = 0; i < HI_SIZE; i++)
		if(this->integer[i] != 0)
		{
			isZip = false;
			break;
		}
		else
			isZip = true;
	return isZip;
}


bool HugeInteger::operator<(const string &str) const
{
	HugeInteger val(str);
	bool isLessThan = this->operator<(val);
	return isLessThan;
}

bool HugeInteger::operator<(const HugeInteger &value) const
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

bool HugeInteger::operator<=(const string &str) const
{
	HugeInteger val(str);
	bool isLessThanOrEqual = this->operator<=(str);
	return isLessThanOrEqual;
}

bool HugeInteger::operator<=(const HugeInteger &value) const
{
	bool isLessThanOrEqual;

	isLessThanOrEqual = !(this->operator>(value));

	return isLessThanOrEqual;
}

bool HugeInteger::operator>(const string &str) const
{
	HugeInteger val(str);
	bool isGreaterThan = this->operator>(str);
	return isGreaterThan;
}

bool HugeInteger::operator>(const HugeInteger &value) const
{
	bool isGreaterThan;

	isGreaterThan = (!(this->operator==(value)) && !(this->operator<(value)));

	return isGreaterThan;
}

bool HugeInteger::operator>=(const string &str) const
{
	HugeInteger val(str);
	bool isGreaterThanOrEqual = this->operator>=(str);
	return isGreaterThanOrEqual;
}

bool HugeInteger::operator>=(const HugeInteger &value) const
{
	bool isGreaterThanOrEqual;

	isGreaterThanOrEqual = !(this->operator<(value));
	return isGreaterThanOrEqual;
}

string HugeInteger::to_string() const
{
	string ret_val = string();
	int i;
	for( i =0; (i < HI_SIZE) && (integer[i] == 0); i ++)
		;

	if (i == HI_SIZE)
		ret_val += "0";
	else
		for (; i < HI_SIZE; ++i)
			ret_val += std::to_string(integer[i]);
     return ret_val;
}

