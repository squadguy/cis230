#include <iostream>

using namespace std;

int gcd (int _val1, int _val2);

int main()
{
	int val1 = 0;
	int val2 = 0;

	cout << "Enter an int: " << endl;
	cin >> val1;

	cout << "enter another in" << endl;
	cin >> val2;

	cout << gcd(val1, val2);

	return 0;
}

int gcd (int _val1, int _val2)
	{
		int bigger;
		int smaller;
		int remain;
		int value;
		if (_val1 < _val2)
		{
			bigger = _val2;
			smaller = _val1;
		}
		else
		{
			bigger = _val1;
			smaller= _val2;
		}

		remain = bigger % smaller;
		
		remain = smaller % remain;
		
		if (remain != 0)
		{
			remain = smaller % remain;
			bigger = smaller;
			smaller = remain;
		}

		else
			return bigger;
			
	}
