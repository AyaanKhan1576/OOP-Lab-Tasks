
//Question 5 remaining. Kindly check all test cases
#include<iostream>
using namespace std;

char *calculateGrades(int *arr, int size);
int main()
{
	int input;
	cout<<"Enter size of Array\n";
	cin>>input;
	int *arr1 = new int[input];

	char* arr3 = calculateGrades(arr1, input);

	for (int i=0; i<input; i++)
	{
		cout<<*(arr3+i)<<endl;
	}

	delete[]arr1;
	delete[]arr3;

return 0;
}

char *calculateGrades(int *arr, int size)
{

	char *arr2 = new char[size];
	cout<<"Enter your marks\n";


	for (int i=0; i<size; i++)
	{
		cin>>*(arr+i);
		while (*(arr+i)<0 || *(arr+i)>100)
			{	cout<<"Range must be 0-100\n";
				cin>>*(arr+i);
			}

		if (*(arr+i)<50)
			*(arr2+i) = 70;
		else if (*(arr+i)>50 && *(arr+i)<60)
			*(arr2+i) = 68;
		else if (*(arr+i)>=60 && *(arr+i)<=75)
			*(arr2+i)=67;
		else if (*(arr+i)>75 && *(arr+i)<=90)
			*(arr2+i)=66;
		else if (*(arr+i)>90 && *(arr+i)<=100)
			*(arr2+i)=65;

	}


return arr2;

}



int *sortArray(int *arr, int size)
{
	int temp;
	for (int i=0; i<size; i++)
		{
			cin>>*(arr+i);
		}

	for (int i=0; i<size; i++)
		{
			if (*(arr+i)%2 == 1)
			{
				for (int j=1; j<size; j++)
				{
					if (*(arr+j) < *(arr+i) && *(arr+j)%2==1)
					{
						temp = *(arr+i);
						*(arr+i) = *(arr+j)
						*(arr+j) = *(arr+i)



					}
				}
			}
			if (*(arr+i)%2 == 0)
			{
				for (int j=1; j<size; j++)
					{
					if (*(arr+j) < *(arr+i) && *(arr+j)%2==0)
					{
						*(arr+i) = temp;
						*(arr+i) = *(arr+j)
						*(arr+j) = *(arr+i)



					}
				}
			}
		}
return arr;
}


int *sumArray(int **arr)
{
	int *arr1 = new int[5];

	for (int i=0; i<5; i++)
	{
		for (int j=0; j<6; j++)
		{
			*(arr1+i) += *(*(arr+i)+j);
		}
	}
return arr1;
}


int *removeDuplicates(int *arr, int size)
{

	int *arr2 = new int[size];
	int j=0;

	cout<<"Enter values\n";

	for (int i=0; i<size; i++)
		{
			cin>>*(arr+i);
		}

	for (int i=0; i<size-1; i++)
		{
			if (*(arr+i) > *(arr+i+1))
				cout<<"Enter sorted array\n";
		}

	for (int i=0; i<size-1; i++)
	{
		if (*(arr+i) != *(arr+i+1))
		{
			*(arr2+j++) = *(arr+i);

		}
	}
	*(arr2+j++) = *(arr+size-1);

	for (int i=0; i<j; i++)
		*(arr+i) = *(arr2+i);

return arr;

}


