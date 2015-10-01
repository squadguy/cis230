// Exercise 7.15 Page
#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int UPPERLIMIT = 100;
	const int SIZE = 20;
	const int LOWERLIMIT = 10;
	array < int, SIZE > myArray = {};
	int userNum;
	int index;
	bool flag;

	cout << "You will need to enter " << SIZE << " numbers between " << LOWERLIMIT << " and " << UPPERLIMIT << endl;

	for(int i = 0; i < SIZE; i++)
	{
		cout << "Enter your number now: " << endl;
		cin >> userNum;
	
		for(int j = 0; j < i; j++)
		{
			if(userNum == myArray[j])
			{
				cout << "repeat number" << endl;
				flag = true;
				break;
			}
		}
		if (flag == false)
		{
			cout << "entering " << userNum << " into myArray[" << i << "]" << endl;
			myArray[index] = userNum;
			index++;
		}
		else
			cout << "You should never see this!!! " << endl;	
	}
	return 0;
}