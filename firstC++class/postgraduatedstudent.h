#pragma once
#include "student.h"
class postgraduatedstudent : public student
{
private:
	string reseash_interest;
public:
	postgraduatedstudent(string n, string g, float a, int l, float gp, string d, string ra):student(n,g,a,l,gp,d)
	{
		reseash_interest = ra;
	}
	void set_reseash_interest(string rarea)
	{
		reseash_interest = rarea;
	}
	string get_reseash_interest()
	{
		return reseash_interest;
	}
	void display() 
	{
		student::display();
		cout << "reseash_interest = " << reseash_interest << endl;
	}
};


