#include "Q3.h"
#include<iostream>
using namespace std;

Calculator::Calculator()
{
	operand1 = 0;
	operand2 = 0;
}

Calculator::Calculator(int n)
{
	operand1 = n;
	operand2 = n;
}

Calculator::Calculator(int n1, int n2)
{
	operand1 = n1;
	operand2 = n2;
}

void Calculator::setOperand1(int op1)
{
	operand1 = op1;
}
void Calculator::setOperand2(int op2)
{
	operand2 = op2;
}

int Calculator::getOperand1()
{
	return operand1;
}

int Calculator::getOperand2()
{
	return operand2;
}

int Calculator::Add_two()
{
	return operand1 + operand2;
}

int* fill2DArray (Calculator* arr, int size,int* sum)
{
	for (int i=0; i<size; i++)
	{
		sum[i] = arr[i].Add_two();
	}
	
return sum;
}

int main()
{
	int size, n1, n2;
	int *sum1;

	cout<<"Enter size of array\n";
	cin>>size;
	
	Calculator *arr = new Calculator [size];
	
	for (int i=0; i<size; i++)
	{
		cout<<"Enter Operand\n";
		cin>>n1;
		n2 = n1 / 10;
		arr[i].setOperand1(n1);
		arr[i].setOperand2(n2);
	}
	
	sum1 = fill2DArray(arr, size, sum1);
	
	for (int i=0; i<size; i++)
	{
		cout<<"Operand 1: "<<arr[i].getOperand1()<<"; Operand 2: "<<arr[i].getOperand2()<<"\nSum = "<<sum1[i]<<endl;
	}
	
return 0;
}
	 
	






