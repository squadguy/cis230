#include "invoice.h"
#include <iostream>
#include <string>


using namespace std;

int main()
{

	Invoice invoice1(1532, 2, 3);

	cout << invoice1.getPartNum() << endl;
	cout << invoice1.getAmountItem() << endl;
	cout << invoice1.getItemPrice() << endl;
	cout << invoice1.getInvoiceTotal() << endl;

	return 0;
}