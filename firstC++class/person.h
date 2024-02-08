#pragma once
#include<iostream>
using namespace std;
class person
{
private:
	string name;
	string gender;
	float age;
public:
	person()
	{
		name = "timp name";
		gender = "timp name";
		age = 20;
	}
	person(string n, string g, float a)
	{
		name = n;
		gender = g;
		age = a;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void set_gender(string g)
	{
		gender = g;
	}
	string get_gender()
	{
		return gender;
	}
	void set_age(float a)
	{
		age = a;
	}
	float get_age()
	{
		return age;
	}
	void display()
	{
		cout << "the person basic date " << endl;
		cout <<"name = " << name << endl;
		cout <<"gender = " << gender << endl;
		cout <<"age = " << age << endl;
	}

};

