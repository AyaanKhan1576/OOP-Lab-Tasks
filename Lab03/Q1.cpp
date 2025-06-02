#include<iostream>
using namespace std;
int Swapper(int &a, int *b, int c);
/*int main()
{
	int num1, num2, num3, num4;
	int *p = &num2;
	cout<<"Enter 1st value\n";
	cin>>num1;
	cout<<"Enter 2nd value\n";
	cin>>num2;
	
	num4 = Swapper(num1, p, num3);
	
	cout<<"Display using main\nProduct: "<<num4<<endl<<"Number 1: "<<num1<<endl<<"Number 2: "<<num2<<endl;
	
return 0;
}
*/

//Q1
int Swapper(int &a, int *b, int c)
{
	c = a;
	a = *b;
	*b = c;
	
	c = (*b) * a;
	
	cout<<"Display using function\nProduct: "<<c<<endl<<"Number 1: "<<a<<endl<<"Number 2: "<<*b<<endl;
	
return c;
}

 //Q2
int calDiagonal(int **p, int sizeA, int sizeB)
{
	int sum=0;
	
	for (int i=0; i<sizeA; i++)
	{
		for (int j=sizeB-1; j>=0; j--)
		{
			if (i+j == sizeB-1)
				sum += p[i][j];
			else
				continue;
		}
	}
	
return sum;
}		

//Q3

int *rotateArray(int *arr, int sizeofArray, int n, int m)
{
	int parts = sizeofArray / m;
	int start = 0;
	int temp=0;
	
	
	for (int j=0; j<m; j++)
	{
		for (int i=0; i<n; i++)
		{
			temp = arr[start + parts - 1];
			for (int k=start + parts - 1; k>start; k--)
				arr[k] = arr[k-1];
			arr[start] = temp;
		}
		start += parts;
	}
return arr;
}

//Q4

int *sumArray(int**arr, int rows, int cols)
{
	int *Result = new int[4];
	
	for (int i=0; i<rows; i+=2)
	{
		for (int j=0; j<cols; j+=2)
		{
			Result[0] += arr[i][j];
		}
	}
		
	for (int i=0; i<rows; i+=2)
	{
		for (int j=1; j<cols; j+=2)
		{
			Result[1] += arr[i][j];
		}
	}	

	for (int i=1; i<rows; i+=2)
	{
		for (int j=0; j<cols; j+=2)
		{
			Result[2] += arr[i][j];
		}
	}
		
	for (int i=1; i<rows; i+=2)
	{
		for (int j=1; j<cols; j+=2)
		{
			Result[3] += arr[i][j];
		}
	}
		
return Result;		
}

