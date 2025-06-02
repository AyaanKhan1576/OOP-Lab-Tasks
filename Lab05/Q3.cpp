#include<iostream>
using namespace std;
int GCD(int num1,int num2);
int help(int num1, int num2, int count);
int main()
{
	int x, y;
	cout<<"Enter values\n";
	cin>>x>>y;
	
	cout<<"GCD is: "<<GCD(x, y);
	
return 0;
}

int GCD(int num1,int num2)
{
	int count;
	if (num1 < num2)
		count = num1;
	else
		count = num2;
		
return help(num1, num2, count);
		
}

int help(int num1, int num2, int count)
{
	if (num2 % count == 0 && num1 % count == 0)
		return count;
	else
	{
		count--;
		help(num1, num2, count);
	}

}
		
	
	
	
	
	
	
