//NAME: CHRISTOPHER WAMPNAR
//EX. 8.8a
unsigned values[ 5 ] = { 2, 4, 6, 8, 10 };

//Ex. 8.8b

unsigned int *vPtr = nullptr;

//Ex 8.8c

for(int i = 0; i < 5; i++)
	cout << values[i] << endl;

//Ex 8.8d

vPtr = &values[0];

vPtr = values;

//8.8e

for(int i = 0; i < 5; i++)
	cout << *(vPtr + i ) << endl;

//8.8f

for (int i = 0; i < 5; i++)
	cout << *(values + i ) << endl;

//8.8g

for (int i = 0; i < 5; i++)
	cout << vPtr[ i ] << endl;

//8.8h

values[ 4 ];

*(values + 4);

vPtr [ 4 ];

*( vPtr + 4 );

//8.8i

//10025006

//8;

//8.8j

//10025000

//2

//8.9a

long *longPtr = nullptr;

//8.9b
longPtr = &value1;

//8.9c
cout << *longPtr;

//8.9d

value2 = longPtr;

//8.9e

cout << value2;

//8.9f

cout << &value1;

//8.9g

cout << longPtr;

if(&value1 == longPtr)
{ 
	cout << "They match" << endl;
}
else
	cout << "I got this wrong" << endl;

//8.10b

void zero(long int *);

//8.10d

int add1AndSum(int *);

//8.11b
/***********************
the long variable cannot be placed into a double without a trucation warning/compiler error


8.11c
the object type int * and int aren't the same
put an &y and it works;

8.11d

The for loop does not have an initial initialized value for the counter
variable.

for(int s = 0; *s !='\0'; s++)

8.11e
You cannot assign the value of void *genericPtr to short *numPtr.
You must first cast void *gnericPtr to a short.

8.11f
error: cannot convert ‘double*’ to ‘double’ in initialization
double xPtr = &x;

switch to double int *xPtr = &;

8.13

It doesn't do anything of value.

It loops through the first pointer array.

8.14

It prints out the length of the string.

mystery2 takes the string array with *s, creates an unsigned int x and then loops thought the array
incrementing x by one each time until it reaches the null terminator of the string.  The program
then returns the value of x which is the length of the string.
*/

return 0;
}
