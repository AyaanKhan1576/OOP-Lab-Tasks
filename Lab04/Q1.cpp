#include<iostream>
using namespace std;
//int calculateSum(int**p, int rows, int col);
/*int main()
{
	int a, b;
	cout<<"Enter number of rows\n";
	cin>>a;
	cout<<"Enter number of columns\n";
	cin>>b;
	
	int **p = 0;
	cout<<"Sum of edges is: "<<calculateSum(p, a, b);
	
	for (int i=0; i<a; i++)
		delete [] p[i];
	
	delete [] p;
return 0;
}
*/
int calculateSum(int**p, int rows, int col)
{
	int sum = 0;
	/*srand(time(0));
	
	int **arr = new int*[rows];
	
	for (int i=0; i<rows; i++)
	{
		*(arr+i) = new int[col];
	}
	
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			*(*(arr+i)+j) = rand() % 100;
		}
	}
	
	p = arr;
	
	cout<<"Array generated is: \n";
	for (int i=0; i<rows; i++)
	{
		for (int j=0; j<col; j++)
		{
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
		*/
	for (int i=0; i<rows; i++)
	{
	
		for (int j=0; j<col; j++)
	{
			
		if (i==0 || i==rows-1 || j==0 || j==col-1)
		{
			
				sum += p[i][j];
			
		}
	}	
	}
	
return sum;
}		
	
	
int **interchangeRows(int**p, int rows, int cols, int r1, int r2)
{

	int temp[cols];
	/*srand(time(0));
	
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
	*/	
		
	for (int i=0; i<rows; i++)
	{
		if (i==r1-1)
		{
			for (int j=0; j<cols; j++)
			{
				temp[j] = p[i][j];
				p[i][j] = p[r2-1][j];
			}
		}
		
		else if (i==r2-1)
		{
			for (int j=0; j<cols; j++)
			{
				p[i][j] = temp[j];
			}
		}
	}
	
return p;
}
		
			
int** MatMul(int ** matrix1, int ** matrix2, int rowM1, int colM1, int rowM2, int colM2)
{
	int sum;
	/*int **arr1 = new int*[rowM1];
	
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
	*/
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
				sum += matrix1[i][k]*matrix2[l][j];
			}
			arr3[i][j] = sum;
		}
	}
	
return arr3;
}

int ***create3D(int pages, int rows, int cols)
{

	int ***arr = new int**[pages];
	
	for (int i=0; i<pages; i++)
	{
		arr[i] = new int*[rows];
		
		for (int j=0; j<rows; j++)
		{
			arr[i][j] = new int[cols];
		}
	}
	
	for (int i=0; i<pages; i++)
	{
		for (int j=0; j<rows; j++)
		{
			for (int k =0; k<cols; k++) 
			{
        		arr[i][j][k] = i + j + k;
        	}
        }
	}
	
return arr;
}

	
	
