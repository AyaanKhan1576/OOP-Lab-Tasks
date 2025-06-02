#include<iostream>
using namespace std;

class Fraction
{
private:

int num;
int denom;

public:

Fraction()
{
	num = 0;
	denom = 1;
}

Fraction(int n, int d)
{
	if (d != 0)
	{
		num = n;
		denom = d;
	}
}

void setNum(int n)
{
	num = n;
}

void setDenom(int d)
{
	denom = d;
}

int getNum()
{
	return num;
}

int getDenom()
{
	return denom;
}

void displayFraction()
{
	cout<<"Fraction: "<<num<<"/"<<denom<<endl;
}

Fraction AddFractions(Fraction& f1)
{
	Fraction f3((num*f1.denom + denom*f1.num), (denom*f1.denom));
	return f3;
}

Fraction MultiplyFractions(Fraction& f1)
{
	Fraction f3((num*f1.num), (denom*f1.denom));
	return f3;
}

Fraction DivideFractions(Fraction& f1)
{
	Fraction f3((denom*f1.num), (num*f1.denom));
	return f3;
}
};

int main()
{
	Fraction f1(1, 2);
	Fraction f2(3, 4);
	
	cout<<"Using Parameterised Constructor\nAddition: ";
	f2.AddFractions(f1).displayFraction();
	cout<<"Multiplication: ";
	f2.MultiplyFractions(f1).displayFraction();
	cout<<"Division: ";
	f2.DivideFractions(f1).displayFraction();
	
	f1.setNum(-2);
	f1.setDenom(5);
	f2.setNum(7);
	f2.setDenom(8);
	
	cout<<"Using Setters\nAddition: ";
	f2.AddFractions(f1).displayFraction();
	cout<<"Multiplication: ";
	f2.MultiplyFractions(f1).displayFraction();
	cout<<"Division: ";
	f2.DivideFractions(f1).displayFraction();
	
return 0;
}



	
	
	
	
	
	
	
	
	
	


