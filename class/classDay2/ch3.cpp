#include <iostream>
#include <string>

using namespace std;

class GradeBook
{
public:
	explicit GradeBook(string name)
		: courseName (name)
	{
		
	}	
	void setCourseName(string name)
	{
		courseName = name;
	}

	string getCourseName() const
	{
		return courseName;
	}

	void displayMessage() const
	{
		cout << "Welcome to the Grade Book for \n" << courseName << endl;
	}
private:
	string courseName;
};

int main()
{
	string nameOfCourse;
	GradeBook myGradeBook1("VMO");
	GradeBook myGradeBook2("HazMat Ops");
/*
	cout << "Please enter the course name:" << endl;
	getline(cin, nameOfCourse);
	cout << endl;
*/	
	myGradeBook1.displayMessage();
	myGradeBook2.displayMessage();

	return 0;

}





