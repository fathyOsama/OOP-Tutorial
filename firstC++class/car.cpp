
#include "car.h"
#include <iostream>

int car::count = 0;

car::car() :maker("Toyota"), model(2023), color("Red")
{
	count++;
}

car::car(string m, int mo, string c) :maker(m), model(mo), color(c)
{
	count++;
}

car::~car()
{
	count--;
}

void car::set_maker(string m)
{
	maker = m;
}

string car::get_maker()
{
	return maker;
}

void car::set_model(int m)
{
	model = m;
}

int car::get_model()
{
	return model;
}
void car::set_color(string m)
{
	color = m;
}
string car::get_color()
{
	return color;
}

int car::get_corscount()
{
	return count;
}





