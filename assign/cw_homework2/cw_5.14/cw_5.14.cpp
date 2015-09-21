/*****************************
Name: Christopher Wampnar
Date: 9/21/15
Assignment: 5.14
Purpose: Program uses a while loop to collect order information from user.
	Program then uses switch statment to compile order amounts.
	Program calculates total order price and displays to user.
Notes: Written using Vim - compiled using gcc
*****************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int product;//sentinal value
//set intial value of products to 0
	int product1 = 0;
	int product2 = 0;
	int product3 = 0;
	int product4 = 0;
	int product5 = 0;
//stores total cost for each product
	double product1Total;
	double product2Total;
	double product3Total;
	double product4Total;
	double product5Total;
//stores price of each product
	double product1Prc = 2.98;
	double product2Prc = 4.50;
	double product3Prc = 9.98;
	double product4Prc = 4.49;
	double product5Prc = 6.87;
	double totalOrder;
	int endOrder;

//loop gathers input from user
	while (product != 6)
	{
		cout << "Product infomation" << endl;
		cout << endl;
		cout << "Input #" << "\tProduct Name\t" << "Price" << 
			endl;
		cout << "_______" << "\t_____________\t" << "_____" << 
			endl;
		cout << "1 :" << "\tProduct 1\t" << "$" <<
			fixed << setprecision(2) << product1Prc << endl;
		cout << "2 :" << "\tProduct 2\t" << "$" << product2Prc <<
			fixed << setprecision(2) << endl;
		cout << "3 :" << "\tProduct 3\t" << "$" << product3Prc <<
			fixed << setprecision(2) << endl;
		cout << "4 :" << "\tProduct 4\t" << "$" << product4Prc <<
			fixed << setprecision(2) << endl;
		cout << "5 :" << "\tProduct 5\t" << "$" << product5Prc <<
			fixed << setprecision(2) << endl;
		cout << "6 :" << "\tEnd Order" << endl;

//get user input
		cout << "Enter Input # now : ";
		cin >> product;

		switch (product)
		{	
			case 1:
				++product1;
				product1Total += product1Prc;//running total
				break;
			case 2:
				++product2;
				product2Total += product2Prc;//running total
				break;
			case 3:
				++product3;
				product3Total += product3Prc;//running total
				break;
			case 4: 
				++product4;
				product4Total += product4Prc;//running total
				break;
			case 5:
				++product5;
				product5Total += product5Prc;//running total
				break;
			case 6:
				break;//ends user input
			default:
				cout << "Product not recongized " << endl;
				cout << "Please reenter " << endl;
				break;//for other values
		}	
	
		cout << endl;
	}

//display information gathered from user
	cout << "------------------------------------" << endl;
	cout << "Displaying Total Order information " << endl;
	cout << "------------------------------------" << endl;
	cout << endl;

	cout << "Product" << "\t\tOrdered\t" << "Total" << endl;
	cout << "-------" << "\t\t-------\t" << "-----" << endl;

//Actual data
	cout << "Product 1" << "\t"  << product1 << "\t" << "$" <<
		fixed << setprecision(2) << product1Total << endl;
	cout << "Product 2" << "\t" << product2 << "\t" << "$" << 
		fixed << setprecision(2) << product2Total << endl;
	cout << "Product 3" << "\t" << product3 << "\t" << "$" <<
		fixed << setprecision(2) << product3Total << endl;
	cout << "Product 4" << "\t" << product4 << "\t" << "$" << 
		fixed << setprecision(2) << product4Total << endl;
	cout << "Product 5" << "\t" <<  product5 << "\t" << "$" <<
		fixed << setprecision(2) << product5Total << endl;

//calculates the total order cost
	totalOrder = product1Total + product2Total + product3Total +
		product4Total + product5Total;
		
//Displays total order		
	cout << endl << "Total order : $" << totalOrder << endl;

	return 0;
}
