#include "Employee.h"
#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{

	Employee emp1("Grace", "Hopper", 100000);
	Employee emp2("Richard", "Stallman", 15000);
	Employee emp3("Linus", "Torvalds", -13000);

	cout << "Employee #1" << endl;
	cout << emp1.getFirstName() << " " << emp1.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << emp1.getMonthlySalary() * 12 << endl;
	cout << endl;

	cout << "Employee #2" << endl;
	cout << emp2.getFirstName() << " " << emp2.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << emp2.getMonthlySalary() * 12 << endl;
	cout << endl;

	cout << "Employee #3" << endl;
	cout << emp3.getFirstName() << " " << emp3.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << emp3.getMonthlySalary() * 12 << endl;
	
	cout << endl;
	cout << "Employees' yearly salaries after 10% raise: " << endl;
	cout << endl;

	cout << "Employee #1" << endl;
	cout << emp1.getFirstName() << " " << emp1.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << (emp1.getMonthlySalary() * 12) * 1.10 << endl;
	cout << endl; 

	cout << "Employee #2" << endl;
	cout << emp2.getFirstName() << " " << emp2.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << (emp2.getMonthlySalary() * 12) * 1.10 << endl;
	cout << endl;

	cout << "Employee #3" << endl;
	cout << emp3.getFirstName() << " " << emp3.getLastName() << endl;
	cout << "Annual Salary: $" << setprecision(2)  << fixed << (emp3.getMonthlySalary() * 12) * 1.10 << endl;
	cout << endl;

	return 0;
}