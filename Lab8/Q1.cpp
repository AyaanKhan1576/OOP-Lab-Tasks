#include "Q1.h"
#include<iostream>
#include<string.h>
using namespace std;


int Employee::no_employee=0;

Employee::Employee()
{
	no_employee++;
	name = "";
	empID = 0;
	EmpType = "Permanent";
	Hours_worked = 0;
}

Employee::Employee(string name1, string type, int hours)
{
	name = name1;
	empID = no_employee++;
	EmpType = type;
	Hours_worked = hours;
}

int Employee::getNumberOfEmployees()
{
	return no_employee;
}

int Employee::calculate_the_income()
{
	int rate = 150, salary;
	
	if (EmpType == "Permanent")
	{
		salary = rate * 240;
	}
	
	else
		salary = rate * Hours_worked;

return salary;
}

int main()
{
	string name1, type;
	int hours;
	
	cout<<"Enter name of employee\n";
	cin>>name1;
	cout<<"Enter Employee Type (enter 'Permanent' or 'Hourly')\n";
	cin>>type;
	cout<<"Enter hours worked\n";
	cin>>hours;
	
	Employee abc(name1, type, hours);
	cout<<"Employee Number: "<<abc.getNumberOfEmployees()<<endl;
	cout<<"Income: "<<abc.calculate_the_income()<<endl;
	

	cout<<"Enter name of employee 2\n";
	cin>>name1;
	cout<<"Enter Employee Type (enter 'Permanent' or 'Hourly')\n";
	cin>>type;
	cout<<"Enter hours worked\n";
	cin>>hours;
	
	Employee def(name1, type, hours);
	cout<<"Employee Number: "<<abc.getNumberOfEmployees()<<endl;
	cout<<"Income: "<<abc.calculate_the_income()<<endl;
	
return 0;
}
	
	
	
		




