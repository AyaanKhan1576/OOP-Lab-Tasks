#include<iostream>
using namespace std;
int** MatMul(int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2);
int main()
{
	int a, b, c, d;
	cout<<"Enter number of rows for Matrix 1\n";
	cin>>a;
	cout<<"Enter number of columns for Matrix 1\n";
	cin>>b;
	cout<<"Enter number of rows for Matrix 2\n";
	cin>>c;
	cout<<"Enter number of columns for Matrix 2\n";
	cin>>d;


	int **p1 = 0;
	int **p2 = 0;

	p1 = MatMul(p1, p2, a, b, c, d);

	cout<<"\nMultiplied Result\n";
	for (int i=0; i<a; i++)
	{
		for (int j=0; j<d; j++)
		{
			cout<<p1[i][j]<<" ";
		}
		cout<<endl;
	}

	for (int i=0; i<a; i++)
		delete [] p1[i];

	delete [] p1;

	for (int i=0; i<a; i++)
		delete [] p2[i];

	delete [] p2;



return 0;
}

int** MatMul(int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2)
{
	srand(time(0));
	int sum;
	int **arr1 = new int*[rowM1];

	for (int i=0; i<rowM1; i++)
	{
		*(arr1+i) = new int[colM1];
	}

	for (int i=0; i<rowM1; i++)
	{
		for (int j=0; j<colM1; j++)
		{
			*(*(arr1+i)+j) = rand() % 100;
		}
	}

	matrix1 = arr1;

	cout<<"Array generated is: \n";
	for (int i=0; i<rowM1; i++)
	{
		for (int j=0; j<colM1; j++)
		{
			cout<<arr1[i][j]<<" ";
		}
		cout<<endl;
	}

	int **arr2 = new int*[rowM2];

	for (int i=0; i<rowM2; i++)
	{
		*(arr2+i) = new int[colM2];
	}

	for (int i=0; i<rowM2; i++)
	{
		for (int j=0; j<colM2; j++)
		{
			*(*(arr2+i)+j) = rand() % 100;
		}
	}

	matrix2 = arr2;

	cout<<"Array generated is: \n";
	for (int i=0; i<rowM2; i++)
	{
		for (int j=0; j<colM2; j++)
		{
			cout<<arr2[i][j]<<" ";
		}
		cout<<endl;
	}

	int **arr3 = new int*[rowM1];

	for (int i=0; i<rowM1; i++)
	{
		*(arr3+i) = new int[colM2];
	}

	for (int i=0; i<rowM1; i++)
	{
		for (int j=0; j<colM2; j++)
		{
			sum = 0;

			for (int k=0, l=0; k<colM1, l<rowM2; k++, l++)
			{
				sum += arr1[i][k]*arr2[l][j];
			}
			arr3[i][j] = sum;
		}
	}

return arr3;
}





