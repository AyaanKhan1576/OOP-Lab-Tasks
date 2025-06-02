#include<iostream>
#include<ctime>
using namespace std;
void create2DArray(int **&p, int sizeA, int sizeB);
int calDiagonal(int **p, int sizeA, int sizeB);
int main()
{
	int a, b;
	cout<<"Enter number of rows\n";
	cin>>a;
	cout<<"Enter number of columns\n";
	cin>>b;
	
	int **p = 0;
	
	create2DArray(p, a, b);
	
	cout<<"Sum of values on diagonal blocks is: "<<calDiagonal(p, a, b);
	
	for (int i=0; i<a; i++)
		delete [] p[i];
	
	delete [] p;
	
return 0;
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
	
	cout<<"Array generated is: \n";
	for (int i=0; i<sizeA; i++)
	{
		for (int j=0; j<sizeB; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
		
}
	
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
		
		
	

