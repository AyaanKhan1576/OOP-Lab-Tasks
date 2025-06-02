#include<iostream>
using namespace std;

class Distance
{
private:

int feet;
int inch;

public:

Distance();
Distance(int f, int i);
Distance(Distance &copy);
void set_feet(int f);
void set_inch(int i);
int get_feet();
int get_inch();
Distance addDistance(Distance &d2);
void display();
};
