#include <iostream>
#include "invoice.h"
using namespace std;

Invoice::Invoice(string number)
	: productNumber (number)
	{

	}

void Invoice::setProductNumber( string number )
{
	productNumber = number;
}