//Name  :   Christopher Wampnar
//Class:    CIS230 
//Purpose:  Program takes 20 numbers between 10 and 100 from the user, validates them and stores them in an array.
//          The nonduplicate numbers are then displayed.
//Notes:    Written with Vim. Orignially compiled with gcc compiler.

#include <iostream>
#include <array>

using namespace std;

int main()
{
	const int SIZE = 20; //set size of array
	const int UPPERLIMIT = 100; //set upperlimit of number range
	const int LOWERLIMIT = 10;// set lowerlimit of number range
	array <int, SIZE> linuxBeastArray = {}; //create array for numbers
	int i = 0; //loop variable
	int j = 0; //loop variable
	int survior = 0; //create placeholder for nonduplicates
	int hold; //users current input
	bool flag = false; //raise flag when a duplicate is found
	int angr = 0;//determines Linux Beast's anger

	cout << endl;
	cout << endl;

	cout << "*************************************" << endl;
	cout << "*                                   *" << endl;
	cout << "*        LINUX BEAST ARRAY          *" << endl;
	cout << "*                                   *" << endl;
	cout << "*         CIS 230 - RULES!          *" << endl;
	cout << "*                                   *" << endl; 
	cout << "*************************************" << endl;
	
	cout << endl;
	cout << endl;
	
	cout << "Challenge the Linux Beast Array!" << endl;
	cout << "Simply enter 20 numbers between " << LOWERLIMIT << " and " << UPPERLIMIT << "!!!" << endl;
	cout << "The Linux Beast Array will destroy any duplicates and print out the survivors !" << endl;
	cout << endl;

	cout << "Begin!!!" << endl;
	//start collecting values from user
	for (i = 0; i < SIZE; i++)
	{
		flag = false;//refresh duplicate array flag
		angr = 0;//refresh anger level

		//prompt user for data and explain rules
		cout << "Enter number between " << LOWERLIMIT << " and " << UPPERLIMIT << " (" << (i + 1) << " of " << SIZE << ") :" << endl;
		cout << "--";//place holder
		cin >> hold; //get user data
		
		//validate data
		while( hold > UPPERLIMIT || hold < LOWERLIMIT )
		{
			if (angr < 2)//mildly angery Linux Beast
			{
				cout << "Careful you're making the Linux Beast angry.  Make sure your number is " << LOWERLIMIT << "-" <<
				UPPERLIMIT << endl;
			cout << "Enter again" << endl;
			cout << "--";
			}
			else if (angr == 2)//iritated Linux Beast
			{
				cout << "What are you a Windows user... Seriously be careful you've already irritated the Linux Beast" << endl;
				cout << "Make sure to enter a number " << LOWERLIMIT << "-" << UPPERLIMIT << endl;
				cout << "Enter again" << endl;
			}
			else//gone done it level
			{
				cout << "Now you gon' done it!  He's irate!" << endl;
				cout << "I'm going to have to find Richard M. Stallman to get him back in his cage!" << endl;
				cout << "Enter again" << endl;
			}
			cin >> hold;//re-enter corrected data		
			angr++;//increase linux beast anger level
		}
		
		//flag if number already in array	
		for (j = 0; j < i; j++)
		{
			if (hold == linuxBeastArray[j])
			{	
				flag = true;
				cout << "Duplicate detected --- destroying \n" << endl;//inform player their duplicated number has been destroyed
				break;//break for loop when duplicate detected
			}
		}
		//include nonflagged number into surviors - increase non duplicate index
		if (flag == false)
		{
			linuxBeastArray[survior] = hold;
			survior++;
		}
			
	}


	//Print the nonduplicate number
	cout << endl;
	cout << "-----------------------------------------" << endl;
	cout << "LINUX-BEAST-ARRAY" << endl;
	cout << "-----------------------------------------" << endl;
	cout << "PRINTING THE SURVIVORS " << endl;
	cout << "-----------------------------------------" << endl;

	//print data when it is not 0	
	for(i = 0; linuxBeastArray[i] != 0; i++)
		{
			cout << linuxBeastArray[i] << " ";
		}
	cout << endl;
	cout << endl;

	cout << "************************" << endl;
	cout << "*  Thanks for playing  *" << endl;
	cout << "************************" << endl;
	
	return 0;
}
