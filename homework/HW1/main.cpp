#include <iostream>
#include <string>
using namespace std;

int main()
{
	int grade;
	string ECTS = "";
	string description = "";

	cout << "Enter grade: ";
	cin >> grade;

	if (grade >= 90 && grade <= 100)
	{
		ECTS = "A";
		description = "Perfectly";
	}
	else if (grade >= 82 && grade <= 89)
	{
		ECTS = "B";
		description = "Very good";
	}
	else if (grade >= 75 && grade <= 81)
	{
		ECTS = "C";
		description = "Good";
	}
	else if (grade >= 69 && grade <= 74)
	{
		ECTS = "D";
		description = "Satisfactorily";
	}
	else if (grade >= 60 && grade <= 68)
	{
		ECTS = "E";
		description = "Enough";
	}
	else if (grade >= 35 && grade <= 59)
	{
		ECTS = "FX";
		description = "Unsatisfactory, but retaking is possible.";
	}
	else if (grade >= 0 && grade <= 34)
	{
		ECTS = "F";
		description = "Unsatisfactory";
	}
	else
	{
		cout << "Incorrect input value" << endl;
		return 0;
	}

	cout << "ECTS grade: " << ECTS << endl;
	cout << "Result: " << description << endl;
}