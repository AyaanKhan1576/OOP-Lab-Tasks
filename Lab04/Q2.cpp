#include<iostream>
using namespace std;
int **interchangeRows(int**p, int rows, int cols, int r1, int r2);
int main()
{
	int a, b, c, d;
	cout<<"Enter number of rows\n";
	cin>>a;
	cout<<"Enter number of columns\n";
	cin>>b;
	cout<<"Enter row numbers to be exchanged\n";
	cin>>c>>d;
	c -= 1;
	d -= 1;

	int **p = 0;

	p = interchangeRows(p, a, b, c, d);

	cout<<"New Array: \n";
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<b; j++)
		{
			cout<<p[i][j]<<" ";
		}
		cout<<endl;
	}

	for (int i=0; i<a; i++)
		delete [] p[i];

	delete [] p;

return 0;
}

int **interchangeRows(int**p, int rows, int cols, int r1, int r2)
{
	int sum = 0;
	int temp[cols];
	srand(time(0));

	int **arr = new int*[rows];

	for (int i=0; i<rows; i++)
	{
		*(arr+i) = new int[cols];
	}

	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			*(*(arr+i)+j) = rand() % 100;
		}
	}

	p = arr;

	cout<<"Array generated is: \n";
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<cols; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}


	for (int i=0; i<rows; i++)
	{
		if (i==r1)
		{
			for (int j=0; j<cols; j++)
			{
				temp[j] = arr[i][j];
				arr[i][j] = arr[r2][j];
			}
		}

		else if (i==r2)
		{
			for (int j=0; j<cols; j++)
			{
				arr[i][j] = temp[j];
			}
		}
	}

return arr;
}






