#include "invoice.h"
#include <string>
#include <iostream>

using namespace std;

Invoice::Invoice (int a, int b, int c)
{
	
	partNumber = a;
	amountItem = b;
	itemPrice = c;
	
}


int Invoice::getPartNum() const
{
	return partNumber;
}

int Invoice::getAmountItem() const
{
	return amountItem;
}

int Invoice::getItemPrice() const
{
	return itemPrice;
}

int Invoice::getInvoiceTotal() const
{
	return amountItem * itemPrice;
}

/*
void Invoice::setPartNum(int part)
{
	partNumber = part;
}

void Invoice::setItemAmount() 
{
	amountItem = b;
}

void Invoice::setItemPrice(int b)
{
	itemPrice = c;
}
*/