#include<iostream>
using namespace std;

class Sale
{
private:
	
double itemCost;
double taxRate;
	
public:
	
Sale()
{
	itemCost = 0;
	taxRate = 0;
}

Sale(double cost, double rate)
{
	itemCost = cost;
	taxRate = rate;
}

void setItemCost(double cost)
{
	itemCost = cost;
}

void setTaxRate(double rate)
{
	taxRate = rate;
}

double getTax()
{
	return itemCost * taxRate;
}

double getTotal()
{
	return itemCost + getTax();
}
};

int main()
{
	double cost1, rate1;
	cout<<"Enter item cost and then tax rate\n";
	cin>>cost1>>rate1;
	Sale s1(cost1, rate1);
	cout<<"Using Parameterised Constructor\nTax: "<<s1.getTax()<<endl<<"Total: "<<s1.getTotal();
	
	Sale s2;
	s2.setTaxRate(rate1);
	s2.setItemCost(cost1);
	cout<<"\nUsing Setters\nTax: "<<s2.getTax()<<endl<<"Total: "<<s2.getTotal();
	
	
	
	
return 0;
}


		
	
	
	
	
	
	
	



