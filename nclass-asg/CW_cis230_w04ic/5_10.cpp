#include <iostream>

using namespace std;

int main()
{
	int factorial = 1;

	cout << "x\t" << "x!" << endl;
	cout << "___\t" << "___" << endl;

	for( int num = 1; num < 6; num++ )
		{
			factorial = factorial * num;
			cout << num << "\t" << factorial << endl;
		};

	
	

	return 0;
}
