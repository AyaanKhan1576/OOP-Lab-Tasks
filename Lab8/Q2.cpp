#include "Q2.h"
#include<iostream>
using namespace std;


Distance::Distance()
{
	feet = 0;
	inch = 0;
}

Distance::Distance(int f, int i)
{
	feet = f;
	inch = i;
}	
	
Distance::Distance(Distance &copy)
{
	feet = copy.feet;
	inch = copy.inch;
}

void Distance::set_feet(int f)
{
	feet = f;
}
void Distance::set_inch(int i)
{
	inch = i;
}

int Distance::get_feet()
{
	return feet;
}

int Distance::get_inch()
{
	return inch;
}

Distance Distance::addDistance(Distance &d2)
{
	int remainder=0;
	
	d2.inch += inch;
	
	if (d2.inch >= 12)
	{
		while (d2.inch >= 12)
		{
			remainder++;
			d2.inch -= 12;
		}
	}
	
	d2.feet += feet + remainder;

return d2;
}
	
void Distance::display()
{
	cout<<"Feet: "<<feet<<"\nInches: "<<inch<<endl;
}

int main()
{
	Distance d1(15, 8), d2(10, 7);
	
	d1.addDistance(d2);
	d2.display();
	
return 0;
}
	




