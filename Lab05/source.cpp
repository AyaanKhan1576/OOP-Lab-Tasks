#include<iostream>
using namespace std;
int *help(int *p, int size, int count2,int* res);
int help2(int num1, int num2, int count);
//int** sum_of_sequence(int *p, int size);
//int *help(int *p, int size, int count2,int* res);
/*int main()
{
	int x;
	cout<<"Enter number of values\n";
	cin>>x;
	
	int *p1 = new int[x];
	cout<<"Enter values\n";
	
	for (int i=0; i<x; i++)
	{
		cin>>*(p1+i);
	}
	
	int **p2 = new int*[x-1];
	p2 = sum_of_sequence(p1, x);
	
	for (int i=0; i<x-1; i++)
	{
		for (int j=0; j<x-i-1; j++)
			cout<<p2[i][j]<<" ";
		cout<<endl;
	}
	
return 0;
}
*/
int** sum_of_sequence(int *p, int size)
{
	int count2=0;
	
	int **p1 = new int*[size-1];
	
	for(int i=0;i<size-1;i++){
		p = help(p, size-i, count2,new int[size-i]);
		*(p1+i) = p;
		
	}
return p1;
}

int *help(int *p, int size, int count2,int* res)
{
	if (count2 < size-1)
	{
		*(res+count2) = *(p+count2)+*(p+count2+1);
		count2++;
		return help(p, size, count2,res);
	}
	
	else
		return res;
}
		

int GCD(int num1,int num2)
{
	int count;
	if (num1 < num2)
		count = num1;
	else
		count = num2;
		
return help2(num1, num2, count);
		
}

int help2(int num1, int num2, int count)
{
	if (num2 % count == 0 && num1 % count == 0)
		return count;
	else
	{
		count--;
		return help2(num1, num2, count);
	}

}
		
/*int* sum_of_digits(int start, int end ,int size)
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
	
*/	
	
	
	
	
	
	
