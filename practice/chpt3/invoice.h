#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
public:
	Invoice (int, int, int);

	int getPartNum() const;
	int getAmountItem() const;
	int getItemPrice() const;
	int getInvoiceTotal() const;
	/*
	void setItemPrice(int);
	void setPartNum(int);
	void setPartNum(int);
	*/

private:
	int partNumber;
	int amountItem;
	int itemPrice;
};

#endif