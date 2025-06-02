#include<iostream>
using namespace std;

struct CustomTime
{
	int hours, mins, secs;
	
	int timeToSecs()
	{
		mins += hours*60;
		secs += mins*60;
		return secs;
	}
	
	int AddTimes(CustomTime &t1, CustomTime &t2)
	{
		int time = t1.timeToSecs() + t2.timeToSecs();
		return time;
	}
} t1, t2, t3;

int main()
{
	t1={2,0,0};
	t2={2,40,30};
	cout<<t3.AddTimes(t1,t2);
	
return 0;
}
		
