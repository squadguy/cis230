#include<iostream>
#include<string>
#include<array>

using namespace std;

class HugeInteger
{
public:
HugeInteger(long = 0);
HugeInteger( const string &);
void output()const;
void input(const string &);
HugeInteger add(const HugeInteger &) const;

private:
array < short, 40 > integer = { };
};

int main()
{
	HugeInteger num1(10);
	num1.output();
	HugeInteger num3(11);
	HugeInteger num2("123456789");
	num2.output();
	HugeInteger num4 = num1.add(num3);
	num4.output();
	

	return 0;
}

HugeInteger::HugeInteger(long value)
{
	for(int i = 0; i < 40; i++)
	{
		integer[i] = 0;
	}
	for (int i = 39; i >= 0; i--)
	{
		integer[i]=value % 10;
		value /= 10;
	}
}

HugeInteger::HugeInteger( const string &val)
{
	input(val);
}

void HugeInteger::input(const string &val)
{
	int length = val.size();
	int i, k;
	for(i = length - 1, k = 39; i >=0 && k >=0; i--, k--)
	{
		integer[k] = val[i] - '0';
	}
	
}

void HugeInteger::output() const
{
	int i;
	for(i = 0; (integer[i] == 0) && (i <=39); i++)
		;
		if(i==40)
			cout << 0;
		else
			for(; i <=39; i++)
			cout << integer[i];
	cout << endl;

}

HugeInteger HugeInteger::add(const HugeInteger &value) const
{
	int carry = 0;
	HugeInteger result;
	for(int i = 39; i >=0; i--)
	{
		result.integer[i] = integer[i] + value.integer[i] + carry;
		
		if(integer[i] + value.integer[i] > 9)
		{
			result.integer[i] % 10;
			carry = 1;

		}
		else
		{
			carry = 0;
		}
	}


}

HugeInteger HugeInteger::add(int op2) const
{
	return add(HugeIntger(op2));
}
