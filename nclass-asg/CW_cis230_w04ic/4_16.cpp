#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double hoursWorked;
	double payRate;
	double totalPay;
	
	while(hoursWorked != -1)
	{
		double ot;
		double otRate;
		double totalOverTime;

		cout << "Enter hours worked (-1 to exit): " << endl;
		cin >> hoursWorked;//get hours worked
			if (hoursWorked == -1)
				break;//exits program if -1 entered
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
	};

	return 0;
}
