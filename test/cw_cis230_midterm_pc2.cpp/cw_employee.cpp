#include "cw_employee.h"
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

Employee::Employee(string _firstName, string _lastName, double _monthlySalary)
	{
		setFirstName(_firstName);
		setLastName(_lastName);
		setMonthlySalary(_monthlySalary);
	}

void Employee::setFirstName(string _firstName)
{
	firstName = _firstName;
}

void Employee::setLastName(string _lastName)
{
	lastName = _lastName;
}

void Employee::setMonthlySalary(double _monthlySalary)
{
	if(_monthlySalary < 0)
		monthlySalary = 0;
	else
		monthlySalary = _monthlySalary;

}

double Employee::getMonthlySalary() const
{
	return monthlySalary;
}

string Employee::getFirstName() const
{
	return firstName;
}

string Employee::getLastName() const
{
	return lastName;
}

