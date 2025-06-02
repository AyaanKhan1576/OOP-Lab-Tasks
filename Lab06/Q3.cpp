#include<iostream>
#include<string.h>
using namespace std;



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

int main()
{
	Student *std=new Student[5];
   	string name[5]={"John","karen","Jenny","David","Smith"};
   	string roll_no[5]={"21i-1234","21i-1243","21i-1765","21i-1422","21i-1846"};
   	int age[5]={18,17,20,18,21};
   	for(int i=0; i<5; i++){
   		std[i].Name=name[i];
   		std[i].roll_no=roll_no[i];
   		std[i].age=age[i];
   		}
   		
   	string *arr2=getNames(std,5);
   	Student *std1=getEvenRollno(std,5);
   	cout<<(*std1).Name;
   	
return 0;
}
   		
   		
   		
