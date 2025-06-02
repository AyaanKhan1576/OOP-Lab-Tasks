#include<iostream>
using namespace std;
int* sum_of_digits(int start, int end ,int size);
int *help(int *p, int tempx, int count);
int main()
{
	int x = 100, y = 999, size = 45;
	int *p = sum_of_digits(x,y,size);
	
	for (int i=0; i<size; i++)
		cout<<p[0]<<", ";
		
return 0;
}

int* sum_of_digits(int start, int end ,int size)
{	
	int count=0;
	int *p = new int[size];
	

	for (int j=start; j<end; j++)
	{
		int tempx = j;
		int *p2 = new int[3];
		p2 = help(p, tempx, count);

		if (p2[0] + p2[2] == p2[1])
			*(p+j) = start;
	}
	
return p;
}

int *help(int *p, int tempx, int count)
{

	if (count < 3)
	{
		p[count] = tempx % 10;
		tempx /= 10;
		help(p, tempx, count);
	}
	
	
return p;
}



