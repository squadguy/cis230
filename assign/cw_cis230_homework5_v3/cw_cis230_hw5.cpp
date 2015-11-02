#include<iostream>
#include<string>
#include<array>
#include<climits>
#include "HugeInteger.h"
using namespace std;

bool test_less(int num1, int num2)
{
	bool rawResult = num1 < num2;
	HugeInteger huge1 = HugeInteger(num1);
	HugeInteger huge2 = HugeInteger(num2);
	bool myResult = (huge1 < huge2);
	return rawResult == myResult;
}

/*
bool test_sub(int num1, int num2)
{
	int rawResult = num1 - num2;
	HugeInteger huge1 = HugeInteger(num1);
	HugeInteger huge2 = HugeInteger(num2);
	HugeInteger hugeResult = huge1 - huge2;
	return (rawResult == atoi(hugeResult.to_string().c_str()));
}
*/


bool test_add(int num1, int num2)
{
	int rawResult = num1 + num2;
	HugeInteger huge1 = HugeInteger(num1);
	HugeInteger huge2 = HugeInteger(num2);
	HugeInteger hugeResult = huge1 + huge2; //opeator+ in .h and cpp allow for this.
	return (rawResult == atoi(hugeResult.to_string().c_str()));
}

int main()
{
/*********************

	
	for(int i = 1; i < 100; i++)
	{
		if(!test_less(i, i))
		{
			cout << "FAIL" << i;
			return 0;
		}
		if(!test_less(i, i-1))
		{
			cout << "FAIL" << i;
			return 0;
		}
		if(!test_less(i-1, i))
		{
			cout << "FAIL" << i;
			return 0;
		}
	}
*/

	for (int i = 0; i < INT_MAX; i++)
	{
		for(int j = 0; j < INT_MAX; j++)
		{
			if (test_add(i, j))
			{
				if (j%100000 == 0)
					cout << "test_add(" << i << ", " << j << ")\t" << endl;
			}
			else
			{
				cout << "FAIL FAIL FAIL: i=" << i << ",j=" << j<< endl;
				return 0;		
			}
		}
	}
/*
	for(int i = 10; i >= 5; i--)
	{
		for (int j= 5; j >=0; j--)
		{
			if(test_sub(i, j))
			{
				cout << "test_subs(" << i << ", " << j << ") SUCCESS!!\n";

			}
			else 
			{
				cout << "FAIL FAIL FAIL: i=" << i << ",j=" << j << endl;
				return 0;
			}
		}
	}
*/
}
int main2()
{
	HugeInteger num1(12);
	HugeInteger num2(120);
	HugeInteger num3 = num1 + num2;
	HugeInteger num100(0);
	HugeInteger str100(0);
	HugeInteger str1("723");
	HugeInteger str2("723");
	HugeInteger str3 = str1 + str2;
	HugeInteger num7 = num2 - num1;
	HugeInteger num8 = num2 + 15;
	HugeInteger num9 = num2 - 15;
	HugeInteger str4 = str1 - str2;

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

	cout << (num1 == num2) << endl;


	cout <<	"num1>num2 " << (num1 > num2) << endl;
	cout << "num1< num2 " << (num1 < num2) << endl;
	cout << "num1 >= num2 " << (num1 >= num2) << endl;
	cout << "num1 <= num2 " << (num1 <= num2) << endl;
	cout << "str1 == str2 " << (str1 == str2) << endl;
	cout << "str1 < str2 " << (str1 < str2) << endl;
	cout << "str1 <= str2 " << (str1 <= str2) << endl;
	cout << "str1 > str2 " << (str1 > str2) << endl;
	cout << "str1 >= str2 " << (str1 >= str2) << endl;
	cout << "Is num1 == 0 " << num1.isZero() << endl;
	cout << "Is str1 == 0 " << str1.isZero() << endl;
	cout << "Is num100 == 0 " << num100.isZero() << endl;
	cout << "Is str100 == 0 " << str100.isZero() << endl;

	return 0;


}
