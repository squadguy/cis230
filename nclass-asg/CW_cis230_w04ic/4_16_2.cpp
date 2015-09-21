#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int hoursWorked;
	double payRate;
	double totalPay;

	cout << endl;
	
	cout << "---------------------------" << endl;
	cout << "Salary Calculator" << endl;
	cout << "---------------------------" << endl;
	
	cout << endl;

	cout << "Enter the number of hours worked" << endl;
	cout << "To exit enter -1" << endl;
	cin >> hoursWorked;

	while(hoursWorked != -1)
	{
		double ot = 0;
		double otRate;
		double totalOverTime;

			if (hoursWorked > 40)
				{
					ot = hoursWorked - 40;//gets overtime hours
				}

		cout << "Enter the pay rate for the employee ($00.00):" << endl;
		cin >> payRate;// gets payRate
			
		otRate = payRate * 0.5;//finds the overtime rate for employee
		totalOverTime = otRate * ot;//finds the amount of overtime owed

		totalPay = hoursWorked * payRate + totalOverTime;//determines total pay

		cout << "Salary is: $" << fixed << setprecision(2) << totalPay << endl;//print out salary
		cout << "----------------------" << endl;
		cout << "Next employee:" << endl;
		cout << "----------------------" << endl;
		cout << endl;
		cout << "Enter number of hours" << endl;
		cout << "Enter -1 to exit program" << endl;
		cin >> hoursWorked;
	};

	return 0;
}
