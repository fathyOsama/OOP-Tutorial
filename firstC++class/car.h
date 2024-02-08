#pragma once
#include <iostream>
using namespace std;
class car
{
private:
	string maker;
	int model;
	string color;
	static int count;

public:
	void set_maker(string m);
	string get_maker();
	void set_model(int mo);
	int get_model();
	void set_color(string c);
	string get_color();
	int get_corscount();
	car();
	car(string m,int mo,string c);
	~car();

};

