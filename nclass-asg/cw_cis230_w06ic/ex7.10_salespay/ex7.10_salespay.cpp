#include <iostream>
#include <array>

using namespace std;

int main()
{
	int pay;
	int amount;
	array < int, 9 > salary = {0, 0, 0, 0, 0, 0, 0, 0, 0}; //initialize the array
	
	cout << "Enter sales data " << endl;
	cout << "Use -1 to exit" << endl;
	cin >> amount;
	pay = (amount * 0.9) + 200;

	while (amount != -1)
	{
		if ( pay < 300 )
		{ 
			salary[0] += 1;
		}
		else if ( pay < 400)
		{
			salary[1] += 1;
		}
		else if ( pay < 500 )
		{
			salary[2] += 1;
		}
		else if ( pay < 600 )
		{
			salary[3] += 1;
		}
		else if ( pay < 700)
		{
			salary[4] += 1;
		}
		else if ( pay < 800 )
		{
			salary[5] += 1;
		}
		else if ( pay < 900 )
		{
			salary[6] += 1;
		}
		else if ( pay < 1000 )
		{
			salary[7] += 1;
		}
		else
			salary[8] +=1;
	

		cout << "Enter next sales data:" << endl;
		cin >>  amount;
		pay = 200 + ( 0.9 * amount);
	}


	for (int i = 0; i < salary.size(); i++)
	{
		switch(i)
		{
			case 0: cout << "$200 - $299 : " << salary[0] << endl; break;
			case 1: cout << "$300 - $399 : " << salary[1] << endl; break;
			case 2: cout << "$400 - $499 : " << salary[2] << endl; break;
			case 3: cout << "$500 - $599 : " << salary[3] << endl; break;
			case 4: cout << "$600 - $699 : " << salary[4] << endl; break;
			case 5: cout << "$700 - $799 : " << salary[5] << endl; break;
			case 6: cout << "$800 - $899 : " << salary[6] << endl; break;
			case 7: cout << "$900 - $999 : " << salary[7] << endl; break;
			case 8: cout << "$1000 +     : " << salary[8] << endl; break;
		}
	}


	return 0;

}
