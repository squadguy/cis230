#ifndef INVOICE_H
#define INVOICE_H
#include <string>

class Invoice
{
public:
	Invoice (std::string);
	void setPartNumber (std::string);
	std::string getCourseName() const;

};

#endif