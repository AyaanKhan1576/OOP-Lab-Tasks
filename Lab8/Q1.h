#include<iostream>
#include<string.h>
using namespace std;

class Employee
{
private:

static int no_employee;

public:

string name;
int empID;
string EmpType;
int Hours_worked;

Employee();

Employee(string name1, string type, int hours);

static int getNumberOfEmployees();

int calculate_the_income();
};











