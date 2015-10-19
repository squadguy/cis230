#include "cw_employee.h"
#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector <Employee> emps;

	Employee emp1("Grace", "Hopper", 100000);
	Employee emp2("Richard", "Stallman", 15000);
	Employee emp3("Linus", "Torvalds", -13000);

	emps.push_back(emp1);
	emps.push_back(emp2);
	emps.push_back(emp3);

	for (int i = 0; i < 3; i ++)
	{	
		cout << "Employee #" << i + 1 << endl;
		cout << emps[i].getFirstName() << " " << emps[i].getLastName() << endl;
		cout << setprecision(2) << fixed << emps[i].getMonthlySalary() * 12 << endl;
		cout << endl;
	}

	cout << "Employees' yearly salaries after 5% raise: " << endl;
	cout << endl;

	for (int i = 0; i < 3; i ++)
	{	
		cout << "Employee #" << i + 1 << endl;
		cout << emps[i].getFirstName() << " " << emps[i].getLastName() << endl;
		cout << setprecision(2) << fixed << (emps[i].getMonthlySalary() * 12) * 1.05 << endl;
		cout << endl;
	}


	return 0;
}