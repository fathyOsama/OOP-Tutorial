#pragma once
#include "person.h"
class student : public person
{
private:
	int level;
	float Gpa;
	string depert;
public:
	student(string n, string g, float a, int l, float gp, string d) :person(n, g, a)
	{
		level = l;
		Gpa = gp;
		depert = d;
	}
	void set_level(int l)
	{
		level = l;
	}
	int get_level()
	{
		return level;
	}
	void set_Gpa(float g)
	{
		Gpa = g;
	}
	float get_Gpa()
	{
		return Gpa;
	}
	void set_depert(string d)
	{
		depert = d;
	}
	string get_depert()
	{
		return depert;
	}
	void display() 
	{
		person::display();
		cout << "level = " << level << endl;
		cout << "Gpa = " << Gpa << endl;
		cout << "depert = " << depert << endl;
	}
};

