#include<iostream>
#include<ctime>
using namespace std;
void create2DArray(int **&p, int sizeA, int sizeB);
int *sumArray(int**arr, int rows, int cols);
int main()
{
	srand(time(0));
	
	int a, b;
	cout<<"Enter number of rows\n";
	cin>>a;
	cout<<"Enter number of columnns\n";
	cin>>b;
	

	int **p = 0;
	create2DArray(p, a, b);

	int *sum = 0;
	
	sum = sumArray(p, a, b);
	
	for (int i=0; i<4; i++)
	{
		cout<<sum[i]<<" ";
	}
	
	delete [] sum;
	
	for (int i=0; i<a; i++)
		delete [] p[i];
		
	delete [] p;
	
return 0;
}
	
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

void create2DArray(int **&p, int sizeA, int sizeB)
{
	srand(time(0));

	int **arr = new int*[sizeA];
	
	for (int i=0; i<sizeA; i++)
	{
		*(arr+i) = new int[sizeB];
	}
	
	for (int i=0; i<sizeA; i++)
	{
		for (int j=0; j<sizeB; j++)
		{
			*(*(arr+i)+j) = rand() % 100;
		}
	}	
		
	p = arr;
		
return 0;
}
		
			
