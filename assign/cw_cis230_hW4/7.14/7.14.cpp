#include <iostream>
#include <vector>

using namespace std;

int main()
{
	const int SIZE = 5;
	const int UPPERLIMIT = 100;
	const int LOWERLIMIT = 10;
	vector < int > linuxBeastVector= {};
	int usrNum = 0;
	
	bool flag = false;

	for(int i = 0; i < linuxBeastVector.size(); i++)
	{
		cout << "Give me a number" << endl;
		cin >> usrNum;

		while(usrNum > UPPERLIMIT || usrNum < LOWERLIMIT)
		{
			cout << "number needs to be between " << LOWERLIMIT << " and " << UPPERLIMIT << endl;
			cout << "Please reenter" << endl;
			cin >> usrNum;
		}
		
		for(int j = 0; j < i; j++)
		{
			if(usrNum == linuxBeastVector[j])
			{
				cout << "duplicate number -- destroying" << endl;
				flag = true;
				break;
			}
		}
		if (usrNum == false)
		{
			linuxBeastVector.push_back( usrNum );
		}

	}

	for(int i = 0; i < SIZE; i++)
	{
		cout << linuxBeastVector[i] << endl;
	}

	return 0;
}
