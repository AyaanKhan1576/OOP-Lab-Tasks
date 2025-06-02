#include<iostream>
using namespace std;
void rotateArray(int *arr, int sizeofArray, int n, int m);
int main()
{
	int size, n, m;
	cout<<"Enter size of array\n";
	cin>>size;
	int arr1[size];
	cout<<"Enter values of Array\n";
	
	for (int i=0; i<size; i++)
	{
		cin>>arr1[i];
	}
		
	cout<<"Enter number M to divide array into parts\n";
	cin>>m;
	cout<<"Enter number N to shift elements to the right\n";
	cin>>n;
	
	rotateArray(arr1, size, n, m);
	
	for (int i=0; i<size; i++)
		cout<<arr1[i]<<" ";
	
return 0;
}

void rotateArray(int *arr, int sizeofArray, int n, int m)
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

}
	
	
	
	
	
	
 
