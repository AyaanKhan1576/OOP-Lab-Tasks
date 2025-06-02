#include<iostream>
using namespace std;

struct Complex
{
	int real;
	int imaginary;
	
Complex	addComplex(Complex &c2)
	{
		Complex c3;
		c3.real = real + c2.real;
		c3.imaginary = imaginary + c2.imaginary;
		return c3;
	}
	 
} c1, c2, c3;

/*int main()
{
	c1 = {5,3};
	c2 = {4,2};
	cout<<c1.addComplex(c2).real<<"+"<<c1.addComplex(c2).imaginary<<"i";
	
return 0;
}
*/


struct CustomTime
{
	int hours, mins, secs;
	
	int timeToSecs()
	{
		mins += hours*60;
		secs += mins*60;
		return secs;
	}
	
	int AddTimes(CustomTime &t1, CustomTime &t2)
	{
		int time = t1.timeToSecs() + t2.timeToSecs();
		return time;
	}
} t1, t2, t3;


struct Student
{
	string Name;
	string roll_no;
	int age;
} s1;	

string *getNames(Student *std, int s)
{
	string *result = new string[s];
	int temp=0;
	
	for (int i=0; i<s; i++)
	{
		if (std[i].age == 18)
		{
			result[temp++] = std[i].Name;
		}
	}
		
return result;
}
	
Student* getEvenRollno(Student *std, int s)
{
	int count;
	Student *even = new Student[s];
	int count2=0;
	
	for (int i=0; i<s; i++)
	{
/*		count = 0;
		
		for (char j=std[i].roll_no[0]; j != '\0'; j++)
		{
			count++;
		}
*/		
		if (static_cast<int>(std[i].roll_no[7]) % 2 == 0 )
		{
			even[count2++] = std[i];
		}
	}
	
return even;
}

struct CourseRegistration
{
	string courseCode;
	string courseTitle;
	int CreditHours;
	char Section;
};

struct SemesterRegistration
{
	string semesterCode;
	CourseRegistration course_reg[5];
	
	int GetCreditHoursCount()
	{
		int sum=0;
		
		for (int i=0; i<5; i++)
		{
			sum += course_reg[i].CreditHours;
		}
		
		return sum;
	}
	
	bool FindCourseInSemesterRegistration(string courseCode)
	{
		for (int i=0; i<5; i++)
		{
			if (courseCode == course_reg[i].courseCode)
				return 1;
		}
		
		return 0;
	}
};
	
	

	
