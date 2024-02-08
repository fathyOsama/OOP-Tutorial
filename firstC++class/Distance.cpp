#include "Distance.h"
#include <iostream>
using namespace std;
Distance::Distance() :feet(0), inches(0)
{
}

Distance::Distance(int f, float i):feet(f),inches(i)
{
}

void Distance::set_Distance(int f, float i)
{
	feet = f;
	inches = i;
}

void Distance::print()
{
	cout << "feet = " << feet << " \t " << "inches = " << inches << endl;
}

Distance Distance::adda_Distance(Distance d4)
{
	Distance result;
	result.feet = feet + d4.feet;
	result.inches = inches + d4.inches;
	return result;
}

Distance::~Distance()
{
	
}
