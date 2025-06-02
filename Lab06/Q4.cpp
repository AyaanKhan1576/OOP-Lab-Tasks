#include<iostream>
#include<string.h>
using namespace std;

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
	
int main()
{
	bool flag;
	
	 SemesterRegistration sem_reg;
     sem_reg.semesterCode="Spring 2023";
     
     sem_reg.course_reg[0] = {"CL1004", "OOP", 1, 'A'};
     sem_reg.course_reg[1] = {"EL2003", "COAL", 3, 'B'};
     sem_reg.course_reg[2] = {"CL1001", "PF", 3, 'C'};
     sem_reg.course_reg[3] = {"CL2002", "CNET", 4, 'D'};
     sem_reg.course_reg[4] = {"EL2020", "DLD", 1, 'E'};
     
     cout<<sem_reg.GetCreditHoursCount()<<endl;
     
     flag = sem_reg.FindCourseInSemesterRegistration("CL1001");
     
     if (flag == 1)
     	cout<<"Registered";
     else
     	cout<<"Not Registered";
return 0;
}
     
    




	
