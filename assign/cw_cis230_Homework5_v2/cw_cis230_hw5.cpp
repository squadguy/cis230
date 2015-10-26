#include<iostream>
#include<string>
#include<array>
#include "HugeInteger.h"
using namespace std;

int main()
{
	HugeInteger num1(12);
	HugeInteger num2(120);
	HugeInteger num3 = num1.add(num2);
	HugeInteger num100(0);
	HugeInteger str100(0);
	HugeInteger str1("723");
	HugeInteger str2("723");
	HugeInteger str3 = str1.add(str2);
	HugeInteger num7 = num2.subtract(num1);
	HugeInteger num8 = num2.add(15);
	HugeInteger num9 = num2.subtract(15);
	HugeInteger str4 = str1.subtract(str2);

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

	cout << "str1 = ";
	str1.output();
	cout << endl;
	cout << "str2 = ";
	str2.output();
	cout << endl;
	
	cout << "str1 + str2 = ";
	str3.output();
	cout << endl;

	cout << "num2 + 15 = ";
	num8.output();
	cout << endl;

	cout << "num2 - 15 = ";
	num9.output();
	cout << endl;

	cout << "str1 -str2= ";
	str4.output();
	cout << endl;

	cout << "num1 == num2 " << num1.isEqualTo(num2) << endl;

	cout <<	"num1>num2 " << num1.isGreaterThan(num2) << endl;
	cout << "num1< num2 " << num1.isLessThan(num2) << endl;
	cout << "num1 >= num2 " << num1.isGreaterThanOrEqual(num2) << endl;
	cout << "num1 <= num2 " << num1.isLessThanOrEqual(num2) << endl;
	cout << "str1 == str2 " << str1.isEqualTo(str2) << endl;
	cout << "str1 < str2 " << str1.isLessThan(str2) << endl;
	cout << "str1 <= str2 " << str1.isLessThanOrEqual(str2) << endl;
	cout << "str1 > str2 " << str1.isGreaterThan(str2) << endl;
	cout << "str1 >= str2 " << str1.isGreaterThanOrEqual(str2) << endl;
	cout << "Is num1 == 0 " << num1.isZero() << endl;
	cout << "Is str1 == 0 " << str1.isZero() << endl;
	cout << "Is num100 == 0 " << num100.isZero() << endl;
	cout << "Is str100 == 0 " << str100.isZero() << endl;

	return 0;


}
