#include <iostream>
using namespace std;

int main()
{
	long value1 = 250;
	long value2 = 350;

	long *longPtr;

	longPtr = &value1;

	cout << longPtr << " " << &value1 << endl;

	value2 = *longPtr;

	cout << value2;

	if(&value1 == longPtr)
	{
		        cout << "They match" << endl;
	}		
	else

		        cout << "I got this wrong" << endl;


	char s[] = "this is a character array";
	for ( ; *s != '\0'; ++s)
		cout << *s <<" ";



return 0;

}
