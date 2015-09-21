#include <iostream>
#include "date.h"

using namespace std;

int main ()
{
	Date theDate(22, 21, 2015);

	theDate.setMonth(11);
	theDate.setDay(4);
	theDate.setYear(2016);
	
	theDate.displayDate();

	return 0;
}