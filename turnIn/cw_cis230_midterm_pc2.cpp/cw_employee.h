#ifndef CW_EMPLOYEE_H
#define CW_EMPLOYEE_H
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

class Employee
{
public:
	Employee(string _firstName, string _lastName, double monthlySalary);

	string getFirstName() const;
	string getLastName() const;
	double getMonthlySalary() const;

	void setFirstName(string);
	void setLastName(string);
	void setMonthlySalary(double);

private:
	string firstName;
	string lastName;
	double monthlySalary;
};

#endif