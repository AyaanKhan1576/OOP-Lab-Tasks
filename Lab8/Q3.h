#include<iostream>
using namespace std;

class Calculator
{
private:
int operand1;
int operand2;

public:

Calculator();
Calculator(int n);
Calculator(int n1, int n2);
void setOperand1(int op1);
void setOperand2(int op2);
int getOperand1();
int getOperand2();
int Add_two();
int* fill2DArray (Calculator *arr, int size,int* sum);
};
