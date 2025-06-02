#include<iostream>
using namespace std;

class Container
{
private:

int *values;
int capacity;
int counter;

public:

Container()
{
	values = NULL;
	capacity = 0;
	counter = 0;
}

Container(int c)
{
	capacity = c;
	counter = 0;
	values = new int[capacity];
}

bool isFull()
{
	if (counter == capacity)
		return 1;
	else
		return 0;
}

void insert(int val)
{
	if (isFull() == 1)
		return;
	
	*(values+counter) = val;
	++counter;
}

bool search(int val)
{
	for (int w=0; w<counter; w++)
	{
		if (values[w] == val)
			return true;
	}
	
return false;
}

void remove()
{
	counter--;
}

void display()
{
	for (int f=0; f<counter; f++)
		cout<<*(values+f)<<", ";
}
};

int main()
{
	int x;
	Container c1(7);
	for (int i=0; i<7; i++)
	{
		cin>>x;
		c1.insert(x);
	}
	
	c1.display();
	cout<<endl;
	c1.insert(-5);
	c1.display();
	cout<<endl;
	cout<<c1.search(-2)<<endl;
	cout<<c1.search(1)<<endl;
	c1.remove();
	c1.remove();
	c1.display();
	cout<<endl;
	cout<<c1.search(1)<<endl;
	c1.display();
		
return 0;
}	

