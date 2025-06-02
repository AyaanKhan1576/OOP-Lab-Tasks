#include<iostream>
using namespace std;
int ***create3D(int pages, int rows, int cols);
int main()
{
	int a=3, b=4, c=5;
	int ***p = 0;

	p = create3D(a, b, c);

	for (int i = 0; i < a; i++)
	{
    	for (int j = 0; j < b; j++)
    	{
        	for (int k = 0; k < c; k++)
        	{
        		cout<<p[i][j][k]<<" ";
    		}
      		cout<<endl;
    	}
    	cout<<endl;
  }

return 0;
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


