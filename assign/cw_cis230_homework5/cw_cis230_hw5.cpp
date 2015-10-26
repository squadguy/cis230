#include<iostream>
#include<string>
#include<array>
#include "HugeInteger.h"
using namespace std;

int main()
{
	HugeInteger num1(15);
	HugeInteger num2(20);
	HugeInteger num3 = num1.add(num2);
	HugeInteger num4("723");
	HugeInteger num5("321");
	HugeInteger num6 = num5.add(num4);
	HugeInteger num7 = num2.subtract(num1);
	HugeInteger num8 = num2.add(15);
	HugeInteger num9 = num2.subtract(15);
	HugeInteger num10 = num4.subtract(num5);

	cout << "num1 =";
	num1.output();
	cout << endl;

	cout << "num2 =";
	num2.output();

	cout << endl;

	cout << "num1 + num2 = ";
	num3.output();
	cout << endl;

	cout << "num2 - num1 = ";
	num7.output();

	cout << "num 4 = ";
	num4.output();
	cout << endl;
	cout << "num 5 = ";
	num5.output();
	cout << endl;
	
	cout << "num4 + num5 = ";
	num6.output();
	cout << endl;

	cout << "num2 + 15 = ";
	num8.output();
	cout << endl;

	cout << "num2 - 15 = ";
	num9.output();
	cout << endl;

	cout << "num 5 - 100 = ";
	num10.output();
	cout << endl;

	cin.get();

	return 0;
}
